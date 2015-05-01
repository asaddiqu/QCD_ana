//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Apr 22 18:25:09 2015 by ROOT version 5.34/25
// from TTree t/t
// found on file: QCD_1000_inf_madgraph.root
//////////////////////////////////////////////////////////

#ifndef FirstBHMacro_h
#define FirstBHMacro_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class FirstBHMacro {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           NJets;
   Float_t         JetE[18];   //[NJets]
   Float_t         JetPx[18];   //[NJets]
   Float_t         JetPy[18];   //[NJets]
   Float_t         JetPz[18];   //[NJets]
   Float_t         JetPt[18];   //[NJets]
   Float_t         JetEt[18];   //[NJets]
   Float_t         JetEta[18];   //[NJets]
   Float_t         JetPhi[18];   //[NJets]
   Int_t           JetNumOfDaughters[18];   //[NJets]
   Int_t           JetChargeMult[18];   //[NJets]
   Float_t         JetNeutralHadEnergyFrac[18];   //[NJets]
   Float_t         JetChargeHadEnergyFrac[18];   //[NJets]
   Float_t         JetNeutralEmEnergyFrac[18];   //[NJets]
   Float_t         JetChargeEmEnergyFrac[18];   //[NJets]
   Float_t         EleE[25];
   Float_t         ElePx[25];
   Float_t         ElePy[25];
   Float_t         ElePz[25];
   Float_t         ElePt[25];
   Float_t         EleEt[25];
   Float_t         EleEta[25];
   Float_t         ElePhi[25];
   Float_t         EleSupEta[25];
   Float_t         EleRelIsoR03DB[25];
   Float_t         EleAbsDxy[25];
   Float_t         EleVetoId[25];
   Float_t         EleMediumId[25];
   Float_t         EleNumOfHits[25];
   Float_t         ElePassConvVeto[25];
   Float_t         EleChargeHadIso[25];
   Float_t         EleNeutralHadIso[25];
   Float_t         ElePhotonIso[25];
   Float_t         EleUsrIso[25];
   Float_t         EleVtx[25];
   Float_t         PhE[25];
   Float_t         PhPx[25];
   Float_t         PhPy[25];
   Float_t         PhPz[25];
   Float_t         PhPt[25];
   Float_t         PhEt[25];
   Float_t         PhEta[25];
   Float_t         PhSupEta[25];
   Float_t         PhPhi[25];
   Float_t         PhSwissCross[25];
   Float_t         PhHadoverEM[25];
   Float_t         PhHasPixelSeed[25];
   Float_t         Ph5x5sigmaIetaIeta[25];
   Float_t         Phr9[25];
   Float_t         PhIsoChargedHadrons[25];
   Float_t         PhIsoNeutralHadrons[25];
   Float_t         PhIsoPhotons[25];
   Float_t         PhIsoChargedHadronsEA[25];
   Float_t         PhIsoNeutralHadronsEA[25];
   Float_t         PhIsoPhotonsEA[25];
   Float_t         MuE[25];
   Float_t         MuPx[25];
   Float_t         MuPy[25];
   Float_t         MuPz[25];
   Float_t         MuPt[25];
   Float_t         MuEt[25];
   Float_t         MuEta[25];
   Float_t         MuPhi[25];
   Float_t         MuAbsDxy[25];
   Float_t         MuNormChi2[25];
   Float_t         MuTrkLayers[25];
   Float_t         MuValidHits[25];
   Float_t         MuDz[25];
   Float_t         MuPixelHits[25];
   Float_t         MuMatchedStations[25];
   Float_t         MuRelIsoR04DB[25];
   Float_t         MuRelIsoR03DB[25];
   Float_t         ST;
   Float_t         mBH;
   Float_t         Met;
   Float_t         MetE;
   Float_t         MetPx;
   Float_t         MetPy;
   Float_t         MetPz;
   Float_t         MetPt;
   Float_t         MetEt;
   Float_t         MetPhi;
   Float_t         Sphericity;
   Float_t         Jet[4];
   Float_t         Ele[4];
   Float_t         Mu[4];
   Float_t         Ph[4];
   Int_t           NPV;
   Int_t           NTracks;
   Int_t           NElectrons;
   Int_t           NPhotons;
   Int_t           NMuons;
   Char_t          NoScrap;
   Int_t           Multiplicity;
   Char_t          isLeptonPhoton;
   Char_t          isEleChannel;
   Char_t          isMuChannel;
   Char_t          isPhChannel;
   Float_t         ResJetEta;
   Float_t         ResJetPhi;
   Float_t         ResJetM;
   Float_t         ResJetPt;
   Float_t         ResJetEt;
   Float_t         ResEleEta;
   Float_t         ResElePhi;
   Float_t         ResEleM;
   Float_t         ResElePt;
   Float_t         ResPhEta;
   Float_t         ResPhPhi;
   Float_t         ResPhM;
   Float_t         ResPhPt;
   Float_t         ResMuEta;
   Float_t         ResMuPhi;
   Float_t         ResMuM;
   Float_t         ResMuPt;
   Float_t         ResLepEta;
   Float_t         ResLepPhi;
   Float_t         ResLepM;
   Float_t         ResLepPt;
   Float_t         ResObjEta;
   Float_t         ResObjPhi;
   Float_t         ResObjM;
   Float_t         ResObjPt;
   Int_t           runno;
   Int_t           evtno;
   Int_t           lumiblock;
   Int_t           isRealData;
   Float_t         muon_d0;
   Bool_t          firedHLT_PFHT900_v1;

   // List of branches
   TBranch        *b_NJets;   //!
   TBranch        *b_JetE;   //!
   TBranch        *b_JetPx;   //!
   TBranch        *b_JetPy;   //!
   TBranch        *b_JetPz;   //!
   TBranch        *b_JetPt;   //!
   TBranch        *b_JetEt;   //!
   TBranch        *b_JetEta;   //!
   TBranch        *b_JetPhi;   //!
   TBranch        *b_JetNumOfDaughters;   //!
   TBranch        *b_JetNeutralHadEnergyFrac;   //!
   TBranch        *b_JetChargeHadEnergyFrac;   //!
   TBranch        *b_JetNeutralEmEnergyFrac;   //!
   TBranch        *b_JetChargeEmEnergyFrac;   //!
   TBranch        *b_JetChargeMult;   //!
   TBranch        *b_EleE;   //!
   TBranch        *b_ElePx;   //!
   TBranch        *b_ElePy;   //!
   TBranch        *b_ElePz;   //!
   TBranch        *b_ElePt;   //!
   TBranch        *b_EleEt;   //!
   TBranch        *b_EleEta;   //!
   TBranch        *b_ElePhi;   //!
   TBranch        *b_EleSupEta;   //!
   TBranch        *b_EleRelIsoR03DB;   //!
   TBranch        *b_EleAbsDxy;   //!
   TBranch        *b_EleVetoId;   //!
   TBranch        *b_EleMediumId;   //!
   TBranch        *b_EleNumOfHits;   //!
   TBranch        *b_ElePassConvVeto;   //!
   TBranch        *b_EleChargeHadIso;   //!
   TBranch        *b_EleNeutralHadIso;   //!
   TBranch        *b_ElePhotonIso;   //!
   TBranch        *b_EleUsrIso;   //!
   TBranch        *b_EleVtx;   //!
   TBranch        *b_PhE;   //!
   TBranch        *b_PhPx;   //!
   TBranch        *b_PhPy;   //!
   TBranch        *b_PhPz;   //!
   TBranch        *b_PhPt;   //!
   TBranch        *b_PhEt;   //!
   TBranch        *b_PhEta;   //!
   TBranch        *b_PhSupEta;   //!
   TBranch        *b_PhPhi;   //!
   TBranch        *b_PhSwissCross;   //!
   TBranch        *b_PhHadoverEM;   //!
   TBranch        *b_PhHasPixelSeed;   //!
   TBranch        *b_Ph5x5sigmaIetaIeta;   //!
   TBranch        *b_Phr9;   //!
   TBranch        *b_PhIsoChargedHadrons;   //!
   TBranch        *b_PhIsoNeutralHadrons;   //!
   TBranch        *b_PhIsoPhotons;   //!
   TBranch        *b_PhIsoChargedHadronsEA;   //!
   TBranch        *b_PhIsoNeutralHadronsEA;   //!
   TBranch        *b_PhIsoPhotonsEA;   //!
   TBranch        *b_MuE;   //!
   TBranch        *b_MuPx;   //!
   TBranch        *b_MuPy;   //!
   TBranch        *b_MuPz;   //!
   TBranch        *b_MuPt;   //!
   TBranch        *b_MuEt;   //!
   TBranch        *b_MuEta;   //!
   TBranch        *b_MuPhi;   //!
   TBranch        *b_MuAbsDxy;   //!
   TBranch        *b_MuNormChi2;   //!
   TBranch        *b_MuTrkLayers;   //!
   TBranch        *b_MuValidHits;   //!
   TBranch        *b_MuDz;   //!
   TBranch        *b_MuPixelHits;   //!
   TBranch        *b_MuMatchedStations;   //!
   TBranch        *b_MuRelIsoR04DB;   //!
   TBranch        *b_MuRelIsoR03DB;   //!
   TBranch        *b_ST;   //!
   TBranch        *b_mBH;   //!
   TBranch        *b_Met;   //!
   TBranch        *b_MetE;   //!
   TBranch        *b_MetPx;   //!
   TBranch        *b_MetPy;   //!
   TBranch        *b_MetPz;   //!
   TBranch        *b_MetPt;   //!
   TBranch        *b_MetEt;   //!
   TBranch        *b_MetPhi;   //!
   TBranch        *b_Sphericity;   //!
   TBranch        *b_JetArr;   //!
   TBranch        *b_EleArr;   //!
   TBranch        *b_MuArr;   //!
   TBranch        *b_PhArr;   //!
   TBranch        *b_NPV;   //!
   TBranch        *b_NTracks;   //!
   TBranch        *b_NElectrons;   //!
   TBranch        *b_NPhotons;   //!
   TBranch        *b_NMuons;   //!
   TBranch        *b_NoScrap;   //!
   TBranch        *b_Multiplicity;   //!
   TBranch        *b_isLeptonPhoton;   //!
   TBranch        *b_isEleChannel;   //!
   TBranch        *b_isMuChannel;   //!
   TBranch        *b_isPhChannel;   //!
   TBranch        *b_ResJetEta;   //!
   TBranch        *b_ResJetPhi;   //!
   TBranch        *b_ResJetM;   //!
   TBranch        *b_ResJetPt;   //!
   TBranch        *b_ResJetEt;   //!
   TBranch        *b_ResEleEta;   //!
   TBranch        *b_ResElePhi;   //!
   TBranch        *b_ResEleM;   //!
   TBranch        *b_ResElePt;   //!
   TBranch        *b_ResPhEta;   //!
   TBranch        *b_ResPhPhi;   //!
   TBranch        *b_ResPhM;   //!
   TBranch        *b_ResPhPt;   //!
   TBranch        *b_ResMuEta;   //!
   TBranch        *b_ResMuPhi;   //!
   TBranch        *b_ResMuM;   //!
   TBranch        *b_ResMuPt;   //!
   TBranch        *b_ResLepEta;   //!
   TBranch        *b_ResLepPhi;   //!
   TBranch        *b_ResLepM;   //!
   TBranch        *b_ResLepPt;   //!
   TBranch        *b_ResObjEta;   //!
   TBranch        *b_ResObjPhi;   //!
   TBranch        *b_ResObjM;   //!
   TBranch        *b_ResObjPt;   //!
   TBranch        *b_runno;   //!
   TBranch        *b_evtno;   //!
   TBranch        *b_lumiblock;   //!
   TBranch        *b_isRealData;   //!
   TBranch        *b_muon_d0;   //!
   TBranch        *b_firedHLT_PFHT900_v1;   //!

   FirstBHMacro(TTree *tree=0);
   virtual ~FirstBHMacro();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop(TString name,float weight);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef FirstBHMacro_cxx
