#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16_ideal/BvL_2016_QuadJet_DoubleTag_16_ideal
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("BvL_2016_QuadJet_DoubleTag_16_ideal", "BvL_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16_ideal->Range(-0.2183529,0.01579383,1.171633,0.02739295);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFillStyle(4000);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_BvL__292 = new TH1D("_QuadJet_DoubleTag_ideal_BvL__292","",10,0,1);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(1,0.02580221);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(2,0.02165804);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(3,0.02123334);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(4,0.02077378);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(5,0.01759603);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(6,0.02242991);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(7,0.02536675);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(8,0.0207367);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(9,0.02306254);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(10,0.02540178);
   _QuadJet_DoubleTag_ideal_BvL__292->SetEntries(0.2240611);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.505");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2958");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_BvL__292->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_BvL__292);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_ideal_BvL__292->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_BvL__292->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_ideal_BvL__292->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_ideal_BvL__292->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_BvL__292->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_BvL__292->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_BvL__292->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_ideal_BvL__292->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_BvL__292->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_BvL__292->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_BvL__292->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_BvL__292->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_BvL__292->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16_ideal->Modified();
   BvL_2016_QuadJet_DoubleTag_16_ideal->cd();
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetSelected(BvL_2016_QuadJet_DoubleTag_16_ideal);
}
