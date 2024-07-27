//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Tue Jul 11 14:40:55 2023 by ROOT version 6.28/04
// from TTree AnalysisMiniTree/xAOD->NTuple tree
// found on file: user.dabattul.32511667._000001.output-hh4b.root
//////////////////////////////////////////////////////////

#ifndef sh4b_h
#define sh4b_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "c++/11/vector"
#include "c++/11/vector"
#include "c++/11/vector"
#include "c++/11/vector"

class sh4b {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          runNumber;
   ULong64_t       eventNumber;
   UInt_t          lumiBlock;
   vector<float>   *mcEventWeights;
   Float_t         averageInteractionsPerCrossing;
   Float_t         actualInteractionsPerCrossing;
   UInt_t          mcChannelNumber;
   Bool_t          trigPassed_HLT_2j55_bmv2c2060_split_ht300_L14J15;
   Bool_t          trigPassed_HLT_j360_a10_lcw_sub_L1J100;
   Bool_t          trigPassed_HLT_j420_a10_lcw_L1J100;
   Bool_t          trigPassed_HLT_j150_bmv2c2060_split_j50_bmv2c2060_split;
   Bool_t          trigPassed_HLT_j175_bmv2c2040_split;
   Bool_t          trigPassed_HLT_j100_2j55_bmv2c2060_split;
   Bool_t          trigPassed_HLT_j420_a10r_L1J100;
   Bool_t          trigPassed_HLT_2j35_bmv2c2060_split_2j35_L14J15p0ETA25;
   Bool_t          trigPassed_HLT_j225_bmv2c2060_split;
   Bool_t          trigPassed_HLT_j225_bloose;
   Bool_t          trigPassed_HLT_2j35_btight_2j35_L13J25p0ETA23;
   Bool_t          trigPassed_HLT_j100_2j55_bmedium;
   Float_t         pileupWeight_NOSYS;
   Float_t         generatorWeight_NOSYS;
   vector<float>   *el_NOSYS_pt;
   vector<float>   *el_NOSYS_eta;
   vector<float>   *el_NOSYS_phi;
   vector<float>   *el_OR_NOSYS_pt;
   vector<float>   *el_OR_NOSYS_eta;
   vector<float>   *el_OR_NOSYS_phi;
   vector<float>   *ph_NOSYS_pt;
   vector<float>   *ph_NOSYS_eta;
   vector<float>   *ph_NOSYS_phi;
   vector<float>   *ph_OR_NOSYS_pt;
   vector<float>   *ph_OR_NOSYS_eta;
   vector<float>   *ph_OR_NOSYS_phi;
   vector<float>   *recojet_antikt4_NOSYS_pt;
   vector<float>   *recojet_antikt4_NOSYS_eta;
   vector<float>   *recojet_antikt4_NOSYS_phi;
   vector<float>   *recojet_antikt4_NOSYS_m;
   vector<float>   *recojet_antikt4_OR_NOSYS_pt;
   vector<float>   *recojet_antikt4_OR_NOSYS_eta;
   vector<float>   *recojet_antikt4_OR_NOSYS_phi;
   vector<float>   *recojet_antikt4_OR_NOSYS_m;
   vector<float>   *mu_NOSYS_pt;
   vector<float>   *mu_NOSYS_eta;
   vector<float>   *mu_NOSYS_phi;
   vector<float>   *mu_OR_NOSYS_pt;
   vector<float>   *mu_OR_NOSYS_eta;
   vector<float>   *mu_OR_NOSYS_phi;
   vector<int>     *recojet_antikt4_NOSYS_HadronConeExclTruthLabelID;
   vector<int>     *recojet_antikt4_OR_NOSYS_HadronConeExclTruthLabelID;
   vector<float>   *truthjet_antikt4_pt;
   vector<float>   *truthjet_antikt4_eta;
   vector<float>   *truthjet_antikt4_phi;
   vector<float>   *truthjet_antikt4_m;
   vector<int>     *truthjet_antikt4_PartonTruthLabelID;
   vector<int>     *truthjet_antikt4_HadronConeExclTruthLabelID;
   vector<int>     *recojet_antikt10_NOSYS_NTrimSubjets;
   vector<float>   *recojet_antikt10_NOSYS_TrackSumPt;
   vector<float>   *recojet_antikt10_NOSYS_Tau1_wta;
   vector<float>   *recojet_antikt10_NOSYS_Tau2_wta;
   vector<float>   *recojet_antikt10_NOSYS_Tau3_wta;
   vector<float>   *recojet_antikt10_NOSYS_ECF1;
   vector<float>   *recojet_antikt10_NOSYS_ECF2;
   vector<float>   *recojet_antikt10_NOSYS_ECF3;
   vector<float>   *recojet_antikt10_NOSYS_Split12;
   vector<float>   *recojet_antikt10_NOSYS_Split23;
   vector<float>   *recojet_antikt10_NOSYS_JetConstitScaleMomentum_pt;
   vector<float>   *recojet_antikt10_NOSYS_JetConstitScaleMomentum_eta;
   vector<float>   *recojet_antikt10_NOSYS_JetConstitScaleMomentum_phi;
   vector<float>   *recojet_antikt10_NOSYS_JetConstitScaleMomentum_m;
   vector<int>     *recojet_antikt10_NOSYS_GhostBHadronsFinalCount;
   vector<int>     *recojet_antikt10_OR_NOSYS_NTrimSubjets;
   vector<float>   *recojet_antikt10_OR_NOSYS_TrackSumPt;
   vector<float>   *recojet_antikt10_OR_NOSYS_Tau1_wta;
   vector<float>   *recojet_antikt10_OR_NOSYS_Tau2_wta;
   vector<float>   *recojet_antikt10_OR_NOSYS_Tau3_wta;
   vector<float>   *recojet_antikt10_OR_NOSYS_ECF1;
   vector<float>   *recojet_antikt10_OR_NOSYS_ECF2;
   vector<float>   *recojet_antikt10_OR_NOSYS_ECF3;
   vector<float>   *recojet_antikt10_OR_NOSYS_Split12;
   vector<float>   *recojet_antikt10_OR_NOSYS_Split23;
   vector<float>   *recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_pt;
   vector<float>   *recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_eta;
   vector<float>   *recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_phi;
   vector<float>   *recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_m;
   vector<int>     *recojet_antikt10_OR_NOSYS_GhostBHadronsFinalCount;
   vector<float>   *recoUFOjet_antikt10_NOSYS_Tau1_wta;
   vector<float>   *recoUFOjet_antikt10_NOSYS_Tau2_wta;
   vector<float>   *recoUFOjet_antikt10_NOSYS_Tau3_wta;
   vector<float>   *recoUFOjet_antikt10_NOSYS_ECF1;
   vector<float>   *recoUFOjet_antikt10_NOSYS_ECF2;
   vector<float>   *recoUFOjet_antikt10_NOSYS_ECF3;
   vector<float>   *recoUFOjet_antikt10_NOSYS_Split12;
   vector<float>   *recoUFOjet_antikt10_NOSYS_Split23;
   vector<float>   *recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_pt;
   vector<float>   *recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_eta;
   vector<float>   *recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_phi;
   vector<float>   *recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_m;
   vector<int>     *recoUFOjet_antikt10_NOSYS_GhostBHadronsFinalCount;
   vector<float>   *recoUFOjet_antikt10_NOSYS_Tau4_wta;
   vector<int>     *recojet_antikt10_NOSYS_goodVRTrackJets;
   vector<vector<float> > *recojet_antikt10_NOSYS_leadingVRTrackJetsPt;
   vector<vector<float> > *recojet_antikt10_NOSYS_leadingVRTrackJetsEta;
   vector<vector<float> > *recojet_antikt10_NOSYS_leadingVRTrackJetsPhi;
   vector<vector<float> > *recojet_antikt10_NOSYS_leadingVRTrackJetsM;
   vector<float>   *recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12;
   vector<float>   *recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13;
   vector<float>   *recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32;
   vector<vector<char> > *recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77;
   vector<vector<char> > *recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85;
   Float_t         passRelativeDeltaRToVRJetCut;
   vector<vector<int> > *HadronConeExclTruthLabelID_NOSYS;
   vector<int>     *recoUFOjet_antikt10_NOSYS_goodVRTrackJets;
   vector<vector<float> > *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPt;
   vector<vector<float> > *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsEta;
   vector<vector<float> > *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPhi;
   vector<vector<float> > *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsM;
   vector<float>   *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12;
   vector<float>   *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13;
   vector<float>   *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32;
   vector<vector<char> > *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77;
   vector<vector<char> > *recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85;
   vector<vector<int> > *UFO_R10_HadronConeExclTruthLabelID_NOSYS;
   vector<float>   *recojet_antikt10_NOSYS_pt;
   vector<float>   *recojet_antikt10_NOSYS_eta;
   vector<float>   *recojet_antikt10_NOSYS_phi;
   vector<float>   *recojet_antikt10_NOSYS_m;
   vector<float>   *recojet_antikt10_OR_NOSYS_pt;
   vector<float>   *recojet_antikt10_OR_NOSYS_eta;
   vector<float>   *recojet_antikt10_OR_NOSYS_phi;
   vector<float>   *recojet_antikt10_OR_NOSYS_m;
   vector<float>   *recoUFOjet_antikt10_NOSYS_pt;
   vector<float>   *recoUFOjet_antikt10_NOSYS_eta;
   vector<float>   *recoUFOjet_antikt10_NOSYS_phi;
   vector<float>   *recoUFOjet_antikt10_NOSYS_m;
   vector<int>     *R10TruthLabel_R21Consolidated_NOSYS;
   vector<int>     *R10TruthLabel_R21Consolidated_OR_NOSYS;
   vector<int>     *UFO_R10TruthLabel_R21Precision_2022v1_NOSYS;
   vector<int>     *UFO_R10TruthLabel_R22v1_NOSYS;
   vector<float>   *truthjet_antikt10_pt;
   vector<float>   *truthjet_antikt10_eta;
   vector<float>   *truthjet_antikt10_phi;
   vector<float>   *truthjet_antikt10_m;
   vector<float>   *truthUFOjet_antikt10_pt;
   vector<float>   *truthUFOjet_antikt10_eta;
   vector<float>   *truthUFOjet_antikt10_phi;
   vector<float>   *truthUFOjet_antikt10_m;
   Int_t           truth_H1_pdgId;
   Float_t         truth_H1_pt;
   Float_t         truth_H1_eta;
   Float_t         truth_H1_phi;
   Float_t         truth_H1_m;
   vector<float>   *truth_bb_fromH1_pt;
   vector<float>   *truth_bb_fromH1_eta;
   vector<float>   *truth_bb_fromH1_phi;
   vector<float>   *truth_bb_fromH1_m;
   Int_t           truth_H2_pdgId;
   Float_t         truth_H2_pt;
   Float_t         truth_H2_eta;
   Float_t         truth_H2_phi;
   Float_t         truth_H2_m;
   vector<float>   *truth_bb_fromH2_pt;
   vector<float>   *truth_bb_fromH2_eta;
   vector<float>   *truth_bb_fromH2_phi;
   vector<float>   *truth_bb_fromH2_m;
   vector<char>    *recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_70;
   vector<char>    *recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77;
   vector<char>    *recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_85;
   vector<char>    *recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_70;
   vector<char>    *recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_77;
   vector<char>    *recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_85;
   vector<char>    *recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_70;
   vector<char>    *recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_77;
   vector<char>    *recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_85;
   vector<char>    *recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_70;
   vector<char>    *recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_77;
   vector<char>    *recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_85;
   vector<float>   *recojet_antikt4_NOSYS_nobjetcalib_pt;
   vector<float>   *recojet_antikt4_NOSYS_nobjetcalib_eta;
   vector<float>   *recojet_antikt4_NOSYS_nobjetcalib_phi;
   vector<float>   *recojet_antikt4_NOSYS_nobjetcalib_m;
   vector<float>   *recojet_antikt4_OR_NOSYS_nobjetcalib_pt;
   vector<float>   *recojet_antikt4_OR_NOSYS_nobjetcalib_eta;
   vector<float>   *recojet_antikt4_OR_NOSYS_nobjetcalib_phi;
   vector<float>   *recojet_antikt4_OR_NOSYS_nobjetcalib_m;
   vector<float>   *recojet_antikt4_NOSYS_Jvt;
   vector<float>   *recojet_antikt4_NOSYS_JvtRpt;
   vector<float>   *recojet_antikt4_NOSYS_JVFCorr;
   vector<unsigned int> *recojet_antikt4_NOSYS_jvt_selection;
   vector<float>   *recojet_antikt4_NOSYS_NNJvt;
   vector<float>   *recojet_antikt4_NOSYS_NNJvtRpt;
   vector<char>    *recojet_antikt4_NOSYS_NNJvtPass;
   vector<float>   *recojet_antikt4_OR_NOSYS_Jvt;
   vector<float>   *recojet_antikt4_OR_NOSYS_JvtRpt;
   vector<float>   *recojet_antikt4_OR_NOSYS_JVFCorr;
   vector<unsigned int> *recojet_antikt4_OR_NOSYS_jvt_selection;
   vector<float>   *recojet_antikt4_OR_NOSYS_NNJvt;
   vector<float>   *recojet_antikt4_OR_NOSYS_NNJvtRpt;
   vector<char>    *recojet_antikt4_OR_NOSYS_NNJvtPass;

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_lumiBlock;   //!
   TBranch        *b_mcEventWeights;   //!
   TBranch        *b_averageInteractionsPerCrossing;   //!
   TBranch        *b_actualInteractionsPerCrossing;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_trigPassed_HLT_2j55_bmv2c2060_split_ht300_L14J15;   //!
   TBranch        *b_trigPassed_HLT_j360_a10_lcw_sub_L1J100;   //!
   TBranch        *b_trigPassed_HLT_j420_a10_lcw_L1J100;   //!
   TBranch        *b_trigPassed_HLT_j150_bmv2c2060_split_j50_bmv2c2060_split;   //!
   TBranch        *b_trigPassed_HLT_j175_bmv2c2040_split;   //!
   TBranch        *b_trigPassed_HLT_j100_2j55_bmv2c2060_split;   //!
   TBranch        *b_trigPassed_HLT_j420_a10r_L1J100;   //!
   TBranch        *b_trigPassed_HLT_2j35_bmv2c2060_split_2j35_L14J15p0ETA25;   //!
   TBranch        *b_trigPassed_HLT_j225_bmv2c2060_split;   //!
   TBranch        *b_trigPassed_HLT_j225_bloose;   //!
   TBranch        *b_trigPassed_HLT_2j35_btight_2j35_L13J25p0ETA23;   //!
   TBranch        *b_trigPassed_HLT_j100_2j55_bmedium;   //!
   TBranch        *b_pileupWeight_NOSYS;   //!
   TBranch        *b_generatorWeight_NOSYS;   //!
   TBranch        *b_el_NOSYS_pt;   //!
   TBranch        *b_el_NOSYS_eta;   //!
   TBranch        *b_el_NOSYS_phi;   //!
   TBranch        *b_el_OR_NOSYS_pt;   //!
   TBranch        *b_el_OR_NOSYS_eta;   //!
   TBranch        *b_el_OR_NOSYS_phi;   //!
   TBranch        *b_ph_NOSYS_pt;   //!
   TBranch        *b_ph_NOSYS_eta;   //!
   TBranch        *b_ph_NOSYS_phi;   //!
   TBranch        *b_ph_OR_NOSYS_pt;   //!
   TBranch        *b_ph_OR_NOSYS_eta;   //!
   TBranch        *b_ph_OR_NOSYS_phi;   //!
   TBranch        *b_recojet_antikt4_NOSYS_pt;   //!
   TBranch        *b_recojet_antikt4_NOSYS_eta;   //!
   TBranch        *b_recojet_antikt4_NOSYS_phi;   //!
   TBranch        *b_recojet_antikt4_NOSYS_m;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_pt;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_eta;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_phi;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_m;   //!
   TBranch        *b_mu_NOSYS_pt;   //!
   TBranch        *b_mu_NOSYS_eta;   //!
   TBranch        *b_mu_NOSYS_phi;   //!
   TBranch        *b_mu_OR_NOSYS_pt;   //!
   TBranch        *b_mu_OR_NOSYS_eta;   //!
   TBranch        *b_mu_OR_NOSYS_phi;   //!
   TBranch        *b_recojet_antikt4_NOSYS_HadronConeExclTruthLabelID;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_HadronConeExclTruthLabelID;   //!
   TBranch        *b_truthjet_antikt4_pt;   //!
   TBranch        *b_truthjet_antikt4_eta;   //!
   TBranch        *b_truthjet_antikt4_phi;   //!
   TBranch        *b_truthjet_antikt4_m;   //!
   TBranch        *b_truthjet_antikt4_PartonTruthLabelID;   //!
   TBranch        *b_truthjet_antikt4_HadronConeExclTruthLabelID;   //!
   TBranch        *b_recojet_antikt10_NOSYS_NTrimSubjets;   //!
   TBranch        *b_recojet_antikt10_NOSYS_TrackSumPt;   //!
   TBranch        *b_recojet_antikt10_NOSYS_Tau1_wta;   //!
   TBranch        *b_recojet_antikt10_NOSYS_Tau2_wta;   //!
   TBranch        *b_recojet_antikt10_NOSYS_Tau3_wta;   //!
   TBranch        *b_recojet_antikt10_NOSYS_ECF1;   //!
   TBranch        *b_recojet_antikt10_NOSYS_ECF2;   //!
   TBranch        *b_recojet_antikt10_NOSYS_ECF3;   //!
   TBranch        *b_recojet_antikt10_NOSYS_Split12;   //!
   TBranch        *b_recojet_antikt10_NOSYS_Split23;   //!
   TBranch        *b_recojet_antikt10_NOSYS_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_recojet_antikt10_NOSYS_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_recojet_antikt10_NOSYS_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_recojet_antikt10_NOSYS_JetConstitScaleMomentum_m;   //!
   TBranch        *b_recojet_antikt10_NOSYS_GhostBHadronsFinalCount;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_NTrimSubjets;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_TrackSumPt;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_Tau1_wta;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_Tau2_wta;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_Tau3_wta;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_ECF1;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_ECF2;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_ECF3;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_Split12;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_Split23;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_m;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_GhostBHadronsFinalCount;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_Tau1_wta;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_Tau2_wta;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_Tau3_wta;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_ECF1;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_ECF2;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_ECF3;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_Split12;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_Split23;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_pt;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_eta;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_phi;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_m;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_GhostBHadronsFinalCount;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_Tau4_wta;   //!
   TBranch        *b_recojet_antikt10_NOSYS_goodVRTrackJets;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsPt;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsEta;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsPhi;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsM;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77;   //!
   TBranch        *b_recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85;   //!
   TBranch        *b_passRelativeDeltaRToVRJetCut;   //!
   TBranch        *b_HadronConeExclTruthLabelID_NOSYS;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_goodVRTrackJets;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPt;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsEta;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPhi;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsM;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85;   //!
   TBranch        *b_UFO_R10_HadronConeExclTruthLabelID_NOSYS;   //!
   TBranch        *b_recojet_antikt10_NOSYS_pt;   //!
   TBranch        *b_recojet_antikt10_NOSYS_eta;   //!
   TBranch        *b_recojet_antikt10_NOSYS_phi;   //!
   TBranch        *b_recojet_antikt10_NOSYS_m;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_pt;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_eta;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_phi;   //!
   TBranch        *b_recojet_antikt10_OR_NOSYS_m;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_pt;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_eta;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_phi;   //!
   TBranch        *b_recoUFOjet_antikt10_NOSYS_m;   //!
   TBranch        *b_R10TruthLabel_R21Consolidated_NOSYS;   //!
   TBranch        *b_R10TruthLabel_R21Consolidated_OR_NOSYS;   //!
   TBranch        *b_UFO_R10TruthLabel_R21Precision_2022v1_NOSYS;   //!
   TBranch        *b_UFO_R10TruthLabel_R22v1_NOSYS;   //!
   TBranch        *b_truthjet_antikt10_pt;   //!
   TBranch        *b_truthjet_antikt10_eta;   //!
   TBranch        *b_truthjet_antikt10_phi;   //!
   TBranch        *b_truthjet_antikt10_m;   //!
   TBranch        *b_truthUFOjet_antikt10_pt;   //!
   TBranch        *b_truthUFOjet_antikt10_eta;   //!
   TBranch        *b_truthUFOjet_antikt10_phi;   //!
   TBranch        *b_truthUFOjet_antikt10_m;   //!
   TBranch        *b_truth_H1_pdgId;   //!
   TBranch        *b_truth_H1_pt;   //!
   TBranch        *b_truth_H1_eta;   //!
   TBranch        *b_truth_H1_phi;   //!
   TBranch        *b_truth_H1_m;   //!
   TBranch        *b_truth_bb_fromH1_pt;   //!
   TBranch        *b_truth_bb_fromH1_eta;   //!
   TBranch        *b_truth_bb_fromH1_phi;   //!
   TBranch        *b_truth_bb_fromH1_m;   //!
   TBranch        *b_truth_H2_pdgId;   //!
   TBranch        *b_truth_H2_pt;   //!
   TBranch        *b_truth_H2_eta;   //!
   TBranch        *b_truth_H2_phi;   //!
   TBranch        *b_truth_H2_m;   //!
   TBranch        *b_truth_bb_fromH2_pt;   //!
   TBranch        *b_truth_bb_fromH2_eta;   //!
   TBranch        *b_truth_bb_fromH2_phi;   //!
   TBranch        *b_truth_bb_fromH2_m;   //!
   TBranch        *b_recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_70;   //!
   TBranch        *b_recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77;   //!
   TBranch        *b_recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_85;   //!
   TBranch        *b_recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_70;   //!
   TBranch        *b_recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_77;   //!
   TBranch        *b_recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_85;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_70;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_77;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_85;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_70;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_77;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_85;   //!
   TBranch        *b_recojet_antikt4_NOSYS_nobjetcalib_pt;   //!
   TBranch        *b_recojet_antikt4_NOSYS_nobjetcalib_eta;   //!
   TBranch        *b_recojet_antikt4_NOSYS_nobjetcalib_phi;   //!
   TBranch        *b_recojet_antikt4_NOSYS_nobjetcalib_m;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_nobjetcalib_pt;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_nobjetcalib_eta;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_nobjetcalib_phi;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_nobjetcalib_m;   //!
   TBranch        *b_recojet_antikt4_NOSYS_Jvt;   //!
   TBranch        *b_recojet_antikt4_NOSYS_JvtRpt;   //!
   TBranch        *b_recojet_antikt4_NOSYS_JVFCorr;   //!
   TBranch        *b_recojet_antikt4_NOSYS_jvt_selection;   //!
   TBranch        *b_recojet_antikt4_NOSYS_NNJvt;   //!
   TBranch        *b_recojet_antikt4_NOSYS_NNJvtRpt;   //!
   TBranch        *b_recojet_antikt4_NOSYS_NNJvtPass;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_Jvt;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_JvtRpt;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_JVFCorr;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_jvt_selection;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_NNJvt;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_NNJvtRpt;   //!
   TBranch        *b_recojet_antikt4_OR_NOSYS_NNJvtPass;   //!

