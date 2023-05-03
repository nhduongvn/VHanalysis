#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTagV3_18_ideal_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTagV3_18_ideal/CvB_2018_QuadJet_noTagV3_18_ideal
//=========  (Tue May  2 10:29:49 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTagV3_18_ideal = new TCanvas("CvB_2018_QuadJet_noTagV3_18_ideal", "CvB_2018_QuadJet_noTagV3_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_noTagV3_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_noTagV3_18_ideal->Range(-0.2,-2.748352,1.133333,1.724871);
   CvB_2018_QuadJet_noTagV3_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_noTagV3_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_noTagV3_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_noTagV3_18_ideal->SetLogy();
   CvB_2018_QuadJet_noTagV3_18_ideal->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTagV3_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTagV3_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV3_ideal_CvB__155 = new TH1D("_QuadJet_noTagV3_ideal_CvB__155","",10,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV3_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV3_ideal_CvB__155->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV3_ideal_CvB__155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV3_ideal_CvB__155->SetLineColor(ci);
   _QuadJet_noTagV3_ideal_CvB__155->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTagV3_ideal_CvB__155->GetXaxis()->SetRange(1,10);
   _QuadJet_noTagV3_ideal_CvB__155->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvB__155->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_CvB__155->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvB__155->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV3_ideal_CvB__155->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvB__155->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvB__155->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_CvB__155->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_CvB__155->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_CvB__155->Draw("HIST");
   CvB_2018_QuadJet_noTagV3_18_ideal->Modified();
   CvB_2018_QuadJet_noTagV3_18_ideal->cd();
   CvB_2018_QuadJet_noTagV3_18_ideal->SetSelected(CvB_2018_QuadJet_noTagV3_18_ideal);
}
