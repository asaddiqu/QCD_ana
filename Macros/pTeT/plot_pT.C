#include <iostream>

void plot_pT()
{
  gStyle -> SetStripDecimals(kFALSE);
  gStyle -> SetPadTickX(1);
  gStyle -> SetPadTickY(1);
  gStyle -> SetOptTitle(0);
  gStyle -> SetOptStat(0);

float y1=0. , y2=1000000;
float y1=0. , y3=350000;
float x1=0,    x2=1500.;
Double_t t1=0.4395973,t2=0.8;//0.8276723;
Double_t t3=t1, t4=0.7302697;
Double_t t5=t3, t6=0.6503497;


TFile *data = new TFile("/Users/asifsaddique/CMS_BH/QCD_13TeV/output_qcd/QCD_madgraph.root", "READ");
TH1F *pt_jet    = (TH1F*)gDirectory -> Get("general/jet_pT");
TH1F *pt_jet50  = (TH1F*)gDirectory -> Get("general/jet_pT50");
TH1F *st_3jet_inc  = (TH1F*)gDirectory -> Get("ST/ST_3jet_inc");


pt_jet  ->GetSumw2()->Set(0);
pt_jet50->GetSumw2()->Set(0);

pt_jet->Scale(1000); 
pt_jet50->Scale(1000); 

 TCanvas *c1 = new TCanvas("c1","c1",600,600);
 TCanvas *c2 = new TCanvas("c2","c2",600,600);
  
c1->cd();
  pt_jet -> GetYaxis()->SetTitleOffset(0.9);
  pt_jet -> GetYaxis()->SetTitle("# Entries");
  pt_jet -> GetXaxis()->SetTitle("Jet p_{T}");
  pt_jet -> GetYaxis()->SetTitleSize(0.04);
  pt_jet -> GetXaxis()->SetTitleSize(0.04);
  pt_jet -> GetXaxis()->SetTitleOffset(1.1);
  pt_jet -> GetYaxis()->SetTitleOffset(1.3);
  pt_jet -> SetLineWidth(2);
  pt_jet -> GetXaxis()->SetRangeUser(x1,x2);
  pt_jet -> GetYaxis()->SetRangeUser(y1,y2);
  pt_jet -> Draw("");
  float tsize = 0.04;
   tex = new TLatex(t1,t2,"#sqrt[]{s} = 13 TeV, #intLdt = 1000 pb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
   TLatex *   tex = new TLatex(t3,t4,"Jets: P_{T} > 20 GeV, |#eta| < 2.4");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
c2->cd();
  pt_jet50 -> GetYaxis()->SetTitleOffset(0.9);
  pt_jet50 -> GetYaxis()->SetTitle("# Entries");
  pt_jet50 -> GetXaxis()->SetTitle("Jet p_{T}");
  pt_jet50 -> GetYaxis()->SetTitleSize(0.04);
  pt_jet50 -> GetXaxis()->SetTitleSize(0.04);
  pt_jet50 -> GetXaxis()->SetTitleOffset(1.1);
  pt_jet50 -> GetYaxis()->SetTitleOffset(1.3);
  pt_jet50 -> SetLineWidth(2);
  pt_jet50 -> GetXaxis()->SetRangeUser(x1,x2);
  pt_jet50 -> GetYaxis()->SetRangeUser(y1,y3);
  pt_jet50 -> Draw("");
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

   c1->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/pTeT/pT_jet20.eps");
   c2->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/pTeT/pT_jet50.eps");
//  }//njet loop

}




