#include <iostream>

void sTRatioAll(TString label)
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
  cout<<"\033[1;31m ERROR!!!, please run the code with one of following two options:\033[0m"<<endl;
  cout<<"\033[1;32m a). root 'sTRatioAll.C(\"exc\")'\033[0m"<<endl;
  cout<<"\033[1;32m b). root 'sTRatioAll.C(\"inc\")'\033[0m"<<endl;
  return 0;
  }
 
TCanvas *c1 = new TCanvas("c1","c1",600,600);

TLegend *leg = new TLegend(0.6459732,0.6335079,0.8758389,0.8568935);
 float y1=-4 , y2=15;
 float x1=0.,  x2=6500.;
 Double_t t1=0.4395973,t2=0.2;
 Double_t t3=t1, t4=0.15;
 lr=new TLine(x1,1,x2,1); lr ->SetLineColor(1); lr ->SetLineStyle(1);
 lc1=new TLine(1200,y1,1200,y2);  lc1 ->SetLineColor(1); lc1 ->SetLineStyle(2);
 lc2=new TLine(1800,y1,1800,y2);  lc2 ->SetLineColor(1); lc2 ->SetLineStyle(2);
for(Int_t i=3; i<8 ;i++){

TString ref="3";
if(ref=="3")j=i+1;
if(ref=="2")j=i;

    TString njet; stringstream nj;
    nj << j; njet=nj.str();


TFile *data = new TFile("/Users/asifsaddique/CMS_BH/QCD_13TeV/output_qcd/QCD_madgraph.root", "READ");
TH1F *st_inp  = (TH1F*)gDirectory -> Get("ST/ST_"+njet+"jet_"+label);
TH1F *st_ref  = (TH1F*)gDirectory -> Get("ST/ST_"+ref+"jet_exc");

TH1F *rst_histo = new TH1F("rst_histo","",80,0, 8000);
rst_histo -> Divide(st_inp,st_ref);
float sf=st_ref->Integral(0,4000)/st_inp->Integral(0,4000);
rst_histo ->Scale(sf);
  leg->AddEntry( rst_histo, multi+njet+" / N = "+ref, "lp");
  
  rst_histo -> SetMarkerStyle(i+17);
  rst_histo -> SetMarkerSize(0.8);
  rst_histo -> SetMarkerColor(i-1);
  rst_histo -> SetLineColor(i-1);
  if(i==3){
  rst_histo -> GetYaxis()->SetTitle("Entries / 100 GeV");
  rst_histo -> GetXaxis()->SetTitle("S_{T} [GeV]");
  rst_histo -> GetXaxis()->SetRangeUser(x1,x2);
  rst_histo -> GetYaxis()->SetRangeUser(y1,y2);
  rst_histo -> Draw("E1");
  lr->Draw("sames");
  lc1->Draw("sames");
  lc2->Draw("sames");
  rst_histo -> Draw("samesE1");
  }
  if(i>3){ 
  rst_histo -> Draw("samesE1");
  if(i==6){ 
  rst_histo -> SetMarkerColor(7); 
  rst_histo -> SetLineColor(7);
 }
}

} //jet Loop
   float tsize=0.035;
   leg->SetTextFont(42);  leg->SetTextSize(tsize);
   leg->SetLineColor(1);  leg->SetBorderSize(0);
   leg->SetBorderSize(0); leg->SetLineStyle(4);
   leg->SetLineWidth(1);  leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   leg->Draw("");
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

c1->SaveAs("/Users/asifsaddique/CMS_BH/QCD_13TeV/Macros/bh_plots/rstRef"+ref+"All_"+label+"_qcd.eps");

}

void sTRatioAll(){
cout<<"\033[1;31m ERROR!!!, please run the code with one of following two options:\033[0m"<<endl;
cout<<"\033[1;32m a). root 'sTRatioAll.C(\"exc\")'\033[0m"<<endl;
cout<<"\033[1;32m b). root 'sTRatioAll.C(\"inc\")'\033[0m"<<endl;
return 0;
}
