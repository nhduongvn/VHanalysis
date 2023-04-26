#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16_tagged/BvL_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16_tagged", "BvL_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->Range(-0.2183529,0.01405833,1.171633,0.01782177);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_BvL__190 = new TH1D("_DoubleJet_DoubleTag_tagged_BvL__190","",10,0,1);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(1,0.01712869);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(2,0.01487702);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(3,0.0160018);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(4,0.01481763);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(5,0.01702443);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(6,0.01730564);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(7,0.01464308);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(8,0.01660768);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(9,0.01679104);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetBinContent(10,0.01610905);
   _DoubleJet_DoubleTag_tagged_BvL__190->SetEntries(0.1613061);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5022");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2882");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_BvL__190->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_BvL__190);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_BvL__190->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_tagged_BvL__190->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_BvL__190->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_BvL__190->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_BvL__190->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   BvL_2016_DoubleJet_DoubleTag_16_tagged->cd();
   BvL_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(BvL_2016_DoubleJet_DoubleTag_16_tagged);
}
