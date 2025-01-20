//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Dec 19 17:41:08 2024 by ROOT version 6.24/08
// from TTree TagAndProbe/TagAndProbe
// found on file: ../../public/istrazivacki/TnP_emulate_L1_16_20.root
//////////////////////////////////////////////////////////

#ifndef Analiza_h
#define Analiza_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"

class Analiza {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   ULong64_t       EventNumber;
   Int_t           RunNumber;
   Int_t           lumi;
   ULong64_t       eleProbeTriggerBits;
   ULong64_t       eleTagTriggerBits;
   Float_t         eleProbePt;
   Float_t         eleProbeEta;
   Float_t         eleProbePhi;
   Float_t         eleProbeSclEt;
   Int_t           eleProbeCharge;
   Float_t         eleTagPt;
   Float_t         eleTagEta;
   Float_t         eleTagPhi;
   Int_t           eleTagCharge;
   Float_t         Mee;
   Float_t         hltPt;
   Float_t         hltEta;
   Float_t         hltPhi;
   Float_t         l1tPt;
   Float_t         l1tEta;
   Float_t         l1tPhi;
   Int_t           l1tQual;
   Int_t           l1tIso;
   Float_t         l1tEmuPt;
   Float_t         l1tEmuEta;
   Float_t         l1tEmuPhi;
   Int_t           l1tEmuQual;
   Int_t           l1tEmuIso;
   Int_t           l1tEmuNTT;
   Int_t           l1tEmuTowerIEta;
   Int_t           l1tEmuTowerIPhi;
   Int_t           l1tEmuRawEt;
   Int_t           l1tEmuIsoEt;
   Int_t           isProbeLoose;
   Int_t           isProbeTight;
   Int_t           isProbeMedium;
   Float_t         UnpackedDR;
   Float_t         EmulatedDR;
   Int_t           TowerHoE;
   Int_t           iem;
   Int_t           ihad;
   Int_t           shape;
   vector<float>   *allEl_Pt;
   vector<float>   *allEl_Eta;
   vector<float>   *allEl_Phi;
   vector<float>   *allEl_SclEt;
   vector<float>   *allEl_Charge;
   Int_t           allEl_Size;
   vector<float>   *allL1tPt;
   vector<float>   *allL1tEta;
   vector<float>   *allL1tPhi;
   vector<float>   *allL1tIso;
   vector<float>   *allL1tQual;
   Bool_t          isTagHLTmatched;
   Bool_t          isProbeHLTmatched;
   Bool_t          isOS;
   Int_t           foundTag;
   Int_t           Nvtx;
   Int_t           hasL1_0;
   Int_t           hasL1_iso_0;
   Int_t           hasL1_looseiso_0;
   Int_t           hasL1_tightiso_0;
   Int_t           hasL1_1;
   Int_t           hasL1_iso_1;
   Int_t           hasL1_looseiso_1;
   Int_t           hasL1_tightiso_1;
   Int_t           hasL1_2;
   Int_t           hasL1_iso_2;
   Int_t           hasL1_looseiso_2;
   Int_t           hasL1_tightiso_2;
   Int_t           hasL1_3;
   Int_t           hasL1_iso_3;
   Int_t           hasL1_looseiso_3;
   Int_t           hasL1_tightiso_3;
   Int_t           hasL1_4;
   Int_t           hasL1_iso_4;
   Int_t           hasL1_looseiso_4;
   Int_t           hasL1_tightiso_4;
   Int_t           hasL1_5;
   Int_t           hasL1_iso_5;
   Int_t           hasL1_looseiso_5;
   Int_t           hasL1_tightiso_5;
   Int_t           hasL1_6;
   Int_t           hasL1_iso_6;
   Int_t           hasL1_looseiso_6;
   Int_t           hasL1_tightiso_6;
   Int_t           hasL1_7;
   Int_t           hasL1_iso_7;
   Int_t           hasL1_looseiso_7;
   Int_t           hasL1_tightiso_7;
   Int_t           hasL1_8;
   Int_t           hasL1_iso_8;
   Int_t           hasL1_looseiso_8;
   Int_t           hasL1_tightiso_8;
   Int_t           hasL1_9;
   Int_t           hasL1_iso_9;
   Int_t           hasL1_looseiso_9;
   Int_t           hasL1_tightiso_9;
   Int_t           hasL1_10;
   Int_t           hasL1_iso_10;
   Int_t           hasL1_looseiso_10;
   Int_t           hasL1_tightiso_10;
   Int_t           hasL1_11;
   Int_t           hasL1_iso_11;
   Int_t           hasL1_looseiso_11;
   Int_t           hasL1_tightiso_11;
   Int_t           hasL1_12;
   Int_t           hasL1_iso_12;
   Int_t           hasL1_looseiso_12;
   Int_t           hasL1_tightiso_12;
   Int_t           hasL1_13;
   Int_t           hasL1_iso_13;
   Int_t           hasL1_looseiso_13;
   Int_t           hasL1_tightiso_13;
   Int_t           hasL1_14;
   Int_t           hasL1_iso_14;
   Int_t           hasL1_looseiso_14;
   Int_t           hasL1_tightiso_14;
   Int_t           hasL1_15;
   Int_t           hasL1_iso_15;
   Int_t           hasL1_looseiso_15;
   Int_t           hasL1_tightiso_15;
   Int_t           hasL1_16;
   Int_t           hasL1_iso_16;
   Int_t           hasL1_looseiso_16;
   Int_t           hasL1_tightiso_16;
   Int_t           hasL1_17;
   Int_t           hasL1_iso_17;
   Int_t           hasL1_looseiso_17;
   Int_t           hasL1_tightiso_17;
   Int_t           hasL1_18;
   Int_t           hasL1_iso_18;
   Int_t           hasL1_looseiso_18;
   Int_t           hasL1_tightiso_18;
   Int_t           hasL1_19;
   Int_t           hasL1_iso_19;
   Int_t           hasL1_looseiso_19;
   Int_t           hasL1_tightiso_19;
   Int_t           hasL1_20;
   Int_t           hasL1_iso_20;
   Int_t           hasL1_looseiso_20;
   Int_t           hasL1_tightiso_20;
   Int_t           hasL1_21;
   Int_t           hasL1_iso_21;
   Int_t           hasL1_looseiso_21;
   Int_t           hasL1_tightiso_21;
   Int_t           hasL1_22;
   Int_t           hasL1_iso_22;
   Int_t           hasL1_looseiso_22;
   Int_t           hasL1_tightiso_22;
   Int_t           hasL1_23;
   Int_t           hasL1_iso_23;
   Int_t           hasL1_looseiso_23;
   Int_t           hasL1_tightiso_23;
   Int_t           hasL1_24;
   Int_t           hasL1_iso_24;
   Int_t           hasL1_looseiso_24;
   Int_t           hasL1_tightiso_24;
   Int_t           hasL1_25;
   Int_t           hasL1_iso_25;
   Int_t           hasL1_looseiso_25;
   Int_t           hasL1_tightiso_25;
   Int_t           hasL1_26;
   Int_t           hasL1_iso_26;
   Int_t           hasL1_looseiso_26;
   Int_t           hasL1_tightiso_26;
   Int_t           hasL1_27;
   Int_t           hasL1_iso_27;
   Int_t           hasL1_looseiso_27;
   Int_t           hasL1_tightiso_27;
   Int_t           hasL1_28;
   Int_t           hasL1_iso_28;
   Int_t           hasL1_looseiso_28;
   Int_t           hasL1_tightiso_28;
   Int_t           hasL1_29;
   Int_t           hasL1_iso_29;
   Int_t           hasL1_looseiso_29;
   Int_t           hasL1_tightiso_29;
   Int_t           hasL1_30;
   Int_t           hasL1_iso_30;
   Int_t           hasL1_looseiso_30;
   Int_t           hasL1_tightiso_30;
   Int_t           hasL1_31;
   Int_t           hasL1_iso_31;
   Int_t           hasL1_looseiso_31;
   Int_t           hasL1_tightiso_31;
   Int_t           hasL1_32;
   Int_t           hasL1_iso_32;
   Int_t           hasL1_looseiso_32;
   Int_t           hasL1_tightiso_32;
   Int_t           hasL1_33;
   Int_t           hasL1_iso_33;
   Int_t           hasL1_looseiso_33;
   Int_t           hasL1_tightiso_33;
   Int_t           hasL1_34;
   Int_t           hasL1_iso_34;
   Int_t           hasL1_looseiso_34;
   Int_t           hasL1_tightiso_34;
   Int_t           hasL1_35;
   Int_t           hasL1_iso_35;
   Int_t           hasL1_looseiso_35;
   Int_t           hasL1_tightiso_35;
   Int_t           hasL1_36;
   Int_t           hasL1_iso_36;
   Int_t           hasL1_looseiso_36;
   Int_t           hasL1_tightiso_36;
   Int_t           hasL1_37;
   Int_t           hasL1_iso_37;
   Int_t           hasL1_looseiso_37;
   Int_t           hasL1_tightiso_37;
   Int_t           hasL1_38;
   Int_t           hasL1_iso_38;
   Int_t           hasL1_looseiso_38;
   Int_t           hasL1_tightiso_38;
   Int_t           hasL1_39;
   Int_t           hasL1_iso_39;
   Int_t           hasL1_looseiso_39;
   Int_t           hasL1_tightiso_39;
   Int_t           hasL1_40;
   Int_t           hasL1_iso_40;
   Int_t           hasL1_looseiso_40;
   Int_t           hasL1_tightiso_40;
   Int_t           hasL1_41;
   Int_t           hasL1_iso_41;
   Int_t           hasL1_looseiso_41;
   Int_t           hasL1_tightiso_41;
   Int_t           hasL1_42;
   Int_t           hasL1_iso_42;
   Int_t           hasL1_looseiso_42;
   Int_t           hasL1_tightiso_42;
   Int_t           hasL1_43;
   Int_t           hasL1_iso_43;
   Int_t           hasL1_looseiso_43;
   Int_t           hasL1_tightiso_43;
   Int_t           hasL1_44;
   Int_t           hasL1_iso_44;
   Int_t           hasL1_looseiso_44;
   Int_t           hasL1_tightiso_44;
   Int_t           hasL1_45;
   Int_t           hasL1_iso_45;
   Int_t           hasL1_looseiso_45;
   Int_t           hasL1_tightiso_45;
   Int_t           hasL1_46;
   Int_t           hasL1_iso_46;
   Int_t           hasL1_looseiso_46;
   Int_t           hasL1_tightiso_46;
   Int_t           hasL1_47;
   Int_t           hasL1_iso_47;
   Int_t           hasL1_looseiso_47;
   Int_t           hasL1_tightiso_47;
   Int_t           hasL1_48;
   Int_t           hasL1_iso_48;
   Int_t           hasL1_looseiso_48;
   Int_t           hasL1_tightiso_48;
   Int_t           hasL1_49;
   Int_t           hasL1_iso_49;
   Int_t           hasL1_looseiso_49;
   Int_t           hasL1_tightiso_49;
   Int_t           hasL1_50;
   Int_t           hasL1_iso_50;
   Int_t           hasL1_looseiso_50;
   Int_t           hasL1_tightiso_50;
   Int_t           hasL1_51;
   Int_t           hasL1_iso_51;
   Int_t           hasL1_looseiso_51;
   Int_t           hasL1_tightiso_51;
   Int_t           hasL1_52;
   Int_t           hasL1_iso_52;
   Int_t           hasL1_looseiso_52;
   Int_t           hasL1_tightiso_52;
   Int_t           hasL1_53;
   Int_t           hasL1_iso_53;
   Int_t           hasL1_looseiso_53;
   Int_t           hasL1_tightiso_53;
   Int_t           hasL1_54;
   Int_t           hasL1_iso_54;
   Int_t           hasL1_looseiso_54;
   Int_t           hasL1_tightiso_54;
   Int_t           hasL1_55;
   Int_t           hasL1_iso_55;
   Int_t           hasL1_looseiso_55;
   Int_t           hasL1_tightiso_55;
   Int_t           hasL1_56;
   Int_t           hasL1_iso_56;
   Int_t           hasL1_looseiso_56;
   Int_t           hasL1_tightiso_56;
   Int_t           hasL1_57;
   Int_t           hasL1_iso_57;
   Int_t           hasL1_looseiso_57;
   Int_t           hasL1_tightiso_57;
   Int_t           hasL1_58;
   Int_t           hasL1_iso_58;
   Int_t           hasL1_looseiso_58;
   Int_t           hasL1_tightiso_58;
   Int_t           hasL1_59;
   Int_t           hasL1_iso_59;
   Int_t           hasL1_looseiso_59;
   Int_t           hasL1_tightiso_59;
   Int_t           hasL1_60;
   Int_t           hasL1_iso_60;
   Int_t           hasL1_looseiso_60;
   Int_t           hasL1_tightiso_60;
   Int_t           hasL1_61;
   Int_t           hasL1_iso_61;
   Int_t           hasL1_looseiso_61;
   Int_t           hasL1_tightiso_61;
   Int_t           hasL1_62;
   Int_t           hasL1_iso_62;
   Int_t           hasL1_looseiso_62;
   Int_t           hasL1_tightiso_62;
   Int_t           hasL1_63;
   Int_t           hasL1_iso_63;
   Int_t           hasL1_looseiso_63;
   Int_t           hasL1_tightiso_63;
   Int_t           hasL1_64;
   Int_t           hasL1_iso_64;
   Int_t           hasL1_looseiso_64;
   Int_t           hasL1_tightiso_64;
   Int_t           hasL1_65;
   Int_t           hasL1_iso_65;
   Int_t           hasL1_looseiso_65;
   Int_t           hasL1_tightiso_65;
   Int_t           hasL1_66;
   Int_t           hasL1_iso_66;
   Int_t           hasL1_looseiso_66;
   Int_t           hasL1_tightiso_66;
   Int_t           hasL1_67;
   Int_t           hasL1_iso_67;
   Int_t           hasL1_looseiso_67;
   Int_t           hasL1_tightiso_67;
   Int_t           hasL1_68;
   Int_t           hasL1_iso_68;
   Int_t           hasL1_looseiso_68;
   Int_t           hasL1_tightiso_68;
   Int_t           hasL1_69;
   Int_t           hasL1_iso_69;
   Int_t           hasL1_looseiso_69;
   Int_t           hasL1_tightiso_69;
   Int_t           hasL1_70;
   Int_t           hasL1_iso_70;
   Int_t           hasL1_looseiso_70;
   Int_t           hasL1_tightiso_70;
   Int_t           hasL1_71;
   Int_t           hasL1_iso_71;
   Int_t           hasL1_looseiso_71;
   Int_t           hasL1_tightiso_71;
   Int_t           hasL1_72;
   Int_t           hasL1_iso_72;
   Int_t           hasL1_looseiso_72;
   Int_t           hasL1_tightiso_72;
   Int_t           hasL1_73;
   Int_t           hasL1_iso_73;
   Int_t           hasL1_looseiso_73;
   Int_t           hasL1_tightiso_73;
   Int_t           hasL1_74;
   Int_t           hasL1_iso_74;
   Int_t           hasL1_looseiso_74;
   Int_t           hasL1_tightiso_74;
   Int_t           hasL1_75;
   Int_t           hasL1_iso_75;
   Int_t           hasL1_looseiso_75;
   Int_t           hasL1_tightiso_75;
   Int_t           hasL1_76;
   Int_t           hasL1_iso_76;
   Int_t           hasL1_looseiso_76;
   Int_t           hasL1_tightiso_76;
   Int_t           hasL1_77;
   Int_t           hasL1_iso_77;
   Int_t           hasL1_looseiso_77;
   Int_t           hasL1_tightiso_77;
   Int_t           hasL1_78;
   Int_t           hasL1_iso_78;
   Int_t           hasL1_looseiso_78;
   Int_t           hasL1_tightiso_78;
   Int_t           hasL1_79;
   Int_t           hasL1_iso_79;
   Int_t           hasL1_looseiso_79;
   Int_t           hasL1_tightiso_79;
   Int_t           hasL1_80;
   Int_t           hasL1_iso_80;
   Int_t           hasL1_looseiso_80;
   Int_t           hasL1_tightiso_80;
   Int_t           hasL1_81;
   Int_t           hasL1_iso_81;
   Int_t           hasL1_looseiso_81;
   Int_t           hasL1_tightiso_81;
   Int_t           hasL1_82;
   Int_t           hasL1_iso_82;
   Int_t           hasL1_looseiso_82;
   Int_t           hasL1_tightiso_82;
   Int_t           hasL1_83;
   Int_t           hasL1_iso_83;
   Int_t           hasL1_looseiso_83;
   Int_t           hasL1_tightiso_83;
   Int_t           hasL1_84;
   Int_t           hasL1_iso_84;
   Int_t           hasL1_looseiso_84;
   Int_t           hasL1_tightiso_84;
   Int_t           hasL1_85;
   Int_t           hasL1_iso_85;
   Int_t           hasL1_looseiso_85;
   Int_t           hasL1_tightiso_85;
   Int_t           hasL1_86;
   Int_t           hasL1_iso_86;
   Int_t           hasL1_looseiso_86;
   Int_t           hasL1_tightiso_86;
   Int_t           hasL1_87;
   Int_t           hasL1_iso_87;
   Int_t           hasL1_looseiso_87;
   Int_t           hasL1_tightiso_87;
   Int_t           hasL1_88;
   Int_t           hasL1_iso_88;
   Int_t           hasL1_looseiso_88;
   Int_t           hasL1_tightiso_88;
   Int_t           hasL1_89;
   Int_t           hasL1_iso_89;
   Int_t           hasL1_looseiso_89;
   Int_t           hasL1_tightiso_89;
   Int_t           hasL1_90;
   Int_t           hasL1_iso_90;
   Int_t           hasL1_looseiso_90;
   Int_t           hasL1_tightiso_90;
   Int_t           hasL1_91;
   Int_t           hasL1_iso_91;
   Int_t           hasL1_looseiso_91;
   Int_t           hasL1_tightiso_91;
   Int_t           hasL1_92;
   Int_t           hasL1_iso_92;
   Int_t           hasL1_looseiso_92;
   Int_t           hasL1_tightiso_92;
   Int_t           hasL1_93;
   Int_t           hasL1_iso_93;
   Int_t           hasL1_looseiso_93;
   Int_t           hasL1_tightiso_93;
   Int_t           hasL1_94;
   Int_t           hasL1_iso_94;
   Int_t           hasL1_looseiso_94;
   Int_t           hasL1_tightiso_94;
   Int_t           hasL1_95;
   Int_t           hasL1_iso_95;
   Int_t           hasL1_looseiso_95;
   Int_t           hasL1_tightiso_95;
   Int_t           hasL1_96;
   Int_t           hasL1_iso_96;
   Int_t           hasL1_looseiso_96;
   Int_t           hasL1_tightiso_96;
   Int_t           hasL1_97;
   Int_t           hasL1_iso_97;
   Int_t           hasL1_looseiso_97;
   Int_t           hasL1_tightiso_97;
   Int_t           hasL1_98;
   Int_t           hasL1_iso_98;
   Int_t           hasL1_looseiso_98;
   Int_t           hasL1_tightiso_98;
   Int_t           hasL1_99;
   Int_t           hasL1_iso_99;
   Int_t           hasL1_looseiso_99;
   Int_t           hasL1_tightiso_99;
   Int_t           hasL1Emu_0;
   Int_t           hasL1Emu_iso0;
   Int_t           hasL1Emu_looseiso0;
   Int_t           hasL1Emu_tightiso0;
   Int_t           hasL1Emu_1;
   Int_t           hasL1Emu_iso1;
   Int_t           hasL1Emu_looseiso1;
   Int_t           hasL1Emu_tightiso1;
   Int_t           hasL1Emu_2;
   Int_t           hasL1Emu_iso2;
   Int_t           hasL1Emu_looseiso2;
   Int_t           hasL1Emu_tightiso2;
   Int_t           hasL1Emu_3;
   Int_t           hasL1Emu_iso3;
   Int_t           hasL1Emu_looseiso3;
   Int_t           hasL1Emu_tightiso3;
   Int_t           hasL1Emu_4;
   Int_t           hasL1Emu_iso4;
   Int_t           hasL1Emu_looseiso4;
   Int_t           hasL1Emu_tightiso4;
   Int_t           hasL1Emu_5;
   Int_t           hasL1Emu_iso5;
   Int_t           hasL1Emu_looseiso5;
   Int_t           hasL1Emu_tightiso5;
   Int_t           hasL1Emu_6;
   Int_t           hasL1Emu_iso6;
   Int_t           hasL1Emu_looseiso6;
   Int_t           hasL1Emu_tightiso6;
   Int_t           hasL1Emu_7;
   Int_t           hasL1Emu_iso7;
   Int_t           hasL1Emu_looseiso7;
   Int_t           hasL1Emu_tightiso7;
   Int_t           hasL1Emu_8;
   Int_t           hasL1Emu_iso8;
   Int_t           hasL1Emu_looseiso8;
   Int_t           hasL1Emu_tightiso8;
   Int_t           hasL1Emu_9;
   Int_t           hasL1Emu_iso9;
   Int_t           hasL1Emu_looseiso9;
   Int_t           hasL1Emu_tightiso9;
   Int_t           hasL1Emu_10;
   Int_t           hasL1Emu_iso10;
   Int_t           hasL1Emu_looseiso10;
   Int_t           hasL1Emu_tightiso10;
   Int_t           hasL1Emu_11;
   Int_t           hasL1Emu_iso11;
   Int_t           hasL1Emu_looseiso11;
   Int_t           hasL1Emu_tightiso11;
   Int_t           hasL1Emu_12;
   Int_t           hasL1Emu_iso12;
   Int_t           hasL1Emu_looseiso12;
   Int_t           hasL1Emu_tightiso12;
   Int_t           hasL1Emu_13;
   Int_t           hasL1Emu_iso13;
   Int_t           hasL1Emu_looseiso13;
   Int_t           hasL1Emu_tightiso13;
   Int_t           hasL1Emu_14;
   Int_t           hasL1Emu_iso14;
   Int_t           hasL1Emu_looseiso14;
   Int_t           hasL1Emu_tightiso14;
   Int_t           hasL1Emu_15;
   Int_t           hasL1Emu_iso15;
   Int_t           hasL1Emu_looseiso15;
   Int_t           hasL1Emu_tightiso15;
   Int_t           hasL1Emu_16;
   Int_t           hasL1Emu_iso16;
   Int_t           hasL1Emu_looseiso16;
   Int_t           hasL1Emu_tightiso16;
   Int_t           hasL1Emu_17;
   Int_t           hasL1Emu_iso17;
   Int_t           hasL1Emu_looseiso17;
   Int_t           hasL1Emu_tightiso17;
   Int_t           hasL1Emu_18;
   Int_t           hasL1Emu_iso18;
   Int_t           hasL1Emu_looseiso18;
   Int_t           hasL1Emu_tightiso18;
   Int_t           hasL1Emu_19;
   Int_t           hasL1Emu_iso19;
   Int_t           hasL1Emu_looseiso19;
   Int_t           hasL1Emu_tightiso19;
   Int_t           hasL1Emu_20;
   Int_t           hasL1Emu_iso20;
   Int_t           hasL1Emu_looseiso20;
   Int_t           hasL1Emu_tightiso20;
   Int_t           hasL1Emu_21;
   Int_t           hasL1Emu_iso21;
   Int_t           hasL1Emu_looseiso21;
   Int_t           hasL1Emu_tightiso21;
   Int_t           hasL1Emu_22;
   Int_t           hasL1Emu_iso22;
   Int_t           hasL1Emu_looseiso22;
   Int_t           hasL1Emu_tightiso22;
   Int_t           hasL1Emu_23;
   Int_t           hasL1Emu_iso23;
   Int_t           hasL1Emu_looseiso23;
   Int_t           hasL1Emu_tightiso23;
   Int_t           hasL1Emu_24;
   Int_t           hasL1Emu_iso24;
   Int_t           hasL1Emu_looseiso24;
   Int_t           hasL1Emu_tightiso24;
   Int_t           hasL1Emu_25;
   Int_t           hasL1Emu_iso25;
   Int_t           hasL1Emu_looseiso25;
   Int_t           hasL1Emu_tightiso25;
   Int_t           hasL1Emu_26;
   Int_t           hasL1Emu_iso26;
   Int_t           hasL1Emu_looseiso26;
   Int_t           hasL1Emu_tightiso26;
   Int_t           hasL1Emu_27;
   Int_t           hasL1Emu_iso27;
   Int_t           hasL1Emu_looseiso27;
   Int_t           hasL1Emu_tightiso27;
   Int_t           hasL1Emu_28;
   Int_t           hasL1Emu_iso28;
   Int_t           hasL1Emu_looseiso28;
   Int_t           hasL1Emu_tightiso28;
   Int_t           hasL1Emu_29;
   Int_t           hasL1Emu_iso29;
   Int_t           hasL1Emu_looseiso29;
   Int_t           hasL1Emu_tightiso29;
   Int_t           hasL1Emu_30;
   Int_t           hasL1Emu_iso30;
   Int_t           hasL1Emu_looseiso30;
   Int_t           hasL1Emu_tightiso30;
   Int_t           hasL1Emu_31;
   Int_t           hasL1Emu_iso31;
   Int_t           hasL1Emu_looseiso31;
   Int_t           hasL1Emu_tightiso31;
   Int_t           hasL1Emu_32;
   Int_t           hasL1Emu_iso32;
   Int_t           hasL1Emu_looseiso32;
   Int_t           hasL1Emu_tightiso32;
   Int_t           hasL1Emu_33;
   Int_t           hasL1Emu_iso33;
   Int_t           hasL1Emu_looseiso33;
   Int_t           hasL1Emu_tightiso33;
   Int_t           hasL1Emu_34;
   Int_t           hasL1Emu_iso34;
   Int_t           hasL1Emu_looseiso34;
   Int_t           hasL1Emu_tightiso34;
   Int_t           hasL1Emu_35;
   Int_t           hasL1Emu_iso35;
   Int_t           hasL1Emu_looseiso35;
   Int_t           hasL1Emu_tightiso35;
   Int_t           hasL1Emu_36;
   Int_t           hasL1Emu_iso36;
   Int_t           hasL1Emu_looseiso36;
   Int_t           hasL1Emu_tightiso36;
   Int_t           hasL1Emu_37;
   Int_t           hasL1Emu_iso37;
   Int_t           hasL1Emu_looseiso37;
   Int_t           hasL1Emu_tightiso37;
   Int_t           hasL1Emu_38;
   Int_t           hasL1Emu_iso38;
   Int_t           hasL1Emu_looseiso38;
   Int_t           hasL1Emu_tightiso38;
   Int_t           hasL1Emu_39;
   Int_t           hasL1Emu_iso39;
   Int_t           hasL1Emu_looseiso39;
   Int_t           hasL1Emu_tightiso39;
   Int_t           hasL1Emu_40;
   Int_t           hasL1Emu_iso40;
   Int_t           hasL1Emu_looseiso40;
   Int_t           hasL1Emu_tightiso40;
   Int_t           hasL1Emu_41;
   Int_t           hasL1Emu_iso41;
   Int_t           hasL1Emu_looseiso41;
   Int_t           hasL1Emu_tightiso41;
   Int_t           hasL1Emu_42;
   Int_t           hasL1Emu_iso42;
   Int_t           hasL1Emu_looseiso42;
   Int_t           hasL1Emu_tightiso42;
   Int_t           hasL1Emu_43;
   Int_t           hasL1Emu_iso43;
   Int_t           hasL1Emu_looseiso43;
   Int_t           hasL1Emu_tightiso43;
   Int_t           hasL1Emu_44;
   Int_t           hasL1Emu_iso44;
   Int_t           hasL1Emu_looseiso44;
   Int_t           hasL1Emu_tightiso44;
   Int_t           hasL1Emu_45;
   Int_t           hasL1Emu_iso45;
   Int_t           hasL1Emu_looseiso45;
   Int_t           hasL1Emu_tightiso45;
   Int_t           hasL1Emu_46;
   Int_t           hasL1Emu_iso46;
   Int_t           hasL1Emu_looseiso46;
   Int_t           hasL1Emu_tightiso46;
   Int_t           hasL1Emu_47;
   Int_t           hasL1Emu_iso47;
   Int_t           hasL1Emu_looseiso47;
   Int_t           hasL1Emu_tightiso47;
   Int_t           hasL1Emu_48;
   Int_t           hasL1Emu_iso48;
   Int_t           hasL1Emu_looseiso48;
   Int_t           hasL1Emu_tightiso48;
   Int_t           hasL1Emu_49;
   Int_t           hasL1Emu_iso49;
   Int_t           hasL1Emu_looseiso49;
   Int_t           hasL1Emu_tightiso49;
   Int_t           hasL1Emu_50;
   Int_t           hasL1Emu_iso50;
   Int_t           hasL1Emu_looseiso50;
   Int_t           hasL1Emu_tightiso50;
   Int_t           hasL1Emu_51;
   Int_t           hasL1Emu_iso51;
   Int_t           hasL1Emu_looseiso51;
   Int_t           hasL1Emu_tightiso51;
   Int_t           hasL1Emu_52;
   Int_t           hasL1Emu_iso52;
   Int_t           hasL1Emu_looseiso52;
   Int_t           hasL1Emu_tightiso52;
   Int_t           hasL1Emu_53;
   Int_t           hasL1Emu_iso53;
   Int_t           hasL1Emu_looseiso53;
   Int_t           hasL1Emu_tightiso53;
   Int_t           hasL1Emu_54;
   Int_t           hasL1Emu_iso54;
   Int_t           hasL1Emu_looseiso54;
   Int_t           hasL1Emu_tightiso54;
   Int_t           hasL1Emu_55;
   Int_t           hasL1Emu_iso55;
   Int_t           hasL1Emu_looseiso55;
   Int_t           hasL1Emu_tightiso55;
   Int_t           hasL1Emu_56;
   Int_t           hasL1Emu_iso56;
   Int_t           hasL1Emu_looseiso56;
   Int_t           hasL1Emu_tightiso56;
   Int_t           hasL1Emu_57;
   Int_t           hasL1Emu_iso57;
   Int_t           hasL1Emu_looseiso57;
   Int_t           hasL1Emu_tightiso57;
   Int_t           hasL1Emu_58;
   Int_t           hasL1Emu_iso58;
   Int_t           hasL1Emu_looseiso58;
   Int_t           hasL1Emu_tightiso58;
   Int_t           hasL1Emu_59;
   Int_t           hasL1Emu_iso59;
   Int_t           hasL1Emu_looseiso59;
   Int_t           hasL1Emu_tightiso59;
   Int_t           hasL1Emu_60;
   Int_t           hasL1Emu_iso60;
   Int_t           hasL1Emu_looseiso60;
   Int_t           hasL1Emu_tightiso60;
   Int_t           hasL1Emu_61;
   Int_t           hasL1Emu_iso61;
   Int_t           hasL1Emu_looseiso61;
   Int_t           hasL1Emu_tightiso61;
   Int_t           hasL1Emu_62;
   Int_t           hasL1Emu_iso62;
   Int_t           hasL1Emu_looseiso62;
   Int_t           hasL1Emu_tightiso62;
   Int_t           hasL1Emu_63;
   Int_t           hasL1Emu_iso63;
   Int_t           hasL1Emu_looseiso63;
   Int_t           hasL1Emu_tightiso63;
   Int_t           hasL1Emu_64;
   Int_t           hasL1Emu_iso64;
   Int_t           hasL1Emu_looseiso64;
   Int_t           hasL1Emu_tightiso64;
   Int_t           hasL1Emu_65;
   Int_t           hasL1Emu_iso65;
   Int_t           hasL1Emu_looseiso65;
   Int_t           hasL1Emu_tightiso65;
   Int_t           hasL1Emu_66;
   Int_t           hasL1Emu_iso66;
   Int_t           hasL1Emu_looseiso66;
   Int_t           hasL1Emu_tightiso66;
   Int_t           hasL1Emu_67;
   Int_t           hasL1Emu_iso67;
   Int_t           hasL1Emu_looseiso67;
   Int_t           hasL1Emu_tightiso67;
   Int_t           hasL1Emu_68;
   Int_t           hasL1Emu_iso68;
   Int_t           hasL1Emu_looseiso68;
   Int_t           hasL1Emu_tightiso68;
   Int_t           hasL1Emu_69;
   Int_t           hasL1Emu_iso69;
   Int_t           hasL1Emu_looseiso69;
   Int_t           hasL1Emu_tightiso69;
   Int_t           hasL1Emu_70;
   Int_t           hasL1Emu_iso70;
   Int_t           hasL1Emu_looseiso70;
   Int_t           hasL1Emu_tightiso70;
   Int_t           hasL1Emu_71;
   Int_t           hasL1Emu_iso71;
   Int_t           hasL1Emu_looseiso71;
   Int_t           hasL1Emu_tightiso71;
   Int_t           hasL1Emu_72;
   Int_t           hasL1Emu_iso72;
   Int_t           hasL1Emu_looseiso72;
   Int_t           hasL1Emu_tightiso72;
   Int_t           hasL1Emu_73;
   Int_t           hasL1Emu_iso73;
   Int_t           hasL1Emu_looseiso73;
   Int_t           hasL1Emu_tightiso73;
   Int_t           hasL1Emu_74;
   Int_t           hasL1Emu_iso74;
   Int_t           hasL1Emu_looseiso74;
   Int_t           hasL1Emu_tightiso74;
   Int_t           hasL1Emu_75;
   Int_t           hasL1Emu_iso75;
   Int_t           hasL1Emu_looseiso75;
   Int_t           hasL1Emu_tightiso75;
   Int_t           hasL1Emu_76;
   Int_t           hasL1Emu_iso76;
   Int_t           hasL1Emu_looseiso76;
   Int_t           hasL1Emu_tightiso76;
   Int_t           hasL1Emu_77;
   Int_t           hasL1Emu_iso77;
   Int_t           hasL1Emu_looseiso77;
   Int_t           hasL1Emu_tightiso77;
   Int_t           hasL1Emu_78;
   Int_t           hasL1Emu_iso78;
   Int_t           hasL1Emu_looseiso78;
   Int_t           hasL1Emu_tightiso78;
   Int_t           hasL1Emu_79;
   Int_t           hasL1Emu_iso79;
   Int_t           hasL1Emu_looseiso79;
   Int_t           hasL1Emu_tightiso79;
   Int_t           hasL1Emu_80;
   Int_t           hasL1Emu_iso80;
   Int_t           hasL1Emu_looseiso80;
   Int_t           hasL1Emu_tightiso80;
   Int_t           hasL1Emu_81;
   Int_t           hasL1Emu_iso81;
   Int_t           hasL1Emu_looseiso81;
   Int_t           hasL1Emu_tightiso81;
   Int_t           hasL1Emu_82;
   Int_t           hasL1Emu_iso82;
   Int_t           hasL1Emu_looseiso82;
   Int_t           hasL1Emu_tightiso82;
   Int_t           hasL1Emu_83;
   Int_t           hasL1Emu_iso83;
   Int_t           hasL1Emu_looseiso83;
   Int_t           hasL1Emu_tightiso83;
   Int_t           hasL1Emu_84;
   Int_t           hasL1Emu_iso84;
   Int_t           hasL1Emu_looseiso84;
   Int_t           hasL1Emu_tightiso84;
   Int_t           hasL1Emu_85;
   Int_t           hasL1Emu_iso85;
   Int_t           hasL1Emu_looseiso85;
   Int_t           hasL1Emu_tightiso85;
   Int_t           hasL1Emu_86;
   Int_t           hasL1Emu_iso86;
   Int_t           hasL1Emu_looseiso86;
   Int_t           hasL1Emu_tightiso86;
   Int_t           hasL1Emu_87;
   Int_t           hasL1Emu_iso87;
   Int_t           hasL1Emu_looseiso87;
   Int_t           hasL1Emu_tightiso87;
   Int_t           hasL1Emu_88;
   Int_t           hasL1Emu_iso88;
   Int_t           hasL1Emu_looseiso88;
   Int_t           hasL1Emu_tightiso88;
   Int_t           hasL1Emu_89;
   Int_t           hasL1Emu_iso89;
   Int_t           hasL1Emu_looseiso89;
   Int_t           hasL1Emu_tightiso89;
   Int_t           hasL1Emu_90;
   Int_t           hasL1Emu_iso90;
   Int_t           hasL1Emu_looseiso90;
   Int_t           hasL1Emu_tightiso90;
   Int_t           hasL1Emu_91;
   Int_t           hasL1Emu_iso91;
   Int_t           hasL1Emu_looseiso91;
   Int_t           hasL1Emu_tightiso91;
   Int_t           hasL1Emu_92;
   Int_t           hasL1Emu_iso92;
   Int_t           hasL1Emu_looseiso92;
   Int_t           hasL1Emu_tightiso92;
   Int_t           hasL1Emu_93;
   Int_t           hasL1Emu_iso93;
   Int_t           hasL1Emu_looseiso93;
   Int_t           hasL1Emu_tightiso93;
   Int_t           hasL1Emu_94;
   Int_t           hasL1Emu_iso94;
   Int_t           hasL1Emu_looseiso94;
   Int_t           hasL1Emu_tightiso94;
   Int_t           hasL1Emu_95;
   Int_t           hasL1Emu_iso95;
   Int_t           hasL1Emu_looseiso95;
   Int_t           hasL1Emu_tightiso95;
   Int_t           hasL1Emu_96;
   Int_t           hasL1Emu_iso96;
   Int_t           hasL1Emu_looseiso96;
   Int_t           hasL1Emu_tightiso96;
   Int_t           hasL1Emu_97;
   Int_t           hasL1Emu_iso97;
   Int_t           hasL1Emu_looseiso97;
   Int_t           hasL1Emu_tightiso97;
   Int_t           hasL1Emu_98;
   Int_t           hasL1Emu_iso98;
   Int_t           hasL1Emu_looseiso98;
   Int_t           hasL1Emu_tightiso98;
   Int_t           hasL1Emu_99;
   Int_t           hasL1Emu_iso99;
   Int_t           hasL1Emu_looseiso99;
   Int_t           hasL1Emu_tightiso99;

