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



Here are the plots:

  hDMDM_Mass      ->Fill( invDMs );   
  hDMDM_pt        ->Fill( DMsPT  );   
  hDMDM_phi       ->Fill( DMsPhi );   
  hDMDM_eta       ->Fill( DMsEta );   

  hDM1_pt         ->Fill( _1DMpt   );                                                                                                                                                                                                                                           
  hDM1_pt_example         ->Fill( _1DMpt   );  
  hDM1_eta        ->Fill( _1DMeta  );  
  hDM1_phi        ->Fill( _1DMphi  );  
  hDM2_pt         ->Fill( _2DMpt   );  
  hDM2_eta        ->Fill( _2DMeta  );  
  hDM2_phi        ->Fill( _2DMphi  );  
  hJet_pt         ->Fill( _1JETpt  );  
  hJet_eta        ->Fill( _1JETeta );  
  hJet_phi        ->Fill( _1JETphi );  

  hDMDM_dR        ->Fill( DR_DM        );    
  hDM1_jet_dR     ->Fill( DR_DM1JET1   );  
  hDM2_jet_dR     ->Fill( DR_DM2JET1   );  
  hDMDM_jet_dR    ->Fill( DR_DMsJET1   );  

  hDMDM_dPhi      ->Fill( Dphi_DM      );    
  hDM1_jet_dPhi   ->Fill( Dphi_DM1JET1 );
  hDM2_jet_dPhi   ->Fill( Dphi_DM2JET1 );
  hDMDM_jet_dPhi  ->Fill( Dphi_DMsJET1 );

  hDMDM_dEta      ->Fill( Deta_DM      );    
  hDM1_jet_dEta   ->Fill( Deta_DM1JET1 );
  hDM2_jet_dEta   ->Fill( Deta_DM2JET1 );
  hDMDM_jet_dEta  ->Fill( Deta_DMsJET1 );

