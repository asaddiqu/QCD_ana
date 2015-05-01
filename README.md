# Ntuplizer to Macro Plots
Please follow these steps in sequence:
# 1) Obtain output root file from Ntuplizer
You can pass QCD MCs datasets through Ntuplizer to obtain an output root file.  
For example, I pass a sample QCD file for 100 events and obtain an output root file:  
"QCD_1000_inf_100events.root"  
# 2) To do list in QCD_ana directory
Before anything else, we should understand the structure of "QCD_ana" directory.  
QCD_ana directory contains following two subdirectories:    
a). Execute b). Macros 
## a). "Execute" directory structure
Inside "Execute" directory, we have  
- FirstBHMacro.C & FirstBHMacro.h (Main Code & header file)
- compile.sh (To compile the main code)
- RunQCD.sh (To run the main code)
- IntJobs (Directory for Interactive jobs produced by RunQCD.sh)
- QCD (Directory for input root files)
- output_qcd (Directory for output root files)
- qcd.txt (File containing names of input root files)
  
#### Working in "Execute" directory
As the root file (QCD_1000_inf_100events.root) created by Ntuplizer contains a tree with  
several branches. We need a macro like "FirstBHMacro.C" to read that tree.  
Now follow these steps inside "Execute" directory:  
- Put the "QCD_1000_inf_100events.root" in "QCD" directory  
- Write its name in "qcd.txt" file, if you have several file in "QCD" directory then  
each file name should be in separate line.  
- Set the paths inside "RunQCD.sh" file, for example paths of "Execute", "IntJobs" and  
"QCD" directories.  
- In shell, please run "./compile.sh" to compile the code.  
- In shell, please run "./RunQCD.sh" to run the code.  
- If everything goes fine, you will see output root file/files in "output_qcd" directory.  
- If you have several output root file, then add all the root files by root's hadd function.  
- Now you can exit from "Execute" directory and go to "Macro" directory for beautiful plots ;)  

## b). "Macro" directory structure 
I suppose you are in "Macro" directory now, and rest of job is a lot easier.
The "Macro" directory contains subdirectories with respect to variables:
- EtaPhi   
- FitRatio 
- general  
- pTeT     
- ratio    
- sThT  
- bh_plots (the output plots in eps formats go in this directory)

####  Working in "Macro" directory
For example, you are in shell and then you would go inside "sThT" directory:
Now you can run
```
root 'sTAll.C("exc")'
```
for exclusive sT plots, or run 
```
root 'sTAll.C("inc")'
```
for inclusive plots.
If you simple run
```
root sTAll.C()
```
then code will print an error message and it will let you know how to run.

Similarly, if you go "ratio" directory then you can run
```
root 'sTRatio.C("exc")'
``` 
for sT ratio plots for exculive multiplicities with reference N = 3. But if   
you want to run same code for reference N = 2 then go inside code and change  
3 to 2 in this line
```
TString ref="3";
```
You can go with the inclusive case by the same way.
### Please Note
- Don't forget to change the "output_qcd" root files path  and "bh_plots" path to   
read and save the plot properly.
- Object ID and other cuts are applied in FirstBHMacro.C




