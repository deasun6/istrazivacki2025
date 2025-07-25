import uproot
import numpy as np
import matplotlib.pyplot as plt
from scipy.optimize import curve_fit

root_file_path = "../TnP_emulate_L1_16_22.root"
file = uproot.open(root_file_path)
tree = file["Ntuplizer"]["TagAndProbe"]
available_branches = tree.keys()


# fit za energy resolution (kao i prije)

arrays = tree.arrays(["eleProbePt", "l1tPt"])
eleProbePt = arrays["eleProbePt"].to_numpy()
l1tPt = arrays["l1tPt"].to_numpy()

def gauss(x, A, mu, sigma):
    return A * np.exp(-(x - mu)**2 / (2 * sigma**2))

def fwhm_from_sigma(sigma):
    return 2.355 * sigma

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
        popt, _ = curve_fit(gauss, bin_centers, counts_np, p0=p0)
        A, mu, sigma = popt
        fwhm = fwhm_from_sigma(sigma)
        peak_positions.append(((low + high) / 2, mu))
    except RuntimeError:
        print(f"Fit nije uspio za interval {low}-{high}")
        peak_positions.append(((low + high) / 2, np.nan))
        fwhm = np.nan

    plt.figure(figsize=(7, 5))
    plt.bar(bin_centers, counts_np, width=bin_edges[1] - bin_edges[0], alpha=0.6, label="Histogram")
    if not np.isnan(fwhm):
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


# efikasnost detektor vs emulator


thresholds = [10, 20, 30, 40, 50]
all_possible_pairs = [(f"hasL1_{thr}", f"hasL1Emu_{thr}") for thr in thresholds] + \
                     [(f"hasL1_iso{thr}", f"hasL1Emu_iso{thr}") for thr in thresholds]


valid_pairs = [
    (l1, emu) for l1, emu in all_possible_pairs
    if l1 in available_branches and emu in available_branches
]

if not valid_pairs:
    print("Nijedan par varijabli (detektor/emulator) nije pronađen u ROOT fajlu.")
else:
    print(f"Pronađeno {len(valid_pairs)} parova za efikasnost.")


needed_vars = ["eleProbePt"] + [v for pair in valid_pairs for v in pair]
eff_arrays = tree.arrays(needed_vars)

eleProbePt_eff = eff_arrays["eleProbePt"].to_numpy()
eff_pt_bins = np.arange(5, 105, 5)
pt_centers_eff = (eff_pt_bins[:-1] + eff_pt_bins[1:]) / 2

for var_l1, var_emu in valid_pairs:
    eff_l1 = []
    eff_emu = []

    var_l1_array = eff_arrays[var_l1]
    var_emu_array = eff_arrays[var_emu]

    for i in range(len(eff_pt_bins) - 1):
        low = eff_pt_bins[i]
        high = eff_pt_bins[i + 1]

        mask = (eleProbePt_eff >= low) & (eleProbePt_eff < high)
        total = np.sum(mask)

        if total == 0:
            eff_l1.append(np.nan)
            eff_emu.append(np.nan)
            continue

        passed_l1 = np.sum(var_l1_array[mask].to_numpy())
        passed_emu = np.sum(var_emu_array[mask].to_numpy())

        eff_l1.append(passed_l1 / total)
        eff_emu.append(passed_emu / total)

    # plotanje
    plt.figure(figsize=(8, 6))
    plt.plot(pt_centers_eff, eff_l1, 'o-', label=f'{var_l1} (detektor)')
    plt.plot(pt_centers_eff, eff_emu, 's--', label=f'{var_emu} (emulator)')
    plt.xlabel("eleProbePt [GeV]")
    plt.ylabel("Efikasnost")
    plt.title(f"Efikasnost: {var_l1} vs {var_emu}")
    plt.ylim(0, 1.05)
    plt.grid(True)
    plt.legend()
    plt.tight_layout()
    plt.savefig(f"eff_{var_l1}_vs_{var_emu}.png")
    plt.close()



