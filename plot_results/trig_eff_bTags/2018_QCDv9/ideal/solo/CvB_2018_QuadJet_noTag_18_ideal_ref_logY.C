#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18_ideal_ref/CvB_2018_QuadJet_noTag_18_ideal_ref
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18_ideal_ref = new TCanvas("CvB_2018_QuadJet_noTag_18_ideal_ref", "CvB_2018_QuadJet_noTag_18_ideal_ref",0,0,600,600);
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18_ideal_ref->Range(-0.2,1.928041,1.133333,3.967027);
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetLogy();
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvB_ref__150 = new TH1D("_QuadJet_noTag_ideal_CvB_ref__150","",10,0,1);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(1,3059);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(2,597);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(3,610);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(4,537);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(5,470);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(6,380);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(7,328);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(8,271);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(9,650);
   _QuadJet_noTag_ideal_CvB_ref__150->SetBinContent(10,310);
   _QuadJet_noTag_ideal_CvB_ref__150->SetEntries(7212);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 7212   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3007");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3148");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvB_ref__150->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvB_ref__150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvB_ref__150->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvB_ref__150->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_ideal_CvB_ref__150->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvB_ref__150->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB_ref__150->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB_ref__150->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB_ref__150->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvB_ref__150->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB_ref__150->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB_ref__150->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB_ref__150->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB_ref__150->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB_ref__150->Draw("HIST");
   CvB_2018_QuadJet_noTag_18_ideal_ref->Modified();
   CvB_2018_QuadJet_noTag_18_ideal_ref->cd();
   CvB_2018_QuadJet_noTag_18_ideal_ref->SetSelected(CvB_2018_QuadJet_noTag_18_ideal_ref);
}