   // List of branches
   TBranch        *b_EventNumber;   //!
   TBranch        *b_RunNumber;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_eleProbeTriggerBits;   //!
   TBranch        *b_eleTagTriggerBits;   //!
   TBranch        *b_eleProbePt;   //!
   TBranch        *b_eleProbeEta;   //!
   TBranch        *b_eleProbePhi;   //!
   TBranch        *b_eleProbeSclEt;   //!
   TBranch        *b_eleProbeCharge;   //!
   TBranch        *b_eleTagPt;   //!
   TBranch        *b_eleTagEta;   //!
   TBranch        *b_eleTagPhi;   //!
   TBranch        *b_eleTagCharge;   //!
   TBranch        *b_Mee;   //!
   TBranch        *b_hltPt;   //!
   TBranch        *b_hltEta;   //!
   TBranch        *b_hltPhi;   //!
   TBranch        *b_l1tPt;   //!
   TBranch        *b_l1tEta;   //!
   TBranch        *b_l1tPhi;   //!
   TBranch        *b_l1tQual;   //!
   TBranch        *b_l1tIso;   //!
   TBranch        *b_l1tEmuPt;   //!
   TBranch        *b_l1tEmuEta;   //!
   TBranch        *b_l1tEmuPhi;   //!
   TBranch        *b_l1tEmuQual;   //!
   TBranch        *b_l1tEmuIso;   //!
   TBranch        *b_l1tEmuNTT;   //!
   TBranch        *b_l1tEmuTowerIEta;   //!
   TBranch        *b_l1tEmuTowerIPhi;   //!
   TBranch        *b_l1tEmuRawEt;   //!
   TBranch        *b_l1tEmuIsoEt;   //!
   TBranch        *b_isProbeLoose;   //!
   TBranch        *b_isProbeTight;   //!
   TBranch        *b_isProbeMedium;   //!
   TBranch        *b_UnpackedDR;   //!
   TBranch        *b_EmulatedDR;   //!
   TBranch        *b_TowerHoE;   //!
   TBranch        *b_iem;   //!
   TBranch        *b_ihad;   //!
   TBranch        *b_shape;   //!
   TBranch        *b_allEl_Pt;   //!
   TBranch        *b_allEl_Eta;   //!
   TBranch        *b_allEl_Phi;   //!
   TBranch        *b_allEl_SclEt;   //!
   TBranch        *b_allEl_Charge;   //!
   TBranch        *b_allEl_Size;   //!
   TBranch        *b_allL1tPt;   //!
   TBranch        *b_allL1tEta;   //!
   TBranch        *b_allL1tPhi;   //!
   TBranch        *b_allL1tIso;   //!
   TBranch        *b_allL1tQual;   //!
   TBranch        *b_isTagHLTmatched;   //!
   TBranch        *b_isProbeHLTmatched;   //!
   TBranch        *b_isOS;   //!
   TBranch        *b_foundTag;   //!
   TBranch        *b_Nvtx;   //!
   TBranch        *b_hasL1_0;   //!
   TBranch        *b_hasL1_iso_0;   //!
   TBranch        *b_hasL1_looseiso_0;   //!
   TBranch        *b_hasL1_tightiso_0;   //!
   TBranch        *b_hasL1_1;   //!
   TBranch        *b_hasL1_iso_1;   //!
   TBranch        *b_hasL1_looseiso_1;   //!
   TBranch        *b_hasL1_tightiso_1;   //!
   TBranch        *b_hasL1_2;   //!
   TBranch        *b_hasL1_iso_2;   //!
   TBranch        *b_hasL1_looseiso_2;   //!
   TBranch        *b_hasL1_tightiso_2;   //!
   TBranch        *b_hasL1_3;   //!
   TBranch        *b_hasL1_iso_3;   //!
   TBranch        *b_hasL1_looseiso_3;   //!
   TBranch        *b_hasL1_tightiso_3;   //!
   TBranch        *b_hasL1_4;   //!
   TBranch        *b_hasL1_iso_4;   //!
   TBranch        *b_hasL1_looseiso_4;   //!
   TBranch        *b_hasL1_tightiso_4;   //!
   TBranch        *b_hasL1_5;   //!
   TBranch        *b_hasL1_iso_5;   //!
   TBranch        *b_hasL1_looseiso_5;   //!
   TBranch        *b_hasL1_tightiso_5;   //!
   TBranch        *b_hasL1_6;   //!
   TBranch        *b_hasL1_iso_6;   //!
   TBranch        *b_hasL1_looseiso_6;   //!
   TBranch        *b_hasL1_tightiso_6;   //!
   TBranch        *b_hasL1_7;   //!
   TBranch        *b_hasL1_iso_7;   //!
   TBranch        *b_hasL1_looseiso_7;   //!
   TBranch        *b_hasL1_tightiso_7;   //!
   TBranch        *b_hasL1_8;   //!
   TBranch        *b_hasL1_iso_8;   //!
   TBranch        *b_hasL1_looseiso_8;   //!
   TBranch        *b_hasL1_tightiso_8;   //!
   TBranch        *b_hasL1_9;   //!
   TBranch        *b_hasL1_iso_9;   //!
   TBranch        *b_hasL1_looseiso_9;   //!
   TBranch        *b_hasL1_tightiso_9;   //!
   TBranch        *b_hasL1_10;   //!
   TBranch        *b_hasL1_iso_10;   //!
   TBranch        *b_hasL1_looseiso_10;   //!
   TBranch        *b_hasL1_tightiso_10;   //!
   TBranch        *b_hasL1_11;   //!
   TBranch        *b_hasL1_iso_11;   //!
   TBranch        *b_hasL1_looseiso_11;   //!
   TBranch        *b_hasL1_tightiso_11;   //!
   TBranch        *b_hasL1_12;   //!
   TBranch        *b_hasL1_iso_12;   //!
   TBranch        *b_hasL1_looseiso_12;   //!
   TBranch        *b_hasL1_tightiso_12;   //!
   TBranch        *b_hasL1_13;   //!
   TBranch        *b_hasL1_iso_13;   //!
   TBranch        *b_hasL1_looseiso_13;   //!
   TBranch        *b_hasL1_tightiso_13;   //!
   TBranch        *b_hasL1_14;   //!
   TBranch        *b_hasL1_iso_14;   //!
   TBranch        *b_hasL1_looseiso_14;   //!
   TBranch        *b_hasL1_tightiso_14;   //!
   TBranch        *b_hasL1_15;   //!
   TBranch        *b_hasL1_iso_15;   //!
   TBranch        *b_hasL1_looseiso_15;   //!
   TBranch        *b_hasL1_tightiso_15;   //!
   TBranch        *b_hasL1_16;   //!
   TBranch        *b_hasL1_iso_16;   //!
   TBranch        *b_hasL1_looseiso_16;   //!
   TBranch        *b_hasL1_tightiso_16;   //!
   TBranch        *b_hasL1_17;   //!
   TBranch        *b_hasL1_iso_17;   //!
   TBranch        *b_hasL1_looseiso_17;   //!
   TBranch        *b_hasL1_tightiso_17;   //!
   TBranch        *b_hasL1_18;   //!
   TBranch        *b_hasL1_iso_18;   //!
   TBranch        *b_hasL1_looseiso_18;   //!
   TBranch        *b_hasL1_tightiso_18;   //!
   TBranch        *b_hasL1_19;   //!
   TBranch        *b_hasL1_iso_19;   //!
   TBranch        *b_hasL1_looseiso_19;   //!
   TBranch        *b_hasL1_tightiso_19;   //!
   TBranch        *b_hasL1_20;   //!
   TBranch        *b_hasL1_iso_20;   //!
   TBranch        *b_hasL1_looseiso_20;   //!
   TBranch        *b_hasL1_tightiso_20;   //!
   TBranch        *b_hasL1_21;   //!
   TBranch        *b_hasL1_iso_21;   //!
   TBranch        *b_hasL1_looseiso_21;   //!
   TBranch        *b_hasL1_tightiso_21;   //!
   TBranch        *b_hasL1_22;   //!
   TBranch        *b_hasL1_iso_22;   //!
   TBranch        *b_hasL1_looseiso_22;   //!
   TBranch        *b_hasL1_tightiso_22;   //!
   TBranch        *b_hasL1_23;   //!
   TBranch        *b_hasL1_iso_23;   //!
   TBranch        *b_hasL1_looseiso_23;   //!
   TBranch        *b_hasL1_tightiso_23;   //!
   TBranch        *b_hasL1_24;   //!
   TBranch        *b_hasL1_iso_24;   //!
   TBranch        *b_hasL1_looseiso_24;   //!
   TBranch        *b_hasL1_tightiso_24;   //!
   TBranch        *b_hasL1_25;   //!
   TBranch        *b_hasL1_iso_25;   //!
   TBranch        *b_hasL1_looseiso_25;   //!
   TBranch        *b_hasL1_tightiso_25;   //!
   TBranch        *b_hasL1_26;   //!
   TBranch        *b_hasL1_iso_26;   //!
   TBranch        *b_hasL1_looseiso_26;   //!
   TBranch        *b_hasL1_tightiso_26;   //!
   TBranch        *b_hasL1_27;   //!
   TBranch        *b_hasL1_iso_27;   //!
   TBranch        *b_hasL1_looseiso_27;   //!
   TBranch        *b_hasL1_tightiso_27;   //!
   TBranch        *b_hasL1_28;   //!
   TBranch        *b_hasL1_iso_28;   //!
   TBranch        *b_hasL1_looseiso_28;   //!
   TBranch        *b_hasL1_tightiso_28;   //!
   TBranch        *b_hasL1_29;   //!
   TBranch        *b_hasL1_iso_29;   //!
   TBranch        *b_hasL1_looseiso_29;   //!
   TBranch        *b_hasL1_tightiso_29;   //!
   TBranch        *b_hasL1_30;   //!
   TBranch        *b_hasL1_iso_30;   //!
   TBranch        *b_hasL1_looseiso_30;   //!
   TBranch        *b_hasL1_tightiso_30;   //!
   TBranch        *b_hasL1_31;   //!
   TBranch        *b_hasL1_iso_31;   //!
   TBranch        *b_hasL1_looseiso_31;   //!
   TBranch        *b_hasL1_tightiso_31;   //!
   TBranch        *b_hasL1_32;   //!
   TBranch        *b_hasL1_iso_32;   //!
   TBranch        *b_hasL1_looseiso_32;   //!
   TBranch        *b_hasL1_tightiso_32;   //!
   TBranch        *b_hasL1_33;   //!
   TBranch        *b_hasL1_iso_33;   //!
   TBranch        *b_hasL1_looseiso_33;   //!
   TBranch        *b_hasL1_tightiso_33;   //!
   TBranch        *b_hasL1_34;   //!
   TBranch        *b_hasL1_iso_34;   //!
   TBranch        *b_hasL1_looseiso_34;   //!
   TBranch        *b_hasL1_tightiso_34;   //!
   TBranch        *b_hasL1_35;   //!
   TBranch        *b_hasL1_iso_35;   //!
   TBranch        *b_hasL1_looseiso_35;   //!
   TBranch        *b_hasL1_tightiso_35;   //!
   TBranch        *b_hasL1_36;   //!
   TBranch        *b_hasL1_iso_36;   //!
   TBranch        *b_hasL1_looseiso_36;   //!
   TBranch        *b_hasL1_tightiso_36;   //!
   TBranch        *b_hasL1_37;   //!
   TBranch        *b_hasL1_iso_37;   //!
   TBranch        *b_hasL1_looseiso_37;   //!
   TBranch        *b_hasL1_tightiso_37;   //!
   TBranch        *b_hasL1_38;   //!
   TBranch        *b_hasL1_iso_38;   //!
   TBranch        *b_hasL1_looseiso_38;   //!
   TBranch        *b_hasL1_tightiso_38;   //!
   TBranch        *b_hasL1_39;   //!
   TBranch        *b_hasL1_iso_39;   //!
   TBranch        *b_hasL1_looseiso_39;   //!
   TBranch        *b_hasL1_tightiso_39;   //!
   TBranch        *b_hasL1_40;   //!
   TBranch        *b_hasL1_iso_40;   //!
   TBranch        *b_hasL1_looseiso_40;   //!
   TBranch        *b_hasL1_tightiso_40;   //!
   TBranch        *b_hasL1_41;   //!
   TBranch        *b_hasL1_iso_41;   //!
   TBranch        *b_hasL1_looseiso_41;   //!
   TBranch        *b_hasL1_tightiso_41;   //!
   TBranch        *b_hasL1_42;   //!
   TBranch        *b_hasL1_iso_42;   //!
   TBranch        *b_hasL1_looseiso_42;   //!
   TBranch        *b_hasL1_tightiso_42;   //!
   TBranch        *b_hasL1_43;   //!
   TBranch        *b_hasL1_iso_43;   //!
   TBranch        *b_hasL1_looseiso_43;   //!
   TBranch        *b_hasL1_tightiso_43;   //!
   TBranch        *b_hasL1_44;   //!
   TBranch        *b_hasL1_iso_44;   //!
   TBranch        *b_hasL1_looseiso_44;   //!
   TBranch        *b_hasL1_tightiso_44;   //!
   TBranch        *b_hasL1_45;   //!
   TBranch        *b_hasL1_iso_45;   //!
   TBranch        *b_hasL1_looseiso_45;   //!
   TBranch        *b_hasL1_tightiso_45;   //!
   TBranch        *b_hasL1_46;   //!
   TBranch        *b_hasL1_iso_46;   //!
   TBranch        *b_hasL1_looseiso_46;   //!
   TBranch        *b_hasL1_tightiso_46;   //!
   TBranch        *b_hasL1_47;   //!
   TBranch        *b_hasL1_iso_47;   //!
   TBranch        *b_hasL1_looseiso_47;   //!
   TBranch        *b_hasL1_tightiso_47;   //!
   TBranch        *b_hasL1_48;   //!
   TBranch        *b_hasL1_iso_48;   //!
   TBranch        *b_hasL1_looseiso_48;   //!
   TBranch        *b_hasL1_tightiso_48;   //!
   TBranch        *b_hasL1_49;   //!
   TBranch        *b_hasL1_iso_49;   //!
   TBranch        *b_hasL1_looseiso_49;   //!
   TBranch        *b_hasL1_tightiso_49;   //!
   TBranch        *b_hasL1_50;   //!
   TBranch        *b_hasL1_iso_50;   //!
   TBranch        *b_hasL1_looseiso_50;   //!
   TBranch        *b_hasL1_tightiso_50;   //!
   TBranch        *b_hasL1_51;   //!
   TBranch        *b_hasL1_iso_51;   //!
   TBranch        *b_hasL1_looseiso_51;   //!
   TBranch        *b_hasL1_tightiso_51;   //!
   TBranch        *b_hasL1_52;   //!
   TBranch        *b_hasL1_iso_52;   //!
   TBranch        *b_hasL1_looseiso_52;   //!
   TBranch        *b_hasL1_tightiso_52;   //!
   TBranch        *b_hasL1_53;   //!
   TBranch        *b_hasL1_iso_53;   //!
   TBranch        *b_hasL1_looseiso_53;   //!
   TBranch        *b_hasL1_tightiso_53;   //!
   TBranch        *b_hasL1_54;   //!
   TBranch        *b_hasL1_iso_54;   //!
   TBranch        *b_hasL1_looseiso_54;   //!
   TBranch        *b_hasL1_tightiso_54;   //!
   TBranch        *b_hasL1_55;   //!
   TBranch        *b_hasL1_iso_55;   //!
   TBranch        *b_hasL1_looseiso_55;   //!
   TBranch        *b_hasL1_tightiso_55;   //!
   TBranch        *b_hasL1_56;   //!
   TBranch        *b_hasL1_iso_56;   //!
   TBranch        *b_hasL1_looseiso_56;   //!
   TBranch        *b_hasL1_tightiso_56;   //!
   TBranch        *b_hasL1_57;   //!
   TBranch        *b_hasL1_iso_57;   //!
   TBranch        *b_hasL1_looseiso_57;   //!
   TBranch        *b_hasL1_tightiso_57;   //!
   TBranch        *b_hasL1_58;   //!
   TBranch        *b_hasL1_iso_58;   //!
   TBranch        *b_hasL1_looseiso_58;   //!
   TBranch        *b_hasL1_tightiso_58;   //!
   TBranch        *b_hasL1_59;   //!
   TBranch        *b_hasL1_iso_59;   //!
   TBranch        *b_hasL1_looseiso_59;   //!
   TBranch        *b_hasL1_tightiso_59;   //!
   TBranch        *b_hasL1_60;   //!
   TBranch        *b_hasL1_iso_60;   //!
   TBranch        *b_hasL1_looseiso_60;   //!
   TBranch        *b_hasL1_tightiso_60;   //!
   TBranch        *b_hasL1_61;   //!
   TBranch        *b_hasL1_iso_61;   //!
   TBranch        *b_hasL1_looseiso_61;   //!
   TBranch        *b_hasL1_tightiso_61;   //!
   TBranch        *b_hasL1_62;   //!
   TBranch        *b_hasL1_iso_62;   //!
   TBranch        *b_hasL1_looseiso_62;   //!
   TBranch        *b_hasL1_tightiso_62;   //!
   TBranch        *b_hasL1_63;   //!
   TBranch        *b_hasL1_iso_63;   //!
   TBranch        *b_hasL1_looseiso_63;   //!
   TBranch        *b_hasL1_tightiso_63;   //!
   TBranch        *b_hasL1_64;   //!
   TBranch        *b_hasL1_iso_64;   //!
   TBranch        *b_hasL1_looseiso_64;   //!
   TBranch        *b_hasL1_tightiso_64;   //!
   TBranch        *b_hasL1_65;   //!
   TBranch        *b_hasL1_iso_65;   //!
   TBranch        *b_hasL1_looseiso_65;   //!
   TBranch        *b_hasL1_tightiso_65;   //!
   TBranch        *b_hasL1_66;   //!
   TBranch        *b_hasL1_iso_66;   //!
   TBranch        *b_hasL1_looseiso_66;   //!
   TBranch        *b_hasL1_tightiso_66;   //!
   TBranch        *b_hasL1_67;   //!
   TBranch        *b_hasL1_iso_67;   //!
   TBranch        *b_hasL1_looseiso_67;   //!
   TBranch        *b_hasL1_tightiso_67;   //!
   TBranch        *b_hasL1_68;   //!
   TBranch        *b_hasL1_iso_68;   //!
   TBranch        *b_hasL1_looseiso_68;   //!
   TBranch        *b_hasL1_tightiso_68;   //!
   TBranch        *b_hasL1_69;   //!
   TBranch        *b_hasL1_iso_69;   //!
   TBranch        *b_hasL1_looseiso_69;   //!
   TBranch        *b_hasL1_tightiso_69;   //!
   TBranch        *b_hasL1_70;   //!
   TBranch        *b_hasL1_iso_70;   //!
   TBranch        *b_hasL1_looseiso_70;   //!
   TBranch        *b_hasL1_tightiso_70;   //!
   TBranch        *b_hasL1_71;   //!
   TBranch        *b_hasL1_iso_71;   //!
   TBranch        *b_hasL1_looseiso_71;   //!
   TBranch        *b_hasL1_tightiso_71;   //!
   TBranch        *b_hasL1_72;   //!
   TBranch        *b_hasL1_iso_72;   //!
   TBranch        *b_hasL1_looseiso_72;   //!
   TBranch        *b_hasL1_tightiso_72;   //!
   TBranch        *b_hasL1_73;   //!
   TBranch        *b_hasL1_iso_73;   //!
   TBranch        *b_hasL1_looseiso_73;   //!
   TBranch        *b_hasL1_tightiso_73;   //!
   TBranch        *b_hasL1_74;   //!
   TBranch        *b_hasL1_iso_74;   //!
   TBranch        *b_hasL1_looseiso_74;   //!
   TBranch        *b_hasL1_tightiso_74;   //!
   TBranch        *b_hasL1_75;   //!
   TBranch        *b_hasL1_iso_75;   //!
   TBranch        *b_hasL1_looseiso_75;   //!
   TBranch        *b_hasL1_tightiso_75;   //!
   TBranch        *b_hasL1_76;   //!
   TBranch        *b_hasL1_iso_76;   //!
   TBranch        *b_hasL1_looseiso_76;   //!
   TBranch        *b_hasL1_tightiso_76;   //!
   TBranch        *b_hasL1_77;   //!
   TBranch        *b_hasL1_iso_77;   //!
   TBranch        *b_hasL1_looseiso_77;   //!
   TBranch        *b_hasL1_tightiso_77;   //!
   TBranch        *b_hasL1_78;   //!
   TBranch        *b_hasL1_iso_78;   //!
   TBranch        *b_hasL1_looseiso_78;   //!
   TBranch        *b_hasL1_tightiso_78;   //!
   TBranch        *b_hasL1_79;   //!
   TBranch        *b_hasL1_iso_79;   //!
   TBranch        *b_hasL1_looseiso_79;   //!
   TBranch        *b_hasL1_tightiso_79;   //!
   TBranch        *b_hasL1_80;   //!
   TBranch        *b_hasL1_iso_80;   //!
   TBranch        *b_hasL1_looseiso_80;   //!
   TBranch        *b_hasL1_tightiso_80;   //!
   TBranch        *b_hasL1_81;   //!
   TBranch        *b_hasL1_iso_81;   //!
   TBranch        *b_hasL1_looseiso_81;   //!
   TBranch        *b_hasL1_tightiso_81;   //!
   TBranch        *b_hasL1_82;   //!
   TBranch        *b_hasL1_iso_82;   //!
   TBranch        *b_hasL1_looseiso_82;   //!
   TBranch        *b_hasL1_tightiso_82;   //!
   TBranch        *b_hasL1_83;   //!
   TBranch        *b_hasL1_iso_83;   //!
   TBranch        *b_hasL1_looseiso_83;   //!
   TBranch        *b_hasL1_tightiso_83;   //!
   TBranch        *b_hasL1_84;   //!
   TBranch        *b_hasL1_iso_84;   //!
   TBranch        *b_hasL1_looseiso_84;   //!
   TBranch        *b_hasL1_tightiso_84;   //!
   TBranch        *b_hasL1_85;   //!
   TBranch        *b_hasL1_iso_85;   //!
   TBranch        *b_hasL1_looseiso_85;   //!
   TBranch        *b_hasL1_tightiso_85;   //!
   TBranch        *b_hasL1_86;   //!
   TBranch        *b_hasL1_iso_86;   //!
   TBranch        *b_hasL1_looseiso_86;   //!
   TBranch        *b_hasL1_tightiso_86;   //!
   TBranch        *b_hasL1_87;   //!
   TBranch        *b_hasL1_iso_87;   //!
   TBranch        *b_hasL1_looseiso_87;   //!
   TBranch        *b_hasL1_tightiso_87;   //!
   TBranch        *b_hasL1_88;   //!
   TBranch        *b_hasL1_iso_88;   //!
   TBranch        *b_hasL1_looseiso_88;   //!
   TBranch        *b_hasL1_tightiso_88;   //!
   TBranch        *b_hasL1_89;   //!
   TBranch        *b_hasL1_iso_89;   //!
   TBranch        *b_hasL1_looseiso_89;   //!
   TBranch        *b_hasL1_tightiso_89;   //!
   TBranch        *b_hasL1_90;   //!
   TBranch        *b_hasL1_iso_90;   //!
   TBranch        *b_hasL1_looseiso_90;   //!
   TBranch        *b_hasL1_tightiso_90;   //!
   TBranch        *b_hasL1_91;   //!
   TBranch        *b_hasL1_iso_91;   //!
   TBranch        *b_hasL1_looseiso_91;   //!
   TBranch        *b_hasL1_tightiso_91;   //!
   TBranch        *b_hasL1_92;   //!
   TBranch        *b_hasL1_iso_92;   //!
   TBranch        *b_hasL1_looseiso_92;   //!
   TBranch        *b_hasL1_tightiso_92;   //!
   TBranch        *b_hasL1_93;   //!
   TBranch        *b_hasL1_iso_93;   //!
   TBranch        *b_hasL1_looseiso_93;   //!
   TBranch        *b_hasL1_tightiso_93;   //!
   TBranch        *b_hasL1_94;   //!
   TBranch        *b_hasL1_iso_94;   //!
   TBranch        *b_hasL1_looseiso_94;   //!
   TBranch        *b_hasL1_tightiso_94;   //!
   TBranch        *b_hasL1_95;   //!
   TBranch        *b_hasL1_iso_95;   //!
   TBranch        *b_hasL1_looseiso_95;   //!
   TBranch        *b_hasL1_tightiso_95;   //!
   TBranch        *b_hasL1_96;   //!
   TBranch        *b_hasL1_iso_96;   //!
   TBranch        *b_hasL1_looseiso_96;   //!
   TBranch        *b_hasL1_tightiso_96;   //!
   TBranch        *b_hasL1_97;   //!
   TBranch        *b_hasL1_iso_97;   //!
   TBranch        *b_hasL1_looseiso_97;   //!
   TBranch        *b_hasL1_tightiso_97;   //!
   TBranch        *b_hasL1_98;   //!
   TBranch        *b_hasL1_iso_98;   //!
   TBranch        *b_hasL1_looseiso_98;   //!
   TBranch        *b_hasL1_tightiso_98;   //!
   TBranch        *b_hasL1_99;   //!
   TBranch        *b_hasL1_iso_99;   //!
   TBranch        *b_hasL1_looseiso_99;   //!
   TBranch        *b_hasL1_tightiso_99;   //!
   TBranch        *b_hasL1Emu_0;   //!
   TBranch        *b_hasL1Emu_iso0;   //!
   TBranch        *b_hasL1Emu_looseiso0;   //!
   TBranch        *b_hasL1Emu_tightiso0;   //!
   TBranch        *b_hasL1Emu_1;   //!
   TBranch        *b_hasL1Emu_iso1;   //!
   TBranch        *b_hasL1Emu_looseiso1;   //!
   TBranch        *b_hasL1Emu_tightiso1;   //!
   TBranch        *b_hasL1Emu_2;   //!
   TBranch        *b_hasL1Emu_iso2;   //!
   TBranch        *b_hasL1Emu_looseiso2;   //!
   TBranch        *b_hasL1Emu_tightiso2;   //!
   TBranch        *b_hasL1Emu_3;   //!
   TBranch        *b_hasL1Emu_iso3;   //!
   TBranch        *b_hasL1Emu_looseiso3;   //!
   TBranch        *b_hasL1Emu_tightiso3;   //!
   TBranch        *b_hasL1Emu_4;   //!
   TBranch        *b_hasL1Emu_iso4;   //!
   TBranch        *b_hasL1Emu_looseiso4;   //!
   TBranch        *b_hasL1Emu_tightiso4;   //!
   TBranch        *b_hasL1Emu_5;   //!
   TBranch        *b_hasL1Emu_iso5;   //!
   TBranch        *b_hasL1Emu_looseiso5;   //!
   TBranch        *b_hasL1Emu_tightiso5;   //!
   TBranch        *b_hasL1Emu_6;   //!
   TBranch        *b_hasL1Emu_iso6;   //!
   TBranch        *b_hasL1Emu_looseiso6;   //!
   TBranch        *b_hasL1Emu_tightiso6;   //!
   TBranch        *b_hasL1Emu_7;   //!
   TBranch        *b_hasL1Emu_iso7;   //!
   TBranch        *b_hasL1Emu_looseiso7;   //!
   TBranch        *b_hasL1Emu_tightiso7;   //!
   TBranch        *b_hasL1Emu_8;   //!
   TBranch        *b_hasL1Emu_iso8;   //!
   TBranch        *b_hasL1Emu_looseiso8;   //!
   TBranch        *b_hasL1Emu_tightiso8;   //!
   TBranch        *b_hasL1Emu_9;   //!
   TBranch        *b_hasL1Emu_iso9;   //!
   TBranch        *b_hasL1Emu_looseiso9;   //!
   TBranch        *b_hasL1Emu_tightiso9;   //!
   TBranch        *b_hasL1Emu_10;   //!
   TBranch        *b_hasL1Emu_iso10;   //!
   TBranch        *b_hasL1Emu_looseiso10;   //!
   TBranch        *b_hasL1Emu_tightiso10;   //!
   TBranch        *b_hasL1Emu_11;   //!
   TBranch        *b_hasL1Emu_iso11;   //!
   TBranch        *b_hasL1Emu_looseiso11;   //!
   TBranch        *b_hasL1Emu_tightiso11;   //!
   TBranch        *b_hasL1Emu_12;   //!
   TBranch        *b_hasL1Emu_iso12;   //!
   TBranch        *b_hasL1Emu_looseiso12;   //!
   TBranch        *b_hasL1Emu_tightiso12;   //!
   TBranch        *b_hasL1Emu_13;   //!
   TBranch        *b_hasL1Emu_iso13;   //!
   TBranch        *b_hasL1Emu_looseiso13;   //!
   TBranch        *b_hasL1Emu_tightiso13;   //!
   TBranch        *b_hasL1Emu_14;   //!
   TBranch        *b_hasL1Emu_iso14;   //!
   TBranch        *b_hasL1Emu_looseiso14;   //!
   TBranch        *b_hasL1Emu_tightiso14;   //!
   TBranch        *b_hasL1Emu_15;   //!
   TBranch        *b_hasL1Emu_iso15;   //!
   TBranch        *b_hasL1Emu_looseiso15;   //!
   TBranch        *b_hasL1Emu_tightiso15;   //!
   TBranch        *b_hasL1Emu_16;   //!
   TBranch        *b_hasL1Emu_iso16;   //!
   TBranch        *b_hasL1Emu_looseiso16;   //!
   TBranch        *b_hasL1Emu_tightiso16;   //!
   TBranch        *b_hasL1Emu_17;   //!
   TBranch        *b_hasL1Emu_iso17;   //!
   TBranch        *b_hasL1Emu_looseiso17;   //!
   TBranch        *b_hasL1Emu_tightiso17;   //!
   TBranch        *b_hasL1Emu_18;   //!
   TBranch        *b_hasL1Emu_iso18;   //!
   TBranch        *b_hasL1Emu_looseiso18;   //!
   TBranch        *b_hasL1Emu_tightiso18;   //!
   TBranch        *b_hasL1Emu_19;   //!
   TBranch        *b_hasL1Emu_iso19;   //!
   TBranch        *b_hasL1Emu_looseiso19;   //!
   TBranch        *b_hasL1Emu_tightiso19;   //!
   TBranch        *b_hasL1Emu_20;   //!
   TBranch        *b_hasL1Emu_iso20;   //!
   TBranch        *b_hasL1Emu_looseiso20;   //!
   TBranch        *b_hasL1Emu_tightiso20;   //!
   TBranch        *b_hasL1Emu_21;   //!
   TBranch        *b_hasL1Emu_iso21;   //!
   TBranch        *b_hasL1Emu_looseiso21;   //!
   TBranch        *b_hasL1Emu_tightiso21;   //!
   TBranch        *b_hasL1Emu_22;   //!
   TBranch        *b_hasL1Emu_iso22;   //!
   TBranch        *b_hasL1Emu_looseiso22;   //!
   TBranch        *b_hasL1Emu_tightiso22;   //!
   TBranch        *b_hasL1Emu_23;   //!
   TBranch        *b_hasL1Emu_iso23;   //!
   TBranch        *b_hasL1Emu_looseiso23;   //!
   TBranch        *b_hasL1Emu_tightiso23;   //!
   TBranch        *b_hasL1Emu_24;   //!
   TBranch        *b_hasL1Emu_iso24;   //!
   TBranch        *b_hasL1Emu_looseiso24;   //!
   TBranch        *b_hasL1Emu_tightiso24;   //!
   TBranch        *b_hasL1Emu_25;   //!
   TBranch        *b_hasL1Emu_iso25;   //!
   TBranch        *b_hasL1Emu_looseiso25;   //!
   TBranch        *b_hasL1Emu_tightiso25;   //!
   TBranch        *b_hasL1Emu_26;   //!
   TBranch        *b_hasL1Emu_iso26;   //!
   TBranch        *b_hasL1Emu_looseiso26;   //!
   TBranch        *b_hasL1Emu_tightiso26;   //!
   TBranch        *b_hasL1Emu_27;   //!
   TBranch        *b_hasL1Emu_iso27;   //!
   TBranch        *b_hasL1Emu_looseiso27;   //!
   TBranch        *b_hasL1Emu_tightiso27;   //!
   TBranch        *b_hasL1Emu_28;   //!
   TBranch        *b_hasL1Emu_iso28;   //!
   TBranch        *b_hasL1Emu_looseiso28;   //!
   TBranch        *b_hasL1Emu_tightiso28;   //!
   TBranch        *b_hasL1Emu_29;   //!
   TBranch        *b_hasL1Emu_iso29;   //!
   TBranch        *b_hasL1Emu_looseiso29;   //!
   TBranch        *b_hasL1Emu_tightiso29;   //!
   TBranch        *b_hasL1Emu_30;   //!
   TBranch        *b_hasL1Emu_iso30;   //!
   TBranch        *b_hasL1Emu_looseiso30;   //!
   TBranch        *b_hasL1Emu_tightiso30;   //!
   TBranch        *b_hasL1Emu_31;   //!
   TBranch        *b_hasL1Emu_iso31;   //!
   TBranch        *b_hasL1Emu_looseiso31;   //!
   TBranch        *b_hasL1Emu_tightiso31;   //!
   TBranch        *b_hasL1Emu_32;   //!
   TBranch        *b_hasL1Emu_iso32;   //!
   TBranch        *b_hasL1Emu_looseiso32;   //!
   TBranch        *b_hasL1Emu_tightiso32;   //!
   TBranch        *b_hasL1Emu_33;   //!
   TBranch        *b_hasL1Emu_iso33;   //!
   TBranch        *b_hasL1Emu_looseiso33;   //!
   TBranch        *b_hasL1Emu_tightiso33;   //!
   TBranch        *b_hasL1Emu_34;   //!
   TBranch        *b_hasL1Emu_iso34;   //!
   TBranch        *b_hasL1Emu_looseiso34;   //!
   TBranch        *b_hasL1Emu_tightiso34;   //!
   TBranch        *b_hasL1Emu_35;   //!
   TBranch        *b_hasL1Emu_iso35;   //!
   TBranch        *b_hasL1Emu_looseiso35;   //!
   TBranch        *b_hasL1Emu_tightiso35;   //!
   TBranch        *b_hasL1Emu_36;   //!
   TBranch        *b_hasL1Emu_iso36;   //!
   TBranch        *b_hasL1Emu_looseiso36;   //!
   TBranch        *b_hasL1Emu_tightiso36;   //!
   TBranch        *b_hasL1Emu_37;   //!
   TBranch        *b_hasL1Emu_iso37;   //!
   TBranch        *b_hasL1Emu_looseiso37;   //!
   TBranch        *b_hasL1Emu_tightiso37;   //!
   TBranch        *b_hasL1Emu_38;   //!
   TBranch        *b_hasL1Emu_iso38;   //!
   TBranch        *b_hasL1Emu_looseiso38;   //!
   TBranch        *b_hasL1Emu_tightiso38;   //!
   TBranch        *b_hasL1Emu_39;   //!
   TBranch        *b_hasL1Emu_iso39;   //!
   TBranch        *b_hasL1Emu_looseiso39;   //!
   TBranch        *b_hasL1Emu_tightiso39;   //!
   TBranch        *b_hasL1Emu_40;   //!
   TBranch        *b_hasL1Emu_iso40;   //!
   TBranch        *b_hasL1Emu_looseiso40;   //!
   TBranch        *b_hasL1Emu_tightiso40;   //!
   TBranch        *b_hasL1Emu_41;   //!
   TBranch        *b_hasL1Emu_iso41;   //!
   TBranch        *b_hasL1Emu_looseiso41;   //!
   TBranch        *b_hasL1Emu_tightiso41;   //!
   TBranch        *b_hasL1Emu_42;   //!
   TBranch        *b_hasL1Emu_iso42;   //!
   TBranch        *b_hasL1Emu_looseiso42;   //!
   TBranch        *b_hasL1Emu_tightiso42;   //!
   TBranch        *b_hasL1Emu_43;   //!
   TBranch        *b_hasL1Emu_iso43;   //!
   TBranch        *b_hasL1Emu_looseiso43;   //!
   TBranch        *b_hasL1Emu_tightiso43;   //!
   TBranch        *b_hasL1Emu_44;   //!
   TBranch        *b_hasL1Emu_iso44;   //!
   TBranch        *b_hasL1Emu_looseiso44;   //!
   TBranch        *b_hasL1Emu_tightiso44;   //!
   TBranch        *b_hasL1Emu_45;   //!
   TBranch        *b_hasL1Emu_iso45;   //!
   TBranch        *b_hasL1Emu_looseiso45;   //!
   TBranch        *b_hasL1Emu_tightiso45;   //!
   TBranch        *b_hasL1Emu_46;   //!
   TBranch        *b_hasL1Emu_iso46;   //!
   TBranch        *b_hasL1Emu_looseiso46;   //!
   TBranch        *b_hasL1Emu_tightiso46;   //!
   TBranch        *b_hasL1Emu_47;   //!
   TBranch        *b_hasL1Emu_iso47;   //!
   TBranch        *b_hasL1Emu_looseiso47;   //!
   TBranch        *b_hasL1Emu_tightiso47;   //!
   TBranch        *b_hasL1Emu_48;   //!
   TBranch        *b_hasL1Emu_iso48;   //!
   TBranch        *b_hasL1Emu_looseiso48;   //!
   TBranch        *b_hasL1Emu_tightiso48;   //!
   TBranch        *b_hasL1Emu_49;   //!
   TBranch        *b_hasL1Emu_iso49;   //!
   TBranch        *b_hasL1Emu_looseiso49;   //!
   TBranch        *b_hasL1Emu_tightiso49;   //!
   TBranch        *b_hasL1Emu_50;   //!
   TBranch        *b_hasL1Emu_iso50;   //!
   TBranch        *b_hasL1Emu_looseiso50;   //!
   TBranch        *b_hasL1Emu_tightiso50;   //!
   TBranch        *b_hasL1Emu_51;   //!
   TBranch        *b_hasL1Emu_iso51;   //!
   TBranch        *b_hasL1Emu_looseiso51;   //!
   TBranch        *b_hasL1Emu_tightiso51;   //!
   TBranch        *b_hasL1Emu_52;   //!
   TBranch        *b_hasL1Emu_iso52;   //!
   TBranch        *b_hasL1Emu_looseiso52;   //!
   TBranch        *b_hasL1Emu_tightiso52;   //!
   TBranch        *b_hasL1Emu_53;   //!
   TBranch        *b_hasL1Emu_iso53;   //!
   TBranch        *b_hasL1Emu_looseiso53;   //!
   TBranch        *b_hasL1Emu_tightiso53;   //!
   TBranch        *b_hasL1Emu_54;   //!
   TBranch        *b_hasL1Emu_iso54;   //!
   TBranch        *b_hasL1Emu_looseiso54;   //!
   TBranch        *b_hasL1Emu_tightiso54;   //!
   TBranch        *b_hasL1Emu_55;   //!
   TBranch        *b_hasL1Emu_iso55;   //!
   TBranch        *b_hasL1Emu_looseiso55;   //!
   TBranch        *b_hasL1Emu_tightiso55;   //!
   TBranch        *b_hasL1Emu_56;   //!
   TBranch        *b_hasL1Emu_iso56;   //!
   TBranch        *b_hasL1Emu_looseiso56;   //!
   TBranch        *b_hasL1Emu_tightiso56;   //!
   TBranch        *b_hasL1Emu_57;   //!
   TBranch        *b_hasL1Emu_iso57;   //!
   TBranch        *b_hasL1Emu_looseiso57;   //!
   TBranch        *b_hasL1Emu_tightiso57;   //!
   TBranch        *b_hasL1Emu_58;   //!
   TBranch        *b_hasL1Emu_iso58;   //!
   TBranch        *b_hasL1Emu_looseiso58;   //!
   TBranch        *b_hasL1Emu_tightiso58;   //!
   TBranch        *b_hasL1Emu_59;   //!
   TBranch        *b_hasL1Emu_iso59;   //!
   TBranch        *b_hasL1Emu_looseiso59;   //!
   TBranch        *b_hasL1Emu_tightiso59;   //!
   TBranch        *b_hasL1Emu_60;   //!
   TBranch        *b_hasL1Emu_iso60;   //!
   TBranch        *b_hasL1Emu_looseiso60;   //!
   TBranch        *b_hasL1Emu_tightiso60;   //!
   TBranch        *b_hasL1Emu_61;   //!
   TBranch        *b_hasL1Emu_iso61;   //!
   TBranch        *b_hasL1Emu_looseiso61;   //!
   TBranch        *b_hasL1Emu_tightiso61;   //!
   TBranch        *b_hasL1Emu_62;   //!
   TBranch        *b_hasL1Emu_iso62;   //!
   TBranch        *b_hasL1Emu_looseiso62;   //!
   TBranch        *b_hasL1Emu_tightiso62;   //!
   TBranch        *b_hasL1Emu_63;   //!
   TBranch        *b_hasL1Emu_iso63;   //!
   TBranch        *b_hasL1Emu_looseiso63;   //!
   TBranch        *b_hasL1Emu_tightiso63;   //!
   TBranch        *b_hasL1Emu_64;   //!
   TBranch        *b_hasL1Emu_iso64;   //!
   TBranch        *b_hasL1Emu_looseiso64;   //!
   TBranch        *b_hasL1Emu_tightiso64;   //!
   TBranch        *b_hasL1Emu_65;   //!
   TBranch        *b_hasL1Emu_iso65;   //!
   TBranch        *b_hasL1Emu_looseiso65;   //!
   TBranch        *b_hasL1Emu_tightiso65;   //!
   TBranch        *b_hasL1Emu_66;   //!
   TBranch        *b_hasL1Emu_iso66;   //!
   TBranch        *b_hasL1Emu_looseiso66;   //!
   TBranch        *b_hasL1Emu_tightiso66;   //!
   TBranch        *b_hasL1Emu_67;   //!
   TBranch        *b_hasL1Emu_iso67;   //!
   TBranch        *b_hasL1Emu_looseiso67;   //!
   TBranch        *b_hasL1Emu_tightiso67;   //!
   TBranch        *b_hasL1Emu_68;   //!
   TBranch        *b_hasL1Emu_iso68;   //!
   TBranch        *b_hasL1Emu_looseiso68;   //!
   TBranch        *b_hasL1Emu_tightiso68;   //!
   TBranch        *b_hasL1Emu_69;   //!
   TBranch        *b_hasL1Emu_iso69;   //!
   TBranch        *b_hasL1Emu_looseiso69;   //!
   TBranch        *b_hasL1Emu_tightiso69;   //!
   TBranch        *b_hasL1Emu_70;   //!
   TBranch        *b_hasL1Emu_iso70;   //!
   TBranch        *b_hasL1Emu_looseiso70;   //!
   TBranch        *b_hasL1Emu_tightiso70;   //!
   TBranch        *b_hasL1Emu_71;   //!
   TBranch        *b_hasL1Emu_iso71;   //!
   TBranch        *b_hasL1Emu_looseiso71;   //!
   TBranch        *b_hasL1Emu_tightiso71;   //!
   TBranch        *b_hasL1Emu_72;   //!
   TBranch        *b_hasL1Emu_iso72;   //!
   TBranch        *b_hasL1Emu_looseiso72;   //!
   TBranch        *b_hasL1Emu_tightiso72;   //!
   TBranch        *b_hasL1Emu_73;   //!
   TBranch        *b_hasL1Emu_iso73;   //!
   TBranch        *b_hasL1Emu_looseiso73;   //!
   TBranch        *b_hasL1Emu_tightiso73;   //!
   TBranch        *b_hasL1Emu_74;   //!
   TBranch        *b_hasL1Emu_iso74;   //!
   TBranch        *b_hasL1Emu_looseiso74;   //!
   TBranch        *b_hasL1Emu_tightiso74;   //!
   TBranch        *b_hasL1Emu_75;   //!
   TBranch        *b_hasL1Emu_iso75;   //!
   TBranch        *b_hasL1Emu_looseiso75;   //!
   TBranch        *b_hasL1Emu_tightiso75;   //!
   TBranch        *b_hasL1Emu_76;   //!
   TBranch        *b_hasL1Emu_iso76;   //!
   TBranch        *b_hasL1Emu_looseiso76;   //!
   TBranch        *b_hasL1Emu_tightiso76;   //!
   TBranch        *b_hasL1Emu_77;   //!
   TBranch        *b_hasL1Emu_iso77;   //!
   TBranch        *b_hasL1Emu_looseiso77;   //!
   TBranch        *b_hasL1Emu_tightiso77;   //!
   TBranch        *b_hasL1Emu_78;   //!
   TBranch        *b_hasL1Emu_iso78;   //!
   TBranch        *b_hasL1Emu_looseiso78;   //!
   TBranch        *b_hasL1Emu_tightiso78;   //!
   TBranch        *b_hasL1Emu_79;   //!
   TBranch        *b_hasL1Emu_iso79;   //!
   TBranch        *b_hasL1Emu_looseiso79;   //!
   TBranch        *b_hasL1Emu_tightiso79;   //!
   TBranch        *b_hasL1Emu_80;   //!
   TBranch        *b_hasL1Emu_iso80;   //!
   TBranch        *b_hasL1Emu_looseiso80;   //!
   TBranch        *b_hasL1Emu_tightiso80;   //!
   TBranch        *b_hasL1Emu_81;   //!
   TBranch        *b_hasL1Emu_iso81;   //!
   TBranch        *b_hasL1Emu_looseiso81;   //!
   TBranch        *b_hasL1Emu_tightiso81;   //!
   TBranch        *b_hasL1Emu_82;   //!
   TBranch        *b_hasL1Emu_iso82;   //!
   TBranch        *b_hasL1Emu_looseiso82;   //!
   TBranch        *b_hasL1Emu_tightiso82;   //!
   TBranch        *b_hasL1Emu_83;   //!
   TBranch        *b_hasL1Emu_iso83;   //!
   TBranch        *b_hasL1Emu_looseiso83;   //!
   TBranch        *b_hasL1Emu_tightiso83;   //!
   TBranch        *b_hasL1Emu_84;   //!
   TBranch        *b_hasL1Emu_iso84;   //!
   TBranch        *b_hasL1Emu_looseiso84;   //!
   TBranch        *b_hasL1Emu_tightiso84;   //!
   TBranch        *b_hasL1Emu_85;   //!
   TBranch        *b_hasL1Emu_iso85;   //!
   TBranch        *b_hasL1Emu_looseiso85;   //!
   TBranch        *b_hasL1Emu_tightiso85;   //!
   TBranch        *b_hasL1Emu_86;   //!
   TBranch        *b_hasL1Emu_iso86;   //!
   TBranch        *b_hasL1Emu_looseiso86;   //!
   TBranch        *b_hasL1Emu_tightiso86;   //!
   TBranch        *b_hasL1Emu_87;   //!
   TBranch        *b_hasL1Emu_iso87;   //!
   TBranch        *b_hasL1Emu_looseiso87;   //!
   TBranch        *b_hasL1Emu_tightiso87;   //!
   TBranch        *b_hasL1Emu_88;   //!
   TBranch        *b_hasL1Emu_iso88;   //!
   TBranch        *b_hasL1Emu_looseiso88;   //!
   TBranch        *b_hasL1Emu_tightiso88;   //!
   TBranch        *b_hasL1Emu_89;   //!
   TBranch        *b_hasL1Emu_iso89;   //!
   TBranch        *b_hasL1Emu_looseiso89;   //!
   TBranch        *b_hasL1Emu_tightiso89;   //!
   TBranch        *b_hasL1Emu_90;   //!
   TBranch        *b_hasL1Emu_iso90;   //!
   TBranch        *b_hasL1Emu_looseiso90;   //!
   TBranch        *b_hasL1Emu_tightiso90;   //!
   TBranch        *b_hasL1Emu_91;   //!
   TBranch        *b_hasL1Emu_iso91;   //!
   TBranch        *b_hasL1Emu_looseiso91;   //!
   TBranch        *b_hasL1Emu_tightiso91;   //!
   TBranch        *b_hasL1Emu_92;   //!
   TBranch        *b_hasL1Emu_iso92;   //!
   TBranch        *b_hasL1Emu_looseiso92;   //!
   TBranch        *b_hasL1Emu_tightiso92;   //!
   TBranch        *b_hasL1Emu_93;   //!
   TBranch        *b_hasL1Emu_iso93;   //!
   TBranch        *b_hasL1Emu_looseiso93;   //!
   TBranch        *b_hasL1Emu_tightiso93;   //!
   TBranch        *b_hasL1Emu_94;   //!
   TBranch        *b_hasL1Emu_iso94;   //!
   TBranch        *b_hasL1Emu_looseiso94;   //!
   TBranch        *b_hasL1Emu_tightiso94;   //!
   TBranch        *b_hasL1Emu_95;   //!
   TBranch        *b_hasL1Emu_iso95;   //!
   TBranch        *b_hasL1Emu_looseiso95;   //!
   TBranch        *b_hasL1Emu_tightiso95;   //!
   TBranch        *b_hasL1Emu_96;   //!
   TBranch        *b_hasL1Emu_iso96;   //!
   TBranch        *b_hasL1Emu_looseiso96;   //!
   TBranch        *b_hasL1Emu_tightiso96;   //!
   TBranch        *b_hasL1Emu_97;   //!
   TBranch        *b_hasL1Emu_iso97;   //!
   TBranch        *b_hasL1Emu_looseiso97;   //!
   TBranch        *b_hasL1Emu_tightiso97;   //!
   TBranch        *b_hasL1Emu_98;   //!
   TBranch        *b_hasL1Emu_iso98;   //!
   TBranch        *b_hasL1Emu_looseiso98;   //!
   TBranch        *b_hasL1Emu_tightiso98;   //!
   TBranch        *b_hasL1Emu_99;   //!
   TBranch        *b_hasL1Emu_iso99;   //!
   TBranch        *b_hasL1Emu_looseiso99;   //!
   TBranch        *b_hasL1Emu_tightiso99;   //!

