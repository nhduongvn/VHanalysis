#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18_ref/BvL_2018_QuadJet_noTag_18_ref
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18_ref = new TCanvas("BvL_2018_QuadJet_noTag_18_ref", "BvL_2018_QuadJet_noTag_18_ref",0,0,600,600);
   BvL_2018_QuadJet_noTag_18_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18_ref->Range(-0.2,3.257929,1.133333,5.449853);
   BvL_2018_QuadJet_noTag_18_ref->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18_ref->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18_ref->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18_ref->SetLogy();
   BvL_2018_QuadJet_noTag_18_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_BvL_ref__96 = new TH1D("_QuadJet_noTag_tagged_BvL_ref__96","",10,0,1);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(1,89766);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(2,15174);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(3,8195);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(4,9354);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(5,7201);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(6,6499);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(7,6000);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(8,6442);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(9,8403);
   _QuadJet_noTag_tagged_BvL_ref__96->SetBinContent(10,56202);
   _QuadJet_noTag_tagged_BvL_ref__96->SetEntries(213236);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 213236 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4141");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4084");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_BvL_ref__96->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_BvL_ref__96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_BvL_ref__96->SetLineColor(ci);
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL_ref__96->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_BvL_ref__96->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL_ref__96->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL_ref__96->Draw("HIST");
   BvL_2018_QuadJet_noTag_18_ref->Modified();
   BvL_2018_QuadJet_noTag_18_ref->cd();
   BvL_2018_QuadJet_noTag_18_ref->SetSelected(BvL_2018_QuadJet_noTag_18_ref);
}
