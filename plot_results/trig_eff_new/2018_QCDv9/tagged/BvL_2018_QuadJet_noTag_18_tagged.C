#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18_tagged/BvL_2018_QuadJet_noTag_18_tagged
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18_tagged = new TCanvas("BvL_2018_QuadJet_noTag_18_tagged", "BvL_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   BvL_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18_tagged->Range(-0.2183529,0.002775354,1.171633,0.007450502);
   BvL_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18_tagged->SetFillStyle(4000);
   BvL_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_noTag_18_tagged->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_noTag_18_tagged->SetBottomMargin(0.12);
   BvL_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_BvL__94 = new TH1D("_QuadJet_noTag_tagged_BvL__94","",10,0,1);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(1,0.004982889);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(2,0.00455626);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(3,0.004643774);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(4,0.004065911);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(5,0.006809339);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(6,0.004768497);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(7,0.003501751);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(8,0.004191245);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(9,0.004651163);
   _QuadJet_noTag_tagged_BvL__94->SetBinContent(10,0.004362924);
   _QuadJet_noTag_tagged_BvL__94->SetEntries(0.04653375);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4883");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2845");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_BvL__94->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_BvL__94);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_BvL__94->SetLineColor(ci);
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__94->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_BvL__94->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_BvL__94->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_BvL__94->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_BvL__94->Draw("HIST");
   BvL_2018_QuadJet_noTag_18_tagged->Modified();
   BvL_2018_QuadJet_noTag_18_tagged->cd();
   BvL_2018_QuadJet_noTag_18_tagged->SetSelected(BvL_2018_QuadJet_noTag_18_tagged);
}