   Analiza(TTree *tree=0);
   virtual ~Analiza();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Analiza_cpp
Analiza::Analiza(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("../../public/istrazivacki/TnP_emulate_L1_16_20.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("../../public/istrazivacki/TnP_emulate_L1_16_20.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("../../public/istrazivacki/TnP_emulate_L1_16_20.root:/Ntuplizer");
      dir->GetObject("TagAndProbe",tree);

   }
   Init(tree);
}

Analiza::~Analiza()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Analiza::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Analiza::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Analiza::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   allEl_Pt = 0;
   allEl_Eta = 0;
   allEl_Phi = 0;
   allEl_SclEt = 0;
   allEl_Charge = 0;
   allL1tPt = 0;
   allL1tEta = 0;
   allL1tPhi = 0;
   allL1tIso = 0;
   allL1tQual = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EventNumber", &EventNumber, &b_EventNumber);
   fChain->SetBranchAddress("RunNumber", &RunNumber, &b_RunNumber);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("eleProbeTriggerBits", &eleProbeTriggerBits, &b_eleProbeTriggerBits);
   fChain->SetBranchAddress("eleTagTriggerBits", &eleTagTriggerBits, &b_eleTagTriggerBits);
   fChain->SetBranchAddress("eleProbePt", &eleProbePt, &b_eleProbePt);
   fChain->SetBranchAddress("eleProbeEta", &eleProbeEta, &b_eleProbeEta);
   fChain->SetBranchAddress("eleProbePhi", &eleProbePhi, &b_eleProbePhi);
   fChain->SetBranchAddress("eleProbeSclEt", &eleProbeSclEt, &b_eleProbeSclEt);
   fChain->SetBranchAddress("eleProbeCharge", &eleProbeCharge, &b_eleProbeCharge);
   fChain->SetBranchAddress("eleTagPt", &eleTagPt, &b_eleTagPt);
   fChain->SetBranchAddress("eleTagEta", &eleTagEta, &b_eleTagEta);
   fChain->SetBranchAddress("eleTagPhi", &eleTagPhi, &b_eleTagPhi);
   fChain->SetBranchAddress("eleTagCharge", &eleTagCharge, &b_eleTagCharge);
   fChain->SetBranchAddress("Mee", &Mee, &b_Mee);
   fChain->SetBranchAddress("hltPt", &hltPt, &b_hltPt);
   fChain->SetBranchAddress("hltEta", &hltEta, &b_hltEta);
   fChain->SetBranchAddress("hltPhi", &hltPhi, &b_hltPhi);
   fChain->SetBranchAddress("l1tPt", &l1tPt, &b_l1tPt);
   fChain->SetBranchAddress("l1tEta", &l1tEta, &b_l1tEta);
   fChain->SetBranchAddress("l1tPhi", &l1tPhi, &b_l1tPhi);
   fChain->SetBranchAddress("l1tQual", &l1tQual, &b_l1tQual);
   fChain->SetBranchAddress("l1tIso", &l1tIso, &b_l1tIso);
   fChain->SetBranchAddress("l1tEmuPt", &l1tEmuPt, &b_l1tEmuPt);
   fChain->SetBranchAddress("l1tEmuEta", &l1tEmuEta, &b_l1tEmuEta);
   fChain->SetBranchAddress("l1tEmuPhi", &l1tEmuPhi, &b_l1tEmuPhi);
   fChain->SetBranchAddress("l1tEmuQual", &l1tEmuQual, &b_l1tEmuQual);
   fChain->SetBranchAddress("l1tEmuIso", &l1tEmuIso, &b_l1tEmuIso);
   fChain->SetBranchAddress("l1tEmuNTT", &l1tEmuNTT, &b_l1tEmuNTT);
   fChain->SetBranchAddress("l1tEmuTowerIEta", &l1tEmuTowerIEta, &b_l1tEmuTowerIEta);
   fChain->SetBranchAddress("l1tEmuTowerIPhi", &l1tEmuTowerIPhi, &b_l1tEmuTowerIPhi);
   fChain->SetBranchAddress("l1tEmuRawEt", &l1tEmuRawEt, &b_l1tEmuRawEt);
   fChain->SetBranchAddress("l1tEmuIsoEt", &l1tEmuIsoEt, &b_l1tEmuIsoEt);
   fChain->SetBranchAddress("isProbeLoose", &isProbeLoose, &b_isProbeLoose);
   fChain->SetBranchAddress("isProbeTight", &isProbeTight, &b_isProbeTight);
   fChain->SetBranchAddress("isProbeMedium", &isProbeMedium, &b_isProbeMedium);
   fChain->SetBranchAddress("UnpackedDR", &UnpackedDR, &b_UnpackedDR);
   fChain->SetBranchAddress("EmulatedDR", &EmulatedDR, &b_EmulatedDR);
   fChain->SetBranchAddress("TowerHoE", &TowerHoE, &b_TowerHoE);
   fChain->SetBranchAddress("iem", &iem, &b_iem);
   fChain->SetBranchAddress("ihad", &ihad, &b_ihad);
   fChain->SetBranchAddress("shape", &shape, &b_shape);
   fChain->SetBranchAddress("allEl_Pt", &allEl_Pt, &b_allEl_Pt);
   fChain->SetBranchAddress("allEl_Eta", &allEl_Eta, &b_allEl_Eta);
   fChain->SetBranchAddress("allEl_Phi", &allEl_Phi, &b_allEl_Phi);
   fChain->SetBranchAddress("allEl_SclEt", &allEl_SclEt, &b_allEl_SclEt);
   fChain->SetBranchAddress("allEl_Charge", &allEl_Charge, &b_allEl_Charge);
   fChain->SetBranchAddress("allEl_Size", &allEl_Size, &b_allEl_Size);
   fChain->SetBranchAddress("allL1tPt", &allL1tPt, &b_allL1tPt);
   fChain->SetBranchAddress("allL1tEta", &allL1tEta, &b_allL1tEta);
   fChain->SetBranchAddress("allL1tPhi", &allL1tPhi, &b_allL1tPhi);
   fChain->SetBranchAddress("allL1tIso", &allL1tIso, &b_allL1tIso);
   fChain->SetBranchAddress("allL1tQual", &allL1tQual, &b_allL1tQual);
   fChain->SetBranchAddress("isTagHLTmatched", &isTagHLTmatched, &b_isTagHLTmatched);
   fChain->SetBranchAddress("isProbeHLTmatched", &isProbeHLTmatched, &b_isProbeHLTmatched);
   fChain->SetBranchAddress("isOS", &isOS, &b_isOS);
   fChain->SetBranchAddress("foundTag", &foundTag, &b_foundTag);
   fChain->SetBranchAddress("Nvtx", &Nvtx, &b_Nvtx);
   fChain->SetBranchAddress("hasL1_0", &hasL1_0, &b_hasL1_0);
   fChain->SetBranchAddress("hasL1_iso_0", &hasL1_iso_0, &b_hasL1_iso_0);
   fChain->SetBranchAddress("hasL1_looseiso_0", &hasL1_looseiso_0, &b_hasL1_looseiso_0);
   fChain->SetBranchAddress("hasL1_tightiso_0", &hasL1_tightiso_0, &b_hasL1_tightiso_0);
   fChain->SetBranchAddress("hasL1_1", &hasL1_1, &b_hasL1_1);
   fChain->SetBranchAddress("hasL1_iso_1", &hasL1_iso_1, &b_hasL1_iso_1);
   fChain->SetBranchAddress("hasL1_looseiso_1", &hasL1_looseiso_1, &b_hasL1_looseiso_1);
   fChain->SetBranchAddress("hasL1_tightiso_1", &hasL1_tightiso_1, &b_hasL1_tightiso_1);
   fChain->SetBranchAddress("hasL1_2", &hasL1_2, &b_hasL1_2);
   fChain->SetBranchAddress("hasL1_iso_2", &hasL1_iso_2, &b_hasL1_iso_2);
   fChain->SetBranchAddress("hasL1_looseiso_2", &hasL1_looseiso_2, &b_hasL1_looseiso_2);
   fChain->SetBranchAddress("hasL1_tightiso_2", &hasL1_tightiso_2, &b_hasL1_tightiso_2);
   fChain->SetBranchAddress("hasL1_3", &hasL1_3, &b_hasL1_3);
   fChain->SetBranchAddress("hasL1_iso_3", &hasL1_iso_3, &b_hasL1_iso_3);
   fChain->SetBranchAddress("hasL1_looseiso_3", &hasL1_looseiso_3, &b_hasL1_looseiso_3);
   fChain->SetBranchAddress("hasL1_tightiso_3", &hasL1_tightiso_3, &b_hasL1_tightiso_3);
   fChain->SetBranchAddress("hasL1_4", &hasL1_4, &b_hasL1_4);
   fChain->SetBranchAddress("hasL1_iso_4", &hasL1_iso_4, &b_hasL1_iso_4);
   fChain->SetBranchAddress("hasL1_looseiso_4", &hasL1_looseiso_4, &b_hasL1_looseiso_4);
   fChain->SetBranchAddress("hasL1_tightiso_4", &hasL1_tightiso_4, &b_hasL1_tightiso_4);
   fChain->SetBranchAddress("hasL1_5", &hasL1_5, &b_hasL1_5);
   fChain->SetBranchAddress("hasL1_iso_5", &hasL1_iso_5, &b_hasL1_iso_5);
   fChain->SetBranchAddress("hasL1_looseiso_5", &hasL1_looseiso_5, &b_hasL1_looseiso_5);
   fChain->SetBranchAddress("hasL1_tightiso_5", &hasL1_tightiso_5, &b_hasL1_tightiso_5);
   fChain->SetBranchAddress("hasL1_6", &hasL1_6, &b_hasL1_6);
   fChain->SetBranchAddress("hasL1_iso_6", &hasL1_iso_6, &b_hasL1_iso_6);
   fChain->SetBranchAddress("hasL1_looseiso_6", &hasL1_looseiso_6, &b_hasL1_looseiso_6);
   fChain->SetBranchAddress("hasL1_tightiso_6", &hasL1_tightiso_6, &b_hasL1_tightiso_6);
   fChain->SetBranchAddress("hasL1_7", &hasL1_7, &b_hasL1_7);
   fChain->SetBranchAddress("hasL1_iso_7", &hasL1_iso_7, &b_hasL1_iso_7);
   fChain->SetBranchAddress("hasL1_looseiso_7", &hasL1_looseiso_7, &b_hasL1_looseiso_7);
   fChain->SetBranchAddress("hasL1_tightiso_7", &hasL1_tightiso_7, &b_hasL1_tightiso_7);
   fChain->SetBranchAddress("hasL1_8", &hasL1_8, &b_hasL1_8);
   fChain->SetBranchAddress("hasL1_iso_8", &hasL1_iso_8, &b_hasL1_iso_8);
   fChain->SetBranchAddress("hasL1_looseiso_8", &hasL1_looseiso_8, &b_hasL1_looseiso_8);
   fChain->SetBranchAddress("hasL1_tightiso_8", &hasL1_tightiso_8, &b_hasL1_tightiso_8);
   fChain->SetBranchAddress("hasL1_9", &hasL1_9, &b_hasL1_9);
   fChain->SetBranchAddress("hasL1_iso_9", &hasL1_iso_9, &b_hasL1_iso_9);
   fChain->SetBranchAddress("hasL1_looseiso_9", &hasL1_looseiso_9, &b_hasL1_looseiso_9);
   fChain->SetBranchAddress("hasL1_tightiso_9", &hasL1_tightiso_9, &b_hasL1_tightiso_9);
   fChain->SetBranchAddress("hasL1_10", &hasL1_10, &b_hasL1_10);
   fChain->SetBranchAddress("hasL1_iso_10", &hasL1_iso_10, &b_hasL1_iso_10);
   fChain->SetBranchAddress("hasL1_looseiso_10", &hasL1_looseiso_10, &b_hasL1_looseiso_10);
   fChain->SetBranchAddress("hasL1_tightiso_10", &hasL1_tightiso_10, &b_hasL1_tightiso_10);
   fChain->SetBranchAddress("hasL1_11", &hasL1_11, &b_hasL1_11);
   fChain->SetBranchAddress("hasL1_iso_11", &hasL1_iso_11, &b_hasL1_iso_11);
   fChain->SetBranchAddress("hasL1_looseiso_11", &hasL1_looseiso_11, &b_hasL1_looseiso_11);
   fChain->SetBranchAddress("hasL1_tightiso_11", &hasL1_tightiso_11, &b_hasL1_tightiso_11);
   fChain->SetBranchAddress("hasL1_12", &hasL1_12, &b_hasL1_12);
   fChain->SetBranchAddress("hasL1_iso_12", &hasL1_iso_12, &b_hasL1_iso_12);
   fChain->SetBranchAddress("hasL1_looseiso_12", &hasL1_looseiso_12, &b_hasL1_looseiso_12);
   fChain->SetBranchAddress("hasL1_tightiso_12", &hasL1_tightiso_12, &b_hasL1_tightiso_12);
   fChain->SetBranchAddress("hasL1_13", &hasL1_13, &b_hasL1_13);
   fChain->SetBranchAddress("hasL1_iso_13", &hasL1_iso_13, &b_hasL1_iso_13);
   fChain->SetBranchAddress("hasL1_looseiso_13", &hasL1_looseiso_13, &b_hasL1_looseiso_13);
   fChain->SetBranchAddress("hasL1_tightiso_13", &hasL1_tightiso_13, &b_hasL1_tightiso_13);
   fChain->SetBranchAddress("hasL1_14", &hasL1_14, &b_hasL1_14);
   fChain->SetBranchAddress("hasL1_iso_14", &hasL1_iso_14, &b_hasL1_iso_14);
   fChain->SetBranchAddress("hasL1_looseiso_14", &hasL1_looseiso_14, &b_hasL1_looseiso_14);
   fChain->SetBranchAddress("hasL1_tightiso_14", &hasL1_tightiso_14, &b_hasL1_tightiso_14);
   fChain->SetBranchAddress("hasL1_15", &hasL1_15, &b_hasL1_15);
   fChain->SetBranchAddress("hasL1_iso_15", &hasL1_iso_15, &b_hasL1_iso_15);
   fChain->SetBranchAddress("hasL1_looseiso_15", &hasL1_looseiso_15, &b_hasL1_looseiso_15);
   fChain->SetBranchAddress("hasL1_tightiso_15", &hasL1_tightiso_15, &b_hasL1_tightiso_15);
   fChain->SetBranchAddress("hasL1_16", &hasL1_16, &b_hasL1_16);
   fChain->SetBranchAddress("hasL1_iso_16", &hasL1_iso_16, &b_hasL1_iso_16);
   fChain->SetBranchAddress("hasL1_looseiso_16", &hasL1_looseiso_16, &b_hasL1_looseiso_16);
   fChain->SetBranchAddress("hasL1_tightiso_16", &hasL1_tightiso_16, &b_hasL1_tightiso_16);
   fChain->SetBranchAddress("hasL1_17", &hasL1_17, &b_hasL1_17);
   fChain->SetBranchAddress("hasL1_iso_17", &hasL1_iso_17, &b_hasL1_iso_17);
   fChain->SetBranchAddress("hasL1_looseiso_17", &hasL1_looseiso_17, &b_hasL1_looseiso_17);
   fChain->SetBranchAddress("hasL1_tightiso_17", &hasL1_tightiso_17, &b_hasL1_tightiso_17);
   fChain->SetBranchAddress("hasL1_18", &hasL1_18, &b_hasL1_18);
   fChain->SetBranchAddress("hasL1_iso_18", &hasL1_iso_18, &b_hasL1_iso_18);
   fChain->SetBranchAddress("hasL1_looseiso_18", &hasL1_looseiso_18, &b_hasL1_looseiso_18);
   fChain->SetBranchAddress("hasL1_tightiso_18", &hasL1_tightiso_18, &b_hasL1_tightiso_18);
   fChain->SetBranchAddress("hasL1_19", &hasL1_19, &b_hasL1_19);
   fChain->SetBranchAddress("hasL1_iso_19", &hasL1_iso_19, &b_hasL1_iso_19);
   fChain->SetBranchAddress("hasL1_looseiso_19", &hasL1_looseiso_19, &b_hasL1_looseiso_19);
   fChain->SetBranchAddress("hasL1_tightiso_19", &hasL1_tightiso_19, &b_hasL1_tightiso_19);
   fChain->SetBranchAddress("hasL1_20", &hasL1_20, &b_hasL1_20);
   fChain->SetBranchAddress("hasL1_iso_20", &hasL1_iso_20, &b_hasL1_iso_20);
   fChain->SetBranchAddress("hasL1_looseiso_20", &hasL1_looseiso_20, &b_hasL1_looseiso_20);
   fChain->SetBranchAddress("hasL1_tightiso_20", &hasL1_tightiso_20, &b_hasL1_tightiso_20);
   fChain->SetBranchAddress("hasL1_21", &hasL1_21, &b_hasL1_21);
   fChain->SetBranchAddress("hasL1_iso_21", &hasL1_iso_21, &b_hasL1_iso_21);
   fChain->SetBranchAddress("hasL1_looseiso_21", &hasL1_looseiso_21, &b_hasL1_looseiso_21);
   fChain->SetBranchAddress("hasL1_tightiso_21", &hasL1_tightiso_21, &b_hasL1_tightiso_21);
   fChain->SetBranchAddress("hasL1_22", &hasL1_22, &b_hasL1_22);
   fChain->SetBranchAddress("hasL1_iso_22", &hasL1_iso_22, &b_hasL1_iso_22);
   fChain->SetBranchAddress("hasL1_looseiso_22", &hasL1_looseiso_22, &b_hasL1_looseiso_22);
   fChain->SetBranchAddress("hasL1_tightiso_22", &hasL1_tightiso_22, &b_hasL1_tightiso_22);
   fChain->SetBranchAddress("hasL1_23", &hasL1_23, &b_hasL1_23);
   fChain->SetBranchAddress("hasL1_iso_23", &hasL1_iso_23, &b_hasL1_iso_23);
   fChain->SetBranchAddress("hasL1_looseiso_23", &hasL1_looseiso_23, &b_hasL1_looseiso_23);
   fChain->SetBranchAddress("hasL1_tightiso_23", &hasL1_tightiso_23, &b_hasL1_tightiso_23);
   fChain->SetBranchAddress("hasL1_24", &hasL1_24, &b_hasL1_24);
   fChain->SetBranchAddress("hasL1_iso_24", &hasL1_iso_24, &b_hasL1_iso_24);
   fChain->SetBranchAddress("hasL1_looseiso_24", &hasL1_looseiso_24, &b_hasL1_looseiso_24);
   fChain->SetBranchAddress("hasL1_tightiso_24", &hasL1_tightiso_24, &b_hasL1_tightiso_24);
   fChain->SetBranchAddress("hasL1_25", &hasL1_25, &b_hasL1_25);
   fChain->SetBranchAddress("hasL1_iso_25", &hasL1_iso_25, &b_hasL1_iso_25);
   fChain->SetBranchAddress("hasL1_looseiso_25", &hasL1_looseiso_25, &b_hasL1_looseiso_25);
   fChain->SetBranchAddress("hasL1_tightiso_25", &hasL1_tightiso_25, &b_hasL1_tightiso_25);
   fChain->SetBranchAddress("hasL1_26", &hasL1_26, &b_hasL1_26);
   fChain->SetBranchAddress("hasL1_iso_26", &hasL1_iso_26, &b_hasL1_iso_26);
   fChain->SetBranchAddress("hasL1_looseiso_26", &hasL1_looseiso_26, &b_hasL1_looseiso_26);
   fChain->SetBranchAddress("hasL1_tightiso_26", &hasL1_tightiso_26, &b_hasL1_tightiso_26);
   fChain->SetBranchAddress("hasL1_27", &hasL1_27, &b_hasL1_27);
   fChain->SetBranchAddress("hasL1_iso_27", &hasL1_iso_27, &b_hasL1_iso_27);
   fChain->SetBranchAddress("hasL1_looseiso_27", &hasL1_looseiso_27, &b_hasL1_looseiso_27);
   fChain->SetBranchAddress("hasL1_tightiso_27", &hasL1_tightiso_27, &b_hasL1_tightiso_27);
   fChain->SetBranchAddress("hasL1_28", &hasL1_28, &b_hasL1_28);
   fChain->SetBranchAddress("hasL1_iso_28", &hasL1_iso_28, &b_hasL1_iso_28);
   fChain->SetBranchAddress("hasL1_looseiso_28", &hasL1_looseiso_28, &b_hasL1_looseiso_28);
   fChain->SetBranchAddress("hasL1_tightiso_28", &hasL1_tightiso_28, &b_hasL1_tightiso_28);
   fChain->SetBranchAddress("hasL1_29", &hasL1_29, &b_hasL1_29);
   fChain->SetBranchAddress("hasL1_iso_29", &hasL1_iso_29, &b_hasL1_iso_29);
   fChain->SetBranchAddress("hasL1_looseiso_29", &hasL1_looseiso_29, &b_hasL1_looseiso_29);
   fChain->SetBranchAddress("hasL1_tightiso_29", &hasL1_tightiso_29, &b_hasL1_tightiso_29);
   fChain->SetBranchAddress("hasL1_30", &hasL1_30, &b_hasL1_30);
   fChain->SetBranchAddress("hasL1_iso_30", &hasL1_iso_30, &b_hasL1_iso_30);
   fChain->SetBranchAddress("hasL1_looseiso_30", &hasL1_looseiso_30, &b_hasL1_looseiso_30);
   fChain->SetBranchAddress("hasL1_tightiso_30", &hasL1_tightiso_30, &b_hasL1_tightiso_30);
   fChain->SetBranchAddress("hasL1_31", &hasL1_31, &b_hasL1_31);
   fChain->SetBranchAddress("hasL1_iso_31", &hasL1_iso_31, &b_hasL1_iso_31);
   fChain->SetBranchAddress("hasL1_looseiso_31", &hasL1_looseiso_31, &b_hasL1_looseiso_31);
   fChain->SetBranchAddress("hasL1_tightiso_31", &hasL1_tightiso_31, &b_hasL1_tightiso_31);
   fChain->SetBranchAddress("hasL1_32", &hasL1_32, &b_hasL1_32);
   fChain->SetBranchAddress("hasL1_iso_32", &hasL1_iso_32, &b_hasL1_iso_32);
   fChain->SetBranchAddress("hasL1_looseiso_32", &hasL1_looseiso_32, &b_hasL1_looseiso_32);
   fChain->SetBranchAddress("hasL1_tightiso_32", &hasL1_tightiso_32, &b_hasL1_tightiso_32);
   fChain->SetBranchAddress("hasL1_33", &hasL1_33, &b_hasL1_33);
   fChain->SetBranchAddress("hasL1_iso_33", &hasL1_iso_33, &b_hasL1_iso_33);
   fChain->SetBranchAddress("hasL1_looseiso_33", &hasL1_looseiso_33, &b_hasL1_looseiso_33);
   fChain->SetBranchAddress("hasL1_tightiso_33", &hasL1_tightiso_33, &b_hasL1_tightiso_33);
   fChain->SetBranchAddress("hasL1_34", &hasL1_34, &b_hasL1_34);
   fChain->SetBranchAddress("hasL1_iso_34", &hasL1_iso_34, &b_hasL1_iso_34);
   fChain->SetBranchAddress("hasL1_looseiso_34", &hasL1_looseiso_34, &b_hasL1_looseiso_34);
   fChain->SetBranchAddress("hasL1_tightiso_34", &hasL1_tightiso_34, &b_hasL1_tightiso_34);
   fChain->SetBranchAddress("hasL1_35", &hasL1_35, &b_hasL1_35);
   fChain->SetBranchAddress("hasL1_iso_35", &hasL1_iso_35, &b_hasL1_iso_35);
   fChain->SetBranchAddress("hasL1_looseiso_35", &hasL1_looseiso_35, &b_hasL1_looseiso_35);
   fChain->SetBranchAddress("hasL1_tightiso_35", &hasL1_tightiso_35, &b_hasL1_tightiso_35);
   fChain->SetBranchAddress("hasL1_36", &hasL1_36, &b_hasL1_36);
   fChain->SetBranchAddress("hasL1_iso_36", &hasL1_iso_36, &b_hasL1_iso_36);
   fChain->SetBranchAddress("hasL1_looseiso_36", &hasL1_looseiso_36, &b_hasL1_looseiso_36);
   fChain->SetBranchAddress("hasL1_tightiso_36", &hasL1_tightiso_36, &b_hasL1_tightiso_36);
   fChain->SetBranchAddress("hasL1_37", &hasL1_37, &b_hasL1_37);
   fChain->SetBranchAddress("hasL1_iso_37", &hasL1_iso_37, &b_hasL1_iso_37);
   fChain->SetBranchAddress("hasL1_looseiso_37", &hasL1_looseiso_37, &b_hasL1_looseiso_37);
   fChain->SetBranchAddress("hasL1_tightiso_37", &hasL1_tightiso_37, &b_hasL1_tightiso_37);
   fChain->SetBranchAddress("hasL1_38", &hasL1_38, &b_hasL1_38);
   fChain->SetBranchAddress("hasL1_iso_38", &hasL1_iso_38, &b_hasL1_iso_38);
   fChain->SetBranchAddress("hasL1_looseiso_38", &hasL1_looseiso_38, &b_hasL1_looseiso_38);
   fChain->SetBranchAddress("hasL1_tightiso_38", &hasL1_tightiso_38, &b_hasL1_tightiso_38);
   fChain->SetBranchAddress("hasL1_39", &hasL1_39, &b_hasL1_39);
   fChain->SetBranchAddress("hasL1_iso_39", &hasL1_iso_39, &b_hasL1_iso_39);
   fChain->SetBranchAddress("hasL1_looseiso_39", &hasL1_looseiso_39, &b_hasL1_looseiso_39);
   fChain->SetBranchAddress("hasL1_tightiso_39", &hasL1_tightiso_39, &b_hasL1_tightiso_39);
   fChain->SetBranchAddress("hasL1_40", &hasL1_40, &b_hasL1_40);
   fChain->SetBranchAddress("hasL1_iso_40", &hasL1_iso_40, &b_hasL1_iso_40);
   fChain->SetBranchAddress("hasL1_looseiso_40", &hasL1_looseiso_40, &b_hasL1_looseiso_40);
   fChain->SetBranchAddress("hasL1_tightiso_40", &hasL1_tightiso_40, &b_hasL1_tightiso_40);
   fChain->SetBranchAddress("hasL1_41", &hasL1_41, &b_hasL1_41);
   fChain->SetBranchAddress("hasL1_iso_41", &hasL1_iso_41, &b_hasL1_iso_41);
   fChain->SetBranchAddress("hasL1_looseiso_41", &hasL1_looseiso_41, &b_hasL1_looseiso_41);
   fChain->SetBranchAddress("hasL1_tightiso_41", &hasL1_tightiso_41, &b_hasL1_tightiso_41);
   fChain->SetBranchAddress("hasL1_42", &hasL1_42, &b_hasL1_42);
   fChain->SetBranchAddress("hasL1_iso_42", &hasL1_iso_42, &b_hasL1_iso_42);
   fChain->SetBranchAddress("hasL1_looseiso_42", &hasL1_looseiso_42, &b_hasL1_looseiso_42);
   fChain->SetBranchAddress("hasL1_tightiso_42", &hasL1_tightiso_42, &b_hasL1_tightiso_42);
   fChain->SetBranchAddress("hasL1_43", &hasL1_43, &b_hasL1_43);
   fChain->SetBranchAddress("hasL1_iso_43", &hasL1_iso_43, &b_hasL1_iso_43);
   fChain->SetBranchAddress("hasL1_looseiso_43", &hasL1_looseiso_43, &b_hasL1_looseiso_43);
   fChain->SetBranchAddress("hasL1_tightiso_43", &hasL1_tightiso_43, &b_hasL1_tightiso_43);
   fChain->SetBranchAddress("hasL1_44", &hasL1_44, &b_hasL1_44);
   fChain->SetBranchAddress("hasL1_iso_44", &hasL1_iso_44, &b_hasL1_iso_44);
   fChain->SetBranchAddress("hasL1_looseiso_44", &hasL1_looseiso_44, &b_hasL1_looseiso_44);
   fChain->SetBranchAddress("hasL1_tightiso_44", &hasL1_tightiso_44, &b_hasL1_tightiso_44);
   fChain->SetBranchAddress("hasL1_45", &hasL1_45, &b_hasL1_45);
   fChain->SetBranchAddress("hasL1_iso_45", &hasL1_iso_45, &b_hasL1_iso_45);
   fChain->SetBranchAddress("hasL1_looseiso_45", &hasL1_looseiso_45, &b_hasL1_looseiso_45);
   fChain->SetBranchAddress("hasL1_tightiso_45", &hasL1_tightiso_45, &b_hasL1_tightiso_45);
   fChain->SetBranchAddress("hasL1_46", &hasL1_46, &b_hasL1_46);
   fChain->SetBranchAddress("hasL1_iso_46", &hasL1_iso_46, &b_hasL1_iso_46);
   fChain->SetBranchAddress("hasL1_looseiso_46", &hasL1_looseiso_46, &b_hasL1_looseiso_46);
   fChain->SetBranchAddress("hasL1_tightiso_46", &hasL1_tightiso_46, &b_hasL1_tightiso_46);
   fChain->SetBranchAddress("hasL1_47", &hasL1_47, &b_hasL1_47);
   fChain->SetBranchAddress("hasL1_iso_47", &hasL1_iso_47, &b_hasL1_iso_47);
   fChain->SetBranchAddress("hasL1_looseiso_47", &hasL1_looseiso_47, &b_hasL1_looseiso_47);
   fChain->SetBranchAddress("hasL1_tightiso_47", &hasL1_tightiso_47, &b_hasL1_tightiso_47);
   fChain->SetBranchAddress("hasL1_48", &hasL1_48, &b_hasL1_48);
   fChain->SetBranchAddress("hasL1_iso_48", &hasL1_iso_48, &b_hasL1_iso_48);
   fChain->SetBranchAddress("hasL1_looseiso_48", &hasL1_looseiso_48, &b_hasL1_looseiso_48);
   fChain->SetBranchAddress("hasL1_tightiso_48", &hasL1_tightiso_48, &b_hasL1_tightiso_48);
   fChain->SetBranchAddress("hasL1_49", &hasL1_49, &b_hasL1_49);
   fChain->SetBranchAddress("hasL1_iso_49", &hasL1_iso_49, &b_hasL1_iso_49);
   fChain->SetBranchAddress("hasL1_looseiso_49", &hasL1_looseiso_49, &b_hasL1_looseiso_49);
   fChain->SetBranchAddress("hasL1_tightiso_49", &hasL1_tightiso_49, &b_hasL1_tightiso_49);
   fChain->SetBranchAddress("hasL1_50", &hasL1_50, &b_hasL1_50);
   fChain->SetBranchAddress("hasL1_iso_50", &hasL1_iso_50, &b_hasL1_iso_50);
   fChain->SetBranchAddress("hasL1_looseiso_50", &hasL1_looseiso_50, &b_hasL1_looseiso_50);
   fChain->SetBranchAddress("hasL1_tightiso_50", &hasL1_tightiso_50, &b_hasL1_tightiso_50);
   fChain->SetBranchAddress("hasL1_51", &hasL1_51, &b_hasL1_51);
   fChain->SetBranchAddress("hasL1_iso_51", &hasL1_iso_51, &b_hasL1_iso_51);
   fChain->SetBranchAddress("hasL1_looseiso_51", &hasL1_looseiso_51, &b_hasL1_looseiso_51);
   fChain->SetBranchAddress("hasL1_tightiso_51", &hasL1_tightiso_51, &b_hasL1_tightiso_51);
   fChain->SetBranchAddress("hasL1_52", &hasL1_52, &b_hasL1_52);
   fChain->SetBranchAddress("hasL1_iso_52", &hasL1_iso_52, &b_hasL1_iso_52);
   fChain->SetBranchAddress("hasL1_looseiso_52", &hasL1_looseiso_52, &b_hasL1_looseiso_52);
   fChain->SetBranchAddress("hasL1_tightiso_52", &hasL1_tightiso_52, &b_hasL1_tightiso_52);
   fChain->SetBranchAddress("hasL1_53", &hasL1_53, &b_hasL1_53);
   fChain->SetBranchAddress("hasL1_iso_53", &hasL1_iso_53, &b_hasL1_iso_53);
   fChain->SetBranchAddress("hasL1_looseiso_53", &hasL1_looseiso_53, &b_hasL1_looseiso_53);
   fChain->SetBranchAddress("hasL1_tightiso_53", &hasL1_tightiso_53, &b_hasL1_tightiso_53);
   fChain->SetBranchAddress("hasL1_54", &hasL1_54, &b_hasL1_54);
   fChain->SetBranchAddress("hasL1_iso_54", &hasL1_iso_54, &b_hasL1_iso_54);
   fChain->SetBranchAddress("hasL1_looseiso_54", &hasL1_looseiso_54, &b_hasL1_looseiso_54);
   fChain->SetBranchAddress("hasL1_tightiso_54", &hasL1_tightiso_54, &b_hasL1_tightiso_54);
   fChain->SetBranchAddress("hasL1_55", &hasL1_55, &b_hasL1_55);
   fChain->SetBranchAddress("hasL1_iso_55", &hasL1_iso_55, &b_hasL1_iso_55);
   fChain->SetBranchAddress("hasL1_looseiso_55", &hasL1_looseiso_55, &b_hasL1_looseiso_55);
   fChain->SetBranchAddress("hasL1_tightiso_55", &hasL1_tightiso_55, &b_hasL1_tightiso_55);
   fChain->SetBranchAddress("hasL1_56", &hasL1_56, &b_hasL1_56);
   fChain->SetBranchAddress("hasL1_iso_56", &hasL1_iso_56, &b_hasL1_iso_56);
   fChain->SetBranchAddress("hasL1_looseiso_56", &hasL1_looseiso_56, &b_hasL1_looseiso_56);
   fChain->SetBranchAddress("hasL1_tightiso_56", &hasL1_tightiso_56, &b_hasL1_tightiso_56);
   fChain->SetBranchAddress("hasL1_57", &hasL1_57, &b_hasL1_57);
   fChain->SetBranchAddress("hasL1_iso_57", &hasL1_iso_57, &b_hasL1_iso_57);
   fChain->SetBranchAddress("hasL1_looseiso_57", &hasL1_looseiso_57, &b_hasL1_looseiso_57);
   fChain->SetBranchAddress("hasL1_tightiso_57", &hasL1_tightiso_57, &b_hasL1_tightiso_57);
   fChain->SetBranchAddress("hasL1_58", &hasL1_58, &b_hasL1_58);
   fChain->SetBranchAddress("hasL1_iso_58", &hasL1_iso_58, &b_hasL1_iso_58);
   fChain->SetBranchAddress("hasL1_looseiso_58", &hasL1_looseiso_58, &b_hasL1_looseiso_58);
   fChain->SetBranchAddress("hasL1_tightiso_58", &hasL1_tightiso_58, &b_hasL1_tightiso_58);
   fChain->SetBranchAddress("hasL1_59", &hasL1_59, &b_hasL1_59);
   fChain->SetBranchAddress("hasL1_iso_59", &hasL1_iso_59, &b_hasL1_iso_59);
   fChain->SetBranchAddress("hasL1_looseiso_59", &hasL1_looseiso_59, &b_hasL1_looseiso_59);
   fChain->SetBranchAddress("hasL1_tightiso_59", &hasL1_tightiso_59, &b_hasL1_tightiso_59);
   fChain->SetBranchAddress("hasL1_60", &hasL1_60, &b_hasL1_60);
   fChain->SetBranchAddress("hasL1_iso_60", &hasL1_iso_60, &b_hasL1_iso_60);
   fChain->SetBranchAddress("hasL1_looseiso_60", &hasL1_looseiso_60, &b_hasL1_looseiso_60);
   fChain->SetBranchAddress("hasL1_tightiso_60", &hasL1_tightiso_60, &b_hasL1_tightiso_60);
   fChain->SetBranchAddress("hasL1_61", &hasL1_61, &b_hasL1_61);
   fChain->SetBranchAddress("hasL1_iso_61", &hasL1_iso_61, &b_hasL1_iso_61);
   fChain->SetBranchAddress("hasL1_looseiso_61", &hasL1_looseiso_61, &b_hasL1_looseiso_61);
   fChain->SetBranchAddress("hasL1_tightiso_61", &hasL1_tightiso_61, &b_hasL1_tightiso_61);
   fChain->SetBranchAddress("hasL1_62", &hasL1_62, &b_hasL1_62);
   fChain->SetBranchAddress("hasL1_iso_62", &hasL1_iso_62, &b_hasL1_iso_62);
   fChain->SetBranchAddress("hasL1_looseiso_62", &hasL1_looseiso_62, &b_hasL1_looseiso_62);
   fChain->SetBranchAddress("hasL1_tightiso_62", &hasL1_tightiso_62, &b_hasL1_tightiso_62);
   fChain->SetBranchAddress("hasL1_63", &hasL1_63, &b_hasL1_63);
   fChain->SetBranchAddress("hasL1_iso_63", &hasL1_iso_63, &b_hasL1_iso_63);
   fChain->SetBranchAddress("hasL1_looseiso_63", &hasL1_looseiso_63, &b_hasL1_looseiso_63);
   fChain->SetBranchAddress("hasL1_tightiso_63", &hasL1_tightiso_63, &b_hasL1_tightiso_63);
   fChain->SetBranchAddress("hasL1_64", &hasL1_64, &b_hasL1_64);
   fChain->SetBranchAddress("hasL1_iso_64", &hasL1_iso_64, &b_hasL1_iso_64);
   fChain->SetBranchAddress("hasL1_looseiso_64", &hasL1_looseiso_64, &b_hasL1_looseiso_64);
   fChain->SetBranchAddress("hasL1_tightiso_64", &hasL1_tightiso_64, &b_hasL1_tightiso_64);
   fChain->SetBranchAddress("hasL1_65", &hasL1_65, &b_hasL1_65);
   fChain->SetBranchAddress("hasL1_iso_65", &hasL1_iso_65, &b_hasL1_iso_65);
   fChain->SetBranchAddress("hasL1_looseiso_65", &hasL1_looseiso_65, &b_hasL1_looseiso_65);
   fChain->SetBranchAddress("hasL1_tightiso_65", &hasL1_tightiso_65, &b_hasL1_tightiso_65);
   fChain->SetBranchAddress("hasL1_66", &hasL1_66, &b_hasL1_66);
   fChain->SetBranchAddress("hasL1_iso_66", &hasL1_iso_66, &b_hasL1_iso_66);
   fChain->SetBranchAddress("hasL1_looseiso_66", &hasL1_looseiso_66, &b_hasL1_looseiso_66);
   fChain->SetBranchAddress("hasL1_tightiso_66", &hasL1_tightiso_66, &b_hasL1_tightiso_66);
   fChain->SetBranchAddress("hasL1_67", &hasL1_67, &b_hasL1_67);
   fChain->SetBranchAddress("hasL1_iso_67", &hasL1_iso_67, &b_hasL1_iso_67);
   fChain->SetBranchAddress("hasL1_looseiso_67", &hasL1_looseiso_67, &b_hasL1_looseiso_67);
   fChain->SetBranchAddress("hasL1_tightiso_67", &hasL1_tightiso_67, &b_hasL1_tightiso_67);
   fChain->SetBranchAddress("hasL1_68", &hasL1_68, &b_hasL1_68);
   fChain->SetBranchAddress("hasL1_iso_68", &hasL1_iso_68, &b_hasL1_iso_68);
   fChain->SetBranchAddress("hasL1_looseiso_68", &hasL1_looseiso_68, &b_hasL1_looseiso_68);
   fChain->SetBranchAddress("hasL1_tightiso_68", &hasL1_tightiso_68, &b_hasL1_tightiso_68);
   fChain->SetBranchAddress("hasL1_69", &hasL1_69, &b_hasL1_69);
   fChain->SetBranchAddress("hasL1_iso_69", &hasL1_iso_69, &b_hasL1_iso_69);
   fChain->SetBranchAddress("hasL1_looseiso_69", &hasL1_looseiso_69, &b_hasL1_looseiso_69);
   fChain->SetBranchAddress("hasL1_tightiso_69", &hasL1_tightiso_69, &b_hasL1_tightiso_69);
   fChain->SetBranchAddress("hasL1_70", &hasL1_70, &b_hasL1_70);
   fChain->SetBranchAddress("hasL1_iso_70", &hasL1_iso_70, &b_hasL1_iso_70);
   fChain->SetBranchAddress("hasL1_looseiso_70", &hasL1_looseiso_70, &b_hasL1_looseiso_70);
   fChain->SetBranchAddress("hasL1_tightiso_70", &hasL1_tightiso_70, &b_hasL1_tightiso_70);
   fChain->SetBranchAddress("hasL1_71", &hasL1_71, &b_hasL1_71);
   fChain->SetBranchAddress("hasL1_iso_71", &hasL1_iso_71, &b_hasL1_iso_71);
   fChain->SetBranchAddress("hasL1_looseiso_71", &hasL1_looseiso_71, &b_hasL1_looseiso_71);
   fChain->SetBranchAddress("hasL1_tightiso_71", &hasL1_tightiso_71, &b_hasL1_tightiso_71);
   fChain->SetBranchAddress("hasL1_72", &hasL1_72, &b_hasL1_72);
   fChain->SetBranchAddress("hasL1_iso_72", &hasL1_iso_72, &b_hasL1_iso_72);
   fChain->SetBranchAddress("hasL1_looseiso_72", &hasL1_looseiso_72, &b_hasL1_looseiso_72);
   fChain->SetBranchAddress("hasL1_tightiso_72", &hasL1_tightiso_72, &b_hasL1_tightiso_72);
   fChain->SetBranchAddress("hasL1_73", &hasL1_73, &b_hasL1_73);
   fChain->SetBranchAddress("hasL1_iso_73", &hasL1_iso_73, &b_hasL1_iso_73);
   fChain->SetBranchAddress("hasL1_looseiso_73", &hasL1_looseiso_73, &b_hasL1_looseiso_73);
   fChain->SetBranchAddress("hasL1_tightiso_73", &hasL1_tightiso_73, &b_hasL1_tightiso_73);
   fChain->SetBranchAddress("hasL1_74", &hasL1_74, &b_hasL1_74);
   fChain->SetBranchAddress("hasL1_iso_74", &hasL1_iso_74, &b_hasL1_iso_74);
   fChain->SetBranchAddress("hasL1_looseiso_74", &hasL1_looseiso_74, &b_hasL1_looseiso_74);
   fChain->SetBranchAddress("hasL1_tightiso_74", &hasL1_tightiso_74, &b_hasL1_tightiso_74);
   fChain->SetBranchAddress("hasL1_75", &hasL1_75, &b_hasL1_75);
   fChain->SetBranchAddress("hasL1_iso_75", &hasL1_iso_75, &b_hasL1_iso_75);
   fChain->SetBranchAddress("hasL1_looseiso_75", &hasL1_looseiso_75, &b_hasL1_looseiso_75);
   fChain->SetBranchAddress("hasL1_tightiso_75", &hasL1_tightiso_75, &b_hasL1_tightiso_75);
   fChain->SetBranchAddress("hasL1_76", &hasL1_76, &b_hasL1_76);
   fChain->SetBranchAddress("hasL1_iso_76", &hasL1_iso_76, &b_hasL1_iso_76);
   fChain->SetBranchAddress("hasL1_looseiso_76", &hasL1_looseiso_76, &b_hasL1_looseiso_76);
   fChain->SetBranchAddress("hasL1_tightiso_76", &hasL1_tightiso_76, &b_hasL1_tightiso_76);
   fChain->SetBranchAddress("hasL1_77", &hasL1_77, &b_hasL1_77);
   fChain->SetBranchAddress("hasL1_iso_77", &hasL1_iso_77, &b_hasL1_iso_77);
   fChain->SetBranchAddress("hasL1_looseiso_77", &hasL1_looseiso_77, &b_hasL1_looseiso_77);
   fChain->SetBranchAddress("hasL1_tightiso_77", &hasL1_tightiso_77, &b_hasL1_tightiso_77);
   fChain->SetBranchAddress("hasL1_78", &hasL1_78, &b_hasL1_78);
   fChain->SetBranchAddress("hasL1_iso_78", &hasL1_iso_78, &b_hasL1_iso_78);
   fChain->SetBranchAddress("hasL1_looseiso_78", &hasL1_looseiso_78, &b_hasL1_looseiso_78);
   fChain->SetBranchAddress("hasL1_tightiso_78", &hasL1_tightiso_78, &b_hasL1_tightiso_78);
   fChain->SetBranchAddress("hasL1_79", &hasL1_79, &b_hasL1_79);
   fChain->SetBranchAddress("hasL1_iso_79", &hasL1_iso_79, &b_hasL1_iso_79);
   fChain->SetBranchAddress("hasL1_looseiso_79", &hasL1_looseiso_79, &b_hasL1_looseiso_79);
   fChain->SetBranchAddress("hasL1_tightiso_79", &hasL1_tightiso_79, &b_hasL1_tightiso_79);
   fChain->SetBranchAddress("hasL1_80", &hasL1_80, &b_hasL1_80);
   fChain->SetBranchAddress("hasL1_iso_80", &hasL1_iso_80, &b_hasL1_iso_80);
   fChain->SetBranchAddress("hasL1_looseiso_80", &hasL1_looseiso_80, &b_hasL1_looseiso_80);
   fChain->SetBranchAddress("hasL1_tightiso_80", &hasL1_tightiso_80, &b_hasL1_tightiso_80);
   fChain->SetBranchAddress("hasL1_81", &hasL1_81, &b_hasL1_81);
   fChain->SetBranchAddress("hasL1_iso_81", &hasL1_iso_81, &b_hasL1_iso_81);
   fChain->SetBranchAddress("hasL1_looseiso_81", &hasL1_looseiso_81, &b_hasL1_looseiso_81);
   fChain->SetBranchAddress("hasL1_tightiso_81", &hasL1_tightiso_81, &b_hasL1_tightiso_81);
   fChain->SetBranchAddress("hasL1_82", &hasL1_82, &b_hasL1_82);
   fChain->SetBranchAddress("hasL1_iso_82", &hasL1_iso_82, &b_hasL1_iso_82);
   fChain->SetBranchAddress("hasL1_looseiso_82", &hasL1_looseiso_82, &b_hasL1_looseiso_82);
   fChain->SetBranchAddress("hasL1_tightiso_82", &hasL1_tightiso_82, &b_hasL1_tightiso_82);
   fChain->SetBranchAddress("hasL1_83", &hasL1_83, &b_hasL1_83);
   fChain->SetBranchAddress("hasL1_iso_83", &hasL1_iso_83, &b_hasL1_iso_83);
   fChain->SetBranchAddress("hasL1_looseiso_83", &hasL1_looseiso_83, &b_hasL1_looseiso_83);
   fChain->SetBranchAddress("hasL1_tightiso_83", &hasL1_tightiso_83, &b_hasL1_tightiso_83);
   fChain->SetBranchAddress("hasL1_84", &hasL1_84, &b_hasL1_84);
   fChain->SetBranchAddress("hasL1_iso_84", &hasL1_iso_84, &b_hasL1_iso_84);
   fChain->SetBranchAddress("hasL1_looseiso_84", &hasL1_looseiso_84, &b_hasL1_looseiso_84);
   fChain->SetBranchAddress("hasL1_tightiso_84", &hasL1_tightiso_84, &b_hasL1_tightiso_84);
   fChain->SetBranchAddress("hasL1_85", &hasL1_85, &b_hasL1_85);
   fChain->SetBranchAddress("hasL1_iso_85", &hasL1_iso_85, &b_hasL1_iso_85);
   fChain->SetBranchAddress("hasL1_looseiso_85", &hasL1_looseiso_85, &b_hasL1_looseiso_85);
   fChain->SetBranchAddress("hasL1_tightiso_85", &hasL1_tightiso_85, &b_hasL1_tightiso_85);
   fChain->SetBranchAddress("hasL1_86", &hasL1_86, &b_hasL1_86);
   fChain->SetBranchAddress("hasL1_iso_86", &hasL1_iso_86, &b_hasL1_iso_86);
   fChain->SetBranchAddress("hasL1_looseiso_86", &hasL1_looseiso_86, &b_hasL1_looseiso_86);
   fChain->SetBranchAddress("hasL1_tightiso_86", &hasL1_tightiso_86, &b_hasL1_tightiso_86);
   fChain->SetBranchAddress("hasL1_87", &hasL1_87, &b_hasL1_87);
   fChain->SetBranchAddress("hasL1_iso_87", &hasL1_iso_87, &b_hasL1_iso_87);
   fChain->SetBranchAddress("hasL1_looseiso_87", &hasL1_looseiso_87, &b_hasL1_looseiso_87);
   fChain->SetBranchAddress("hasL1_tightiso_87", &hasL1_tightiso_87, &b_hasL1_tightiso_87);
   fChain->SetBranchAddress("hasL1_88", &hasL1_88, &b_hasL1_88);
   fChain->SetBranchAddress("hasL1_iso_88", &hasL1_iso_88, &b_hasL1_iso_88);
   fChain->SetBranchAddress("hasL1_looseiso_88", &hasL1_looseiso_88, &b_hasL1_looseiso_88);
   fChain->SetBranchAddress("hasL1_tightiso_88", &hasL1_tightiso_88, &b_hasL1_tightiso_88);
   fChain->SetBranchAddress("hasL1_89", &hasL1_89, &b_hasL1_89);
   fChain->SetBranchAddress("hasL1_iso_89", &hasL1_iso_89, &b_hasL1_iso_89);
   fChain->SetBranchAddress("hasL1_looseiso_89", &hasL1_looseiso_89, &b_hasL1_looseiso_89);
   fChain->SetBranchAddress("hasL1_tightiso_89", &hasL1_tightiso_89, &b_hasL1_tightiso_89);
   fChain->SetBranchAddress("hasL1_90", &hasL1_90, &b_hasL1_90);
   fChain->SetBranchAddress("hasL1_iso_90", &hasL1_iso_90, &b_hasL1_iso_90);
   fChain->SetBranchAddress("hasL1_looseiso_90", &hasL1_looseiso_90, &b_hasL1_looseiso_90);
   fChain->SetBranchAddress("hasL1_tightiso_90", &hasL1_tightiso_90, &b_hasL1_tightiso_90);
   fChain->SetBranchAddress("hasL1_91", &hasL1_91, &b_hasL1_91);
   fChain->SetBranchAddress("hasL1_iso_91", &hasL1_iso_91, &b_hasL1_iso_91);
   fChain->SetBranchAddress("hasL1_looseiso_91", &hasL1_looseiso_91, &b_hasL1_looseiso_91);
   fChain->SetBranchAddress("hasL1_tightiso_91", &hasL1_tightiso_91, &b_hasL1_tightiso_91);
   fChain->SetBranchAddress("hasL1_92", &hasL1_92, &b_hasL1_92);
   fChain->SetBranchAddress("hasL1_iso_92", &hasL1_iso_92, &b_hasL1_iso_92);
   fChain->SetBranchAddress("hasL1_looseiso_92", &hasL1_looseiso_92, &b_hasL1_looseiso_92);
   fChain->SetBranchAddress("hasL1_tightiso_92", &hasL1_tightiso_92, &b_hasL1_tightiso_92);
   fChain->SetBranchAddress("hasL1_93", &hasL1_93, &b_hasL1_93);
   fChain->SetBranchAddress("hasL1_iso_93", &hasL1_iso_93, &b_hasL1_iso_93);
   fChain->SetBranchAddress("hasL1_looseiso_93", &hasL1_looseiso_93, &b_hasL1_looseiso_93);
   fChain->SetBranchAddress("hasL1_tightiso_93", &hasL1_tightiso_93, &b_hasL1_tightiso_93);
   fChain->SetBranchAddress("hasL1_94", &hasL1_94, &b_hasL1_94);
   fChain->SetBranchAddress("hasL1_iso_94", &hasL1_iso_94, &b_hasL1_iso_94);
   fChain->SetBranchAddress("hasL1_looseiso_94", &hasL1_looseiso_94, &b_hasL1_looseiso_94);
   fChain->SetBranchAddress("hasL1_tightiso_94", &hasL1_tightiso_94, &b_hasL1_tightiso_94);
   fChain->SetBranchAddress("hasL1_95", &hasL1_95, &b_hasL1_95);
   fChain->SetBranchAddress("hasL1_iso_95", &hasL1_iso_95, &b_hasL1_iso_95);
   fChain->SetBranchAddress("hasL1_looseiso_95", &hasL1_looseiso_95, &b_hasL1_looseiso_95);
   fChain->SetBranchAddress("hasL1_tightiso_95", &hasL1_tightiso_95, &b_hasL1_tightiso_95);
   fChain->SetBranchAddress("hasL1_96", &hasL1_96, &b_hasL1_96);
   fChain->SetBranchAddress("hasL1_iso_96", &hasL1_iso_96, &b_hasL1_iso_96);
   fChain->SetBranchAddress("hasL1_looseiso_96", &hasL1_looseiso_96, &b_hasL1_looseiso_96);
   fChain->SetBranchAddress("hasL1_tightiso_96", &hasL1_tightiso_96, &b_hasL1_tightiso_96);
   fChain->SetBranchAddress("hasL1_97", &hasL1_97, &b_hasL1_97);
   fChain->SetBranchAddress("hasL1_iso_97", &hasL1_iso_97, &b_hasL1_iso_97);
   fChain->SetBranchAddress("hasL1_looseiso_97", &hasL1_looseiso_97, &b_hasL1_looseiso_97);
   fChain->SetBranchAddress("hasL1_tightiso_97", &hasL1_tightiso_97, &b_hasL1_tightiso_97);
   fChain->SetBranchAddress("hasL1_98", &hasL1_98, &b_hasL1_98);
   fChain->SetBranchAddress("hasL1_iso_98", &hasL1_iso_98, &b_hasL1_iso_98);
   fChain->SetBranchAddress("hasL1_looseiso_98", &hasL1_looseiso_98, &b_hasL1_looseiso_98);
   fChain->SetBranchAddress("hasL1_tightiso_98", &hasL1_tightiso_98, &b_hasL1_tightiso_98);
   fChain->SetBranchAddress("hasL1_99", &hasL1_99, &b_hasL1_99);
   fChain->SetBranchAddress("hasL1_iso_99", &hasL1_iso_99, &b_hasL1_iso_99);
   fChain->SetBranchAddress("hasL1_looseiso_99", &hasL1_looseiso_99, &b_hasL1_looseiso_99);
   fChain->SetBranchAddress("hasL1_tightiso_99", &hasL1_tightiso_99, &b_hasL1_tightiso_99);
   fChain->SetBranchAddress("hasL1Emu_0", &hasL1Emu_0, &b_hasL1Emu_0);
   fChain->SetBranchAddress("hasL1Emu_iso0", &hasL1Emu_iso0, &b_hasL1Emu_iso0);
   fChain->SetBranchAddress("hasL1Emu_looseiso0", &hasL1Emu_looseiso0, &b_hasL1Emu_looseiso0);
   fChain->SetBranchAddress("hasL1Emu_tightiso0", &hasL1Emu_tightiso0, &b_hasL1Emu_tightiso0);
   fChain->SetBranchAddress("hasL1Emu_1", &hasL1Emu_1, &b_hasL1Emu_1);
   fChain->SetBranchAddress("hasL1Emu_iso1", &hasL1Emu_iso1, &b_hasL1Emu_iso1);
   fChain->SetBranchAddress("hasL1Emu_looseiso1", &hasL1Emu_looseiso1, &b_hasL1Emu_looseiso1);
   fChain->SetBranchAddress("hasL1Emu_tightiso1", &hasL1Emu_tightiso1, &b_hasL1Emu_tightiso1);
   fChain->SetBranchAddress("hasL1Emu_2", &hasL1Emu_2, &b_hasL1Emu_2);
   fChain->SetBranchAddress("hasL1Emu_iso2", &hasL1Emu_iso2, &b_hasL1Emu_iso2);
   fChain->SetBranchAddress("hasL1Emu_looseiso2", &hasL1Emu_looseiso2, &b_hasL1Emu_looseiso2);
   fChain->SetBranchAddress("hasL1Emu_tightiso2", &hasL1Emu_tightiso2, &b_hasL1Emu_tightiso2);
   fChain->SetBranchAddress("hasL1Emu_3", &hasL1Emu_3, &b_hasL1Emu_3);
   fChain->SetBranchAddress("hasL1Emu_iso3", &hasL1Emu_iso3, &b_hasL1Emu_iso3);
   fChain->SetBranchAddress("hasL1Emu_looseiso3", &hasL1Emu_looseiso3, &b_hasL1Emu_looseiso3);
   fChain->SetBranchAddress("hasL1Emu_tightiso3", &hasL1Emu_tightiso3, &b_hasL1Emu_tightiso3);
   fChain->SetBranchAddress("hasL1Emu_4", &hasL1Emu_4, &b_hasL1Emu_4);
   fChain->SetBranchAddress("hasL1Emu_iso4", &hasL1Emu_iso4, &b_hasL1Emu_iso4);
   fChain->SetBranchAddress("hasL1Emu_looseiso4", &hasL1Emu_looseiso4, &b_hasL1Emu_looseiso4);
   fChain->SetBranchAddress("hasL1Emu_tightiso4", &hasL1Emu_tightiso4, &b_hasL1Emu_tightiso4);
   fChain->SetBranchAddress("hasL1Emu_5", &hasL1Emu_5, &b_hasL1Emu_5);
   fChain->SetBranchAddress("hasL1Emu_iso5", &hasL1Emu_iso5, &b_hasL1Emu_iso5);
   fChain->SetBranchAddress("hasL1Emu_looseiso5", &hasL1Emu_looseiso5, &b_hasL1Emu_looseiso5);
   fChain->SetBranchAddress("hasL1Emu_tightiso5", &hasL1Emu_tightiso5, &b_hasL1Emu_tightiso5);
   fChain->SetBranchAddress("hasL1Emu_6", &hasL1Emu_6, &b_hasL1Emu_6);
   fChain->SetBranchAddress("hasL1Emu_iso6", &hasL1Emu_iso6, &b_hasL1Emu_iso6);
   fChain->SetBranchAddress("hasL1Emu_looseiso6", &hasL1Emu_looseiso6, &b_hasL1Emu_looseiso6);
   fChain->SetBranchAddress("hasL1Emu_tightiso6", &hasL1Emu_tightiso6, &b_hasL1Emu_tightiso6);
   fChain->SetBranchAddress("hasL1Emu_7", &hasL1Emu_7, &b_hasL1Emu_7);
   fChain->SetBranchAddress("hasL1Emu_iso7", &hasL1Emu_iso7, &b_hasL1Emu_iso7);
   fChain->SetBranchAddress("hasL1Emu_looseiso7", &hasL1Emu_looseiso7, &b_hasL1Emu_looseiso7);
   fChain->SetBranchAddress("hasL1Emu_tightiso7", &hasL1Emu_tightiso7, &b_hasL1Emu_tightiso7);
   fChain->SetBranchAddress("hasL1Emu_8", &hasL1Emu_8, &b_hasL1Emu_8);
   fChain->SetBranchAddress("hasL1Emu_iso8", &hasL1Emu_iso8, &b_hasL1Emu_iso8);
   fChain->SetBranchAddress("hasL1Emu_looseiso8", &hasL1Emu_looseiso8, &b_hasL1Emu_looseiso8);
   fChain->SetBranchAddress("hasL1Emu_tightiso8", &hasL1Emu_tightiso8, &b_hasL1Emu_tightiso8);
   fChain->SetBranchAddress("hasL1Emu_9", &hasL1Emu_9, &b_hasL1Emu_9);
   fChain->SetBranchAddress("hasL1Emu_iso9", &hasL1Emu_iso9, &b_hasL1Emu_iso9);
   fChain->SetBranchAddress("hasL1Emu_looseiso9", &hasL1Emu_looseiso9, &b_hasL1Emu_looseiso9);
   fChain->SetBranchAddress("hasL1Emu_tightiso9", &hasL1Emu_tightiso9, &b_hasL1Emu_tightiso9);
   fChain->SetBranchAddress("hasL1Emu_10", &hasL1Emu_10, &b_hasL1Emu_10);
   fChain->SetBranchAddress("hasL1Emu_iso10", &hasL1Emu_iso10, &b_hasL1Emu_iso10);
   fChain->SetBranchAddress("hasL1Emu_looseiso10", &hasL1Emu_looseiso10, &b_hasL1Emu_looseiso10);
   fChain->SetBranchAddress("hasL1Emu_tightiso10", &hasL1Emu_tightiso10, &b_hasL1Emu_tightiso10);
   fChain->SetBranchAddress("hasL1Emu_11", &hasL1Emu_11, &b_hasL1Emu_11);
   fChain->SetBranchAddress("hasL1Emu_iso11", &hasL1Emu_iso11, &b_hasL1Emu_iso11);
   fChain->SetBranchAddress("hasL1Emu_looseiso11", &hasL1Emu_looseiso11, &b_hasL1Emu_looseiso11);
   fChain->SetBranchAddress("hasL1Emu_tightiso11", &hasL1Emu_tightiso11, &b_hasL1Emu_tightiso11);
   fChain->SetBranchAddress("hasL1Emu_12", &hasL1Emu_12, &b_hasL1Emu_12);
   fChain->SetBranchAddress("hasL1Emu_iso12", &hasL1Emu_iso12, &b_hasL1Emu_iso12);
   fChain->SetBranchAddress("hasL1Emu_looseiso12", &hasL1Emu_looseiso12, &b_hasL1Emu_looseiso12);
   fChain->SetBranchAddress("hasL1Emu_tightiso12", &hasL1Emu_tightiso12, &b_hasL1Emu_tightiso12);
   fChain->SetBranchAddress("hasL1Emu_13", &hasL1Emu_13, &b_hasL1Emu_13);
   fChain->SetBranchAddress("hasL1Emu_iso13", &hasL1Emu_iso13, &b_hasL1Emu_iso13);
   fChain->SetBranchAddress("hasL1Emu_looseiso13", &hasL1Emu_looseiso13, &b_hasL1Emu_looseiso13);
   fChain->SetBranchAddress("hasL1Emu_tightiso13", &hasL1Emu_tightiso13, &b_hasL1Emu_tightiso13);
   fChain->SetBranchAddress("hasL1Emu_14", &hasL1Emu_14, &b_hasL1Emu_14);
   fChain->SetBranchAddress("hasL1Emu_iso14", &hasL1Emu_iso14, &b_hasL1Emu_iso14);
   fChain->SetBranchAddress("hasL1Emu_looseiso14", &hasL1Emu_looseiso14, &b_hasL1Emu_looseiso14);
   fChain->SetBranchAddress("hasL1Emu_tightiso14", &hasL1Emu_tightiso14, &b_hasL1Emu_tightiso14);
   fChain->SetBranchAddress("hasL1Emu_15", &hasL1Emu_15, &b_hasL1Emu_15);
   fChain->SetBranchAddress("hasL1Emu_iso15", &hasL1Emu_iso15, &b_hasL1Emu_iso15);
   fChain->SetBranchAddress("hasL1Emu_looseiso15", &hasL1Emu_looseiso15, &b_hasL1Emu_looseiso15);
   fChain->SetBranchAddress("hasL1Emu_tightiso15", &hasL1Emu_tightiso15, &b_hasL1Emu_tightiso15);
   fChain->SetBranchAddress("hasL1Emu_16", &hasL1Emu_16, &b_hasL1Emu_16);
   fChain->SetBranchAddress("hasL1Emu_iso16", &hasL1Emu_iso16, &b_hasL1Emu_iso16);
   fChain->SetBranchAddress("hasL1Emu_looseiso16", &hasL1Emu_looseiso16, &b_hasL1Emu_looseiso16);
   fChain->SetBranchAddress("hasL1Emu_tightiso16", &hasL1Emu_tightiso16, &b_hasL1Emu_tightiso16);
   fChain->SetBranchAddress("hasL1Emu_17", &hasL1Emu_17, &b_hasL1Emu_17);
   fChain->SetBranchAddress("hasL1Emu_iso17", &hasL1Emu_iso17, &b_hasL1Emu_iso17);
   fChain->SetBranchAddress("hasL1Emu_looseiso17", &hasL1Emu_looseiso17, &b_hasL1Emu_looseiso17);
   fChain->SetBranchAddress("hasL1Emu_tightiso17", &hasL1Emu_tightiso17, &b_hasL1Emu_tightiso17);
   fChain->SetBranchAddress("hasL1Emu_18", &hasL1Emu_18, &b_hasL1Emu_18);
   fChain->SetBranchAddress("hasL1Emu_iso18", &hasL1Emu_iso18, &b_hasL1Emu_iso18);
   fChain->SetBranchAddress("hasL1Emu_looseiso18", &hasL1Emu_looseiso18, &b_hasL1Emu_looseiso18);
   fChain->SetBranchAddress("hasL1Emu_tightiso18", &hasL1Emu_tightiso18, &b_hasL1Emu_tightiso18);
   fChain->SetBranchAddress("hasL1Emu_19", &hasL1Emu_19, &b_hasL1Emu_19);
   fChain->SetBranchAddress("hasL1Emu_iso19", &hasL1Emu_iso19, &b_hasL1Emu_iso19);
   fChain->SetBranchAddress("hasL1Emu_looseiso19", &hasL1Emu_looseiso19, &b_hasL1Emu_looseiso19);
   fChain->SetBranchAddress("hasL1Emu_tightiso19", &hasL1Emu_tightiso19, &b_hasL1Emu_tightiso19);
   fChain->SetBranchAddress("hasL1Emu_20", &hasL1Emu_20, &b_hasL1Emu_20);
   fChain->SetBranchAddress("hasL1Emu_iso20", &hasL1Emu_iso20, &b_hasL1Emu_iso20);
   fChain->SetBranchAddress("hasL1Emu_looseiso20", &hasL1Emu_looseiso20, &b_hasL1Emu_looseiso20);
   fChain->SetBranchAddress("hasL1Emu_tightiso20", &hasL1Emu_tightiso20, &b_hasL1Emu_tightiso20);
   fChain->SetBranchAddress("hasL1Emu_21", &hasL1Emu_21, &b_hasL1Emu_21);
   fChain->SetBranchAddress("hasL1Emu_iso21", &hasL1Emu_iso21, &b_hasL1Emu_iso21);
   fChain->SetBranchAddress("hasL1Emu_looseiso21", &hasL1Emu_looseiso21, &b_hasL1Emu_looseiso21);
   fChain->SetBranchAddress("hasL1Emu_tightiso21", &hasL1Emu_tightiso21, &b_hasL1Emu_tightiso21);
   fChain->SetBranchAddress("hasL1Emu_22", &hasL1Emu_22, &b_hasL1Emu_22);
   fChain->SetBranchAddress("hasL1Emu_iso22", &hasL1Emu_iso22, &b_hasL1Emu_iso22);
   fChain->SetBranchAddress("hasL1Emu_looseiso22", &hasL1Emu_looseiso22, &b_hasL1Emu_looseiso22);
   fChain->SetBranchAddress("hasL1Emu_tightiso22", &hasL1Emu_tightiso22, &b_hasL1Emu_tightiso22);
   fChain->SetBranchAddress("hasL1Emu_23", &hasL1Emu_23, &b_hasL1Emu_23);
   fChain->SetBranchAddress("hasL1Emu_iso23", &hasL1Emu_iso23, &b_hasL1Emu_iso23);
   fChain->SetBranchAddress("hasL1Emu_looseiso23", &hasL1Emu_looseiso23, &b_hasL1Emu_looseiso23);
   fChain->SetBranchAddress("hasL1Emu_tightiso23", &hasL1Emu_tightiso23, &b_hasL1Emu_tightiso23);
   fChain->SetBranchAddress("hasL1Emu_24", &hasL1Emu_24, &b_hasL1Emu_24);
   fChain->SetBranchAddress("hasL1Emu_iso24", &hasL1Emu_iso24, &b_hasL1Emu_iso24);
   fChain->SetBranchAddress("hasL1Emu_looseiso24", &hasL1Emu_looseiso24, &b_hasL1Emu_looseiso24);
   fChain->SetBranchAddress("hasL1Emu_tightiso24", &hasL1Emu_tightiso24, &b_hasL1Emu_tightiso24);
   fChain->SetBranchAddress("hasL1Emu_25", &hasL1Emu_25, &b_hasL1Emu_25);
   fChain->SetBranchAddress("hasL1Emu_iso25", &hasL1Emu_iso25, &b_hasL1Emu_iso25);
   fChain->SetBranchAddress("hasL1Emu_looseiso25", &hasL1Emu_looseiso25, &b_hasL1Emu_looseiso25);
   fChain->SetBranchAddress("hasL1Emu_tightiso25", &hasL1Emu_tightiso25, &b_hasL1Emu_tightiso25);
   fChain->SetBranchAddress("hasL1Emu_26", &hasL1Emu_26, &b_hasL1Emu_26);
   fChain->SetBranchAddress("hasL1Emu_iso26", &hasL1Emu_iso26, &b_hasL1Emu_iso26);
   fChain->SetBranchAddress("hasL1Emu_looseiso26", &hasL1Emu_looseiso26, &b_hasL1Emu_looseiso26);
   fChain->SetBranchAddress("hasL1Emu_tightiso26", &hasL1Emu_tightiso26, &b_hasL1Emu_tightiso26);
   fChain->SetBranchAddress("hasL1Emu_27", &hasL1Emu_27, &b_hasL1Emu_27);
   fChain->SetBranchAddress("hasL1Emu_iso27", &hasL1Emu_iso27, &b_hasL1Emu_iso27);
   fChain->SetBranchAddress("hasL1Emu_looseiso27", &hasL1Emu_looseiso27, &b_hasL1Emu_looseiso27);
   fChain->SetBranchAddress("hasL1Emu_tightiso27", &hasL1Emu_tightiso27, &b_hasL1Emu_tightiso27);
   fChain->SetBranchAddress("hasL1Emu_28", &hasL1Emu_28, &b_hasL1Emu_28);
   fChain->SetBranchAddress("hasL1Emu_iso28", &hasL1Emu_iso28, &b_hasL1Emu_iso28);
   fChain->SetBranchAddress("hasL1Emu_looseiso28", &hasL1Emu_looseiso28, &b_hasL1Emu_looseiso28);
   fChain->SetBranchAddress("hasL1Emu_tightiso28", &hasL1Emu_tightiso28, &b_hasL1Emu_tightiso28);
   fChain->SetBranchAddress("hasL1Emu_29", &hasL1Emu_29, &b_hasL1Emu_29);
   fChain->SetBranchAddress("hasL1Emu_iso29", &hasL1Emu_iso29, &b_hasL1Emu_iso29);
   fChain->SetBranchAddress("hasL1Emu_looseiso29", &hasL1Emu_looseiso29, &b_hasL1Emu_looseiso29);
   fChain->SetBranchAddress("hasL1Emu_tightiso29", &hasL1Emu_tightiso29, &b_hasL1Emu_tightiso29);
   fChain->SetBranchAddress("hasL1Emu_30", &hasL1Emu_30, &b_hasL1Emu_30);
   fChain->SetBranchAddress("hasL1Emu_iso30", &hasL1Emu_iso30, &b_hasL1Emu_iso30);
   fChain->SetBranchAddress("hasL1Emu_looseiso30", &hasL1Emu_looseiso30, &b_hasL1Emu_looseiso30);
   fChain->SetBranchAddress("hasL1Emu_tightiso30", &hasL1Emu_tightiso30, &b_hasL1Emu_tightiso30);
   fChain->SetBranchAddress("hasL1Emu_31", &hasL1Emu_31, &b_hasL1Emu_31);
   fChain->SetBranchAddress("hasL1Emu_iso31", &hasL1Emu_iso31, &b_hasL1Emu_iso31);
   fChain->SetBranchAddress("hasL1Emu_looseiso31", &hasL1Emu_looseiso31, &b_hasL1Emu_looseiso31);
   fChain->SetBranchAddress("hasL1Emu_tightiso31", &hasL1Emu_tightiso31, &b_hasL1Emu_tightiso31);
   fChain->SetBranchAddress("hasL1Emu_32", &hasL1Emu_32, &b_hasL1Emu_32);
   fChain->SetBranchAddress("hasL1Emu_iso32", &hasL1Emu_iso32, &b_hasL1Emu_iso32);
   fChain->SetBranchAddress("hasL1Emu_looseiso32", &hasL1Emu_looseiso32, &b_hasL1Emu_looseiso32);
   fChain->SetBranchAddress("hasL1Emu_tightiso32", &hasL1Emu_tightiso32, &b_hasL1Emu_tightiso32);
   fChain->SetBranchAddress("hasL1Emu_33", &hasL1Emu_33, &b_hasL1Emu_33);
   fChain->SetBranchAddress("hasL1Emu_iso33", &hasL1Emu_iso33, &b_hasL1Emu_iso33);
   fChain->SetBranchAddress("hasL1Emu_looseiso33", &hasL1Emu_looseiso33, &b_hasL1Emu_looseiso33);
   fChain->SetBranchAddress("hasL1Emu_tightiso33", &hasL1Emu_tightiso33, &b_hasL1Emu_tightiso33);
   fChain->SetBranchAddress("hasL1Emu_34", &hasL1Emu_34, &b_hasL1Emu_34);
   fChain->SetBranchAddress("hasL1Emu_iso34", &hasL1Emu_iso34, &b_hasL1Emu_iso34);
   fChain->SetBranchAddress("hasL1Emu_looseiso34", &hasL1Emu_looseiso34, &b_hasL1Emu_looseiso34);
   fChain->SetBranchAddress("hasL1Emu_tightiso34", &hasL1Emu_tightiso34, &b_hasL1Emu_tightiso34);
   fChain->SetBranchAddress("hasL1Emu_35", &hasL1Emu_35, &b_hasL1Emu_35);
   fChain->SetBranchAddress("hasL1Emu_iso35", &hasL1Emu_iso35, &b_hasL1Emu_iso35);
   fChain->SetBranchAddress("hasL1Emu_looseiso35", &hasL1Emu_looseiso35, &b_hasL1Emu_looseiso35);
   fChain->SetBranchAddress("hasL1Emu_tightiso35", &hasL1Emu_tightiso35, &b_hasL1Emu_tightiso35);
   fChain->SetBranchAddress("hasL1Emu_36", &hasL1Emu_36, &b_hasL1Emu_36);
   fChain->SetBranchAddress("hasL1Emu_iso36", &hasL1Emu_iso36, &b_hasL1Emu_iso36);
   fChain->SetBranchAddress("hasL1Emu_looseiso36", &hasL1Emu_looseiso36, &b_hasL1Emu_looseiso36);
   fChain->SetBranchAddress("hasL1Emu_tightiso36", &hasL1Emu_tightiso36, &b_hasL1Emu_tightiso36);
   fChain->SetBranchAddress("hasL1Emu_37", &hasL1Emu_37, &b_hasL1Emu_37);
   fChain->SetBranchAddress("hasL1Emu_iso37", &hasL1Emu_iso37, &b_hasL1Emu_iso37);
   fChain->SetBranchAddress("hasL1Emu_looseiso37", &hasL1Emu_looseiso37, &b_hasL1Emu_looseiso37);
   fChain->SetBranchAddress("hasL1Emu_tightiso37", &hasL1Emu_tightiso37, &b_hasL1Emu_tightiso37);
   fChain->SetBranchAddress("hasL1Emu_38", &hasL1Emu_38, &b_hasL1Emu_38);
   fChain->SetBranchAddress("hasL1Emu_iso38", &hasL1Emu_iso38, &b_hasL1Emu_iso38);
   fChain->SetBranchAddress("hasL1Emu_looseiso38", &hasL1Emu_looseiso38, &b_hasL1Emu_looseiso38);
   fChain->SetBranchAddress("hasL1Emu_tightiso38", &hasL1Emu_tightiso38, &b_hasL1Emu_tightiso38);
   fChain->SetBranchAddress("hasL1Emu_39", &hasL1Emu_39, &b_hasL1Emu_39);
   fChain->SetBranchAddress("hasL1Emu_iso39", &hasL1Emu_iso39, &b_hasL1Emu_iso39);
   fChain->SetBranchAddress("hasL1Emu_looseiso39", &hasL1Emu_looseiso39, &b_hasL1Emu_looseiso39);
   fChain->SetBranchAddress("hasL1Emu_tightiso39", &hasL1Emu_tightiso39, &b_hasL1Emu_tightiso39);
   fChain->SetBranchAddress("hasL1Emu_40", &hasL1Emu_40, &b_hasL1Emu_40);
   fChain->SetBranchAddress("hasL1Emu_iso40", &hasL1Emu_iso40, &b_hasL1Emu_iso40);
   fChain->SetBranchAddress("hasL1Emu_looseiso40", &hasL1Emu_looseiso40, &b_hasL1Emu_looseiso40);
   fChain->SetBranchAddress("hasL1Emu_tightiso40", &hasL1Emu_tightiso40, &b_hasL1Emu_tightiso40);
   fChain->SetBranchAddress("hasL1Emu_41", &hasL1Emu_41, &b_hasL1Emu_41);
   fChain->SetBranchAddress("hasL1Emu_iso41", &hasL1Emu_iso41, &b_hasL1Emu_iso41);
   fChain->SetBranchAddress("hasL1Emu_looseiso41", &hasL1Emu_looseiso41, &b_hasL1Emu_looseiso41);
   fChain->SetBranchAddress("hasL1Emu_tightiso41", &hasL1Emu_tightiso41, &b_hasL1Emu_tightiso41);
   fChain->SetBranchAddress("hasL1Emu_42", &hasL1Emu_42, &b_hasL1Emu_42);
   fChain->SetBranchAddress("hasL1Emu_iso42", &hasL1Emu_iso42, &b_hasL1Emu_iso42);
   fChain->SetBranchAddress("hasL1Emu_looseiso42", &hasL1Emu_looseiso42, &b_hasL1Emu_looseiso42);
   fChain->SetBranchAddress("hasL1Emu_tightiso42", &hasL1Emu_tightiso42, &b_hasL1Emu_tightiso42);
   fChain->SetBranchAddress("hasL1Emu_43", &hasL1Emu_43, &b_hasL1Emu_43);
   fChain->SetBranchAddress("hasL1Emu_iso43", &hasL1Emu_iso43, &b_hasL1Emu_iso43);
   fChain->SetBranchAddress("hasL1Emu_looseiso43", &hasL1Emu_looseiso43, &b_hasL1Emu_looseiso43);
   fChain->SetBranchAddress("hasL1Emu_tightiso43", &hasL1Emu_tightiso43, &b_hasL1Emu_tightiso43);
   fChain->SetBranchAddress("hasL1Emu_44", &hasL1Emu_44, &b_hasL1Emu_44);
   fChain->SetBranchAddress("hasL1Emu_iso44", &hasL1Emu_iso44, &b_hasL1Emu_iso44);
   fChain->SetBranchAddress("hasL1Emu_looseiso44", &hasL1Emu_looseiso44, &b_hasL1Emu_looseiso44);
   fChain->SetBranchAddress("hasL1Emu_tightiso44", &hasL1Emu_tightiso44, &b_hasL1Emu_tightiso44);
   fChain->SetBranchAddress("hasL1Emu_45", &hasL1Emu_45, &b_hasL1Emu_45);
   fChain->SetBranchAddress("hasL1Emu_iso45", &hasL1Emu_iso45, &b_hasL1Emu_iso45);
   fChain->SetBranchAddress("hasL1Emu_looseiso45", &hasL1Emu_looseiso45, &b_hasL1Emu_looseiso45);
   fChain->SetBranchAddress("hasL1Emu_tightiso45", &hasL1Emu_tightiso45, &b_hasL1Emu_tightiso45);
   fChain->SetBranchAddress("hasL1Emu_46", &hasL1Emu_46, &b_hasL1Emu_46);
   fChain->SetBranchAddress("hasL1Emu_iso46", &hasL1Emu_iso46, &b_hasL1Emu_iso46);
   fChain->SetBranchAddress("hasL1Emu_looseiso46", &hasL1Emu_looseiso46, &b_hasL1Emu_looseiso46);
   fChain->SetBranchAddress("hasL1Emu_tightiso46", &hasL1Emu_tightiso46, &b_hasL1Emu_tightiso46);
   fChain->SetBranchAddress("hasL1Emu_47", &hasL1Emu_47, &b_hasL1Emu_47);
   fChain->SetBranchAddress("hasL1Emu_iso47", &hasL1Emu_iso47, &b_hasL1Emu_iso47);
   fChain->SetBranchAddress("hasL1Emu_looseiso47", &hasL1Emu_looseiso47, &b_hasL1Emu_looseiso47);
   fChain->SetBranchAddress("hasL1Emu_tightiso47", &hasL1Emu_tightiso47, &b_hasL1Emu_tightiso47);
   fChain->SetBranchAddress("hasL1Emu_48", &hasL1Emu_48, &b_hasL1Emu_48);
   fChain->SetBranchAddress("hasL1Emu_iso48", &hasL1Emu_iso48, &b_hasL1Emu_iso48);
   fChain->SetBranchAddress("hasL1Emu_looseiso48", &hasL1Emu_looseiso48, &b_hasL1Emu_looseiso48);
   fChain->SetBranchAddress("hasL1Emu_tightiso48", &hasL1Emu_tightiso48, &b_hasL1Emu_tightiso48);
   fChain->SetBranchAddress("hasL1Emu_49", &hasL1Emu_49, &b_hasL1Emu_49);
   fChain->SetBranchAddress("hasL1Emu_iso49", &hasL1Emu_iso49, &b_hasL1Emu_iso49);
   fChain->SetBranchAddress("hasL1Emu_looseiso49", &hasL1Emu_looseiso49, &b_hasL1Emu_looseiso49);
   fChain->SetBranchAddress("hasL1Emu_tightiso49", &hasL1Emu_tightiso49, &b_hasL1Emu_tightiso49);
   fChain->SetBranchAddress("hasL1Emu_50", &hasL1Emu_50, &b_hasL1Emu_50);
   fChain->SetBranchAddress("hasL1Emu_iso50", &hasL1Emu_iso50, &b_hasL1Emu_iso50);
   fChain->SetBranchAddress("hasL1Emu_looseiso50", &hasL1Emu_looseiso50, &b_hasL1Emu_looseiso50);
   fChain->SetBranchAddress("hasL1Emu_tightiso50", &hasL1Emu_tightiso50, &b_hasL1Emu_tightiso50);
   fChain->SetBranchAddress("hasL1Emu_51", &hasL1Emu_51, &b_hasL1Emu_51);
   fChain->SetBranchAddress("hasL1Emu_iso51", &hasL1Emu_iso51, &b_hasL1Emu_iso51);
   fChain->SetBranchAddress("hasL1Emu_looseiso51", &hasL1Emu_looseiso51, &b_hasL1Emu_looseiso51);
   fChain->SetBranchAddress("hasL1Emu_tightiso51", &hasL1Emu_tightiso51, &b_hasL1Emu_tightiso51);
   fChain->SetBranchAddress("hasL1Emu_52", &hasL1Emu_52, &b_hasL1Emu_52);
   fChain->SetBranchAddress("hasL1Emu_iso52", &hasL1Emu_iso52, &b_hasL1Emu_iso52);
   fChain->SetBranchAddress("hasL1Emu_looseiso52", &hasL1Emu_looseiso52, &b_hasL1Emu_looseiso52);
   fChain->SetBranchAddress("hasL1Emu_tightiso52", &hasL1Emu_tightiso52, &b_hasL1Emu_tightiso52);
   fChain->SetBranchAddress("hasL1Emu_53", &hasL1Emu_53, &b_hasL1Emu_53);
   fChain->SetBranchAddress("hasL1Emu_iso53", &hasL1Emu_iso53, &b_hasL1Emu_iso53);
   fChain->SetBranchAddress("hasL1Emu_looseiso53", &hasL1Emu_looseiso53, &b_hasL1Emu_looseiso53);
   fChain->SetBranchAddress("hasL1Emu_tightiso53", &hasL1Emu_tightiso53, &b_hasL1Emu_tightiso53);
   fChain->SetBranchAddress("hasL1Emu_54", &hasL1Emu_54, &b_hasL1Emu_54);
   fChain->SetBranchAddress("hasL1Emu_iso54", &hasL1Emu_iso54, &b_hasL1Emu_iso54);
   fChain->SetBranchAddress("hasL1Emu_looseiso54", &hasL1Emu_looseiso54, &b_hasL1Emu_looseiso54);
   fChain->SetBranchAddress("hasL1Emu_tightiso54", &hasL1Emu_tightiso54, &b_hasL1Emu_tightiso54);
   fChain->SetBranchAddress("hasL1Emu_55", &hasL1Emu_55, &b_hasL1Emu_55);
   fChain->SetBranchAddress("hasL1Emu_iso55", &hasL1Emu_iso55, &b_hasL1Emu_iso55);
   fChain->SetBranchAddress("hasL1Emu_looseiso55", &hasL1Emu_looseiso55, &b_hasL1Emu_looseiso55);
   fChain->SetBranchAddress("hasL1Emu_tightiso55", &hasL1Emu_tightiso55, &b_hasL1Emu_tightiso55);
   fChain->SetBranchAddress("hasL1Emu_56", &hasL1Emu_56, &b_hasL1Emu_56);
   fChain->SetBranchAddress("hasL1Emu_iso56", &hasL1Emu_iso56, &b_hasL1Emu_iso56);
   fChain->SetBranchAddress("hasL1Emu_looseiso56", &hasL1Emu_looseiso56, &b_hasL1Emu_looseiso56);
   fChain->SetBranchAddress("hasL1Emu_tightiso56", &hasL1Emu_tightiso56, &b_hasL1Emu_tightiso56);
   fChain->SetBranchAddress("hasL1Emu_57", &hasL1Emu_57, &b_hasL1Emu_57);
   fChain->SetBranchAddress("hasL1Emu_iso57", &hasL1Emu_iso57, &b_hasL1Emu_iso57);
   fChain->SetBranchAddress("hasL1Emu_looseiso57", &hasL1Emu_looseiso57, &b_hasL1Emu_looseiso57);
   fChain->SetBranchAddress("hasL1Emu_tightiso57", &hasL1Emu_tightiso57, &b_hasL1Emu_tightiso57);
   fChain->SetBranchAddress("hasL1Emu_58", &hasL1Emu_58, &b_hasL1Emu_58);
   fChain->SetBranchAddress("hasL1Emu_iso58", &hasL1Emu_iso58, &b_hasL1Emu_iso58);
   fChain->SetBranchAddress("hasL1Emu_looseiso58", &hasL1Emu_looseiso58, &b_hasL1Emu_looseiso58);
   fChain->SetBranchAddress("hasL1Emu_tightiso58", &hasL1Emu_tightiso58, &b_hasL1Emu_tightiso58);
   fChain->SetBranchAddress("hasL1Emu_59", &hasL1Emu_59, &b_hasL1Emu_59);
   fChain->SetBranchAddress("hasL1Emu_iso59", &hasL1Emu_iso59, &b_hasL1Emu_iso59);
   fChain->SetBranchAddress("hasL1Emu_looseiso59", &hasL1Emu_looseiso59, &b_hasL1Emu_looseiso59);
   fChain->SetBranchAddress("hasL1Emu_tightiso59", &hasL1Emu_tightiso59, &b_hasL1Emu_tightiso59);
   fChain->SetBranchAddress("hasL1Emu_60", &hasL1Emu_60, &b_hasL1Emu_60);
   fChain->SetBranchAddress("hasL1Emu_iso60", &hasL1Emu_iso60, &b_hasL1Emu_iso60);
   fChain->SetBranchAddress("hasL1Emu_looseiso60", &hasL1Emu_looseiso60, &b_hasL1Emu_looseiso60);
   fChain->SetBranchAddress("hasL1Emu_tightiso60", &hasL1Emu_tightiso60, &b_hasL1Emu_tightiso60);
   fChain->SetBranchAddress("hasL1Emu_61", &hasL1Emu_61, &b_hasL1Emu_61);
   fChain->SetBranchAddress("hasL1Emu_iso61", &hasL1Emu_iso61, &b_hasL1Emu_iso61);
   fChain->SetBranchAddress("hasL1Emu_looseiso61", &hasL1Emu_looseiso61, &b_hasL1Emu_looseiso61);
   fChain->SetBranchAddress("hasL1Emu_tightiso61", &hasL1Emu_tightiso61, &b_hasL1Emu_tightiso61);
   fChain->SetBranchAddress("hasL1Emu_62", &hasL1Emu_62, &b_hasL1Emu_62);
   fChain->SetBranchAddress("hasL1Emu_iso62", &hasL1Emu_iso62, &b_hasL1Emu_iso62);
   fChain->SetBranchAddress("hasL1Emu_looseiso62", &hasL1Emu_looseiso62, &b_hasL1Emu_looseiso62);
   fChain->SetBranchAddress("hasL1Emu_tightiso62", &hasL1Emu_tightiso62, &b_hasL1Emu_tightiso62);
   fChain->SetBranchAddress("hasL1Emu_63", &hasL1Emu_63, &b_hasL1Emu_63);
   fChain->SetBranchAddress("hasL1Emu_iso63", &hasL1Emu_iso63, &b_hasL1Emu_iso63);
   fChain->SetBranchAddress("hasL1Emu_looseiso63", &hasL1Emu_looseiso63, &b_hasL1Emu_looseiso63);
   fChain->SetBranchAddress("hasL1Emu_tightiso63", &hasL1Emu_tightiso63, &b_hasL1Emu_tightiso63);
   fChain->SetBranchAddress("hasL1Emu_64", &hasL1Emu_64, &b_hasL1Emu_64);
   fChain->SetBranchAddress("hasL1Emu_iso64", &hasL1Emu_iso64, &b_hasL1Emu_iso64);
   fChain->SetBranchAddress("hasL1Emu_looseiso64", &hasL1Emu_looseiso64, &b_hasL1Emu_looseiso64);
   fChain->SetBranchAddress("hasL1Emu_tightiso64", &hasL1Emu_tightiso64, &b_hasL1Emu_tightiso64);
   fChain->SetBranchAddress("hasL1Emu_65", &hasL1Emu_65, &b_hasL1Emu_65);
   fChain->SetBranchAddress("hasL1Emu_iso65", &hasL1Emu_iso65, &b_hasL1Emu_iso65);
   fChain->SetBranchAddress("hasL1Emu_looseiso65", &hasL1Emu_looseiso65, &b_hasL1Emu_looseiso65);
   fChain->SetBranchAddress("hasL1Emu_tightiso65", &hasL1Emu_tightiso65, &b_hasL1Emu_tightiso65);
   fChain->SetBranchAddress("hasL1Emu_66", &hasL1Emu_66, &b_hasL1Emu_66);
   fChain->SetBranchAddress("hasL1Emu_iso66", &hasL1Emu_iso66, &b_hasL1Emu_iso66);
   fChain->SetBranchAddress("hasL1Emu_looseiso66", &hasL1Emu_looseiso66, &b_hasL1Emu_looseiso66);
   fChain->SetBranchAddress("hasL1Emu_tightiso66", &hasL1Emu_tightiso66, &b_hasL1Emu_tightiso66);
   fChain->SetBranchAddress("hasL1Emu_67", &hasL1Emu_67, &b_hasL1Emu_67);
   fChain->SetBranchAddress("hasL1Emu_iso67", &hasL1Emu_iso67, &b_hasL1Emu_iso67);
   fChain->SetBranchAddress("hasL1Emu_looseiso67", &hasL1Emu_looseiso67, &b_hasL1Emu_looseiso67);
   fChain->SetBranchAddress("hasL1Emu_tightiso67", &hasL1Emu_tightiso67, &b_hasL1Emu_tightiso67);
   fChain->SetBranchAddress("hasL1Emu_68", &hasL1Emu_68, &b_hasL1Emu_68);
   fChain->SetBranchAddress("hasL1Emu_iso68", &hasL1Emu_iso68, &b_hasL1Emu_iso68);
   fChain->SetBranchAddress("hasL1Emu_looseiso68", &hasL1Emu_looseiso68, &b_hasL1Emu_looseiso68);
   fChain->SetBranchAddress("hasL1Emu_tightiso68", &hasL1Emu_tightiso68, &b_hasL1Emu_tightiso68);
   fChain->SetBranchAddress("hasL1Emu_69", &hasL1Emu_69, &b_hasL1Emu_69);
   fChain->SetBranchAddress("hasL1Emu_iso69", &hasL1Emu_iso69, &b_hasL1Emu_iso69);
   fChain->SetBranchAddress("hasL1Emu_looseiso69", &hasL1Emu_looseiso69, &b_hasL1Emu_looseiso69);
   fChain->SetBranchAddress("hasL1Emu_tightiso69", &hasL1Emu_tightiso69, &b_hasL1Emu_tightiso69);
   fChain->SetBranchAddress("hasL1Emu_70", &hasL1Emu_70, &b_hasL1Emu_70);
   fChain->SetBranchAddress("hasL1Emu_iso70", &hasL1Emu_iso70, &b_hasL1Emu_iso70);
   fChain->SetBranchAddress("hasL1Emu_looseiso70", &hasL1Emu_looseiso70, &b_hasL1Emu_looseiso70);
   fChain->SetBranchAddress("hasL1Emu_tightiso70", &hasL1Emu_tightiso70, &b_hasL1Emu_tightiso70);
   fChain->SetBranchAddress("hasL1Emu_71", &hasL1Emu_71, &b_hasL1Emu_71);
   fChain->SetBranchAddress("hasL1Emu_iso71", &hasL1Emu_iso71, &b_hasL1Emu_iso71);
   fChain->SetBranchAddress("hasL1Emu_looseiso71", &hasL1Emu_looseiso71, &b_hasL1Emu_looseiso71);
   fChain->SetBranchAddress("hasL1Emu_tightiso71", &hasL1Emu_tightiso71, &b_hasL1Emu_tightiso71);
   fChain->SetBranchAddress("hasL1Emu_72", &hasL1Emu_72, &b_hasL1Emu_72);
   fChain->SetBranchAddress("hasL1Emu_iso72", &hasL1Emu_iso72, &b_hasL1Emu_iso72);
   fChain->SetBranchAddress("hasL1Emu_looseiso72", &hasL1Emu_looseiso72, &b_hasL1Emu_looseiso72);
   fChain->SetBranchAddress("hasL1Emu_tightiso72", &hasL1Emu_tightiso72, &b_hasL1Emu_tightiso72);
   fChain->SetBranchAddress("hasL1Emu_73", &hasL1Emu_73, &b_hasL1Emu_73);
   fChain->SetBranchAddress("hasL1Emu_iso73", &hasL1Emu_iso73, &b_hasL1Emu_iso73);
   fChain->SetBranchAddress("hasL1Emu_looseiso73", &hasL1Emu_looseiso73, &b_hasL1Emu_looseiso73);
   fChain->SetBranchAddress("hasL1Emu_tightiso73", &hasL1Emu_tightiso73, &b_hasL1Emu_tightiso73);
   fChain->SetBranchAddress("hasL1Emu_74", &hasL1Emu_74, &b_hasL1Emu_74);
   fChain->SetBranchAddress("hasL1Emu_iso74", &hasL1Emu_iso74, &b_hasL1Emu_iso74);
   fChain->SetBranchAddress("hasL1Emu_looseiso74", &hasL1Emu_looseiso74, &b_hasL1Emu_looseiso74);
   fChain->SetBranchAddress("hasL1Emu_tightiso74", &hasL1Emu_tightiso74, &b_hasL1Emu_tightiso74);
   fChain->SetBranchAddress("hasL1Emu_75", &hasL1Emu_75, &b_hasL1Emu_75);
   fChain->SetBranchAddress("hasL1Emu_iso75", &hasL1Emu_iso75, &b_hasL1Emu_iso75);
   fChain->SetBranchAddress("hasL1Emu_looseiso75", &hasL1Emu_looseiso75, &b_hasL1Emu_looseiso75);
   fChain->SetBranchAddress("hasL1Emu_tightiso75", &hasL1Emu_tightiso75, &b_hasL1Emu_tightiso75);
   fChain->SetBranchAddress("hasL1Emu_76", &hasL1Emu_76, &b_hasL1Emu_76);
   fChain->SetBranchAddress("hasL1Emu_iso76", &hasL1Emu_iso76, &b_hasL1Emu_iso76);
   fChain->SetBranchAddress("hasL1Emu_looseiso76", &hasL1Emu_looseiso76, &b_hasL1Emu_looseiso76);
   fChain->SetBranchAddress("hasL1Emu_tightiso76", &hasL1Emu_tightiso76, &b_hasL1Emu_tightiso76);
   fChain->SetBranchAddress("hasL1Emu_77", &hasL1Emu_77, &b_hasL1Emu_77);
   fChain->SetBranchAddress("hasL1Emu_iso77", &hasL1Emu_iso77, &b_hasL1Emu_iso77);
   fChain->SetBranchAddress("hasL1Emu_looseiso77", &hasL1Emu_looseiso77, &b_hasL1Emu_looseiso77);
   fChain->SetBranchAddress("hasL1Emu_tightiso77", &hasL1Emu_tightiso77, &b_hasL1Emu_tightiso77);
   fChain->SetBranchAddress("hasL1Emu_78", &hasL1Emu_78, &b_hasL1Emu_78);
   fChain->SetBranchAddress("hasL1Emu_iso78", &hasL1Emu_iso78, &b_hasL1Emu_iso78);
   fChain->SetBranchAddress("hasL1Emu_looseiso78", &hasL1Emu_looseiso78, &b_hasL1Emu_looseiso78);
   fChain->SetBranchAddress("hasL1Emu_tightiso78", &hasL1Emu_tightiso78, &b_hasL1Emu_tightiso78);
   fChain->SetBranchAddress("hasL1Emu_79", &hasL1Emu_79, &b_hasL1Emu_79);
   fChain->SetBranchAddress("hasL1Emu_iso79", &hasL1Emu_iso79, &b_hasL1Emu_iso79);
   fChain->SetBranchAddress("hasL1Emu_looseiso79", &hasL1Emu_looseiso79, &b_hasL1Emu_looseiso79);
   fChain->SetBranchAddress("hasL1Emu_tightiso79", &hasL1Emu_tightiso79, &b_hasL1Emu_tightiso79);
   fChain->SetBranchAddress("hasL1Emu_80", &hasL1Emu_80, &b_hasL1Emu_80);
   fChain->SetBranchAddress("hasL1Emu_iso80", &hasL1Emu_iso80, &b_hasL1Emu_iso80);
   fChain->SetBranchAddress("hasL1Emu_looseiso80", &hasL1Emu_looseiso80, &b_hasL1Emu_looseiso80);
   fChain->SetBranchAddress("hasL1Emu_tightiso80", &hasL1Emu_tightiso80, &b_hasL1Emu_tightiso80);
   fChain->SetBranchAddress("hasL1Emu_81", &hasL1Emu_81, &b_hasL1Emu_81);
   fChain->SetBranchAddress("hasL1Emu_iso81", &hasL1Emu_iso81, &b_hasL1Emu_iso81);
   fChain->SetBranchAddress("hasL1Emu_looseiso81", &hasL1Emu_looseiso81, &b_hasL1Emu_looseiso81);
   fChain->SetBranchAddress("hasL1Emu_tightiso81", &hasL1Emu_tightiso81, &b_hasL1Emu_tightiso81);
   fChain->SetBranchAddress("hasL1Emu_82", &hasL1Emu_82, &b_hasL1Emu_82);
   fChain->SetBranchAddress("hasL1Emu_iso82", &hasL1Emu_iso82, &b_hasL1Emu_iso82);
   fChain->SetBranchAddress("hasL1Emu_looseiso82", &hasL1Emu_looseiso82, &b_hasL1Emu_looseiso82);
   fChain->SetBranchAddress("hasL1Emu_tightiso82", &hasL1Emu_tightiso82, &b_hasL1Emu_tightiso82);
   fChain->SetBranchAddress("hasL1Emu_83", &hasL1Emu_83, &b_hasL1Emu_83);
   fChain->SetBranchAddress("hasL1Emu_iso83", &hasL1Emu_iso83, &b_hasL1Emu_iso83);
   fChain->SetBranchAddress("hasL1Emu_looseiso83", &hasL1Emu_looseiso83, &b_hasL1Emu_looseiso83);
   fChain->SetBranchAddress("hasL1Emu_tightiso83", &hasL1Emu_tightiso83, &b_hasL1Emu_tightiso83);
   fChain->SetBranchAddress("hasL1Emu_84", &hasL1Emu_84, &b_hasL1Emu_84);
   fChain->SetBranchAddress("hasL1Emu_iso84", &hasL1Emu_iso84, &b_hasL1Emu_iso84);
   fChain->SetBranchAddress("hasL1Emu_looseiso84", &hasL1Emu_looseiso84, &b_hasL1Emu_looseiso84);
   fChain->SetBranchAddress("hasL1Emu_tightiso84", &hasL1Emu_tightiso84, &b_hasL1Emu_tightiso84);
   fChain->SetBranchAddress("hasL1Emu_85", &hasL1Emu_85, &b_hasL1Emu_85);
   fChain->SetBranchAddress("hasL1Emu_iso85", &hasL1Emu_iso85, &b_hasL1Emu_iso85);
   fChain->SetBranchAddress("hasL1Emu_looseiso85", &hasL1Emu_looseiso85, &b_hasL1Emu_looseiso85);
   fChain->SetBranchAddress("hasL1Emu_tightiso85", &hasL1Emu_tightiso85, &b_hasL1Emu_tightiso85);
   fChain->SetBranchAddress("hasL1Emu_86", &hasL1Emu_86, &b_hasL1Emu_86);
   fChain->SetBranchAddress("hasL1Emu_iso86", &hasL1Emu_iso86, &b_hasL1Emu_iso86);
   fChain->SetBranchAddress("hasL1Emu_looseiso86", &hasL1Emu_looseiso86, &b_hasL1Emu_looseiso86);
   fChain->SetBranchAddress("hasL1Emu_tightiso86", &hasL1Emu_tightiso86, &b_hasL1Emu_tightiso86);
   fChain->SetBranchAddress("hasL1Emu_87", &hasL1Emu_87, &b_hasL1Emu_87);
   fChain->SetBranchAddress("hasL1Emu_iso87", &hasL1Emu_iso87, &b_hasL1Emu_iso87);
   fChain->SetBranchAddress("hasL1Emu_looseiso87", &hasL1Emu_looseiso87, &b_hasL1Emu_looseiso87);
   fChain->SetBranchAddress("hasL1Emu_tightiso87", &hasL1Emu_tightiso87, &b_hasL1Emu_tightiso87);
   fChain->SetBranchAddress("hasL1Emu_88", &hasL1Emu_88, &b_hasL1Emu_88);
   fChain->SetBranchAddress("hasL1Emu_iso88", &hasL1Emu_iso88, &b_hasL1Emu_iso88);
   fChain->SetBranchAddress("hasL1Emu_looseiso88", &hasL1Emu_looseiso88, &b_hasL1Emu_looseiso88);
   fChain->SetBranchAddress("hasL1Emu_tightiso88", &hasL1Emu_tightiso88, &b_hasL1Emu_tightiso88);
   fChain->SetBranchAddress("hasL1Emu_89", &hasL1Emu_89, &b_hasL1Emu_89);
   fChain->SetBranchAddress("hasL1Emu_iso89", &hasL1Emu_iso89, &b_hasL1Emu_iso89);
   fChain->SetBranchAddress("hasL1Emu_looseiso89", &hasL1Emu_looseiso89, &b_hasL1Emu_looseiso89);
   fChain->SetBranchAddress("hasL1Emu_tightiso89", &hasL1Emu_tightiso89, &b_hasL1Emu_tightiso89);
   fChain->SetBranchAddress("hasL1Emu_90", &hasL1Emu_90, &b_hasL1Emu_90);
   fChain->SetBranchAddress("hasL1Emu_iso90", &hasL1Emu_iso90, &b_hasL1Emu_iso90);
   fChain->SetBranchAddress("hasL1Emu_looseiso90", &hasL1Emu_looseiso90, &b_hasL1Emu_looseiso90);
   fChain->SetBranchAddress("hasL1Emu_tightiso90", &hasL1Emu_tightiso90, &b_hasL1Emu_tightiso90);
   fChain->SetBranchAddress("hasL1Emu_91", &hasL1Emu_91, &b_hasL1Emu_91);
   fChain->SetBranchAddress("hasL1Emu_iso91", &hasL1Emu_iso91, &b_hasL1Emu_iso91);
   fChain->SetBranchAddress("hasL1Emu_looseiso91", &hasL1Emu_looseiso91, &b_hasL1Emu_looseiso91);
   fChain->SetBranchAddress("hasL1Emu_tightiso91", &hasL1Emu_tightiso91, &b_hasL1Emu_tightiso91);
   fChain->SetBranchAddress("hasL1Emu_92", &hasL1Emu_92, &b_hasL1Emu_92);
   fChain->SetBranchAddress("hasL1Emu_iso92", &hasL1Emu_iso92, &b_hasL1Emu_iso92);
   fChain->SetBranchAddress("hasL1Emu_looseiso92", &hasL1Emu_looseiso92, &b_hasL1Emu_looseiso92);
   fChain->SetBranchAddress("hasL1Emu_tightiso92", &hasL1Emu_tightiso92, &b_hasL1Emu_tightiso92);
   fChain->SetBranchAddress("hasL1Emu_93", &hasL1Emu_93, &b_hasL1Emu_93);
   fChain->SetBranchAddress("hasL1Emu_iso93", &hasL1Emu_iso93, &b_hasL1Emu_iso93);
   fChain->SetBranchAddress("hasL1Emu_looseiso93", &hasL1Emu_looseiso93, &b_hasL1Emu_looseiso93);
   fChain->SetBranchAddress("hasL1Emu_tightiso93", &hasL1Emu_tightiso93, &b_hasL1Emu_tightiso93);
   fChain->SetBranchAddress("hasL1Emu_94", &hasL1Emu_94, &b_hasL1Emu_94);
   fChain->SetBranchAddress("hasL1Emu_iso94", &hasL1Emu_iso94, &b_hasL1Emu_iso94);
   fChain->SetBranchAddress("hasL1Emu_looseiso94", &hasL1Emu_looseiso94, &b_hasL1Emu_looseiso94);
   fChain->SetBranchAddress("hasL1Emu_tightiso94", &hasL1Emu_tightiso94, &b_hasL1Emu_tightiso94);
   fChain->SetBranchAddress("hasL1Emu_95", &hasL1Emu_95, &b_hasL1Emu_95);
   fChain->SetBranchAddress("hasL1Emu_iso95", &hasL1Emu_iso95, &b_hasL1Emu_iso95);
   fChain->SetBranchAddress("hasL1Emu_looseiso95", &hasL1Emu_looseiso95, &b_hasL1Emu_looseiso95);
   fChain->SetBranchAddress("hasL1Emu_tightiso95", &hasL1Emu_tightiso95, &b_hasL1Emu_tightiso95);
   fChain->SetBranchAddress("hasL1Emu_96", &hasL1Emu_96, &b_hasL1Emu_96);
   fChain->SetBranchAddress("hasL1Emu_iso96", &hasL1Emu_iso96, &b_hasL1Emu_iso96);
   fChain->SetBranchAddress("hasL1Emu_looseiso96", &hasL1Emu_looseiso96, &b_hasL1Emu_looseiso96);
   fChain->SetBranchAddress("hasL1Emu_tightiso96", &hasL1Emu_tightiso96, &b_hasL1Emu_tightiso96);
   fChain->SetBranchAddress("hasL1Emu_97", &hasL1Emu_97, &b_hasL1Emu_97);
   fChain->SetBranchAddress("hasL1Emu_iso97", &hasL1Emu_iso97, &b_hasL1Emu_iso97);
   fChain->SetBranchAddress("hasL1Emu_looseiso97", &hasL1Emu_looseiso97, &b_hasL1Emu_looseiso97);
   fChain->SetBranchAddress("hasL1Emu_tightiso97", &hasL1Emu_tightiso97, &b_hasL1Emu_tightiso97);
   fChain->SetBranchAddress("hasL1Emu_98", &hasL1Emu_98, &b_hasL1Emu_98);
   fChain->SetBranchAddress("hasL1Emu_iso98", &hasL1Emu_iso98, &b_hasL1Emu_iso98);
   fChain->SetBranchAddress("hasL1Emu_looseiso98", &hasL1Emu_looseiso98, &b_hasL1Emu_looseiso98);
   fChain->SetBranchAddress("hasL1Emu_tightiso98", &hasL1Emu_tightiso98, &b_hasL1Emu_tightiso98);
   fChain->SetBranchAddress("hasL1Emu_99", &hasL1Emu_99, &b_hasL1Emu_99);
   fChain->SetBranchAddress("hasL1Emu_iso99", &hasL1Emu_iso99, &b_hasL1Emu_iso99);
   fChain->SetBranchAddress("hasL1Emu_looseiso99", &hasL1Emu_looseiso99, &b_hasL1Emu_looseiso99);
   fChain->SetBranchAddress("hasL1Emu_tightiso99", &hasL1Emu_tightiso99, &b_hasL1Emu_tightiso99);
   Notify();
}

Bool_t Analiza::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Analiza::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Analiza::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Analiza_cxx
