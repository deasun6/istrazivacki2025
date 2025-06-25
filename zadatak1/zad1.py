import uproot
import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit

# Putanja do ROOT fajla (relativna do trenutnog foldera zadatak1)
root_file_path = "../TnP_emulate_L1_16_22.root"

# Otvaranje fajla i stabla
file = uproot.open(root_file_path)
tree = file["Ntuplizer"]["TagAndProbe"]

# Čitanje podataka kao numpy arrays
arrays = tree.arrays(["eleProbePt", "l1tPt"])
eleProbePt = arrays["eleProbePt"]
l1tPt = arrays["l1tPt"]

# Funkcija za Gaussovu raspodjelu
def gauss(x, A, mu, sigma):
    return A * np.exp(-(x - mu)**2 / (2 * sigma**2))

# Funkcija za izračun FWHM iz sigma
def fwhm_from_sigma(sigma):
    return 2.355 * sigma

# Bins za eleProbePt intervale
pt_bins = [5, 10, 15, 20, 25, 30, 35, 40, 50, 60, 70, 80, 90, 100]

peak_positions = []

for i in range(len(pt_bins) - 1):
    low = pt_bins[i]
    high = pt_bins[i + 1]

    mask = (eleProbePt >= low) & (eleProbePt < high)
    ratio = l1tPt[mask] / eleProbePt[mask]

    counts, bin_edges = np.histogram(ratio, bins=50, range=(0, 2))
    bin_centers = (bin_edges[:-1] + bin_edges[1:]) / 2

    counts_np = np.asarray(counts)
    bin_centers = np.asarray(bin_centers)

    try:
        p0 = [counts_np.max(), bin_centers[np.argmax(counts_np)], 0.1]
        popt, pcov = curve_fit(gauss, bin_centers, counts_np, p0=p0)
        A, mu, sigma = popt
        fwhm = fwhm_from_sigma(sigma)
        peak_positions.append(((low + high) / 2, mu))
    except RuntimeError:
        print(f"Fit nije uspio za interval {low}-{high}")
        peak_positions.append(((low + high) / 2, np.nan))
        fwhm = np.nan

    plt.figure(figsize=(7, 5))
    plt.bar(bin_centers, counts_np, width=bin_edges[1] - bin_edges[0], alpha=0.6, label="Histogram")
    x_fit = np.linspace(bin_edges[0], bin_edges[-1], 200)
    plt.plot(x_fit, gauss(x_fit, *popt), 'r-', label=f'Gaussian fit\nPeak={mu:.3f}\nFWHM={fwhm:.3f}')
    plt.title(f"Energy resolution ratio l1tPt/eleProbePt in [{low}, {high}) GeV")
    plt.xlabel("l1tPt / eleProbePt")
    plt.ylabel("Counts")
    plt.legend()
    plt.grid(True)
    plt.tight_layout()
    plt.savefig(f"hist_ratio_{low}_{high}.png")
    plt.close()

# Crtanje pozicija peakova za energy scale
pt_centers, peaks = zip(*peak_positions)

plt.figure(figsize=(8, 6))
plt.plot(pt_centers, peaks, 'bo-', label="Peak positions of fits")
plt.xlabel("eleProbePt [GeV]")
plt.ylabel("Peak of l1tPt/eleProbePt ratio")
plt.title("Energy Scale vs eleProbePt")
plt.grid(True)
plt.legend()
plt.tight_layout()
plt.savefig("energy_scale.png")
plt.close()

