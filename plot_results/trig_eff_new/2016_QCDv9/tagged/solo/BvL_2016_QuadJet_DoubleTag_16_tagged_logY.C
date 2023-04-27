#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16_tagged/BvL_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("BvL_2016_QuadJet_DoubleTag_16_tagged", "BvL_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16_tagged->Range(-0.2,1.32194,1.133333,3.604827);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_BvL__185 = new TH1D("_QuadJet_DoubleTag_tagged_BvL__185","",10,0,1);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(1,1256);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(2,180);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(3,94);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(4,109);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(5,71);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(6,84);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(7,83);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(8,76);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(9,111);
   _QuadJet_DoubleTag_tagged_BvL__185->SetBinContent(10,716);
   _QuadJet_DoubleTag_tagged_BvL__185->SetEntries(2780);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2780   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4004");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4099");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_BvL__185->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_BvL__185);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_BvL__185->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_BvL__185->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_tagged_BvL__185->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_tagged_BvL__185->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__185->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_BvL__185->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__185->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_BvL__185->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__185->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__185->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_BvL__185->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_BvL__185->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_BvL__185->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16_tagged->Modified();
   BvL_2016_QuadJet_DoubleTag_16_tagged->cd();
   BvL_2016_QuadJet_DoubleTag_16_tagged->SetSelected(BvL_2016_QuadJet_DoubleTag_16_tagged);
}
