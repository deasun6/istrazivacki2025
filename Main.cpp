// C++
#include <iostream>

// ROOT

#include "TH1F.h"
#include <TCanvas.h>
#include <TFile.h>
#include <TTree.h>

#include "Analiza.h"

using namespace std;


int main() {

    TString putanja = "/home/public/istrazivacki/";
    TString root_16_20 = putanja + "TnP_emulate_L1_16_20.root";
    TString root_16_22 = putanja + "TnP_emulate_L1_16_22.root";

    Analiza *analiza = new Analiza();
    analiza->Loop(root_16_22)
    

/*
    TH1F *histProbePt = new TH1F("histProbePt", "Probe Electron Pt; p_{T} (GeV); Events", 100, 0, 100);

    // pokretanje petlje
    Long64_t nentries = tree->GetEntries();
    for (Long64_t i = 0; i < nentries; ++i) {
        tree->GetEntry(i);

        // popunjavanje histograma
        histProbePt->Fill(analiza.eleProbePt);
    }

    TCanvas *canvas = new TCanvas("canvas", "Histograms", 800, 600);
    histProbePt->Draw();

    canvas->SaveAs("hist_iz_MAIN.png");

    delete histProbePt;
    delete canvas;
    inputFile->Close();
     */

    return 0;
}

