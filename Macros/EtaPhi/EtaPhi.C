#include <iostream>

void EtaPhi(TString variable)
{
  gStyle -> SetStripDecimals(kFALSE);
  gStyle -> SetPadTickX(1);
  gStyle -> SetPadTickY(1);
  gStyle -> SetOptTitle(0);
  gStyle -> SetOptStat(0);

TString label = variable;
float y1,y2,x1,x2;
Double_t t1=0.4,t2=0.8;
Double_t t3=t1, t4=0.7302697;

  if(variable=="eta")      x1=-2.4,    x2=2.4. , y1=0. , y2=250000.;
  else if(variable=="phi") x1=-3.5,    x2=3.5. , y1=0. , y2=140000.;
  else{
  cout<<"\033[1;31m ERROR!!!, run the code with one of following two options:\033[0m"<<endl;
  cout<<"\033[1;32m a). root 'EtaPhi.C(\"eta\")'\033[0m"<<endl;
  cout<<"\033[1;32m b). root 'EtaPhi.C(\"phi\")'\033[0m"<<endl;
  return 0;
  }


TFile *data = new TFile("/Users/asifsaddique/CMS_BH/QCD_13TeV/output_qcd/QCD_madgraph.root", "READ");
TH1F *jetvar20    = (TH1F*)gDirectory -> Get("general/jet_"+variable);
TH1F *jetvar50  = (TH1F*)gDirectory -> Get("general/jet_"+variable+"_et50");
TH1F *st_3jet_inc  = (TH1F*)gDirectory -> Get("ST/ST_3jet_inc");


jetvar20  -> GetSumw2()->Set(0);
jetvar50  -> GetSumw2()->Set(0);

jetvar20 ->Scale(1000); 
jetvar50->Scale(1000); 

 TCanvas *c1 = new TCanvas("c1","c1",600,600);
 TCanvas *c2 = new TCanvas("c2","c2",600,600);
  
c1->cd();
  jetvar20 -> GetYaxis()->SetTitleOffset(0.9);
  jetvar20 -> GetXaxis()->CenterTitle();
  jetvar20 -> GetYaxis()->CenterTitle();
  jetvar20 -> GetYaxis()->SetTitle("# Entries");
  jetvar20 -> GetXaxis()->SetTitle("#"+variable);
  jetvar20 -> GetYaxis()->SetTitleSize(0.04);
  jetvar20 -> GetXaxis()->SetTitleSize(0.04);
  jetvar20 -> GetXaxis()->SetTitleOffset(1.1);
  jetvar20 -> GetYaxis()->SetTitleOffset(1.1);
  jetvar20 -> SetLineWidth(2);
  jetvar20 -> GetXaxis()->SetRangeUser(x1,x2);
  jetvar20 -> GetYaxis()->SetRangeUser(y1,y2);
  jetvar20 -> Draw("");
  float tsize = 0.04;
   tex = new TLatex(t1,t2,"#sqrt[]{s} = 13 TeV, #intLdt = 1000 pb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
   TLatex *   tex = new TLatex(t3,t4,"Jets: |#eta| < 2.4");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
c2->cd();
  jetvar50 -> GetYaxis()->SetTitleOffset(0.9);
  jetvar50 -> GetXaxis()->CenterTitle();
  jetvar50 -> GetYaxis()->CenterTitle();
  jetvar50 -> GetYaxis()->SetTitle("# Entries");
  jetvar50 -> GetXaxis()->SetTitle("#"+variable);
  jetvar50 -> GetYaxis()->SetTitleSize(0.04);
  jetvar50 -> GetXaxis()->SetTitleSize(0.04);
  jetvar50 -> GetXaxis()->SetTitleOffset(1.1);
  jetvar50 -> GetYaxis()->SetTitleOffset(1.1);
  jetvar50 -> SetLineWidth(2);
  jetvar50 -> GetXaxis()->SetRangeUser(x1,x2);
  jetvar50 -> GetYaxis()->SetRangeUser(y1,y2);
  jetvar50 -> Draw("");
   tex = new TLatex(t1,t2,"#sqrt[]{s} = 13 TeV, #intLdt = 1000 pb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
   TLatex *   tex = new TLatex(t3,t4,"Jets: E_{T} > 50 GeV, |#eta| < 2.4");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();

   //c1 -> SetLogy();
   c1->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/etaphi/"+variable+"_jet20.eps");
   c2->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/etaphi/"+variable+"_jet50.eps");
//  }//njet loop

}

EtaPhi(){

  cout<<"ERROR!!!, run the code with one of following two options:\033[0m"<<endl;
  cout<<"\033[1;32m a). root 'EtaPhi.C(\"phi\")'\033[0m"<<endl;
  cout<<"\033[1;32m b). root 'EtaPhi.C(\"eta\")'\033[0m"<<endl;
  return 0;

}


