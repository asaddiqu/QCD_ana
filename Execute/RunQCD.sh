#bin/bash
declare -i i
i=1
for file in `cat  qcd.txt`
do
   tag=`echo $file| cut -f1 -d'.'`
   sam=`echo $file| cut -f2 -d'_'`
   if [ $sam -eq 100 ]; then
       wt=6.967;  
   elif [ $sam -eq 250 ]; then
       wt=1.01;  
   elif [ $sam -eq 500 ]; then
       wt=0.031;  
   elif [ $sam -eq 1000 ]; then
       wt=0.002;  
   else 
       wt=1; fi
   cd /Users/asifsaddique/CMS_BH/QCD_ana/Execute/IntJobs
   echo \#bin\/bash > $tag.sh
   echo  cd /Users/asifsaddique/CMS_BH/QCD_13TeV/ >> $tag.sh
   echo  root -l -b \<\<EOF >> $tag.sh
   echo  TStopwatch timer\; >> $tag.sh
   echo  timer.Start\(\)\; >> $tag.sh
   echo  TChain\* chain=new TChain\(\"bhana/t\"\)\;  >> $tag.sh
   echo  chain-\>Add\(\"/Users/asifsaddique/CMS_BH/QCD_ana/Execute/QCD/$file\"\)\; >> $tag.sh
   echo  gSystem-\>Load\(\"/Users/asifsaddique/CMS_BH/QCD_ana/Execute/FirstBHMacro_C.so\"\)\; >> $tag.sh
   echo  FirstBHMacro run\(chain\)\; >> $tag.sh
   echo  run.Loop\(\"qcd/${tag}\"\,$wt\)\; >> $tag.sh
   echo  timer.Stop\(\)\; >> $tag.sh
   echo  timer.Print\(\)\; >> $tag.sh
   echo  .q\; >> $tag.sh
   echo  EOF >> $tag.sh
   chmod +x $tag.sh
   echo $file ":" $wt
   ./$tag.sh
   i=i+1
done
