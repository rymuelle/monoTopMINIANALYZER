// Original Author:  Andrea RIZZI
//         Created:  Mon, 07 Jul 2014 07:56:38 GMT

// system include files
#include <memory>
#include <iostream>
#include <iomanip>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"

#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"

#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "DataFormats/PatCandidates/interface/PackedGenParticle.h"
#include "DataFormats/Candidate/interface/Candidate.h"
#include "DataFormats/HepMCCandidate/interface/GenParticle.h"
//
// class declaration
//

// ROOT includes
#include "TTree.h"


class MiniAODGenPartAnalyzer : public edm::EDAnalyzer {
  public:
    explicit MiniAODGenPartAnalyzer(const edm::ParameterSet&);
    ~MiniAODGenPartAnalyzer();
    bool isAncestor(const reco::Candidate * ancestor, const reco::Candidate * particle);


  private:
      
//    TFile * output = new TFile("test.root", "RECREATE");
    TTree* t;

    virtual void beginJob() override;
    virtual void analyze(const edm::Event&, const edm::EventSetup&) override;
    virtual void endJob() override;

    edm::EDGetTokenT<edm::View<reco::GenParticle> > prunedGenToken_;
    edm::EDGetTokenT<edm::View<pat::PackedGenParticle> > packedGenToken_;

    int count=0;
    int evN=0;

    std::vector<double> __1DMmass;
    std::vector<double> __1DMpt; 
    std::vector<double> __1DMeta; 
    std::vector<double> __1DMphi; 

    std::vector<double> __2DMmass;
    std::vector<double> __2DMpt; 
    std::vector<double> __2DMeta; 
    std::vector<double> __2DMphi; 

    std::vector<double> __1JETmass;
    std::vector<double> __1JETpt; 
    std::vector<double> __1JETeta; 
    std::vector<double> __1JETphi; 

    std::vector<double> __2JETmass;
    std::vector<double> __2JETpt; 
    std::vector<double> __2JETeta; 
    std::vector<double> __2JETphi; 

    std::vector<double> _invDMs;   
    std::vector<double> _DMsP;   
    std::vector<double> _DMsPT;   
    std::vector<double> _DMsPhi;   
    std::vector<double> _DMsEta;   

    std::vector<double> _Dphi_DM;   
    std::vector<double> _Deta_DM;   
    std::vector<double> _DR_DM;     
    std::vector<double> _Dphi_DMsJET1;
    std::vector<double> _Deta_DMsJET1;
    std::vector<double> _DR_DMsJET1;  
    std::vector<double> _Dphi_DM1JET1;
    std::vector<double> _Deta_DM1JET1;
    std::vector<double> _DR_DM1JET1;  
    std::vector<double> _Dphi_DM2JET1;
    std::vector<double> _Deta_DM2JET1;
    std::vector<double> _DR_DM2JET1;  


//    // Kinematics of the compound of the DM particles
//    TH1D *hDMDM_pt   = new TH1D("hDMDM_pt",  "", 100, 0, 500);
//    TH1D *hDMDM_Mass = new TH1D("hDMDM_Mass","", 100, 0, 1000);
//    TH1D *hDMDM_phi  = new TH1D("hDMDM_phi", "", 100, -3.2, 3.2);
//    TH1D *hDMDM_eta  = new TH1D("hDMDM_eta", "", 100, -5,   5);
//
//    TH1D *hDM1_pt    = new TH1D("hDM1_pt", "", 100, 0,    500);
//    TH1D *hDM2_pt    = new TH1D("hDM2_pt", "", 100, 0,    500);
//    TH1D *hDM1_eta   = new TH1D("hDM1_eta","", 100, -3,   3);
//    TH1D *hDM2_eta   = new TH1D("hDM2_eta","", 100, -3,   3);
//    TH1D *hDM1_phi   = new TH1D("hDM1_phi","", 100, -3.2, 3.2);
//    TH1D *hDM2_phi   = new TH1D("hDM2_phi","", 100, -3.2, 3.2);
//    TH1D *hJet_pt    = new TH1D("hJet_pt", "", 100, 0,    500);
//    TH1D *hJet_eta   = new TH1D("hJet_eta","", 100, -5,   5);
//    TH1D *hJet_phi   = new TH1D("hJet_phi","", 100, -3.2, 3.2);
//
//    TH1D *hDMDM_dR   = new TH1D("hDM_DM_dR", "", 100, 0,  6);
//    TH1D *hDM1_jet_dR  = new TH1D("hDM1_jet_dR", "", 100, 0, 6);
//    TH1D *hDM2_jet_dR  = new TH1D("hDM2_jet_dR", "", 100, 0, 6);
//    TH1D *hDMDM_jet_dR = new TH1D("hDMDM_jet_dR", "", 100, 0,  6);
//
//    TH1D *hDMDM_dPhi = new TH1D("hDM_DM_dPhi", "", 100, -3.2, 3.2);
//    TH1D *hDM1_jet_dPhi  = new TH1D("hDM1_jet_dPhi", "", 100,  -3.2, 3.2);
//    TH1D *hDM2_jet_dPhi  = new TH1D("hDM2_jet_dPhi", "", 100,  -3.2, 3.2);
//    TH1D *hDMDM_jet_dPhi = new TH1D("hDMDM_jet_dPhi", "", 100, -3.2, 3.2);
//
//    TH1D *hDMDM_dEta = new TH1D("hDM_DM_dEta", "", 100, -5  ,  -5);
//    TH1D *hDM1_jet_dEta  = new TH1D("hDM1_jet_dEta", "", 100, -5,  5);
//    TH1D *hDM2_jet_dEta  = new TH1D("hDM2_jet_dEta", "", 100, -5,  5);
//    TH1D *hDMDM_jet_dEta = new TH1D("hDMDM_jet_dEta", "", 100,-5,  5);

