#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18_ref/CvB_2018_QuadJet_noTag_18_ref
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18_ref = new TCanvas("CvB_2018_QuadJet_noTag_18_ref", "CvB_2018_QuadJet_noTag_18_ref",0,0,600,600);
   CvB_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18_ref->Range(-0.2,4.185481,1.133333,6.356461);
   CvB_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18_ref->SetLogy();
   CvB_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB_ref__216 = new TH1D("_QuadJet_noTag_CvB_ref__216","",10,0,1);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(1,307339);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(2,57184);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(3,50546);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(4,50537);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(5,62920);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(6,89146);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(7,153788);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(8,322081);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(9,727469);
   _QuadJet_noTag_CvB_ref__216->SetBinContent(10,345754);
   _QuadJet_noTag_CvB_ref__216->SetEntries(2166764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2166764");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6505");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3148");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvB_ref__216->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvB_ref__216);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvB_ref__216->SetLineColor(ci);
   _QuadJet_noTag_CvB_ref__216->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_CvB_ref__216->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvB_ref__216->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__216->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB_ref__216->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__216->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvB_ref__216->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__216->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__216->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB_ref__216->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB_ref__216->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB_ref__216->Draw("HIST");
   CvB_2018_QuadJet_noTag_18_ref->Modified();
   CvB_2018_QuadJet_noTag_18_ref->cd();
   CvB_2018_QuadJet_noTag_18_ref->SetSelected(CvB_2018_QuadJet_noTag_18_ref);
}
