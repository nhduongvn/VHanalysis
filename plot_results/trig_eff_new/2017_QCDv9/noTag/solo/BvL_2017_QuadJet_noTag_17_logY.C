#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17/BvL_2017_QuadJet_noTag_17
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17 = new TCanvas("BvL_2017_QuadJet_noTag_17", "BvL_2017_QuadJet_noTag_17",0,0,600,600);
   BvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17->Range(-0.2,1.541432,1.133333,4.420152);
   BvL_2017_QuadJet_noTag_17->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17->SetLogy();
   BvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   BvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_BvL__41 = new TH1D("_QuadJet_noTag_BvL__41","",10,0,1);
   _QuadJet_noTag_BvL__41->SetBinContent(1,7157);
   _QuadJet_noTag_BvL__41->SetBinContent(2,465);
   _QuadJet_noTag_BvL__41->SetBinContent(3,231);
   _QuadJet_noTag_BvL__41->SetBinContent(4,192);
   _QuadJet_noTag_BvL__41->SetBinContent(5,176);
   _QuadJet_noTag_BvL__41->SetBinContent(6,149);
   _QuadJet_noTag_BvL__41->SetBinContent(7,135);
   _QuadJet_noTag_BvL__41->SetBinContent(8,159);
   _QuadJet_noTag_BvL__41->SetBinContent(9,216);
   _QuadJet_noTag_BvL__41->SetBinContent(10,1448);
   _QuadJet_noTag_BvL__41->SetEntries(10328);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 10328  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2225");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3581");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_BvL__41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_BvL__41);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_BvL__41->SetLineColor(ci);
   _QuadJet_noTag_BvL__41->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_BvL__41->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_BvL__41->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__41->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__41->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__41->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_BvL__41->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__41->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__41->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_BvL__41->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_BvL__41->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_BvL__41->Draw("HIST");
   BvL_2017_QuadJet_noTag_17->Modified();
   BvL_2017_QuadJet_noTag_17->cd();
   BvL_2017_QuadJet_noTag_17->SetSelected(BvL_2017_QuadJet_noTag_17);
}