    TH1D *hDMDM_pt  ;    
    TH1D *hDMDM_Mass;    
    TH1D *hDMDM_phi ;    
    TH1D *hDMDM_eta ;    

    TH1D *hDM1_pt   ;    
    TH1D *hDM1_pt_example   ;    
    TH1D *hDM2_pt   ;    
    TH1D *hDM1_eta  ;    
    TH1D *hDM2_eta  ;    
    TH1D *hDM1_phi  ;    
    TH1D *hDM2_phi  ;    
    TH1D *hJet_pt   ;    
    TH1D *hJet_eta  ;    
    TH1D *hJet_phi  ;    

    TH1D *hDMDM_dR  ;    
    TH1D *hDM1_jet_dR ;  
    TH1D *hDM2_jet_dR ;  
    TH1D *hDMDM_jet_dR;  

    TH1D *hDMDM_dPhi;    
    TH1D *hDM1_jet_dPhi ;
    TH1D *hDM2_jet_dPhi ;
    TH1D *hDMDM_jet_dPhi;

    TH1D *hDMDM_dEta;    
    TH1D *hDM1_jet_dEta ;
    TH1D *hDM2_jet_dEta ;
    TH1D *hDMDM_jet_dEta;

    void InitializeVectors();

};

MiniAODGenPartAnalyzer::MiniAODGenPartAnalyzer(const edm::ParameterSet& iConfig):
  prunedGenToken_(consumes<edm::View<reco::GenParticle> >(iConfig.getParameter<edm::InputTag>("pruned"))),
  packedGenToken_(consumes<edm::View<pat::PackedGenParticle> >(iConfig.getParameter<edm::InputTag>("packed")))
{
  edm::Service<TFileService> fs;
  t = fs->make<TTree>("t","t");

  fs->cd();
  t->SetAutoSave(999999);

  t->Branch("evN",&evN);

  t->Branch("DM1mass",&__1DMmass);
  t->Branch("DM1pt",&__1DMpt);
  t->Branch("DM1eta",&__1DMeta);
  t->Branch("DM1phi",&__1DMphi);
  t->Branch("DM2mass",&__2DMmass);
  t->Branch("DM2pt",&__2DMpt);
  t->Branch("DM2eta",&__2DMeta);
  t->Branch("DM2phi",&__2DMphi);

  t->Branch("JET1mass",&__1JETmass);
  t->Branch("JET1pt",&__1JETpt);
  t->Branch("JET1eta",&__1JETeta);
  t->Branch("JET1phi",&__1JETphi);
  t->Branch("JET2mass",&__2JETmass);
  t->Branch("JET2pt",&__2JETpt);
  t->Branch("JET2eta",&__2JETeta);
  t->Branch("JET2phi",&__2JETphi);

  t->Branch("InvDMs",&_invDMs);
  t->Branch("DMsP",&_DMsP);
  t->Branch("DMsPT",&_DMsPT);
  t->Branch("DMsPhi",&_DMsPhi);
  t->Branch("DMsEta",&_DMsEta);

  t->Branch("Dphi_DM",&_Dphi_DM);
  t->Branch("Deta_DM",&_Deta_DM);
  t->Branch("DR_DM",&_DR_DM);
  t->Branch("Dphi_DMsJET1",&_Dphi_DMsJET1);
  t->Branch("Deta_DMsJET1",&_Deta_DMsJET1);
  t->Branch("DR_DMsJET1",&_DR_DMsJET1);
  t->Branch("Dphi_DM1JET1",&_Dphi_DM1JET1);
  t->Branch("Deta_DM1JET1",&_Deta_DM1JET1);
  t->Branch("DR_DM1JET1",&_DR_DM1JET1);
  t->Branch("Dphi_DM2JET1",&_Dphi_DM2JET1);
  t->Branch("Deta_DM2JET1",&_Deta_DM2JET1);
  t->Branch("DR_DM2JET1",&_DR_DM2JET1);

  t->GetCurrentFile()->Write();

    // Kinematics of the compound of the DM particles

  hDMDM_pt   = new TH1D("hDMDM_pt",  "", 100, 0, 500);
  hDMDM_Mass = new TH1D("hDMDM_Mass","", 100, 0, 1000);
  hDMDM_phi  = new TH1D("hDMDM_phi", "", 100, -3.2, 3.2);
  hDMDM_eta  = new TH1D("hDMDM_eta", "", 100, -5,   5);

  hDM1_pt    = new TH1D("hDM1_pt", "", 100, 0,    500);
  hDM1_pt_example    = new TH1D("hDM1_pt_example", "", 100, 0,    500);
  hDM2_pt    = new TH1D("hDM2_pt", "", 100, 0,    500);
  hDM1_eta   = new TH1D("hDM1_eta","", 100, -3,   3);
  hDM2_eta   = new TH1D("hDM2_eta","", 100, -3,   3);
  hDM1_phi   = new TH1D("hDM1_phi","", 100, -3.2, 3.2);
  hDM2_phi   = new TH1D("hDM2_phi","", 100, -3.2, 3.2);
  hJet_pt    = new TH1D("hJet_pt", "", 100, 0,    500);
  hJet_eta   = new TH1D("hJet_eta","", 100, -5,   5);
  hJet_phi   = new TH1D("hJet_phi","", 100, -3.2, 3.2);

  hDMDM_dR   = new TH1D("hDM_DM_dR", "", 100, 0,  6);
  hDM1_jet_dR  = new TH1D("hDM1_jet_dR", "", 100, 0, 6);
  hDM2_jet_dR  = new TH1D("hDM2_jet_dR", "", 100, 0, 6);
  hDMDM_jet_dR = new TH1D("hDMDM_jet_dR", "", 100, 0,  6);

  hDMDM_dPhi = new TH1D("hDM_DM_dPhi", "", 100, -3.2, 3.2);
  hDM1_jet_dPhi  = new TH1D("hDM1_jet_dPhi", "", 100,  -3.2, 3.2);
  hDM2_jet_dPhi  = new TH1D("hDM2_jet_dPhi", "", 100,  -3.2, 3.2);
  hDMDM_jet_dPhi = new TH1D("hDMDM_jet_dPhi", "", 100, -3.2, 3.2);

  hDMDM_dEta = new TH1D("hDM_DM_dEta", "", 100, -5  ,  -5);
  hDM1_jet_dEta  = new TH1D("hDM1_jet_dEta", "", 100, -5,  5);
  hDM2_jet_dEta  = new TH1D("hDM2_jet_dEta", "", 100, -5,  5);
  hDMDM_jet_dEta = new TH1D("hDMDM_jet_dEta", "", 100,-5,  5);
}