FirstBHMacro::FirstBHMacro(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("QCD_1000_inf_madgraph.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("QCD_1000_inf_madgraph.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("QCD_1000_inf_madgraph.root:/bhana");
      dir->GetObject("t",tree);

   }
   Init(tree);
}

FirstBHMacro::~FirstBHMacro()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t FirstBHMacro::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t FirstBHMacro::LoadTree(Long64_t entry)
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

void FirstBHMacro::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("NJets", &NJets, &b_NJets);
   fChain->SetBranchAddress("JetE", JetE, &b_JetE);
   fChain->SetBranchAddress("JetPx", JetPx, &b_JetPx);
   fChain->SetBranchAddress("JetPy", JetPy, &b_JetPy);
   fChain->SetBranchAddress("JetPz", JetPz, &b_JetPz);
   fChain->SetBranchAddress("JetPt", JetPt, &b_JetPt);
   fChain->SetBranchAddress("JetEt", JetEt, &b_JetEt);
   fChain->SetBranchAddress("JetEta", JetEta, &b_JetEta);
   fChain->SetBranchAddress("JetPhi", JetPhi, &b_JetPhi);
   fChain->SetBranchAddress("JetNumOfDaughters", JetNumOfDaughters, &b_JetNumOfDaughters);
   fChain->SetBranchAddress("JetNeutralHadEnergyFrac", JetNeutralHadEnergyFrac, &b_JetNeutralHadEnergyFrac);
   fChain->SetBranchAddress("JetChargeHadEnergyFrac", JetChargeHadEnergyFrac, &b_JetChargeHadEnergyFrac);
   fChain->SetBranchAddress("JetNeutralEmEnergyFrac", JetNeutralEmEnergyFrac, &b_JetNeutralEmEnergyFrac);
   fChain->SetBranchAddress("JetChargeEmEnergyFrac", JetChargeEmEnergyFrac, &b_JetChargeEmEnergyFrac);
   fChain->SetBranchAddress("JetChargeMult", JetChargeMult, &b_JetChargeMult);
   fChain->SetBranchAddress("EleE", EleE, &b_EleE);
   fChain->SetBranchAddress("ElePx", ElePx, &b_ElePx);
   fChain->SetBranchAddress("ElePy", ElePy, &b_ElePy);
   fChain->SetBranchAddress("ElePz", ElePz, &b_ElePz);
   fChain->SetBranchAddress("ElePt", ElePt, &b_ElePt);
   fChain->SetBranchAddress("EleEt", EleEt, &b_EleEt);
   fChain->SetBranchAddress("EleEta", EleEta, &b_EleEta);
   fChain->SetBranchAddress("ElePhi", ElePhi, &b_ElePhi);
   fChain->SetBranchAddress("EleSupEta", EleSupEta, &b_EleSupEta);
   fChain->SetBranchAddress("EleRelIsoR03DB", EleRelIsoR03DB, &b_EleRelIsoR03DB);
   fChain->SetBranchAddress("EleAbsDxy", EleAbsDxy, &b_EleAbsDxy);
   fChain->SetBranchAddress("EleVetoId", EleVetoId, &b_EleVetoId);
   fChain->SetBranchAddress("EleMediumId", EleMediumId, &b_EleMediumId);
   fChain->SetBranchAddress("EleNumOfHits", EleNumOfHits, &b_EleNumOfHits);
   fChain->SetBranchAddress("ElePassConvVeto", ElePassConvVeto, &b_ElePassConvVeto);
   fChain->SetBranchAddress("EleChargeHadIso", EleChargeHadIso, &b_EleChargeHadIso);
   fChain->SetBranchAddress("EleNeutralHadIso", EleNeutralHadIso, &b_EleNeutralHadIso);
   fChain->SetBranchAddress("ElePhotonIso", ElePhotonIso, &b_ElePhotonIso);
   fChain->SetBranchAddress("EleUsrIso", EleUsrIso, &b_EleUsrIso);
   fChain->SetBranchAddress("EleVtx", EleVtx, &b_EleVtx);
   fChain->SetBranchAddress("PhE", PhE, &b_PhE);
   fChain->SetBranchAddress("PhPx", PhPx, &b_PhPx);
   fChain->SetBranchAddress("PhPy", PhPy, &b_PhPy);
   fChain->SetBranchAddress("PhPz", PhPz, &b_PhPz);
   fChain->SetBranchAddress("PhPt", PhPt, &b_PhPt);
   fChain->SetBranchAddress("PhEt", PhEt, &b_PhEt);
   fChain->SetBranchAddress("PhEta", PhEta, &b_PhEta);
   fChain->SetBranchAddress("PhSupEta", PhSupEta, &b_PhSupEta);
   fChain->SetBranchAddress("PhPhi", PhPhi, &b_PhPhi);
   fChain->SetBranchAddress("PhSwissCross", PhSwissCross, &b_PhSwissCross);
   fChain->SetBranchAddress("PhHadoverEM", PhHadoverEM, &b_PhHadoverEM);
   fChain->SetBranchAddress("PhHasPixelSeed", PhHasPixelSeed, &b_PhHasPixelSeed);
   fChain->SetBranchAddress("Ph5x5sigmaIetaIeta", Ph5x5sigmaIetaIeta, &b_Ph5x5sigmaIetaIeta);
   fChain->SetBranchAddress("Phr9", Phr9, &b_Phr9);
   fChain->SetBranchAddress("PhIsoChargedHadrons", PhIsoChargedHadrons, &b_PhIsoChargedHadrons);
   fChain->SetBranchAddress("PhIsoNeutralHadrons", PhIsoNeutralHadrons, &b_PhIsoNeutralHadrons);
   fChain->SetBranchAddress("PhIsoPhotons", PhIsoPhotons, &b_PhIsoPhotons);
   fChain->SetBranchAddress("PhIsoChargedHadronsEA", PhIsoChargedHadronsEA, &b_PhIsoChargedHadronsEA);
   fChain->SetBranchAddress("PhIsoNeutralHadronsEA", PhIsoNeutralHadronsEA, &b_PhIsoNeutralHadronsEA);
   fChain->SetBranchAddress("PhIsoPhotonsEA", PhIsoPhotonsEA, &b_PhIsoPhotonsEA);
   fChain->SetBranchAddress("MuE", MuE, &b_MuE);
   fChain->SetBranchAddress("MuPx", MuPx, &b_MuPx);
   fChain->SetBranchAddress("MuPy", MuPy, &b_MuPy);
   fChain->SetBranchAddress("MuPz", MuPz, &b_MuPz);
   fChain->SetBranchAddress("MuPt", MuPt, &b_MuPt);
   fChain->SetBranchAddress("MuEt", MuEt, &b_MuEt);
   fChain->SetBranchAddress("MuEta", MuEta, &b_MuEta);
   fChain->SetBranchAddress("MuPhi", MuPhi, &b_MuPhi);
   fChain->SetBranchAddress("MuAbsDxy", MuAbsDxy, &b_MuAbsDxy);
   fChain->SetBranchAddress("MuNormChi2", MuNormChi2, &b_MuNormChi2);
   fChain->SetBranchAddress("MuTrkLayers", MuTrkLayers, &b_MuTrkLayers);
   fChain->SetBranchAddress("MuValidHits", MuValidHits, &b_MuValidHits);
   fChain->SetBranchAddress("MuDz", MuDz, &b_MuDz);
   fChain->SetBranchAddress("MuPixelHits", MuPixelHits, &b_MuPixelHits);
   fChain->SetBranchAddress("MuMatchedStations", MuMatchedStations, &b_MuMatchedStations);
   fChain->SetBranchAddress("MuRelIsoR04DB", MuRelIsoR04DB, &b_MuRelIsoR04DB);
   fChain->SetBranchAddress("MuRelIsoR03DB", MuRelIsoR03DB, &b_MuRelIsoR03DB);
   fChain->SetBranchAddress("ST", &ST, &b_ST);
   fChain->SetBranchAddress("mBH", &mBH, &b_mBH);
   fChain->SetBranchAddress("Met", &Met, &b_Met);
   fChain->SetBranchAddress("MetE", &MetE, &b_MetE);
   fChain->SetBranchAddress("MetPx", &MetPx, &b_MetPx);
   fChain->SetBranchAddress("MetPy", &MetPy, &b_MetPy);
   fChain->SetBranchAddress("MetPz", &MetPz, &b_MetPz);
   fChain->SetBranchAddress("MetPt", &MetPt, &b_MetPt);
   fChain->SetBranchAddress("MetEt", &MetEt, &b_MetEt);
   fChain->SetBranchAddress("MetPhi", &MetPhi, &b_MetPhi);
   fChain->SetBranchAddress("Sphericity", &Sphericity, &b_Sphericity);
   fChain->SetBranchAddress("Jet", Jet, &b_JetArr);
   fChain->SetBranchAddress("Ele", Ele, &b_EleArr);
   fChain->SetBranchAddress("Mu", Mu, &b_MuArr);
   fChain->SetBranchAddress("Ph", Ph, &b_PhArr);
   fChain->SetBranchAddress("NPV", &NPV, &b_NPV);
   fChain->SetBranchAddress("NTracks", &NTracks, &b_NTracks);
   fChain->SetBranchAddress("NElectrons", &NElectrons, &b_NElectrons);
   fChain->SetBranchAddress("NPhotons", &NPhotons, &b_NPhotons);
   fChain->SetBranchAddress("NMuons", &NMuons, &b_NMuons);
   fChain->SetBranchAddress("NoScrap", &NoScrap, &b_NoScrap);
   fChain->SetBranchAddress("Multiplicity", &Multiplicity, &b_Multiplicity);
   fChain->SetBranchAddress("isLeptonPhoton", &isLeptonPhoton, &b_isLeptonPhoton);
   fChain->SetBranchAddress("isEleChannel", &isEleChannel, &b_isEleChannel);
   fChain->SetBranchAddress("isMuChannel", &isMuChannel, &b_isMuChannel);
   fChain->SetBranchAddress("isPhChannel", &isPhChannel, &b_isPhChannel);
   fChain->SetBranchAddress("ResJetEta", &ResJetEta, &b_ResJetEta);
   fChain->SetBranchAddress("ResJetPhi", &ResJetPhi, &b_ResJetPhi);
   fChain->SetBranchAddress("ResJetM", &ResJetM, &b_ResJetM);
   fChain->SetBranchAddress("ResJetPt", &ResJetPt, &b_ResJetPt);
   fChain->SetBranchAddress("ResJetEt", &ResJetEt, &b_ResJetEt);
   fChain->SetBranchAddress("ResEleEta", &ResEleEta, &b_ResEleEta);
   fChain->SetBranchAddress("ResElePhi", &ResElePhi, &b_ResElePhi);
   fChain->SetBranchAddress("ResEleM", &ResEleM, &b_ResEleM);
   fChain->SetBranchAddress("ResElePt", &ResElePt, &b_ResElePt);
   fChain->SetBranchAddress("ResPhEta", &ResPhEta, &b_ResPhEta);
   fChain->SetBranchAddress("ResPhPhi", &ResPhPhi, &b_ResPhPhi);
   fChain->SetBranchAddress("ResPhM", &ResPhM, &b_ResPhM);
   fChain->SetBranchAddress("ResPhPt", &ResPhPt, &b_ResPhPt);
   fChain->SetBranchAddress("ResMuEta", &ResMuEta, &b_ResMuEta);
   fChain->SetBranchAddress("ResMuPhi", &ResMuPhi, &b_ResMuPhi);
   fChain->SetBranchAddress("ResMuM", &ResMuM, &b_ResMuM);
   fChain->SetBranchAddress("ResMuPt", &ResMuPt, &b_ResMuPt);
   fChain->SetBranchAddress("ResLepEta", &ResLepEta, &b_ResLepEta);
   fChain->SetBranchAddress("ResLepPhi", &ResLepPhi, &b_ResLepPhi);
   fChain->SetBranchAddress("ResLepM", &ResLepM, &b_ResLepM);
   fChain->SetBranchAddress("ResLepPt", &ResLepPt, &b_ResLepPt);
   fChain->SetBranchAddress("ResObjEta", &ResObjEta, &b_ResObjEta);
   fChain->SetBranchAddress("ResObjPhi", &ResObjPhi, &b_ResObjPhi);
   fChain->SetBranchAddress("ResObjM", &ResObjM, &b_ResObjM);
   fChain->SetBranchAddress("ResObjPt", &ResObjPt, &b_ResObjPt);
   fChain->SetBranchAddress("runno", &runno, &b_runno);
   fChain->SetBranchAddress("evtno", &evtno, &b_evtno);
   fChain->SetBranchAddress("lumiblock", &lumiblock, &b_lumiblock);
   fChain->SetBranchAddress("isRealData", &isRealData, &b_isRealData);
   fChain->SetBranchAddress("muon_d0", &muon_d0, &b_muon_d0);
   fChain->SetBranchAddress("firedHLT_PFHT900_v1", &firedHLT_PFHT900_v1, &b_firedHLT_PFHT900_v1);
   Notify();
}

Bool_t FirstBHMacro::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void FirstBHMacro::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t FirstBHMacro::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
cout<<"HEY! SEE ENTRIES = "<<entry<<endl;
   return 1;
}
#endif // #ifdef FirstBHMacro_cxx
