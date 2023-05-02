#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTagV2_18_ideal()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTagV2_18_ideal/CvB_2018_QuadJet_noTagV2_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTagV2_18_ideal = new TCanvas("CvB_2018_QuadJet_noTagV2_18_ideal", "CvB_2018_QuadJet_noTagV2_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_noTagV2_18_ideal->Range(-0.2183529,-0.001398601,1.171633,0.01025641);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFillStyle(4000);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetLeftMargin(0.15709);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetRightMargin(0.1234783);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetBottomMargin(0.12);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV2_ideal_CvB__151 = new TH1D("_QuadJet_noTagV2_ideal_CvB__151","",10,0,1);
   _QuadJet_noTagV2_ideal_CvB__151->SetBinContent(1,0.003347681);
   _QuadJet_noTagV2_ideal_CvB__151->SetBinContent(3,0.004901961);
   _QuadJet_noTagV2_ideal_CvB__151->SetBinContent(4,0.005617978);
   _QuadJet_noTagV2_ideal_CvB__151->SetBinContent(9,0.006122449);
   _QuadJet_noTagV2_ideal_CvB__151->SetBinContent(10,0.008658009);
   _QuadJet_noTagV2_ideal_CvB__151->SetEntries(0.02864808);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV2_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.586");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3446");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV2_ideal_CvB__151->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV2_ideal_CvB__151);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTagV2_ideal_CvB__151->SetLineColor(ci);
   _QuadJet_noTagV2_ideal_CvB__151->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTagV2_ideal_CvB__151->GetXaxis()->SetRange(1,100);
   _QuadJet_noTagV2_ideal_CvB__151->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_CvB__151->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_CvB__151->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_CvB__151->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTagV2_ideal_CvB__151->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_CvB__151->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_CvB__151->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_CvB__151->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_CvB__151->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_CvB__151->Draw("HIST");
   CvB_2018_QuadJet_noTagV2_18_ideal->Modified();
   CvB_2018_QuadJet_noTagV2_18_ideal->cd();
   CvB_2018_QuadJet_noTagV2_18_ideal->SetSelected(CvB_2018_QuadJet_noTagV2_18_ideal);
}