MiniAODGenPartAnalyzer::~MiniAODGenPartAnalyzer()
{
    //delete output;
}

//Check recursively if any ancestor of particle is the given one

bool MiniAODGenPartAnalyzer::isAncestor(const reco::Candidate* ancestor, const reco::Candidate * particle)
{
  //particle is already the ancestor
  if(ancestor == particle ) return true;

  //otherwise loop on mothers, if any and return true if the ancestor is found
  for(size_t i=0;i< particle->numberOfMothers();i++)
  {
    if(isAncestor(ancestor,particle->mother(i))) return true;
  }
  //if we did not return yet, then particle and ancestor are not relatives
  return false;
}

  void
MiniAODGenPartAnalyzer::analyze(const edm::Event& iEvent, const edm::EventSetup& iSetup)
{
  InitializeVectors();

  using namespace edm;
  using namespace reco;
  using namespace pat;

  // Pruned particles are the one containing "important" stuff
  Handle<edm::View<reco::GenParticle> > pruned;
  iEvent.getByToken(prunedGenToken_,pruned);

  // Packed particles are all the status 1, so usable to remake jets
  // The navigation from status 1 to pruned is possible (the other direction should be made by hand)
  Handle<edm::View<pat::PackedGenParticle> > packed;
  iEvent.getByToken(packedGenToken_,packed);

  //int Mon=0;
  //double Pt=-1.;
  //int St=0;
  std::cout << std::setprecision(3);
  //std::cout << std::fixed;

  double Dphi_DM=0.,      Deta_DM=0.,      DR_DM=0.; 
  double Dphi_DMsJET1=0., Deta_DMsJET1=0., DR_DMsJET1=0.; 
  double Dphi_DM1JET1=0., Deta_DM1JET1=0., DR_DM1JET1=0.; 
  double Dphi_DM2JET1=0., Deta_DM2JET1=0., DR_DM2JET1=0.; 

  double _1DMmass=0., _2DMmass=0., _1JETmass=0., _2JETmass=0., _1DMP =0., _2DMP =0.;
  double _1DMpt=0.,   _2DMpt=0.,   _1JETpt=0.,   _2JETpt=0.,   _1DMpx=0., _2DMpx=0.;
  double _1DMeta=0.,  _2DMeta=0.,  _1JETeta=0.,  _2JETeta=0.,  _1DMpy=0., _2DMpy=0.;
  double _1DMphi=0.,  _2DMphi=0.,  _1JETphi=0.,  _2JETphi=0.,  _1DMpz=0., _2DMpz=0.;
  double invDMs=0., DMsP=0., DMsPT=0., DMsPhi=0., DMsEta=0.;

  int k=0;

  for(size_t i=0; i<pruned->size();i++){

    //let's try to find all status1 originating directly from a B meson decay 

    const Candidate * mom = (*pruned)[i].mother();
    if(mom!=0) {
      //Mon = mom->pdgId();
      //St = mom->status();
      //Pt = mom->pt();
    }

//    if(i==0) std::cout<<"\n"<<count<<") pruned->size() = "<<pruned->size()<<std::endl;
    //if( abs((*pruned)[i].pdgId()) == 18 ){
      //std::cout<<i<<")  PdgID:"<<(*pruned)[i].pdgId()<<", mom: "<<Mon<<", mom pt = "<Pt<<", status(): "<<(*pruned)[i].status()<<", mass: "<<(*pruned)[i].mass()<<", pt: "<<(*pruned)[i].pt()<<", eta: "<<(*pruned)[i].eta()<<", phi: "<<(*pruned)[i].phi()<<std::endl;
      //std::cout<<i<<")  PdgID:"<<(*pruned)[i].pdgId()<<", mom: "<<Mon<<", mom st = "<<St<<", mom pt = "<<Pt<<" , status(): "<<(*pruned)[i].status()<<", mass: "<<(*pruned)[i].mass()<<", pt: "<<(*pruned)[i].pt()<<", eta: "<<(*pruned)[i].eta()<<", phi: "<<(*pruned)[i].phi()<<std::endl;

    if( //( (*pruned)[i].pdgId() == 2212 && (*pruned)[i].status() ==4 ) ||
        abs( (*pruned)[i].pdgId() ) == 18 || 
        (*pruned)[i].status() ==23 
      ) {

//      std::cout
//        <<std::setw(4) <<i
//        <<")  PdgID:" <<std::setw(5) <<(*pruned)[i].pdgId()
//        <<", status: " <<std::setw(3) <<(*pruned)[i].status()
//        <<", mom: " <<std::setw(5) <<Mon
//        <<", mom st: " <<std::setw(3) <<St
//        <<", mass: " <<std::setw(9) <<(*pruned)[i].mass()
//        <<", pt: " <<std::setw(8) <<(*pruned)[i].pt()
//        <<", eta: " <<std::setw(9) <<(*pruned)[i].eta()
//        <<", phi: " <<std::setw(5) <<(*pruned)[i].phi()
//        <<std::endl;

      if( (*pruned)[i].pdgId() == 18 ) {
        _1DMmass = (*pruned)[i].mass();
        _1DMP    = (*pruned)[i].p();
        _1DMpt   = (*pruned)[i].pt();
        _1DMpx   = (*pruned)[i].px();
        _1DMpy   = (*pruned)[i].py();
        _1DMpz   = (*pruned)[i].pz();
        _1DMeta  = (*pruned)[i].eta();
        _1DMphi  = (*pruned)[i].phi();
      }
      else if( (*pruned)[i].pdgId() == -18 ) {
        _2DMmass = (*pruned)[i].mass();
        _2DMP    = (*pruned)[i].p();
        _2DMpt   = (*pruned)[i].pt();
        _2DMpx   = (*pruned)[i].px();
        _2DMpy   = (*pruned)[i].py();
        _2DMpz   = (*pruned)[i].pz();
        _2DMeta  = (*pruned)[i].eta();
        _2DMphi  = (*pruned)[i].phi();
      }
      else {
        if(k==0) {
          _1JETmass = (*pruned)[i].mass();
          _1JETpt   = (*pruned)[i].pt();  
          _1JETeta  = (*pruned)[i].eta(); 
          _1JETphi  = (*pruned)[i].phi(); 
        }
        else {
          _2JETmass = (*pruned)[i].mass();
          _2JETpt   = (*pruned)[i].pt();  
          _2JETeta  = (*pruned)[i].eta(); 
          _2JETphi  = (*pruned)[i].phi(); 
        }
        k++;
      }
    }
  }

  invDMs = sqrt( pow(_1DMP+_2DMP,2) - pow(_1DMpx+_2DMpx,2) - pow(_1DMpy+_2DMpy,2) - pow(_1DMpz+_2DMpz,2) );
  DMsP   = sqrt( pow(_1DMpx+_2DMpx,2) + pow(_1DMpy+_2DMpy,2) + pow(_1DMpz+_2DMpz,2) );
  DMsPT  = sqrt( pow(_1DMpx+_2DMpx,2) + pow(_1DMpy+_2DMpy,2) );
  DMsPhi = atan2(_1DMpy+_2DMpy,_1DMpx+_2DMpx);
  DMsEta = 1/2.*log((DMsP+_1DMpz+_2DMpz)/(DMsP-_1DMpz-_2DMpz));

  Dphi_DM = _1DMphi-_2DMphi;
  if(Dphi_DM >= M_PI) Dphi_DM = Dphi_DM - 2*M_PI;
  if(Dphi_DM < -M_PI) Dphi_DM = Dphi_DM + 2*M_PI;
  Deta_DM = _1DMeta-_2DMeta;
  DR_DM = sqrt( pow(Dphi_DM,2) + pow(Deta_DM,2) );

  Dphi_DMsJET1 = DMsPhi-_1JETphi;
  if(Dphi_DMsJET1 >= M_PI) Dphi_DMsJET1 = Dphi_DMsJET1 - 2*M_PI;
  if(Dphi_DMsJET1 < -M_PI) Dphi_DMsJET1 = Dphi_DMsJET1 + 2*M_PI;
  Deta_DMsJET1 = DMsEta-_1JETeta;
  DR_DMsJET1 = sqrt( pow(Dphi_DMsJET1,2) + pow(Deta_DMsJET1,2) );

  Dphi_DM1JET1 = _1DMphi-_1JETphi;
  if(Dphi_DM1JET1 >= M_PI) Dphi_DM1JET1 = Dphi_DM1JET1 - 2*M_PI;
  if(Dphi_DM1JET1 < -M_PI) Dphi_DM1JET1 = Dphi_DM1JET1 + 2*M_PI;
  Deta_DM1JET1 = _1DMeta-_1JETeta;
  DR_DM1JET1 = sqrt( pow(Dphi_DM1JET1,2) + pow(Deta_DM1JET1,2) );

  Dphi_DM2JET1 = _2DMphi-_1JETphi;
  if(Dphi_DM2JET1 >= M_PI) Dphi_DM2JET1 = Dphi_DM2JET1 - 2*M_PI;
  if(Dphi_DM2JET1 < -M_PI) Dphi_DM2JET1 = Dphi_DM2JET1 + 2*M_PI;
  Deta_DM2JET1 = _2DMeta-_1JETeta;
  DR_DM2JET1 = sqrt( pow(Dphi_DM2JET1,2) + pow(Deta_DM2JET1,2) );


  evN++;               

  _invDMs.push_back(invDMs);
  _DMsP.push_back(DMsP  );
  _DMsPT.push_back(DMsPT );
  _DMsPhi.push_back(DMsPhi);
  _DMsEta.push_back(DMsEta);

  _Dphi_DM.push_back( Dphi_DM );
  _Deta_DM.push_back( Deta_DM );
  _DR_DM.push_back( DR_DM );

  _Dphi_DMsJET1.push_back( Dphi_DMsJET1 );
  _Deta_DMsJET1.push_back( Deta_DMsJET1 );
  _DR_DMsJET1.push_back( DR_DMsJET1 );

  _Dphi_DM1JET1.push_back( Dphi_DM1JET1 );
  _Deta_DM1JET1.push_back( Deta_DM1JET1 );
  _DR_DM1JET1.push_back( DR_DM1JET1 );

  _Dphi_DM2JET1.push_back( Dphi_DM2JET1 );
  _Deta_DM2JET1.push_back( Deta_DM2JET1 );
  _DR_DM2JET1.push_back( DR_DM2JET1 );

  __1DMmass.push_back(_1DMmass);
  __1DMpt.push_back(_1DMpt);
  __1DMeta.push_back(_1DMeta);
  __1DMphi.push_back(_1DMphi);

  __2DMmass.push_back(_2DMmass);
  __2DMpt.push_back(_2DMpt);
  __2DMeta.push_back(_2DMeta);
  __2DMphi.push_back(_2DMphi);

  __1JETmass.push_back(_1JETmass);
  __1JETpt.push_back(_1JETpt);
  __1JETeta.push_back(_1JETeta);
  __1JETphi.push_back(_1JETphi);

  __2JETmass.push_back(_2JETmass);
  __2JETpt.push_back(_2JETpt);
  __2JETeta.push_back(_2JETeta);
  __2JETphi.push_back(_2JETphi);

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


//  //  if(abs((*pruned)[i].pdgId()) > 400 && abs((*pruned)[i].pdgId()) <600){
//  //    //if( abs((*pruned)[i].pdgId()) == 18 ){
//  //    const Candidate * bMeson = &(*pruned)[i];
//  //    std::cout<<"\n  -> found daugthers!  PdgID:"<<bMeson->pdgId()<<" status(): "<<bMeson->status()<<", pt"<<bMeson->pt()<<", eta:"<<bMeson->eta()<<", phi:"<<bMeson->phi()<<std::endl;
//      for(size_t j=0; j<packed->size();j++){
//        if(j==0) std::cout<<"\n  "<<"packed->size() = "<<packed->size()<<std::endl;
//  
//        //get the pointer to the first survied ancestor of a given packed GenParticle in the prunedCollection 
//        //        const Candidate * motherInPrunedCollection = (*packed)[j].mother(0) ;
//        //        if(motherInPrunedCollection != nullptr && isAncestor( bMeson , motherInPrunedCollection)){
//        //          std::cout<<"     => PdgID: "<<(*packed)[j].pdgId()<<", status(): "<<(*packed)[j].status()<<", pt: "<<(*packed)[j].pt()<<", eta: "<<(*packed)[j].eta()<<", phi: "<<(*packed)[j].phi()<<std::endl;
//        //        }
//  
//        double Dphi=0, Deta=0, DR=0; 
//        if( abs((*packed)[j].pdgId()) == 18 ){
//          if( (*packed)[j].pdgId() == -18 ) {
//            Dphi = (*packed)[j].phi()-(*packed)[j-1].phi();
//            if(Dphi >= M_PI) Dphi = Dphi - 2*M_PI;
//            if(Dphi < -M_PI) Dphi = Dphi + 2*M_PI;
//            Deta = (*packed)[j].eta()-(*packed)[j-1].eta();
//            DR = sqrt( pow(Dphi,2) + pow(Deta,2) );
//          }
//          std::cout<<"     "<<j<<",    => PdgID: "<<(*packed)[j].pdgId()<<", status(): "<<(*packed)[j].status()<<", pt: "<<(*packed)[j].pt()<<", eta: "<<(*packed)[j].eta()<<", phi: "<<(*packed)[j].phi()<<", DR = "<<DR<<std::endl;
//        }
//      }
//  //  }


  count++;

  t->Fill();

}

