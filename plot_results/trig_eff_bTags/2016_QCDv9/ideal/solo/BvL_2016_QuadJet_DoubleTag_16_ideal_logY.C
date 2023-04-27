#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_DoubleTag_16_ideal/BvL_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("BvL_2016_QuadJet_DoubleTag_16_ideal", "BvL_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_QuadJet_DoubleTag_16_ideal->Range(-0.2,-0.03949712,1.133333,2.116387);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_BvL__293 = new TH1D("_QuadJet_DoubleTag_ideal_BvL__293","",10,0,1);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(1,15);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(3,3);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(4,12);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(5,9);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(6,7);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(7,5);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(8,4);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(9,3);
   _QuadJet_DoubleTag_ideal_BvL__293->SetBinContent(10,42);
   _QuadJet_DoubleTag_ideal_BvL__293->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 100    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6329");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3579");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_BvL__293->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_BvL__293);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_BvL__293->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_BvL__293->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_DoubleTag_ideal_BvL__293->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_ideal_BvL__293->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_BvL__293->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_BvL__293->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_BvL__293->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_BvL__293->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_BvL__293->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_BvL__293->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_BvL__293->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_BvL__293->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_BvL__293->Draw("HIST");
   BvL_2016_QuadJet_DoubleTag_16_ideal->Modified();
   BvL_2016_QuadJet_DoubleTag_16_ideal->cd();
   BvL_2016_QuadJet_DoubleTag_16_ideal->SetSelected(BvL_2016_QuadJet_DoubleTag_16_ideal);
}
