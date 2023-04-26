#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17_ideal_ref/CvB_2017_QuadJet_noTag_17_ideal_ref
//=========  (Wed Apr 26 16:41:51 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17_ideal_ref = new TCanvas("CvB_2017_QuadJet_noTag_17_ideal_ref", "CvB_2017_QuadJet_noTag_17_ideal_ref",0,0,600,600);
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17_ideal_ref->Range(-0.2,3.05669,1.133333,4.876522);
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetLogy();
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvB_ref__162 = new TH1D("_QuadJet_noTag_ideal_CvB_ref__162","",10,0,1);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(1,26121);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(2,4367);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(3,3465);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(4,4147);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(5,4844);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(6,5726);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(7,8232);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(8,11477);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(9,16683);
   _QuadJet_noTag_ideal_CvB_ref__162->SetBinContent(10,10894);
   _QuadJet_noTag_ideal_CvB_ref__162->SetEntries(95956);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 95956  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4915");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3543");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvB_ref__162->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvB_ref__162);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvB_ref__162->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvB_ref__162->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_ideal_CvB_ref__162->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvB_ref__162->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB_ref__162->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB_ref__162->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB_ref__162->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvB_ref__162->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB_ref__162->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB_ref__162->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB_ref__162->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB_ref__162->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB_ref__162->Draw("HIST");
   CvB_2017_QuadJet_noTag_17_ideal_ref->Modified();
   CvB_2017_QuadJet_noTag_17_ideal_ref->cd();
   CvB_2017_QuadJet_noTag_17_ideal_ref->SetSelected(CvB_2017_QuadJet_noTag_17_ideal_ref);
}
