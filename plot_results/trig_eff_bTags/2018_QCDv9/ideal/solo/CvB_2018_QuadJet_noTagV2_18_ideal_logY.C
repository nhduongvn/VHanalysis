#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTagV2_18_ideal_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTagV2_18_ideal/CvB_2018_QuadJet_noTagV2_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTagV2_18_ideal = new TCanvas("CvB_2018_QuadJet_noTagV2_18_ideal", "CvB_2018_QuadJet_noTagV2_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_noTagV2_18_ideal->Range(-0.2,-0.1403309,1.133333,1.262978);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetLogy();
   CvB_2018_QuadJet_noTagV2_18_ideal->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV2_ideal_CvB__152 = new TH1D("_QuadJet_noTagV2_ideal_CvB__152","",10,0,1);
   _QuadJet_noTagV2_ideal_CvB__152->SetBinContent(1,7);
   _QuadJet_noTagV2_ideal_CvB__152->SetBinContent(3,2);
   _QuadJet_noTagV2_ideal_CvB__152->SetBinContent(4,2);
   _QuadJet_noTagV2_ideal_CvB__152->SetBinContent(9,3);
   _QuadJet_noTagV2_ideal_CvB__152->SetBinContent(10,2);
   _QuadJet_noTagV2_ideal_CvB__152->SetEntries(16);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV2_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 16     ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3633");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3765");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV2_ideal_CvB__152->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV2_ideal_CvB__152);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV2_ideal_CvB__152->SetLineColor(ci);
   _QuadJet_noTagV2_ideal_CvB__152->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTagV2_ideal_CvB__152->GetXaxis()->SetRange(1,10);
   _QuadJet_noTagV2_ideal_CvB__152->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_CvB__152->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_CvB__152->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_CvB__152->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV2_ideal_CvB__152->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_CvB__152->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_CvB__152->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_CvB__152->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_CvB__152->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_CvB__152->Draw("HIST");
   CvB_2018_QuadJet_noTagV2_18_ideal->Modified();
   CvB_2018_QuadJet_noTagV2_18_ideal->cd();
   CvB_2018_QuadJet_noTagV2_18_ideal->SetSelected(CvB_2018_QuadJet_noTagV2_18_ideal);
}
