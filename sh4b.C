#define sh4b_cxx
#include "sh4b.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>


#include "ATLASRootStyle/AtlasStyle.C"
#include "ATLASRootStyle/AtlasLabels.C"
#include "ATLASRootStyle/AtlasUtils.C"
//#include "AtlasUtils.h"



bool isMatched(TLorentzVector tlva, TLorentzVector tlvb){
  if (tlva.DeltaR(tlvb)<0.4) return true;
  else return false;
}

bool truth_Higgs_match(TLorentzVector tlvra, TLorentzVector tlvta, TLorentzVector tlvrb, TLorentzVector tlvtb){
   if(((isMatched(tlvra,tlvta))&&(isMatched(tlvrb,tlvtb))) ||
      ((isMatched(tlvra,tlvtb))&&(isMatched(tlvrb,tlvta)))) return true;
   else return false;
}


void sh4b::Loop()
{
//   In a ROOT session, you can do:
//      root> .L sh4b.C
//      root> sh4b t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch

   SetAtlasStyle();
   if (fChain == 0) return;
   int contador=0;
   float matching1=0,matching2=0,matching3=0;

   Long64_t nentries = fChain->GetEntriesFast();
   TLorentzVector Jet,JetHiggs1,JetHiggs2,JetScalar1,JetScalar2;
   
   //**************************************************************************************************************
   //DEFINING HISTOGRAMS TO PLOT THE DATA
   //**************************************************************************************************************

   //pt histograms of the b jet with higher energy
   TH1* h_jet1_pt = new TH1F("jet1_pt","Leading b-jet trasverse moment",1000,0,1000); 
   //eta histograms of the b jet with higher energy
   TH1* h_jet1_ETA = new TH1F("jet1_Eta","Leading b-jet eta",100,-2.5,2.5); 

   //dR histograms of bb coming from Higgs with different identification methods
   TH1* dRbb_H1= new TH1F("dRbb_H1","Distance between Higgs b-jets",50,0,5); 
   TH1* dRbb_H2 = new TH1F("dRbb_H2","Distance between Higgs b-jets",50,0,5);
   TH1* dRbb_H3 = new TH1F("dRbb_H2","Distance between Higgs b-jets",50,0,5);
   dRbb_H1->GetXaxis()->SetRangeUser(0, 5);
   dRbb_H2->SetAxisRange(0., 700.,"Y");

   //dR histograms of bb coming from Scalar with different identification methods
   TH1* dRbb_S1 = new TH1F("dRbb_S1","Distance between Scalar b-jets",50,0,5);
   TH1* dRbb_S2 = new TH1F("dRbb_S2","Distance between Scalar b-jets",50,0,5);
   TH1* dRbb_S3 = new TH1F("dRbb_S2","Distance between Scalar b-jets",50,0,5);
   dRbb_S1->GetXaxis()->SetRangeUser(0, 5);

   // Higgs invariant mass histograms with different identification methods
   TH1* MH1= new TH1F("MH1","Higgs invariant mass",100,0,200);
   TH1* MH2 = new TH1F("MH2","Higgs invariant mass",100,0,200);
   TH1* MH3 = new TH1F("MH3","Higgs invariant mass",100,0,200);
   // Scalar invariant mass histograms with different identification methods
   TH1* MS1 = new TH1F("MS1","Scalar invariant mass",100,0,200);
   TH1* MS2 = new TH1F("MS2","Scalar invariant mass",100,0,200);
   TH1* MS3 = new TH1F("MS3","Scalar invariant mass",100,0,200);
   //Initial particle invariant mass
   TH1* MX = new TH1F("MX","Initial particle invariant mass",100,0,1000);
   
   // Higgs invariant mass truth values
   TH1* MH1_true= new TH1F("MH1_true","Higgs invariant mass",100,0,200);
   TH1* MH2_true = new TH1F("MH2_true","Higgs invariant mass",100,0,200);
   TH1* MH3_true = new TH1F("MH3_true","Higgs invariant mass",100,0,200);

    // Scalar invariant mass truth values
   TH1* MS1_true = new TH1F("MS1_true","Scalar invariant mass",100,0,200);
   TH1* MS2_true = new TH1F("MS2_true","Scalar invariant mass",100,0,200);
   TH1* MS3_true = new TH1F("MS3_true","Scalar invariant mass",100,0,200);
   
   
   TH1* DeltaH_true = new TH1F("DeltaH_true","Higgs invariant mass truth",100,0,200);
   TH1* DeltaS_true = new TH1F("DeltaS_true","Scalar invariant mass truth",100,0,200);
   
  

  
//************************************************************************************************************** 
//DATA ANALYSIS
//**************************************************************************************************************

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) 
   {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      //Message every  1000 entries to check
      if (jentry%1000==0)
      {
         cout << "Processing " << jentry << endl;
      }

      // Truth information, we loop over the truth data saving it to a TLorentz vector with pT, eta, phi and m
      vector <TLorentzVector> bfromH; bfromH.clear();
      for(int itHb=0; itHb < truth_bb_fromH1_pt->size(); itHb++){
         TLorentzVector truthbfromH;
         truthbfromH.SetPtEtaPhiM(truth_bb_fromH1_pt->at(itHb),
                  truth_bb_fromH1_eta->at(itHb),
                  truth_bb_fromH1_phi->at(itHb),
                  truth_bb_fromH1_m->at(itHb));
         bfromH.push_back(truthbfromH);
      }
      
      vector <TLorentzVector> bfromS; bfromS.clear();
      for(int itSb=0; itSb<truth_bb_fromH2_pt->size(); itSb++){
         TLorentzVector truthbfromS;
         truthbfromS.SetPtEtaPhiM(truth_bb_fromH2_pt->at(itSb),
                  truth_bb_fromH2_eta->at(itSb),
                  truth_bb_fromH2_phi->at(itSb),
                  truth_bb_fromH2_m->at(itSb));
         bfromS.push_back(truthbfromS);
      }
               
      //We can now plot truth Delta
      DeltaH_true -> Fill(((bfromH.at(0)+ bfromH.at(1)).M())/1000.,1);
      DeltaS_true -> Fill(((bfromS.at(0)+ bfromS.at(1)).M())/1000.,1);


      vector <TLorentzVector> vJet; vJet.clear(); Double_t sum, maxSum[3];
         int imax[3],jmax[3],i,j;
         float sumabb = 10000000000000000000000. ,sumamaxrbb;
         int iminrbb= 0;
         //Inicializamos el maxsum
         for ( i = 0; i < 3; i++)
         {
            maxSum[i]=0;
            imax[i]=0;
            jmax[i]=0;
         }

      //**************************************************************************************************************
      //CHECKING WHICH TRIGGERS GET SATISFIED
      //**************************************************************************************************************

      //If the leading jet is a b tagged one, with energy above 325GeV and satisfies the trigger requiring 1 high E_T b jet,
      //the first 4 b jets goes to the vJet
      if ((recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77->at(0)==true)&& (recojet_antikt4_NOSYS_pt->at(0)/1000.>325) && 
      (trigPassed_HLT_j225_bmv2c2060_split == true))
      {
         //We now add the first 4 b jets above energy of 40GeV and eta<2.5 to the vJet
         for (Long64_t ijet=0; ijet<recojet_antikt4_NOSYS_pt->size() ;ijet++) 
         {
         Jet.SetPtEtaPhiM(recojet_antikt4_NOSYS_pt->at(ijet), 
         recojet_antikt4_NOSYS_eta->at(ijet),recojet_antikt4_NOSYS_phi->at(ijet),
         recojet_antikt4_NOSYS_m->at(ijet));
            if ((recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77-> at(ijet)==true) && 
            (fabs(recojet_antikt4_NOSYS_eta->at(ijet)) < 2.5) && (recojet_antikt4_NOSYS_pt-> at(ijet)/1000. > 40) && 
            (vJet.size()<=4))
            {
               vJet.push_back(Jet);
            }
         }
      }// If the leading jet has pT > 170 GeV and is not b-tagged, the trigger requiring two b-jets and one additional jet is used.
      else if ((recojet_antikt4_NOSYS_pt->at(0)/1000.>170) && (recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77->at(0)==false) && 
      (trigPassed_HLT_j100_2j55_bmv2c2060_split==true))
      {
         for (Long64_t ijet=0; ijet<recojet_antikt4_NOSYS_pt->size();ijet++) 
         {
         Jet.SetPtEtaPhiM(recojet_antikt4_NOSYS_pt->at(ijet), 
         recojet_antikt4_NOSYS_eta->at(ijet),recojet_antikt4_NOSYS_phi->at(ijet),
         recojet_antikt4_NOSYS_m->at(ijet));
            if ((recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77-> at(ijet)==true) && 
            (fabs(recojet_antikt4_NOSYS_eta->at(ijet)) < 2.5)&& (recojet_antikt4_NOSYS_pt-> at(ijet)/1000. > 40) && 
            (vJet.size()<=4))
            {
               vJet.push_back(Jet);
            }
         }
      }//For all remaining events, the trigger requiring two b-jets and two additional jets is used.
      else if (trigPassed_HLT_2j35_bmv2c2060_split_2j35_L14J15p0ETA25==true)
      {
         for (Long64_t ijet=0; ijet<recojet_antikt4_NOSYS_pt->size();ijet++) 
         {
         Jet.SetPtEtaPhiM(recojet_antikt4_NOSYS_pt->at(ijet), 
         recojet_antikt4_NOSYS_eta->at(ijet),recojet_antikt4_NOSYS_phi->at(ijet),
         recojet_antikt4_NOSYS_m->at(ijet));
            if ((recojet_antikt4_NOSYS_DL1dv00_FixedCutBEff_77-> at(ijet)==true) && 
            (fabs(recojet_antikt4_NOSYS_eta->at(ijet)) < 2.5)&& (recojet_antikt4_NOSYS_pt-> at(ijet)/1000. > 40) && 
            (vJet.size()<=4))
            {
               vJet.push_back(Jet);
            }
         }
      }

      

      //From all the identified vJet, we are only going to analyse those with 4 entries (b-jets)
      if (vJet.size()==4)
      {
         contador = contador+1;
         h_jet1_pt-> Fill(vJet[0].Pt()/1000., 1); //Second entry dictates the Histogram granularity
         h_jet1_ETA-> Fill(vJet[0].Eta(), 1); 



         //**************************************************************************************************************
         //PAIRING THE B JETS TO HIGGS OR SCALAR WITH 3 DIFFERENT METHODS
         //**************************************************************************************************************

         //**************************************************************************************************************
         //FIRST METHOD: Minimicing dR of the 3 leading di-jet pairs and tagging the Higgs to the one having 
         //an invariant mass closer to Higgs mass 
         //**************************************************************************************************************

         //For this we need to find the leading di jets, i.e, the di jet with higher Pt
         for ( i = 0; i < 4; i++) 
         {
            for ( j = i+1; j < 4; j++)
            {
               sum = (vJet[i] + vJet[j]).Pt() ;
               if ( sum > maxSum[0]) 
               {
                  //Move previus leading jets one possition back before introducing the new higher
                  imax[2]=imax[1];
                  jmax[2]=jmax[1];
                  maxSum[2]=maxSum[1];

                  imax[1]=imax[0];
                  jmax[1]=jmax[0];
                  maxSum[1]=maxSum[0];

                  //And the maximun in the first entry
                  imax[0]=i;
                  jmax[0]=j;
                  maxSum[0] = sum;
               }
               else if (sum > maxSum[1])
               {
                  imax[2]=imax[1];
                  jmax[2]=jmax[1];
                  maxSum[2]=maxSum[1];
                  
                  imax[1]=i;
                  jmax[1]=j;
                  maxSum[1] = sum;
               }
               else if (sum > maxSum[2])
               {
                  imax[2]=i;
                  jmax[2]=j;
                  maxSum[2] = sum;
               }
            } 
         }

         //We now chose the di jet with a lower dR
         sumabb=10000000.;
            for ( i = 0; i < 3; i++)
            {
               if (vJet[imax[i]].DeltaR(vJet[jmax[i]]) < sumabb)
               {
                  iminrbb=i;
                  sumabb= vJet[imax[i]].DeltaR(vJet[jmax[i]]);
               }
            }

         //And make a simple loop to get the index of the other di-jet
         int index1=0 , jdex1=0 ;
         for ( i = 0; i < 4; i++)
         {
            if ((imax[iminrbb] != i) && (jmax[iminrbb]!= i))
            {
               index1=i;
            }
         }
         for ( i = 0; i < 4; i++)
         {
            if ((imax[iminrbb] != i) && (jmax[iminrbb]!= i) && (i!=index1))
            {
               jdex1=i;
            }
         }


         //We will be tagging the di-jet coming from the higgs to the one having an invariant mass closer to Higgs mass
         int iHiggs,jHiggs,iScalar,jScalar;
         if(fabs((vJet[imax[iminrbb]] + vJet[jmax[iminrbb]]).M()-125000) < fabs((vJet[index1] + vJet[jdex1]).M()-125000))
         {
            iHiggs=imax[iminrbb];
            jHiggs=jmax[iminrbb];
            iScalar=index1;
            jScalar=jdex1;
         }
         else{
            iHiggs=index1;
            jHiggs=jdex1;
            iScalar= imax[iminrbb];
            jScalar= jmax[iminrbb];
         }
         float mbbh = (vJet[iHiggs] + vJet[jHiggs]).M();
         float mbbs = (vJet[iScalar] + vJet[jScalar]).M();
         MH1-> Fill(mbbh/1000.,1);
         MS1 -> Fill(mbbs/1000.,1);

         dRbb_H1 -> Fill(vJet[iHiggs].DeltaR(vJet[jHiggs]),1);
         dRbb_S1  -> Fill(vJet[iScalar].DeltaR(vJet[jScalar]),1);

         //For consistency we also plot the X invariant mass
         float mbbbbx = (vJet[iScalar] + vJet[jScalar] + vJet[iHiggs] + vJet[jHiggs]).M();
         MX -> Fill(mbbbbx/1000.,1);

         //If truth matching is satisfied, we add it to the truth histogram
         if ((truth_Higgs_match(vJet[iHiggs],bfromH.at(0),vJet[jHiggs],bfromH.at(1))== true)  &&
         ((truth_Higgs_match(vJet[iScalar],bfromS.at(0),vJet[jScalar],bfromS.at(1))== true)))
         {
            MH1_true ->Fill(((vJet[iHiggs] + vJet[jHiggs]).M())/1000.,1);
            MS1_true ->Fill(((vJet[iScalar] + vJet[jScalar]).M())/1000.,1);
         }




         //**************************************************************************************************************
         //SECOND METHOD: Minimicing dR and tagging the Scalar as the most collimated di jet (lower dR)
         //**************************************************************************************************************
         
         sumabb=10000000.;
         for ( i = 0; i < 4; i++)
         {
            for ( j = i+1; j < 4; j++)
            {
               if (vJet[i].DeltaR(vJet[j])<sumabb)
               {
                  sumabb=vJet[i].DeltaR(vJet[j]);
                  index1=i;
                  jdex1=j;
               }
            }
         }

         //Finding the index for the scalar di-jet
         int index2=0, jdex2=0;
         for ( i = 0; i < 4; i++)
         {
            if ((i!= index1) && (i!=jdex1))
            {
               index2=i;
            }
         }
         for ( i = 0; i < 4; i++)
         {
            if ((i!= index1) && (i!=jdex1) && (i!=index2))
            {
               jdex2=i;
            }
         }    

         //Higgs will be tagged with the higher dR di jet
         iHiggs=0;
         iScalar=0;
         jScalar=0;
         iScalar=0;
         if( vJet[index2].DeltaR(vJet[jdex2]) < vJet[index1].DeltaR(vJet[jdex1]))
         {
            iHiggs=index1;
            jHiggs=jdex1;
            iScalar=index2;
            jScalar=jdex2;
         }
         else{
            iHiggs=index2;
            jHiggs=jdex2;
            iScalar= index1;
            jScalar= jdex1;
         }

         //Save the results into histograms
         mbbs = (vJet[iScalar] + vJet[jScalar]).M();            
         mbbh= (vJet[iHiggs] + vJet[jHiggs]).M();

         MS2 -> Fill(mbbs/1000.,1);
         MH2 -> Fill(mbbh/1000.,1);

         dRbb_S2  -> Fill(vJet[iScalar].DeltaR(vJet[jScalar]),1);
         dRbb_H2  -> Fill(vJet[iHiggs].DeltaR(vJet[jHiggs]),1);


         //If truth matching is satisfied, we add it to the truth histogram
         if ((truth_Higgs_match(vJet[iHiggs],bfromH.at(0),vJet[jHiggs],bfromH.at(1))== true)  &&
         ((truth_Higgs_match(vJet[iScalar],bfromS.at(0),vJet[jScalar],bfromS.at(1))== true)))
         {
            MH2_true ->Fill(((vJet[iHiggs] + vJet[jHiggs]).M())/1000.,1);
            MS2_true ->Fill(((vJet[iScalar] + vJet[jScalar]).M())/1000.,1);
         }





         //**************************************************************************************************************
         //THIRD METHOD: Minimicing the difference between di jet invariant mass and Higgs mass
         //**************************************************************************************************************

         float deltamasahiggs=10000000000.;
         for ( i = 0; i < 4; i++)
         {
            for ( j = i+1; j < 4; j++)
            {
               //Buscams la pareja
               if (fabs((vJet[i]+vJet[j]).M()-125000.)<(deltamasahiggs))
               {
                  deltamasahiggs=(vJet[i]+vJet[j]).M()-125000.;
                  index1=i;
                  jdex1=j;
               }  
            }
         }
         //Finding the indixes for the other di-jet
         for ( i = 0; i < 4; i++)
         {
            if ((i!= index1) && (i!=jdex1))
            {
               index2=i;
            }
         }
         for ( i = 0; i < 4; i++)
         {
            if ((i!= index1) && (i!=jdex1) && (i!=index2))
            {
               jdex2=i;
            }
         }             


         if(fabs((vJet[index2] + vJet[jdex2]).M()-125000.) > fabs((vJet[index1] + vJet[jdex1]).M()-125000.))
         {
            iHiggs=index1;
            jHiggs=jdex1;
            iScalar=index2;
            jScalar=jdex2;
         }
         else{
            iHiggs=index2;
            jHiggs=jdex2;
            iScalar= index1;
            jScalar= jdex1;
         }



            dRbb_H3 -> Fill(vJet[iHiggs].DeltaR(vJet[jHiggs]));
            dRbb_S3 -> Fill(vJet[iScalar].DeltaR(vJet[jScalar]));
            MS3->Fill((vJet[iScalar]+vJet[jScalar]).M()/1000.,1);
            MH3->Fill((vJet[iHiggs]+vJet[jHiggs]).M()/1000.,1);


         //If truth matching is satisfied, we add it to the truth histogram
         if ((truth_Higgs_match(vJet[iHiggs],bfromH.at(0),vJet[jHiggs],bfromH.at(1))== true)  &&
         ((truth_Higgs_match(vJet[iScalar],bfromS.at(0),vJet[jScalar],bfromS.at(1))== true)))
         {
            MH3_true ->Fill(((vJet[iHiggs] + vJet[jHiggs]).M())/1000.,1);
            MS3_true ->Fill(((vJet[iScalar] + vJet[jScalar]).M())/1000.,1);
         }

      }
   }

   //**************************************************************************************************************
   //STYLING THE PLOTS
   //**************************************************************************************************************

   TLatex lat;
   lat.SetNDC();
   lat.SetTextFont (42);
   lat.SetTextColor(kBlack);
   lat.SetTextSize (0.04);

   TLegend *leg = new TLegend(0.5,0.7,0.9,0.9);
   leg->SetFillStyle(0);
   leg->SetBorderSize(0);
   leg->SetTextFont(42);
   leg->SetTextSize(0.04);

   TLegend *leg1 = new TLegend(0.5,0.7,0.9,0.9);
   leg1->SetFillStyle(0);
   leg1->SetBorderSize(0);
   leg1->SetTextFont(42);
   leg1->SetTextSize(0.04);

   TLegend *legtruth = new TLegend(0.7,0.5,0.9,0.9);
   legtruth->SetFillStyle(0);
   legtruth->SetBorderSize(0);
   legtruth->SetTextFont(42);
   legtruth->SetTextSize(0.04);


   //With all histograms filled, we make the canvas
   TCanvas* dRbb_H = new TCanvas("dRbb_H","Distance between Higgs b-jets",600,500);
   dRbb_H1 -> SetMaximum(1200);
   dRbb_H1 -> SetXTitle("Higgs di-jet dR");
   dRbb_H1 -> SetYTitle("Events");
   dRbb_H1 -> SetLineColor(kBlue);
   dRbb_H1 -> Draw();
   dRbb_H2 -> SetLineColor(kRed);
   dRbb_H2 -> Draw("same");
   dRbb_H3 -> SetLineColor(kGreen);
   dRbb_H3 -> Draw("same");
   leg1->AddEntry(dRbb_H1," mindR","l");
   leg1->AddEntry(dRbb_H3," mindH","l");
   leg1->AddEntry(dRbb_H2," mindRall","l");
   leg1->Draw();
   lat.DrawLatex(0.4, 0.55, "MC simulation, 13 TeV");
   lat.DrawLatex(0.4, 0.48, "X(750 GeV) #rightarrow S(70 GeV)H #rightarrow bbbb");
   lat.DrawLatex(0.4, 0.41, "anti-k_{t} jets, R = 0.4");


   TCanvas* dRbb_S = new TCanvas("dRbb_S","Distance between Scalar b-jets",600,500);
   dRbb_S1 -> SetMaximum(2000);
   dRbb_S1 -> SetXTitle("Scalar di-jet dR");
   dRbb_S1 -> SetYTitle("Events");
   dRbb_S1 -> SetLineColor(kBlue);
   dRbb_S1 -> Draw();
   dRbb_S2 -> SetLineColor(kRed);
   dRbb_S2 -> Draw("same");
   dRbb_S3 -> SetLineColor(kGreen);
   dRbb_S3 -> Draw("same");
   leg1->Draw();
   lat.DrawLatex(0.4, 0.55, "MC simulation, 13 TeV");
   lat.DrawLatex(0.4, 0.48, "X(750 GeV) #rightarrow S(70 GeV)H #rightarrow bbbb");
   lat.DrawLatex(0.4, 0.41, "anti-k_{t} jets, R = 0.4");


   TCanvas* MH = new TCanvas("MH","Higgs invariant mass",600,500);
   MH1 -> SetMaximum(500);
   MH1 -> SetXTitle("Higgs Mass [GeV]");
   MH1 -> SetYTitle("Events");
   MH1 -> SetLineColor(kBlue);
   MH1 -> Draw();
   MH1_true -> SetLineStyle(7);
   MH1_true -> SetLineColor(kBlue);
   MH1_true  -> Draw("same");
   MH2 -> SetLineColor(kRed);
   MH2 -> Draw("same");
   MH2_true -> SetLineStyle(7);
   MH2_true -> SetLineColor(kRed);
   MH2_true  -> Draw("same");
   MH3 -> SetLineColor(kGreen);
   MH3 -> Draw("same");
   MH3_true -> SetLineStyle(7);
   MH3_true -> SetLineColor(kGreen);
   MH3_true  -> Draw("same");
  // DeltaH_true -> SetLineColor(kBlack);
   //DeltaH_true -> Draw("same");
   leg->AddEntry(MH1," mindR","l");
   leg->AddEntry(MH3," mindH","l");
   leg->AddEntry(MH2," mindRall","l");
   leg->AddEntry(MH1_true," truth matched mindR","l");
   leg->AddEntry(MH3_true," truth matched mindH","l");
   leg->AddEntry(MH2_true," truth matched mindRall","l");
   leg->Draw();
   lat.DrawLatex(0.2, 0.85, "MC simulation, 13 TeV");
   lat.DrawLatex(0.2, 0.78, "X #rightarrow SH #rightarrow bbbb");
   lat.DrawLatex(0.2, 0.71, "anti-k_{t} jets, R = 0.4");


   TCanvas* MS = new TCanvas("MS","Scalar invariant mass",600,500);
   MS1 -> SetMaximum(700);
   MS1 -> SetXTitle("Scalar Mass [GeV]");
   MS1 -> SetYTitle("Events");
   MS1 -> SetLineColor(kBlue);
   MS1 -> Draw();
   MS1_true -> SetLineStyle(7);
   MS1_true -> SetLineColor(kBlue);
   MS1_true  -> Draw("same");
   MS2 -> SetLineColor(kRed);
   MS2 -> Draw("same");
   MS2_true -> SetLineStyle(7);
   MS2_true -> SetLineColor(kRed);
   MS2_true  -> Draw("same");
   MS3 -> SetLineColor(kGreen);
   MS3 -> Draw("same");
   MS3_true -> SetLineStyle(7);
   MS3_true -> SetLineColor(kGreen);
   MS3_true  -> Draw("same");
  // DeltaS_true -> SetLineColor(kBlack);
  // DeltaS_true -> Draw("same");
  leg->Draw();
  lat.DrawLatex(0.2, 0.85, "MC simulation, 13 TeV");
  lat.DrawLatex(0.2, 0.78, "X #rightarrow SH #rightarrow bbbb");
  lat.DrawLatex(0.2, 0.71, "anti-k_{t} jets, R = 0.4");


  TCanvas* eta = new TCanvas("eta","Leading b jet eta",600,500);
  h_jet1_ETA->SetMaximum(350);
  h_jet1_ETA->SetXTitle("Leading b-jet eta");
  h_jet1_ETA->SetYTitle("Events");
  h_jet1_ETA->Draw();
  lat.DrawLatex(0.2, 0.85, "MC simulation, 13 TeV");
  lat.DrawLatex(0.2, 0.78, "X(750 GeV) #rightarrow S(70 GeV)H #rightarrow bbbb");
  lat.DrawLatex(0.2, 0.71, "anti-k_{t} jets, R = 0.4");
}