void MiniAODGenPartAnalyzer::beginJob()
{
  std::cout<<"\n in begin job "<<std::endl;

}

void MiniAODGenPartAnalyzer::endJob() 
{
  std::cout<<"\n in end job "<<std::endl;

//gDirectory->mkdir("MiniAODGenPartAnalyzer/Gen");
 // gDirectory->cd("MiniAODGenPartAnalyzer/Gen");
//  gDirectory->pwd();

  hDMDM_Mass    ->Write();
  hDMDM_pt      ->Write();
  hDMDM_phi     ->Write();
  hDMDM_eta     ->Write();
  hDM1_pt       ->Write();
  hDM1_pt_example       ->Write();
  hDM1_eta      ->Write();
  hDM1_phi      ->Write();
  hDM2_pt       ->Write();
  hDM2_eta      ->Write();
  hDM2_phi      ->Write();
  hJet_pt       ->Write();
  hJet_eta      ->Write();
  hJet_phi      ->Write();

  hDMDM_dR      ->Write();
  hDM1_jet_dR   ->Write();
  hDM2_jet_dR   ->Write();
  hDMDM_jet_dR  ->Write();

  hDMDM_dPhi    ->Write();
  hDM1_jet_dPhi ->Write();
  hDM2_jet_dPhi ->Write();
  hDMDM_jet_dPhi->Write();

  hDMDM_dEta    ->Write();
  hDM1_jet_dEta ->Write();
  hDM2_jet_dEta ->Write();
  hDMDM_jet_dEta->Write();


//  output->Write();
//  output->Close();
}

