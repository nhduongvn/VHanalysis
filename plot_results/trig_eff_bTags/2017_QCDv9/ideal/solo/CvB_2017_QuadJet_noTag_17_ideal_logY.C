#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17_ideal/CvB_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17_ideal = new TCanvas("CvB_2017_QuadJet_noTag_17_ideal", "CvB_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   CvB_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17_ideal->Range(-0.2,-0.4486099,1.133333,1.027189);
   CvB_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17_ideal->SetLogy();
   CvB_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvB__53 = new TH1D("_QuadJet_noTag_ideal_CvB__53","",10,0,1);
   _QuadJet_noTag_ideal_CvB__53->SetBinContent(1,4);
   _QuadJet_noTag_ideal_CvB__53->SetBinContent(2,1);
   _QuadJet_noTag_ideal_CvB__53->SetBinContent(6,1);
   _QuadJet_noTag_ideal_CvB__53->SetBinContent(9,2);
   _QuadJet_noTag_ideal_CvB__53->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3085");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3574");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvB__53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvB__53);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvB__53->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvB__53->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_ideal_CvB__53->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvB__53->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__53->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB__53->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__53->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvB__53->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__53->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__53->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__53->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB__53->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__53->Draw("HIST");
   CvB_2017_QuadJet_noTag_17_ideal->Modified();
   CvB_2017_QuadJet_noTag_17_ideal->cd();
   CvB_2017_QuadJet_noTag_17_ideal->SetSelected(CvB_2017_QuadJet_noTag_17_ideal);
}
