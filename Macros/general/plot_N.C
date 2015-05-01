#include <iostream>

void plot_N()
{
  gStyle -> SetStripDecimals(kFALSE);
  gStyle -> SetPadTickX(1);
  gStyle -> SetPadTickY(1);
  gStyle -> SetOptTitle(0);
  gStyle -> SetOptStat(0);

float y1=0.65 , y2=1000000;
float x1=0.,    x2=20;
Double_t t1=0.4395973,t2=0.8;//0.8276723;
Double_t t3=t1, t4=0.7302697;
Double_t t5=t3, t6=0.6503497;



TFile *data = new TFile("/Users/asifsaddique/CMS_BH/QCD_13TeV/output_qcd/QCD_madgraph.root", "READ");
TH1F *st_2jet_inc  = (TH1F*)gDirectory -> Get("general/njet_et50");


 TCanvas *c1 = new TCanvas("c1","c1",600,600);
  
c1->cd();
  st_2jet_inc -> GetYaxis()->SetTitleOffset(0.9);
  st_2jet_inc -> GetXaxis()->CenterTitle();
  st_2jet_inc -> GetYaxis()->CenterTitle();
  st_2jet_inc -> GetSumw2()->Set(0);
  st_2jet_inc -> GetYaxis()->SetTitle("# Entries");
  st_2jet_inc -> GetXaxis()->SetTitle("Jet Multiplicity");
  st_2jet_inc -> GetYaxis()->SetTitleSize(0.04);
  st_2jet_inc -> GetXaxis()->SetTitleSize(0.04);
  st_2jet_inc -> GetXaxis()->SetTitleOffset(1.1);
  st_2jet_inc -> GetYaxis()->SetTitleOffset(1.1);
  st_2jet_inc -> SetLineWidth(2);
  st_2jet_inc -> GetXaxis()->SetRangeUser(x1,x2);
  //st_2jet_inc -> GetYaxis()->SetRangeUser(y1,y2);
  st_2jet_inc -> Draw("");
  float tsize=0.035;
   tex = new TLatex(t1,t2,"#sqrt[]{s} = 13 TeV, #intLdt = 1000 pb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
   TLatex *   tex = new TLatex(t3,t4,"Jets, E_{T} > 50 GeV, |#eta| < 2.4");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
   //c1 -> SetLogy();

c1->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/general/Njet50.eps");
//  }//njet loop

}