   sh4b(TTree *tree=0);
   virtual ~sh4b();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef sh4b_cxx
sh4b::sh4b(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("user.dabattul.32511667._000001.output-hh4b.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("user.dabattul.32511667._000001.output-hh4b.root");
      }
      f->GetObject("AnalysisMiniTree",tree);

   }
   Init(tree);
}

sh4b::~sh4b()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t sh4b::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t sh4b::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void sh4b::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   mcEventWeights = 0;
   el_NOSYS_pt = 0;
   el_NOSYS_eta = 0;
   el_NOSYS_phi = 0;
   el_OR_NOSYS_pt = 0;
   el_OR_NOSYS_eta = 0;
   el_OR_NOSYS_phi = 0;
   ph_NOSYS_pt = 0;
   ph_NOSYS_eta = 0;
   ph_NOSYS_phi = 0;
   ph_OR_NOSYS_pt = 0;
   ph_OR_NOSYS_eta = 0;
   ph_OR_NOSYS_phi = 0;
   recojet_antikt4_NOSYS_pt = 0;
   recojet_antikt4_NOSYS_eta = 0;
   recojet_antikt4_NOSYS_phi = 0;
   recojet_antikt4_NOSYS_m = 0;
   recojet_antikt4_OR_NOSYS_pt = 0;
   recojet_antikt4_OR_NOSYS_eta = 0;
   recojet_antikt4_OR_NOSYS_phi = 0;
   recojet_antikt4_OR_NOSYS_m = 0;
   mu_NOSYS_pt = 0;
   mu_NOSYS_eta = 0;
   mu_NOSYS_phi = 0;
   mu_OR_NOSYS_pt = 0;
   mu_OR_NOSYS_eta = 0;
   mu_OR_NOSYS_phi = 0;
   recojet_antikt4_NOSYS_HadronConeExclTruthLabelID = 0;
   recojet_antikt4_OR_NOSYS_HadronConeExclTruthLabelID = 0;
   truthjet_antikt4_pt = 0;
   truthjet_antikt4_eta = 0;
   truthjet_antikt4_phi = 0;
   truthjet_antikt4_m = 0;
   truthjet_antikt4_PartonTruthLabelID = 0;
   truthjet_antikt4_HadronConeExclTruthLabelID = 0;
   recojet_antikt10_NOSYS_NTrimSubjets = 0;
   recojet_antikt10_NOSYS_TrackSumPt = 0;
   recojet_antikt10_NOSYS_Tau1_wta = 0;
   recojet_antikt10_NOSYS_Tau2_wta = 0;
   recojet_antikt10_NOSYS_Tau3_wta = 0;
   recojet_antikt10_NOSYS_ECF1 = 0;
   recojet_antikt10_NOSYS_ECF2 = 0;
   recojet_antikt10_NOSYS_ECF3 = 0;
   recojet_antikt10_NOSYS_Split12 = 0;
   recojet_antikt10_NOSYS_Split23 = 0;
   recojet_antikt10_NOSYS_JetConstitScaleMomentum_pt = 0;
   recojet_antikt10_NOSYS_JetConstitScaleMomentum_eta = 0;
   recojet_antikt10_NOSYS_JetConstitScaleMomentum_phi = 0;
   recojet_antikt10_NOSYS_JetConstitScaleMomentum_m = 0;
   recojet_antikt10_NOSYS_GhostBHadronsFinalCount = 0;
   recojet_antikt10_OR_NOSYS_NTrimSubjets = 0;
   recojet_antikt10_OR_NOSYS_TrackSumPt = 0;
   recojet_antikt10_OR_NOSYS_Tau1_wta = 0;
   recojet_antikt10_OR_NOSYS_Tau2_wta = 0;
   recojet_antikt10_OR_NOSYS_Tau3_wta = 0;
   recojet_antikt10_OR_NOSYS_ECF1 = 0;
   recojet_antikt10_OR_NOSYS_ECF2 = 0;
   recojet_antikt10_OR_NOSYS_ECF3 = 0;
   recojet_antikt10_OR_NOSYS_Split12 = 0;
   recojet_antikt10_OR_NOSYS_Split23 = 0;
   recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_pt = 0;
   recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_eta = 0;
   recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_phi = 0;
   recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_m = 0;
   recojet_antikt10_OR_NOSYS_GhostBHadronsFinalCount = 0;
   recoUFOjet_antikt10_NOSYS_Tau1_wta = 0;
   recoUFOjet_antikt10_NOSYS_Tau2_wta = 0;
   recoUFOjet_antikt10_NOSYS_Tau3_wta = 0;
   recoUFOjet_antikt10_NOSYS_ECF1 = 0;
   recoUFOjet_antikt10_NOSYS_ECF2 = 0;
   recoUFOjet_antikt10_NOSYS_ECF3 = 0;
   recoUFOjet_antikt10_NOSYS_Split12 = 0;
   recoUFOjet_antikt10_NOSYS_Split23 = 0;
   recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_pt = 0;
   recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_eta = 0;
   recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_phi = 0;
   recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_m = 0;
   recoUFOjet_antikt10_NOSYS_GhostBHadronsFinalCount = 0;
   recoUFOjet_antikt10_NOSYS_Tau4_wta = 0;
   recojet_antikt10_NOSYS_goodVRTrackJets = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsPt = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsEta = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsPhi = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsM = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12 = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13 = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32 = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77 = 0;
   recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85 = 0;
   HadronConeExclTruthLabelID_NOSYS = 0;
   recoUFOjet_antikt10_NOSYS_goodVRTrackJets = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPt = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsEta = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPhi = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsM = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12 = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13 = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32 = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77 = 0;
   recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85 = 0;
   UFO_R10_HadronConeExclTruthLabelID_NOSYS = 0;
   recojet_antikt10_NOSYS_pt = 0;
   recojet_antikt10_NOSYS_eta = 0;
   recojet_antikt10_NOSYS_phi = 0;
   recojet_antikt10_NOSYS_m = 0;
   recojet_antikt10_OR_NOSYS_pt = 0;
   recojet_antikt10_OR_NOSYS_eta = 0;
   recojet_antikt10_OR_NOSYS_phi = 0;
   recojet_antikt10_OR_NOSYS_m = 0;
   recoUFOjet_antikt10_NOSYS_pt = 0;
   recoUFOjet_antikt10_NOSYS_eta = 0;
   recoUFOjet_antikt10_NOSYS_phi = 0;
   recoUFOjet_antikt10_NOSYS_m = 0;
   R10TruthLabel_R21Consolidated_NOSYS = 0;
   R10TruthLabel_R21Consolidated_OR_NOSYS = 0;
   UFO_R10TruthLabel_R21Precision_2022v1_NOSYS = 0;
   UFO_R10TruthLabel_R22v1_NOSYS = 0;
   truthjet_antikt10_pt = 0;
   truthjet_antikt10_eta = 0;
   truthjet_antikt10_phi = 0;
   truthjet_antikt10_m = 0;
   truthUFOjet_antikt10_pt = 0;
   truthUFOjet_antikt10_eta = 0;
   truthUFOjet_antikt10_phi = 0;
   truthUFOjet_antikt10_m = 0;
   truth_bb_fromH1_pt = 0;
   truth_bb_fromH1_eta = 0;
   truth_bb_fromH1_phi = 0;
   truth_bb_fromH1_m = 0;
   truth_bb_fromH2_pt = 0;
   truth_bb_fromH2_eta = 0;
   truth_bb_fromH2_phi = 0;
   truth_bb_fromH2_m = 0;
   recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_70 = 0;
   recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77 = 0;
   recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_85 = 0;
   recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_70 = 0;
   recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_77 = 0;
   recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_85 = 0;
   recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_70 = 0;
   recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_77 = 0;
   recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_85 = 0;
   recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_70 = 0;
   recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_77 = 0;
   recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_85 = 0;
   recojet_antikt4_NOSYS_nobjetcalib_pt = 0;
   recojet_antikt4_NOSYS_nobjetcalib_eta = 0;
   recojet_antikt4_NOSYS_nobjetcalib_phi = 0;
   recojet_antikt4_NOSYS_nobjetcalib_m = 0;
   recojet_antikt4_OR_NOSYS_nobjetcalib_pt = 0;
   recojet_antikt4_OR_NOSYS_nobjetcalib_eta = 0;
   recojet_antikt4_OR_NOSYS_nobjetcalib_phi = 0;
   recojet_antikt4_OR_NOSYS_nobjetcalib_m = 0;
   recojet_antikt4_NOSYS_Jvt = 0;
   recojet_antikt4_NOSYS_JvtRpt = 0;
   recojet_antikt4_NOSYS_JVFCorr = 0;
   recojet_antikt4_NOSYS_jvt_selection = 0;
   recojet_antikt4_NOSYS_NNJvt = 0;
   recojet_antikt4_NOSYS_NNJvtRpt = 0;
   recojet_antikt4_NOSYS_NNJvtPass = 0;
   recojet_antikt4_OR_NOSYS_Jvt = 0;
   recojet_antikt4_OR_NOSYS_JvtRpt = 0;
   recojet_antikt4_OR_NOSYS_JVFCorr = 0;
   recojet_antikt4_OR_NOSYS_jvt_selection = 0;
   recojet_antikt4_OR_NOSYS_NNJvt = 0;
   recojet_antikt4_OR_NOSYS_NNJvtRpt = 0;
   recojet_antikt4_OR_NOSYS_NNJvtPass = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("lumiBlock", &lumiBlock, &b_lumiBlock);
   fChain->SetBranchAddress("mcEventWeights", &mcEventWeights, &b_mcEventWeights);
   fChain->SetBranchAddress("averageInteractionsPerCrossing", &averageInteractionsPerCrossing, &b_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("actualInteractionsPerCrossing", &actualInteractionsPerCrossing, &b_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("mcChannelNumber", &mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("trigPassed_HLT_2j55_bmv2c2060_split_ht300_L14J15", &trigPassed_HLT_2j55_bmv2c2060_split_ht300_L14J15, &b_trigPassed_HLT_2j55_bmv2c2060_split_ht300_L14J15);
   fChain->SetBranchAddress("trigPassed_HLT_j360_a10_lcw_sub_L1J100", &trigPassed_HLT_j360_a10_lcw_sub_L1J100, &b_trigPassed_HLT_j360_a10_lcw_sub_L1J100);
   fChain->SetBranchAddress("trigPassed_HLT_j420_a10_lcw_L1J100", &trigPassed_HLT_j420_a10_lcw_L1J100, &b_trigPassed_HLT_j420_a10_lcw_L1J100);
   fChain->SetBranchAddress("trigPassed_HLT_j150_bmv2c2060_split_j50_bmv2c2060_split", &trigPassed_HLT_j150_bmv2c2060_split_j50_bmv2c2060_split, &b_trigPassed_HLT_j150_bmv2c2060_split_j50_bmv2c2060_split);
   fChain->SetBranchAddress("trigPassed_HLT_j175_bmv2c2040_split", &trigPassed_HLT_j175_bmv2c2040_split, &b_trigPassed_HLT_j175_bmv2c2040_split);
   fChain->SetBranchAddress("trigPassed_HLT_j100_2j55_bmv2c2060_split", &trigPassed_HLT_j100_2j55_bmv2c2060_split, &b_trigPassed_HLT_j100_2j55_bmv2c2060_split);
   fChain->SetBranchAddress("trigPassed_HLT_j420_a10r_L1J100", &trigPassed_HLT_j420_a10r_L1J100, &b_trigPassed_HLT_j420_a10r_L1J100);
   fChain->SetBranchAddress("trigPassed_HLT_2j35_bmv2c2060_split_2j35_L14J15p0ETA25", &trigPassed_HLT_2j35_bmv2c2060_split_2j35_L14J15p0ETA25, &b_trigPassed_HLT_2j35_bmv2c2060_split_2j35_L14J15p0ETA25);
   fChain->SetBranchAddress("trigPassed_HLT_j225_bmv2c2060_split", &trigPassed_HLT_j225_bmv2c2060_split, &b_trigPassed_HLT_j225_bmv2c2060_split);
   fChain->SetBranchAddress("trigPassed_HLT_j225_bloose", &trigPassed_HLT_j225_bloose, &b_trigPassed_HLT_j225_bloose);
   fChain->SetBranchAddress("trigPassed_HLT_2j35_btight_2j35_L13J25p0ETA23", &trigPassed_HLT_2j35_btight_2j35_L13J25p0ETA23, &b_trigPassed_HLT_2j35_btight_2j35_L13J25p0ETA23);
   fChain->SetBranchAddress("trigPassed_HLT_j100_2j55_bmedium", &trigPassed_HLT_j100_2j55_bmedium, &b_trigPassed_HLT_j100_2j55_bmedium);
   fChain->SetBranchAddress("pileupWeight_NOSYS", &pileupWeight_NOSYS, &b_pileupWeight_NOSYS);
   fChain->SetBranchAddress("generatorWeight_NOSYS", &generatorWeight_NOSYS, &b_generatorWeight_NOSYS);
   fChain->SetBranchAddress("el_NOSYS_pt", &el_NOSYS_pt, &b_el_NOSYS_pt);
   fChain->SetBranchAddress("el_NOSYS_eta", &el_NOSYS_eta, &b_el_NOSYS_eta);
   fChain->SetBranchAddress("el_NOSYS_phi", &el_NOSYS_phi, &b_el_NOSYS_phi);
   fChain->SetBranchAddress("el_OR_NOSYS_pt", &el_OR_NOSYS_pt, &b_el_OR_NOSYS_pt);
   fChain->SetBranchAddress("el_OR_NOSYS_eta", &el_OR_NOSYS_eta, &b_el_OR_NOSYS_eta);
   fChain->SetBranchAddress("el_OR_NOSYS_phi", &el_OR_NOSYS_phi, &b_el_OR_NOSYS_phi);
   fChain->SetBranchAddress("ph_NOSYS_pt", &ph_NOSYS_pt, &b_ph_NOSYS_pt);
   fChain->SetBranchAddress("ph_NOSYS_eta", &ph_NOSYS_eta, &b_ph_NOSYS_eta);
   fChain->SetBranchAddress("ph_NOSYS_phi", &ph_NOSYS_phi, &b_ph_NOSYS_phi);
   fChain->SetBranchAddress("ph_OR_NOSYS_pt", &ph_OR_NOSYS_pt, &b_ph_OR_NOSYS_pt);
   fChain->SetBranchAddress("ph_OR_NOSYS_eta", &ph_OR_NOSYS_eta, &b_ph_OR_NOSYS_eta);
   fChain->SetBranchAddress("ph_OR_NOSYS_phi", &ph_OR_NOSYS_phi, &b_ph_OR_NOSYS_phi);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_pt", &recojet_antikt4_NOSYS_pt, &b_recojet_antikt4_NOSYS_pt);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_eta", &recojet_antikt4_NOSYS_eta, &b_recojet_antikt4_NOSYS_eta);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_phi", &recojet_antikt4_NOSYS_phi, &b_recojet_antikt4_NOSYS_phi);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_m", &recojet_antikt4_NOSYS_m, &b_recojet_antikt4_NOSYS_m);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_pt", &recojet_antikt4_OR_NOSYS_pt, &b_recojet_antikt4_OR_NOSYS_pt);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_eta", &recojet_antikt4_OR_NOSYS_eta, &b_recojet_antikt4_OR_NOSYS_eta);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_phi", &recojet_antikt4_OR_NOSYS_phi, &b_recojet_antikt4_OR_NOSYS_phi);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_m", &recojet_antikt4_OR_NOSYS_m, &b_recojet_antikt4_OR_NOSYS_m);
   fChain->SetBranchAddress("mu_NOSYS_pt", &mu_NOSYS_pt, &b_mu_NOSYS_pt);
   fChain->SetBranchAddress("mu_NOSYS_eta", &mu_NOSYS_eta, &b_mu_NOSYS_eta);
   fChain->SetBranchAddress("mu_NOSYS_phi", &mu_NOSYS_phi, &b_mu_NOSYS_phi);
   fChain->SetBranchAddress("mu_OR_NOSYS_pt", &mu_OR_NOSYS_pt, &b_mu_OR_NOSYS_pt);
   fChain->SetBranchAddress("mu_OR_NOSYS_eta", &mu_OR_NOSYS_eta, &b_mu_OR_NOSYS_eta);
   fChain->SetBranchAddress("mu_OR_NOSYS_phi", &mu_OR_NOSYS_phi, &b_mu_OR_NOSYS_phi);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_HadronConeExclTruthLabelID", &recojet_antikt4_NOSYS_HadronConeExclTruthLabelID, &b_recojet_antikt4_NOSYS_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_HadronConeExclTruthLabelID", &recojet_antikt4_OR_NOSYS_HadronConeExclTruthLabelID, &b_recojet_antikt4_OR_NOSYS_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("truthjet_antikt4_pt", &truthjet_antikt4_pt, &b_truthjet_antikt4_pt);
   fChain->SetBranchAddress("truthjet_antikt4_eta", &truthjet_antikt4_eta, &b_truthjet_antikt4_eta);
   fChain->SetBranchAddress("truthjet_antikt4_phi", &truthjet_antikt4_phi, &b_truthjet_antikt4_phi);
   fChain->SetBranchAddress("truthjet_antikt4_m", &truthjet_antikt4_m, &b_truthjet_antikt4_m);
   fChain->SetBranchAddress("truthjet_antikt4_PartonTruthLabelID", &truthjet_antikt4_PartonTruthLabelID, &b_truthjet_antikt4_PartonTruthLabelID);
   fChain->SetBranchAddress("truthjet_antikt4_HadronConeExclTruthLabelID", &truthjet_antikt4_HadronConeExclTruthLabelID, &b_truthjet_antikt4_HadronConeExclTruthLabelID);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_NTrimSubjets", &recojet_antikt10_NOSYS_NTrimSubjets, &b_recojet_antikt10_NOSYS_NTrimSubjets);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_TrackSumPt", &recojet_antikt10_NOSYS_TrackSumPt, &b_recojet_antikt10_NOSYS_TrackSumPt);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_Tau1_wta", &recojet_antikt10_NOSYS_Tau1_wta, &b_recojet_antikt10_NOSYS_Tau1_wta);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_Tau2_wta", &recojet_antikt10_NOSYS_Tau2_wta, &b_recojet_antikt10_NOSYS_Tau2_wta);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_Tau3_wta", &recojet_antikt10_NOSYS_Tau3_wta, &b_recojet_antikt10_NOSYS_Tau3_wta);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_ECF1", &recojet_antikt10_NOSYS_ECF1, &b_recojet_antikt10_NOSYS_ECF1);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_ECF2", &recojet_antikt10_NOSYS_ECF2, &b_recojet_antikt10_NOSYS_ECF2);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_ECF3", &recojet_antikt10_NOSYS_ECF3, &b_recojet_antikt10_NOSYS_ECF3);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_Split12", &recojet_antikt10_NOSYS_Split12, &b_recojet_antikt10_NOSYS_Split12);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_Split23", &recojet_antikt10_NOSYS_Split23, &b_recojet_antikt10_NOSYS_Split23);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_JetConstitScaleMomentum_pt", &recojet_antikt10_NOSYS_JetConstitScaleMomentum_pt, &b_recojet_antikt10_NOSYS_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_JetConstitScaleMomentum_eta", &recojet_antikt10_NOSYS_JetConstitScaleMomentum_eta, &b_recojet_antikt10_NOSYS_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_JetConstitScaleMomentum_phi", &recojet_antikt10_NOSYS_JetConstitScaleMomentum_phi, &b_recojet_antikt10_NOSYS_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_JetConstitScaleMomentum_m", &recojet_antikt10_NOSYS_JetConstitScaleMomentum_m, &b_recojet_antikt10_NOSYS_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_GhostBHadronsFinalCount", &recojet_antikt10_NOSYS_GhostBHadronsFinalCount, &b_recojet_antikt10_NOSYS_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_NTrimSubjets", &recojet_antikt10_OR_NOSYS_NTrimSubjets, &b_recojet_antikt10_OR_NOSYS_NTrimSubjets);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_TrackSumPt", &recojet_antikt10_OR_NOSYS_TrackSumPt, &b_recojet_antikt10_OR_NOSYS_TrackSumPt);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_Tau1_wta", &recojet_antikt10_OR_NOSYS_Tau1_wta, &b_recojet_antikt10_OR_NOSYS_Tau1_wta);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_Tau2_wta", &recojet_antikt10_OR_NOSYS_Tau2_wta, &b_recojet_antikt10_OR_NOSYS_Tau2_wta);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_Tau3_wta", &recojet_antikt10_OR_NOSYS_Tau3_wta, &b_recojet_antikt10_OR_NOSYS_Tau3_wta);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_ECF1", &recojet_antikt10_OR_NOSYS_ECF1, &b_recojet_antikt10_OR_NOSYS_ECF1);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_ECF2", &recojet_antikt10_OR_NOSYS_ECF2, &b_recojet_antikt10_OR_NOSYS_ECF2);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_ECF3", &recojet_antikt10_OR_NOSYS_ECF3, &b_recojet_antikt10_OR_NOSYS_ECF3);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_Split12", &recojet_antikt10_OR_NOSYS_Split12, &b_recojet_antikt10_OR_NOSYS_Split12);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_Split23", &recojet_antikt10_OR_NOSYS_Split23, &b_recojet_antikt10_OR_NOSYS_Split23);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_pt", &recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_pt, &b_recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_eta", &recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_eta, &b_recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_phi", &recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_phi, &b_recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_m", &recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_m, &b_recojet_antikt10_OR_NOSYS_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_GhostBHadronsFinalCount", &recojet_antikt10_OR_NOSYS_GhostBHadronsFinalCount, &b_recojet_antikt10_OR_NOSYS_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_Tau1_wta", &recoUFOjet_antikt10_NOSYS_Tau1_wta, &b_recoUFOjet_antikt10_NOSYS_Tau1_wta);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_Tau2_wta", &recoUFOjet_antikt10_NOSYS_Tau2_wta, &b_recoUFOjet_antikt10_NOSYS_Tau2_wta);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_Tau3_wta", &recoUFOjet_antikt10_NOSYS_Tau3_wta, &b_recoUFOjet_antikt10_NOSYS_Tau3_wta);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_ECF1", &recoUFOjet_antikt10_NOSYS_ECF1, &b_recoUFOjet_antikt10_NOSYS_ECF1);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_ECF2", &recoUFOjet_antikt10_NOSYS_ECF2, &b_recoUFOjet_antikt10_NOSYS_ECF2);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_ECF3", &recoUFOjet_antikt10_NOSYS_ECF3, &b_recoUFOjet_antikt10_NOSYS_ECF3);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_Split12", &recoUFOjet_antikt10_NOSYS_Split12, &b_recoUFOjet_antikt10_NOSYS_Split12);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_Split23", &recoUFOjet_antikt10_NOSYS_Split23, &b_recoUFOjet_antikt10_NOSYS_Split23);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_pt", &recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_pt, &b_recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_pt);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_eta", &recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_eta, &b_recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_eta);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_phi", &recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_phi, &b_recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_phi);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_m", &recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_m, &b_recoUFOjet_antikt10_NOSYS_JetConstitScaleMomentum_m);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_GhostBHadronsFinalCount", &recoUFOjet_antikt10_NOSYS_GhostBHadronsFinalCount, &b_recoUFOjet_antikt10_NOSYS_GhostBHadronsFinalCount);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_Tau4_wta", &recoUFOjet_antikt10_NOSYS_Tau4_wta, &b_recoUFOjet_antikt10_NOSYS_Tau4_wta);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_goodVRTrackJets", &recojet_antikt10_NOSYS_goodVRTrackJets, &b_recojet_antikt10_NOSYS_goodVRTrackJets);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsPt", &recojet_antikt10_NOSYS_leadingVRTrackJetsPt, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsPt);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsEta", &recojet_antikt10_NOSYS_leadingVRTrackJetsEta, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsEta);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsPhi", &recojet_antikt10_NOSYS_leadingVRTrackJetsPhi, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsPhi);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsM", &recojet_antikt10_NOSYS_leadingVRTrackJetsM, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsM);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12", &recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13", &recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32", &recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77", &recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85", &recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85, &b_recojet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85);
   fChain->SetBranchAddress("passRelativeDeltaRToVRJetCut", &passRelativeDeltaRToVRJetCut, &b_passRelativeDeltaRToVRJetCut);
   fChain->SetBranchAddress("HadronConeExclTruthLabelID_NOSYS", &HadronConeExclTruthLabelID_NOSYS, &b_HadronConeExclTruthLabelID_NOSYS);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_goodVRTrackJets", &recoUFOjet_antikt10_NOSYS_goodVRTrackJets, &b_recoUFOjet_antikt10_NOSYS_goodVRTrackJets);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPt", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPt, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPt);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsEta", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsEta, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsEta);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPhi", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPhi, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsPhi);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsM", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsM, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsM);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR12);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR13);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsDeltaR32);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_77);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85", &recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85, &b_recoUFOjet_antikt10_NOSYS_leadingVRTrackJetsBtag_DL1r_FixedCutBEff_85);
   fChain->SetBranchAddress("UFO_R10_HadronConeExclTruthLabelID_NOSYS", &UFO_R10_HadronConeExclTruthLabelID_NOSYS, &b_UFO_R10_HadronConeExclTruthLabelID_NOSYS);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_pt", &recojet_antikt10_NOSYS_pt, &b_recojet_antikt10_NOSYS_pt);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_eta", &recojet_antikt10_NOSYS_eta, &b_recojet_antikt10_NOSYS_eta);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_phi", &recojet_antikt10_NOSYS_phi, &b_recojet_antikt10_NOSYS_phi);
   fChain->SetBranchAddress("recojet_antikt10_NOSYS_m", &recojet_antikt10_NOSYS_m, &b_recojet_antikt10_NOSYS_m);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_pt", &recojet_antikt10_OR_NOSYS_pt, &b_recojet_antikt10_OR_NOSYS_pt);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_eta", &recojet_antikt10_OR_NOSYS_eta, &b_recojet_antikt10_OR_NOSYS_eta);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_phi", &recojet_antikt10_OR_NOSYS_phi, &b_recojet_antikt10_OR_NOSYS_phi);
   fChain->SetBranchAddress("recojet_antikt10_OR_NOSYS_m", &recojet_antikt10_OR_NOSYS_m, &b_recojet_antikt10_OR_NOSYS_m);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_pt", &recoUFOjet_antikt10_NOSYS_pt, &b_recoUFOjet_antikt10_NOSYS_pt);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_eta", &recoUFOjet_antikt10_NOSYS_eta, &b_recoUFOjet_antikt10_NOSYS_eta);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_phi", &recoUFOjet_antikt10_NOSYS_phi, &b_recoUFOjet_antikt10_NOSYS_phi);
   fChain->SetBranchAddress("recoUFOjet_antikt10_NOSYS_m", &recoUFOjet_antikt10_NOSYS_m, &b_recoUFOjet_antikt10_NOSYS_m);
   fChain->SetBranchAddress("R10TruthLabel_R21Consolidated_NOSYS", &R10TruthLabel_R21Consolidated_NOSYS, &b_R10TruthLabel_R21Consolidated_NOSYS);
   fChain->SetBranchAddress("R10TruthLabel_R21Consolidated_OR_NOSYS", &R10TruthLabel_R21Consolidated_OR_NOSYS, &b_R10TruthLabel_R21Consolidated_OR_NOSYS);
   fChain->SetBranchAddress("UFO_R10TruthLabel_R21Precision_2022v1_NOSYS", &UFO_R10TruthLabel_R21Precision_2022v1_NOSYS, &b_UFO_R10TruthLabel_R21Precision_2022v1_NOSYS);
   fChain->SetBranchAddress("UFO_R10TruthLabel_R22v1_NOSYS", &UFO_R10TruthLabel_R22v1_NOSYS, &b_UFO_R10TruthLabel_R22v1_NOSYS);
   fChain->SetBranchAddress("truthjet_antikt10_pt", &truthjet_antikt10_pt, &b_truthjet_antikt10_pt);
   fChain->SetBranchAddress("truthjet_antikt10_eta", &truthjet_antikt10_eta, &b_truthjet_antikt10_eta);
   fChain->SetBranchAddress("truthjet_antikt10_phi", &truthjet_antikt10_phi, &b_truthjet_antikt10_phi);
   fChain->SetBranchAddress("truthjet_antikt10_m", &truthjet_antikt10_m, &b_truthjet_antikt10_m);
   fChain->SetBranchAddress("truthUFOjet_antikt10_pt", &truthUFOjet_antikt10_pt, &b_truthUFOjet_antikt10_pt);
   fChain->SetBranchAddress("truthUFOjet_antikt10_eta", &truthUFOjet_antikt10_eta, &b_truthUFOjet_antikt10_eta);
   fChain->SetBranchAddress("truthUFOjet_antikt10_phi", &truthUFOjet_antikt10_phi, &b_truthUFOjet_antikt10_phi);
   fChain->SetBranchAddress("truthUFOjet_antikt10_m", &truthUFOjet_antikt10_m, &b_truthUFOjet_antikt10_m);
   fChain->SetBranchAddress("truth_H1_pdgId", &truth_H1_pdgId, &b_truth_H1_pdgId);
   fChain->SetBranchAddress("truth_H1_pt", &truth_H1_pt, &b_truth_H1_pt);
   fChain->SetBranchAddress("truth_H1_eta", &truth_H1_eta, &b_truth_H1_eta);
   fChain->SetBranchAddress("truth_H1_phi", &truth_H1_phi, &b_truth_H1_phi);
   fChain->SetBranchAddress("truth_H1_m", &truth_H1_m, &b_truth_H1_m);
   fChain->SetBranchAddress("truth_bb_fromH1_pt", &truth_bb_fromH1_pt, &b_truth_bb_fromH1_pt);
   fChain->SetBranchAddress("truth_bb_fromH1_eta", &truth_bb_fromH1_eta, &b_truth_bb_fromH1_eta);
   fChain->SetBranchAddress("truth_bb_fromH1_phi", &truth_bb_fromH1_phi, &b_truth_bb_fromH1_phi);
   fChain->SetBranchAddress("truth_bb_fromH1_m", &truth_bb_fromH1_m, &b_truth_bb_fromH1_m);
   fChain->SetBranchAddress("truth_H2_pdgId", &truth_H2_pdgId, &b_truth_H2_pdgId);
   fChain->SetBranchAddress("truth_H2_pt", &truth_H2_pt, &b_truth_H2_pt);
   fChain->SetBranchAddress("truth_H2_eta", &truth_H2_eta, &b_truth_H2_eta);
   fChain->SetBranchAddress("truth_H2_phi", &truth_H2_phi, &b_truth_H2_phi);
   fChain->SetBranchAddress("truth_H2_m", &truth_H2_m, &b_truth_H2_m);
   fChain->SetBranchAddress("truth_bb_fromH2_pt", &truth_bb_fromH2_pt, &b_truth_bb_fromH2_pt);
   fChain->SetBranchAddress("truth_bb_fromH2_eta", &truth_bb_fromH2_eta, &b_truth_bb_fromH2_eta);
   fChain->SetBranchAddress("truth_bb_fromH2_phi", &truth_bb_fromH2_phi, &b_truth_bb_fromH2_phi);
   fChain->SetBranchAddress("truth_bb_fromH2_m", &truth_bb_fromH2_m, &b_truth_bb_fromH2_m);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_70", &recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_70, &b_recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_70);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77", &recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77, &b_recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_85", &recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_85, &b_recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_85);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_70", &recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_70, &b_recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_70);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_77", &recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_77, &b_recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_77);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_85", &recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_85, &b_recojet_antikt4_NOSYS_GN120220509_FixedCutBEff_85);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_70", &recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_70, &b_recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_70);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_77", &recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_77, &b_recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_77);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_85", &recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_85, &b_recojet_antikt4_OR_NOSYS_DL1dv00_FixedCutBEff_85);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_70", &recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_70, &b_recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_70);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_77", &recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_77, &b_recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_77);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_85", &recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_85, &b_recojet_antikt4_OR_NOSYS_GN120220509_FixedCutBEff_85);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_nobjetcalib_pt", &recojet_antikt4_NOSYS_nobjetcalib_pt, &b_recojet_antikt4_NOSYS_nobjetcalib_pt);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_nobjetcalib_eta", &recojet_antikt4_NOSYS_nobjetcalib_eta, &b_recojet_antikt4_NOSYS_nobjetcalib_eta);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_nobjetcalib_phi", &recojet_antikt4_NOSYS_nobjetcalib_phi, &b_recojet_antikt4_NOSYS_nobjetcalib_phi);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_nobjetcalib_m", &recojet_antikt4_NOSYS_nobjetcalib_m, &b_recojet_antikt4_NOSYS_nobjetcalib_m);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_nobjetcalib_pt", &recojet_antikt4_OR_NOSYS_nobjetcalib_pt, &b_recojet_antikt4_OR_NOSYS_nobjetcalib_pt);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_nobjetcalib_eta", &recojet_antikt4_OR_NOSYS_nobjetcalib_eta, &b_recojet_antikt4_OR_NOSYS_nobjetcalib_eta);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_nobjetcalib_phi", &recojet_antikt4_OR_NOSYS_nobjetcalib_phi, &b_recojet_antikt4_OR_NOSYS_nobjetcalib_phi);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_nobjetcalib_m", &recojet_antikt4_OR_NOSYS_nobjetcalib_m, &b_recojet_antikt4_OR_NOSYS_nobjetcalib_m);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_Jvt", &recojet_antikt4_NOSYS_Jvt, &b_recojet_antikt4_NOSYS_Jvt);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_JvtRpt", &recojet_antikt4_NOSYS_JvtRpt, &b_recojet_antikt4_NOSYS_JvtRpt);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_JVFCorr", &recojet_antikt4_NOSYS_JVFCorr, &b_recojet_antikt4_NOSYS_JVFCorr);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_jvt_selection", &recojet_antikt4_NOSYS_jvt_selection, &b_recojet_antikt4_NOSYS_jvt_selection);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_NNJvt", &recojet_antikt4_NOSYS_NNJvt, &b_recojet_antikt4_NOSYS_NNJvt);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_NNJvtRpt", &recojet_antikt4_NOSYS_NNJvtRpt, &b_recojet_antikt4_NOSYS_NNJvtRpt);
   fChain->SetBranchAddress("recojet_antikt4_NOSYS_NNJvtPass", &recojet_antikt4_NOSYS_NNJvtPass, &b_recojet_antikt4_NOSYS_NNJvtPass);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_Jvt", &recojet_antikt4_OR_NOSYS_Jvt, &b_recojet_antikt4_OR_NOSYS_Jvt);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_JvtRpt", &recojet_antikt4_OR_NOSYS_JvtRpt, &b_recojet_antikt4_OR_NOSYS_JvtRpt);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_JVFCorr", &recojet_antikt4_OR_NOSYS_JVFCorr, &b_recojet_antikt4_OR_NOSYS_JVFCorr);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_jvt_selection", &recojet_antikt4_OR_NOSYS_jvt_selection, &b_recojet_antikt4_OR_NOSYS_jvt_selection);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_NNJvt", &recojet_antikt4_OR_NOSYS_NNJvt, &b_recojet_antikt4_OR_NOSYS_NNJvt);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_NNJvtRpt", &recojet_antikt4_OR_NOSYS_NNJvtRpt, &b_recojet_antikt4_OR_NOSYS_NNJvtRpt);
   fChain->SetBranchAddress("recojet_antikt4_OR_NOSYS_NNJvtPass", &recojet_antikt4_OR_NOSYS_NNJvtPass, &b_recojet_antikt4_OR_NOSYS_NNJvtPass);
   Notify();
}

Bool_t sh4b::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void sh4b::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t sh4b::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef sh4b_cxx
