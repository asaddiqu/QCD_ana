#define FirstBHMacro_cxx
#include <iostream>
#include "FirstBHMacro.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
using namespace std;
void FirstBHMacro::Loop(TString name,float weight)
{
//@@@@@@@@@@@@@@@@@@@@
//  SET BRANCHES     @    
//@@@@@@@@@@@@@@@@@@@@
fChain->SetBranchStatus("*",0);
fChain->SetBranchStatus("firedHLT_PFHT900_v1",1);
fChain->SetBranchStatus("JetNumOfDaughters",1);
fChain->SetBranchStatus("JetNeutralHadEnergyFrac",1);
fChain->SetBranchStatus("JetNeutralEmEnergyFrac",1);
fChain->SetBranchStatus("JetChargeHadEnergyFrac",1);
fChain->SetBranchStatus("JetChargeEmEnergyFrac",1);
fChain->SetBranchStatus("JetChargeMult",1);
fChain->SetBranchStatus("NJets", 1);
fChain->SetBranchStatus("JetPt", 1);
fChain->SetBranchStatus("JetEt", 1);
fChain->SetBranchStatus("JetEta",1);
fChain->SetBranchStatus("JetPhi",1);
fChain->SetBranchStatus("runno", 1);
fChain->SetBranchStatus("evtno", 1);
//@@@@@@@@@@@@@@@@@@@@
//    Histograms     @    
//@@@@@@@@@@@@@@@@@@@@
  TH1::SetDefaultSumw2();
  //general Histos
  TH1D * njet_et50         = new TH1D("njet_et50","",     35,    0.5,  35.5);
  TH1D * njet_pt50         = new TH1D("njet_pt50","",     35,    0.5,  35.5);
  TH1D * LJ1_pT50          = new TH1D("LJ1_pT50","",      500,   0,    5000);
  TH1D * LJ2_pT50          = new TH1D("LJ2_pT50","",      500,   0,    5000);
  TH1D * jet_pT            = new TH1D("jet_pT","",        500,   0,    5000);
  TH1D * jet_eT            = new TH1D("jet_eT","",        500,   0,    5000);
  TH1D * jet_pT50          = new TH1D("jet_pT50","",      500,   0,    5000);
  TH1D * jet_eT50          = new TH1D("jet_eT50","",      500,   0,    5000);
  TH1D * jet_eta           = new TH1D("jet_eta","",       80,   -4,       4);
  TH1D * jet_phi           = new TH1D("jet_phi","",       80,   -4,       4);
  TH1D * jet_eta_et50      = new TH1D("jet_eta_et50","",  80,   -4,       4);
  TH1D * jet_phi_et50      = new TH1D("jet_phi_et50","",  80,   -4,       4);
  TH1D * jet_eta_pt50      = new TH1D("jet_eta_pt50","",  80,   -4,       4);
  TH1D * jet_phi_pt50      = new TH1D("jet_phi_pt50","",  80,   -4,       4);
  // ST and HT Histos
  TH1D * ST_2jet_exc = new TH1D("ST_2jet_exc", "", 80, 0,8000);  TH1D * HT_2jet_exc = new TH1D("HT_2jet_exc", "", 80, 0,8000);
  TH1D * ST_3jet_exc = new TH1D("ST_3jet_exc", "", 80, 0,8000);  TH1D * HT_3jet_exc = new TH1D("HT_3jet_exc", "", 80, 0,8000);
  TH1D * ST_4jet_exc = new TH1D("ST_4jet_exc", "", 80, 0,8000);  TH1D * HT_4jet_exc = new TH1D("HT_4jet_exc", "", 80, 0,8000);
  TH1D * ST_5jet_exc = new TH1D("ST_5jet_exc", "", 80, 0,8000);  TH1D * HT_5jet_exc = new TH1D("HT_5jet_exc", "", 80, 0,8000);
  TH1D * ST_6jet_exc = new TH1D("ST_6jet_exc", "", 80, 0,8000);  TH1D * HT_6jet_exc = new TH1D("HT_6jet_exc", "", 80, 0,8000);
  TH1D * ST_7jet_exc = new TH1D("ST_7jet_exc", "", 80, 0,8000);  TH1D * HT_7jet_exc = new TH1D("HT_7jet_exc", "", 80, 0,8000);
  TH1D * ST_8jet_exc = new TH1D("ST_8jet_exc", "", 80, 0,8000);  TH1D * HT_8jet_exc = new TH1D("HT_8jet_exc", "", 80, 0,8000);
  TH1D * ST_2jet_inc = new TH1D("ST_2jet_inc", "", 80, 0,8000);  TH1D * HT_2jet_inc = new TH1D("HT_2jet_inc", "", 80, 0,8000);
  TH1D * ST_3jet_inc = new TH1D("ST_3jet_inc", "", 80, 0,8000);  TH1D * HT_3jet_inc = new TH1D("HT_3jet_inc", "", 80, 0,8000);
  TH1D * ST_4jet_inc = new TH1D("ST_4jet_inc", "", 80, 0,8000);  TH1D * HT_4jet_inc = new TH1D("HT_4jet_inc", "", 80, 0,8000);
  TH1D * ST_5jet_inc = new TH1D("ST_5jet_inc", "", 80, 0,8000);  TH1D * HT_5jet_inc = new TH1D("HT_5jet_inc", "", 80, 0,8000);
  TH1D * ST_6jet_inc = new TH1D("ST_6jet_inc", "", 80, 0,8000);  TH1D * HT_6jet_inc = new TH1D("HT_6jet_inc", "", 80, 0,8000);
  TH1D * ST_7jet_inc = new TH1D("ST_7jet_inc", "", 80, 0,8000);  TH1D * HT_7jet_inc = new TH1D("HT_7jet_inc", "", 80, 0,8000);
  TH1D * ST_8jet_inc = new TH1D("ST_8jet_inc", "", 80, 0,8000);  TH1D * HT_8jet_inc = new TH1D("HT_8jet_inc", "", 80, 0,8000);

   if (fChain == 0) return;
   Long64_t nentries = fChain->GetEntriesFast();
   Long64_t nbytes = 0, nb = 0;

//@@@@@@@@@@@@@
//  Counters  @    
//@@@@@@@@@@@@@
   int n_start=0, n_trig=0, n_total=0;
//bool JetID(int ii);
//@@@@@@@@@@@@@@@@@@@@
//    EVENT LOOP     @    
//@@@@@@@@@@@@@@@@@@@@   
  for (Long64_t jentry=0; jentry<nentries;jentry++) {
  Long64_t ientry = LoadTree(jentry);
  if (ientry < 0) break;
  nb = fChain->GetEntry(jentry);   nbytes += nb;
  n_start++;
  // Pass Trigger
  if(firedHLT_PFHT900_v1 != 1)continue;
  n_trig++;

//@@@@@@@@@@@@@
//    Jets    @    
//@@@@@@@@@@@@@
  int n_jet_et50=0,n_jet_pt50=0;
  float etsum =0.,ptsum=0.;
  for(int jeti=0; jeti<NJets; jeti++){
  if(JetPt[jeti] < 20) continue;
  if(fabs(JetEta[jeti]) > 2.4) continue;
  if(JetNumOfDaughters[jeti] < 1) continue;
  if(JetNeutralHadEnergyFrac[jeti] > 0.99) continue;
  if(abs(JetEta[jeti]) < 2.4 ){
  if(JetChargeHadEnergyFrac[jeti] < 0) continue;
  if(JetChargeMult[jeti] <= 0) continue;
  if(JetChargeEmEnergyFrac[jeti] > 0.99) continue;
  }//jetid eta

  jet_pT  -> Fill(JetPt[jeti],  weight);
  jet_eT  -> Fill(JetEt[jeti],  weight);
  jet_eta -> Fill(JetEta[jeti], weight);
  jet_phi -> Fill(JetPhi[jeti], weight);
  if(JetEt[jeti]>50 ) {
  etsum += JetEt[jeti]; 
  jet_eT50     -> Fill(JetPt[jeti],  weight);
  jet_eta_et50 -> Fill(JetEta[jeti], weight); 
  jet_phi_et50 -> Fill(JetPhi[jeti], weight);
  n_jet_et50++;
  } //et50
  if(JetPt[jeti]>50 ) {
  ptsum += JetPt[jeti]; 
  jet_pT50     -> Fill(JetPt[jeti], weight);
  jet_eta_pt50 -> Fill(JetEta[jeti], weight); 
  jet_phi_pt50 -> Fill(JetPhi[jeti], weight);
  n_jet_pt50++;
  }//pt50
   }// Jet Loop

  if(n_jet_pt50>2){
  LJ1_pT50->Fill(JetPt[0],weight);
  LJ2_pT50->Fill(JetPt[1],weight);
  }//Leading jets Loop
  
  njet_et50->Fill(n_jet_et50, weight);
  njet_pt50->Fill(n_jet_et50, weight);
  
  if(n_jet_et50 == 2) {ST_2jet_exc -> Fill(etsum, weight); } if(n_jet_pt50 == 2){HT_2jet_exc -> Fill(ptsum, weight);}
  if(n_jet_et50 == 3) {ST_3jet_exc -> Fill(etsum, weight); } if(n_jet_pt50 == 3){HT_3jet_exc -> Fill(ptsum, weight);}
  if(n_jet_et50 == 4) {ST_4jet_exc -> Fill(etsum, weight); } if(n_jet_pt50 == 4){HT_4jet_exc -> Fill(ptsum, weight);}
  if(n_jet_et50 == 5) {ST_5jet_exc -> Fill(etsum, weight); } if(n_jet_pt50 == 5){HT_5jet_exc -> Fill(ptsum, weight);}
  if(n_jet_et50 == 6) {ST_6jet_exc -> Fill(etsum, weight); } if(n_jet_pt50 == 6){HT_6jet_exc -> Fill(ptsum, weight);}
  if(n_jet_et50 == 7) {ST_7jet_exc -> Fill(etsum, weight); } if(n_jet_pt50 == 7){HT_7jet_exc -> Fill(ptsum, weight);}
  if(n_jet_et50 == 8) {ST_8jet_exc -> Fill(etsum, weight); } if(n_jet_pt50 == 8){HT_8jet_exc -> Fill(ptsum, weight);}
  
  if(n_jet_et50 >= 2) {ST_2jet_inc -> Fill(etsum, weight); } if(n_jet_pt50 >= 2){HT_2jet_inc -> Fill(ptsum, weight);}
  if(n_jet_et50 >= 3) {ST_3jet_inc -> Fill(etsum, weight); } if(n_jet_pt50 >= 3){HT_3jet_inc -> Fill(ptsum, weight);}
  if(n_jet_et50 >= 4) {ST_4jet_inc -> Fill(etsum, weight); } if(n_jet_pt50 >= 4){HT_4jet_inc -> Fill(ptsum, weight);}
  if(n_jet_et50 >= 5) {ST_5jet_inc -> Fill(etsum, weight); } if(n_jet_pt50 >= 5){HT_5jet_inc -> Fill(ptsum, weight);}
  if(n_jet_et50 >= 6) {ST_6jet_inc -> Fill(etsum, weight); } if(n_jet_pt50 >= 6){HT_6jet_inc -> Fill(ptsum, weight);}
  if(n_jet_et50 >= 7) {ST_7jet_inc -> Fill(etsum, weight); } if(n_jet_pt50 >= 7){HT_7jet_inc -> Fill(ptsum, weight);}
  if(n_jet_et50 >= 8) {ST_8jet_inc -> Fill(etsum, weight); } if(n_jet_pt50 >= 8){HT_8jet_inc -> Fill(ptsum, weight);}
  
  n_total++;
  //if(n_total ==100)break;
   } //Event Loop
//@@@@@@@@@@@@@@@@@@@@
//    OutPut File    @    
//@@@@@@@@@@@@@@@@@@@@

  TFile* file = new TFile("output_"+name+".root", "RECREATE");
  file->mkdir("general");
  file->mkdir("ST");
  file->mkdir("HT");
  
  file->cd("general");
  njet_et50           ->Write();
  njet_pt50           ->Write();
  jet_pT         ->Write();  
  jet_eT         ->Write();
  jet_pT50       ->Write();
  jet_eT50       ->Write();
  jet_eta        ->Write();
  jet_phi        ->Write();
  jet_eta_et50   ->Write();
  jet_phi_et50   ->Write();
  jet_eta_pt50   ->Write();
  jet_phi_pt50   ->Write();
  LJ1_pT50->Write();
  LJ2_pT50->Write();
  
  file->cd("ST");
  ST_2jet_exc    ->Write();    
  ST_3jet_exc    ->Write();
  ST_4jet_exc    ->Write();
  ST_5jet_exc    ->Write();
  ST_6jet_exc    ->Write();
  ST_7jet_exc    ->Write();
  ST_8jet_exc    ->Write();
  ST_2jet_inc    ->Write();
  ST_3jet_inc    ->Write();
  ST_4jet_inc    ->Write();
  ST_5jet_inc    ->Write();
  ST_6jet_inc    ->Write();
  ST_7jet_inc    ->Write();
  ST_8jet_inc    ->Write();
  
  
  file->cd("HT");
  HT_2jet_exc    ->Write();    
  HT_3jet_exc    ->Write();
  HT_4jet_exc    ->Write();
  HT_5jet_exc    ->Write();
  HT_6jet_exc    ->Write();
  HT_7jet_exc    ->Write();
  HT_8jet_exc    ->Write();
  HT_2jet_inc    ->Write();
  HT_3jet_inc    ->Write();
  HT_4jet_inc    ->Write();
  HT_5jet_inc    ->Write();
  HT_6jet_inc    ->Write();
  HT_7jet_inc    ->Write();
  HT_8jet_inc    ->Write();
  
  
  file->Close();
  cout << "***************************  " << endl;
  cout <<name    <<endl;
  cout << "***************************  " << endl;
  cout << "Weight of Sample:" <<weight<<endl;
  cout << "Initial Events  :" << n_start << endl;
  cout << "After Trigger   :" << n_trig  << endl;
  cout << "Total Events    :" << n_total  << endl;


}
