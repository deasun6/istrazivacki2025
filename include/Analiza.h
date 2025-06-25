#define Analiza_cpp
#ifndef ANALIZA_H
#define ANALIZA_H 

#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include "Tree.h"

using namespace std;

class Analiza : public Tree
{
  public:

  Analiza();
  ~Analiza();

  void Loop();

  

  private: 
   TFile *input_file;
   TTree *input_tree;

};

#endif 