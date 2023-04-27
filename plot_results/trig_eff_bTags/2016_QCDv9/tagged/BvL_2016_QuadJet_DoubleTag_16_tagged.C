#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16_tagged/BvL_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("BvL_2016_QuadJet_DoubleTag_16_tagged", "BvL_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16_tagged->Range(-0.2183529,-0.005325444,1.171633,0.03905325);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFillStyle(4000);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_BvL__184 = new TH1D("_QuadJet_DoubleTag_tagged_BvL__184","",10,0,1);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(1,0.02369668);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(3,0.02830189);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(4,0.03296703);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(5,0.03272727);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(6,0.02811245);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(7,0.02380952);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(8,0.0167364);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(9,0.01136364);
   _QuadJet_DoubleTag_tagged_BvL__184->SetBinContent(10,0.02709677);
   _QuadJet_DoubleTag_tagged_BvL__184->SetEntries(0.2248117);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5045");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2661");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_BvL__184->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_BvL__184);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_BvL__184->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_BvL__184->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_tagged_BvL__184->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_tagged_BvL__184->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__184->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_BvL__184->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__184->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_BvL__184->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__184->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__184->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__184->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_BvL__184->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__184->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16_tagged->Modified();
   BvL_2016_QuadJet_DoubleTag_16_tagged->cd();
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetSelected(BvL_2016_QuadJet_DoubleTag_16_tagged);
}
