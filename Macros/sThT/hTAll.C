#include <iostream>

void hTAll(TString label)
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
  cout<<"\033[1;32m a). root 'hTAll.C(\"exc\")'\033[0m"<<endl;
  cout<<"\033[1;32m b). root 'hTAll.C(\"inc\")'\033[0m"<<endl;
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
  TH1F *ht_histo  = (TH1F*)gDirectory -> Get("HT/HT_"+njet+"jet_"+label);
  
  ht_histo->GetSumw2()->Set(0);
  
  ht_histo->Scale(1000); 

  
  if(i==2){
  ht_histo -> GetYaxis()->SetTitleOffset(0.9);
  ht_histo -> GetXaxis()->CenterTitle();
  ht_histo -> GetYaxis()->CenterTitle();
  ht_histo -> GetYaxis()->SetTitle("Entries / 100 GeV");
  ht_histo -> GetXaxis()->SetTitle("H_{T} [GeV]");
  ht_histo -> GetYaxis()->SetTitleSize(0.04);
  ht_histo -> GetXaxis()->SetTitleSize(0.04);
  ht_histo -> GetXaxis()->SetTitleOffset(1.1);
  ht_histo -> GetYaxis()->SetTitleOffset(1.1);
  ht_histo -> GetXaxis()->SetRangeUser(x1,x2);
  ht_histo -> GetYaxis()->SetRangeUser(y1,y2);
  ht_histo -> SetLineColor(1);
  ht_histo -> SetLineWidth(2);
  ht_histo -> Draw("");
  TLegend *leg = new TLegend(0.6224832,0.4642234,0.852349,0.6876091);
  leg->AddEntry( ht_histo, multi+njet, "l");
  }//i=2
  if(i>2){
  ht_histo -> SetLineWidth(2);
  ht_histo -> SetLineColor(i-1);
  if(i==6)ht_histo -> SetLineColor(7);
  ht_histo -> Draw("sames");     
  leg->AddEntry( ht_histo, multi+njet, "l");
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
  c1->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/htcombo_"+label+"_qcd.eps");
}
void hTAll(){
  cout<<"\033[1;31m ERROR!!!, run the code with one of following two options:\033[0m"<<endl;
  cout<<"\033[1;32m a). root 'hTAll.C(\"exc\")'\033[0m"<<endl;
  cout<<"\033[1;32m b). root 'hTAll.C(\"inc\")'\033[0m"<<endl;
}
