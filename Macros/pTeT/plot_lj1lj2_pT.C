#include <iostream>

void plot_lj1lj2_pT()
{
  gStyle -> SetStripDecimals(kFALSE);
  gStyle -> SetPadTickX(1);
  gStyle -> SetPadTickY(1);
  gStyle -> SetOptTitle(0);
  gStyle -> SetOptStat(0);

float y1=0. , y2=50000;
float y1=0. , y3=50000;
float x1=0,    x2=1500.;
Double_t t1=0.4395973,t2=0.8;
Double_t t3=t1, t4=0.7302697;


TFile *data = new TFile("/Users/asifsaddique/CMS_BH/QCD_13TeV/output_qcd/QCD_madgraph.root", "READ");
TH1F *lj1_pT50   = (TH1F*)gDirectory -> Get("general/LJ1_pT50");
TH1F *lj2_pT50   = (TH1F*)gDirectory -> Get("general/LJ2_pT50");

lj1_pT50  ->GetSumw2()->Set(0);
lj2_pT50->GetSumw2()->Set(0);

lj1_pT50->Scale(1000); 
lj2_pT50->Scale(1000); 

 TCanvas *c1 = new TCanvas("c1","c1",600,600);
 c1->SetLeftMargin(0.1442953);
 TCanvas *c2 = new TCanvas("c2","c2",600,600);
 c2->SetLeftMargin(0.1442953);
c1->cd();
  lj1_pT50 -> GetYaxis()->SetTitle("# Entries"); lj1_pT50 -> GetXaxis()->SetTitle("1st Leading Jet p_{T}");
  lj1_pT50 -> GetYaxis()->SetTitleSize(0.04);
  lj1_pT50 -> GetXaxis()->SetTitleSize(0.04);
  lj1_pT50 -> GetXaxis()->SetTitleOffset(1.1);
  lj1_pT50 -> GetYaxis()->SetTitleOffset(1.75);
  lj1_pT50 -> SetLineWidth(2);
  lj1_pT50 -> GetXaxis()->SetRangeUser(x1,x2);
  lj1_pT50 -> GetYaxis()->SetRangeUser(y1,y3);
  lj1_pT50 -> Draw("");
  float tsize = 0.04;
   tex = new TLatex(t1,t2,"#sqrt[]{s} = 13 TeV, #intLdt = 1000 pb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
   TLatex *   tex = new TLatex(t3,t4,"Jets: p_{T} > 20 GeV, |#eta| < 2.4");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
c2->cd();
  lj2_pT50 -> GetYaxis()->SetTitle("# Entries");
  lj2_pT50 -> GetXaxis()->SetTitle("Second Leading Jet p_{T} ");
  lj2_pT50 -> GetYaxis()->SetTitleSize(0.04);
  lj2_pT50 -> GetXaxis()->SetTitleSize(0.04);
  lj2_pT50 -> GetXaxis()->SetTitleOffset(1.1);
  lj2_pT50 -> GetYaxis()->SetTitleOffset(1.75);
  lj2_pT50 -> SetLineWidth(2);
  lj2_pT50 -> GetXaxis()->SetRangeUser(x1,x2);
  lj2_pT50 -> GetYaxis()->SetRangeUser(y1,y2);
  lj2_pT50 -> Draw("");
   tex = new TLatex(t1,t2,"#sqrt[]{s} = 13 TeV, #intLdt = 1000 pb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
   TLatex *   tex = new TLatex(t3,t4,"Jets: p_{T} > 50 GeV, |#eta| < 2.4");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();

   c1->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/pTeT/lj1_pT50.eps");
   c2->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/pTeT/lj2_pT50.eps");

}




