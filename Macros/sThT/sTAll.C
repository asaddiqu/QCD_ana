#include <iostream>

void sTAll(TString label)
{
  gStyle -> SetStripDecimals(kFALSE);
  gStyle -> SetPadTickX(1);
  gStyle -> SetPadTickY(1);
  gStyle -> SetOptTitle(0);
  gStyle -> SetOptStat(0);
  TString multi;
  if(label=="exc") multi="N = ";
  else if(label=="inc") multi="N #geq ";
  else{
  cout<<"\033[1;31m ERROR!!!, run the code with one of following two options:\033[0m"<<endl;
  cout<<"\033[1;32m a). root 'sTAll.C(\"exc\")'\033[0m"<<endl;
  cout<<"\033[1;32m b). root 'sTAll.C(\"inc\")'\033[0m"<<endl;
  return 0;
  }
  float y1=0.65 , y2=1000000;
  float x1=0.,  x2=6000.;
  Double_t t1=0.4395973,t2=0.8;
  Double_t t3=t1, t4=0.7302697;
  
  
  TCanvas *c1 = new TCanvas("c1","c1",600,600);
  
  c1->cd();
  for(Int_t i=2; i<8 ;i++){
    TString njet; stringstream nj;
    nj << i; njet=nj.str();
  
  TFile *data = new TFile("/Users/asifsaddique/CMS_BH/QCD_13TeV/output_qcd/QCD_madgraph.root", "READ");
  TH1F *st_histo  = (TH1F*)gDirectory -> Get("ST/ST_"+njet+"jet_"+label);
  
  st_histo->GetSumw2()->Set(0);
  
  st_histo->Scale(1000); 

  
  if(i==2){
  st_histo -> GetYaxis()->SetTitleOffset(0.9);
  st_histo -> GetXaxis()->CenterTitle();
  st_histo -> GetYaxis()->CenterTitle();
  st_histo -> GetYaxis()->SetTitle("Entries / 100 GeV");
  st_histo -> GetXaxis()->SetTitle("H_{T} [GeV]");
  st_histo -> GetYaxis()->SetTitleSize(0.04);
  st_histo -> GetXaxis()->SetTitleSize(0.04);
  st_histo -> GetXaxis()->SetTitleOffset(1.1);
  st_histo -> GetYaxis()->SetTitleOffset(1.1);
  st_histo -> GetXaxis()->SetRangeUser(x1,x2);
  st_histo -> GetYaxis()->SetRangeUser(y1,y2);
  st_histo -> SetLineColor(1);
  st_histo -> SetLineWidth(2);
  st_histo -> Draw("");
  TLegend *leg = new TLegend(0.6224832,0.4642234,0.852349,0.6876091);
  leg->AddEntry( st_histo, multi+njet, "l");
  }//i=2
  if(i>2){
  st_histo -> SetLineWidth(2);
  st_histo -> SetLineColor(i-1);
  if(i==6)st_histo -> SetLineColor(7);
  st_histo -> Draw("sames");     
  leg->AddEntry( st_histo, multi+njet, "l");
  }//i>2

  }//njet loop

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
  leg->SetTextFont(42);  leg->SetTextSize(tsize);
  leg->SetLineColor(1);  leg->SetBorderSize(0);
  leg->SetBorderSize(0); leg->SetLineStyle(4);
  leg->SetLineWidth(1);  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->Draw("");
  gPad->RedrawAxis();
  c1 -> SetLogy();
  c1->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/stcombo_"+label+"_qcd.eps");
}
void sTAll(){
  cout<<"\033[1;31m ERROR!!!, run the code with one of following two options:\033[0m"<<endl;
  cout<<"\033[1;32m a). root 'sTAll.C(\"exc\")'\033[0m"<<endl;
  cout<<"\033[1;32m b). root 'sTAll.C(\"inc\")'\033[0m"<<endl;
}
