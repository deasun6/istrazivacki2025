#define Analiza_cpp

#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

#include "Tree.h"

using namespace std;

class Analiza: public Tree
{
  public:

  Analiza();
  ~Analiza();

  void Loop();

  private: 
    Tfile *input_file;
   TTree *input_tree;

}

