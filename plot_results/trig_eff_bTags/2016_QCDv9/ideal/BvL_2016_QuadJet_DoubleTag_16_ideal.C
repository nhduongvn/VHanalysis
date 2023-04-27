#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16_ideal/BvL_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("BvL_2016_QuadJet_DoubleTag_16_ideal", "BvL_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16_ideal->Range(-0.2183529,-0.0053697,1.171633,0.0393778);
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
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(1,0.02380952);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(3,0.02830189);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(4,0.033241);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(5,0.03284672);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(6,0.02834008);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(7,0.02380952);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(8,0.01687764);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(9,0.01140684);
   _QuadJet_DoubleTag_ideal_BvL__292->SetBinContent(10,0.02723735);
   _QuadJet_DoubleTag_ideal_BvL__292->SetEntries(0.2258706);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5046");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2661");
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