void MiniAODGenPartAnalyzer::InitializeVectors()
{
  count=0;
  evN=0;

  __1DMmass.clear();
  __1DMpt.clear(); 
  __1DMeta.clear(); 
  __1DMphi.clear(); 
  __2DMmass.clear();
  __2DMpt.clear(); 
  __2DMeta.clear(); 
  __2DMphi.clear(); 

  __1JETmass.clear();
  __1JETpt.clear(); 
  __1JETeta.clear(); 
  __1JETphi.clear(); 
  __2JETmass.clear();
  __2JETpt.clear(); 
  __2JETeta.clear(); 
  __2JETphi.clear(); 

  _invDMs.clear();
  _DMsP.clear();
  _DMsPT.clear();
  _DMsPhi.clear();
  _DMsEta.clear();

  _Dphi_DM.clear();   
  _Deta_DM.clear();   
  _DR_DM.clear();     
  _Dphi_DMsJET1.clear();
  _Deta_DMsJET1.clear();
  _DR_DMsJET1.clear();  
  _Dphi_DM1JET1.clear();
  _Deta_DM1JET1.clear();
  _DR_DM1JET1.clear();  
  _Dphi_DM2JET1.clear();
  _Deta_DM2JET1.clear();
  _DR_DM2JET1.clear();  


}


DEFINE_FWK_MODULE(MiniAODGenPartAnalyzer);
