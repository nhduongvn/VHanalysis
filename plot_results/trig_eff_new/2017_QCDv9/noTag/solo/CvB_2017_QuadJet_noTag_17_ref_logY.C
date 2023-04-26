#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_ref_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17_ref/CvB_2017_QuadJet_noTag_17_ref
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17_ref = new TCanvas("CvB_2017_QuadJet_noTag_17_ref", "CvB_2017_QuadJet_noTag_17_ref",0,0,600,600);
   CvB_2017_QuadJet_noTag_17_ref->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17_ref->Range(-0.2,4.141055,1.133333,6.356181);
   CvB_2017_QuadJet_noTag_17_ref->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17_ref->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ref->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17_ref->SetLogy();
   CvB_2017_QuadJet_noTag_17_ref->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB_ref__54 = new TH1D("_QuadJet_noTag_CvB_ref__54","",10,0,1);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(1,326375);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(2,53591);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(3,46449);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(4,46089);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(5,57135);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(6,80589);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(7,138761);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(8,294482);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(9,719647);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(10,356578);
   _QuadJet_noTag_CvB_ref__54->SetEntries(2119696);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2119696");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6473");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3231");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvB_ref__54->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvB_ref__54);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvB_ref__54->SetLineColor(ci);
   _QuadJet_noTag_CvB_ref__54->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_CvB_ref__54->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvB_ref__54->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__54->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB_ref__54->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__54->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvB_ref__54->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__54->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__54->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__54->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB_ref__54->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__54->Draw("HIST");
   CvB_2017_QuadJet_noTag_17_ref->Modified();
   CvB_2017_QuadJet_noTag_17_ref->cd();
   CvB_2017_QuadJet_noTag_17_ref->SetSelected(CvB_2017_QuadJet_noTag_17_ref);
}
