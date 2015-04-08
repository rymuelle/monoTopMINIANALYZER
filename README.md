# monoTopMINIANALYZER
repo of the minianalyzer being used for monotop analysis


cmsrel CMSSW_7_2_3
cd CMSSW_7_2_3/src
cmsenv

mkdir Genlevel
cd Genlevel
mkedanlzr MiniAnalyzer
cd MiniAnalyzer


copy Genlevel.cc and Buildfile.xml into plugins and gen1.py into test

run with cmsenv and then cmsRun gen1.py or submit as a crab job
