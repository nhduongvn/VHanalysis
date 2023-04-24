#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTag_18/BvL_2018_QuadJet_noTag_18
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTag_18 = new TCanvas("BvL_2018_QuadJet_noTag_18", "BvL_2018_QuadJet_noTag_18",0,0,600,600);
   BvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   BvL_2018_QuadJet_noTag_18->Range(-0.2183529,-0.1615385,1.171633,1.184615);
   BvL_2018_QuadJet_noTag_18->SetFillColor(0);
   BvL_2018_QuadJet_noTag_18->SetFillStyle(4000);
   BvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   BvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   BvL_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL__166 = new TH1D("_QuadJet_noTag_BvL__166","",10,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL__166->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL__166);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_BvL__166->SetLineColor(ci);
   _QuadJet_noTag_BvL__166->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL__166->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_BvL__166->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__166->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__166->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__166->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_BvL__166->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__166->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__166->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__166->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__166->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__166->Draw("HIST");
   BvL_2018_QuadJet_noTag_18->Modified();
   BvL_2018_QuadJet_noTag_18->cd();
   BvL_2018_QuadJet_noTag_18->SetSelected(BvL_2018_QuadJet_noTag_18);
}
