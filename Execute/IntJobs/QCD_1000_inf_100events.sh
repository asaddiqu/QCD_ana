#bin/bash
cd /Users/asifsaddique/CMS_BH/QCD_13TeV/
root -l -b <<EOF
TStopwatch timer;
timer.Start();
TChain* chain=new TChain("bhana/t");
chain->Add("/Users/asifsaddique/CMS_BH/QCD_ana/Execute/QCD/QCD_1000_inf_100events.root");
gSystem->Load("/Users/asifsaddique/CMS_BH/QCD_ana/Execute/FirstBHMacro_C.so");
FirstBHMacro run(chain);
run.Loop("qcd/QCD_1000_inf_100events",0.002);
timer.Stop();
timer.Print();
.q;
EOF
