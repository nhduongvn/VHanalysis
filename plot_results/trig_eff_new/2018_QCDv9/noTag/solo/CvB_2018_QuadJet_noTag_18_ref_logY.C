#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18_ref/CvB_2018_QuadJet_noTag_18_ref
//=========  (Thu Apr 27 10:18:10 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18_ref = new TCanvas("CvB_2018_QuadJet_noTag_18_ref", "CvB_2018_QuadJet_noTag_18_ref",0,0,600,600);
   CvB_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18_ref->Range(-0.2,4.390144,1.133333,6.600575);
   CvB_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18_ref->SetLogy();
   CvB_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB_ref__54 = new TH1D("_QuadJet_noTag_CvB_ref__54","",10,0,1);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(1,571065);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(2,94439);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(3,81699);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(4,81859);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(5,102599);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(6,143440);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(7,247179);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(8,523564);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(9,1264687);
   _QuadJet_noTag_CvB_ref__54->SetBinContent(10,626369);
   _QuadJet_noTag_CvB_ref__54->SetEntries(3736900);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3736900");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6476");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3222");
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
   CvB_2018_QuadJet_noTag_18_ref->Modified();
   CvB_2018_QuadJet_noTag_18_ref->cd();
   CvB_2018_QuadJet_noTag_18_ref->SetSelected(CvB_2018_QuadJet_noTag_18_ref);
}
