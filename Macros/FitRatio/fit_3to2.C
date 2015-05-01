#include <iostream>

void fit_3to2(){

  gStyle -> SetStripDecimals(kFALSE);
  gStyle -> SetPadTickX(1);
  gStyle -> SetPadTickY(1);
  gStyle -> SetOptTitle(0);
  gStyle -> SetOptStat(0);
  gStyle->SetOptFit(11111);
  float y1=-5 , y2=10;
  float x1=1200.,    x2=5200.;
  Double_t t1=0.2,t2=0.8;
  Double_t t3=0.2, t4=0.72;


   TFile *data   = new TFile("/Users/asifsaddique/CMS_BH/QCD_13TeV/output_qcd/QCD_madgraph.root", "READ");
   TH1F *st_ref  = (TH1F*)gDirectory -> Get("ST/ST_2jet_exc");
   TH1F *st_inp  = (TH1F*)gDirectory -> Get("ST/ST_3jet_exc");

   TH1F* st_32jet_exc = new TH1F("st_32jet_exc","",80,0,8000);
   st_32jet_exc -> Divide(st_inp,st_ref);
   float sf = st_ref->Integral(0,4000)/st_inp->Integral(0,4000);
   st_32jet_exc -> Scale(sf); 
   TF1 *f1 = new TF1("f1","pol1",1200,4200);

   TCanvas *c1 = new TCanvas("c1","c1",800,600);
   st_32jet_exc -> Fit("f1","R");
   st_32jet_exc -> GetYaxis()->SetTitle("Entries / 100 GeV");
   st_32jet_exc -> GetXaxis()->SetTitle("S_{T} [GeV]");
   st_32jet_exc -> GetXaxis()->SetRangeUser(x1,x2);
   st_32jet_exc -> GetYaxis()->SetRangeUser(y1,y2);
   st_32jet_exc -> SetMarkerStyle(21);
   st_32jet_exc -> SetMarkerSize(0.8);
   st_32jet_exc -> SetMarkerColor(1);
   st_32jet_exc -> SetLineColor(1);
   st_32jet_exc -> Draw("E1");
  
   float tsize=0.04;
   tex = new TLatex(t1,t2,"#sqrt[]{s} = 13 TeV, #intLdt = 1000 pb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->Draw();
   
   TLatex *   tex = new TLatex(t3,t4,"Jets, E_{T} > 50 GeV, |#eta| < 2.4");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(tsize);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.2,0.6,0.6,0.6);
   leg->AddEntry( st_32jet_exc, "N = 3 / N=2", "lp");
   leg->SetTextFont(42);  leg->SetTextSize(tsize);
   leg->SetLineColor(1);  leg->SetBorderSize(0);
   leg->SetBorderSize(0); leg->SetLineStyle(4);
   leg->SetLineWidth(1);  leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->Draw("");
  
   c1->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/fitratio/N3to2_fit.eps");

}

