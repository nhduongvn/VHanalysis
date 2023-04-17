#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016v2_trigEff_16()
{
//=========Macro generated from canvas: BvL_2016v2_trigEff_16/BvL_2016v2_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016v2_trigEff_16 = new TCanvas("BvL_2016v2_trigEff_16", "BvL_2016v2_trigEff_16",0,0,600,600);
   BvL_2016v2_trigEff_16->SetHighLightColor(2);
   BvL_2016v2_trigEff_16->Range(-0.2183529,0.03917272,1.171633,0.1400697);
   BvL_2016v2_trigEff_16->SetFillColor(0);
   BvL_2016v2_trigEff_16->SetFillStyle(4000);
   BvL_2016v2_trigEff_16->SetBorderMode(0);
   BvL_2016v2_trigEff_16->SetBorderSize(2);
   BvL_2016v2_trigEff_16->SetLeftMargin(0.15709);
   BvL_2016v2_trigEff_16->SetRightMargin(0.1234783);
   BvL_2016v2_trigEff_16->SetBottomMargin(0.12);
   BvL_2016v2_trigEff_16->SetFrameFillStyle(1000);
   BvL_2016v2_trigEff_16->SetFrameBorderMode(0);
   BvL_2016v2_trigEff_16->SetFrameFillStyle(1000);
   BvL_2016v2_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v2_trigEff_BvL__22 = new TH1D("v2_trigEff_BvL__22","",10,0,1);
   v2_trigEff_BvL__22->SetBinContent(1,0.0548495);
   v2_trigEff_BvL__22->SetBinContent(2,0.08906983);
   v2_trigEff_BvL__22->SetBinContent(3,0.09667458);
   v2_trigEff_BvL__22->SetBinContent(4,0.1025499);
   v2_trigEff_BvL__22->SetBinContent(5,0.1056814);
   v2_trigEff_BvL__22->SetBinContent(6,0.1111199);
   v2_trigEff_BvL__22->SetBinContent(7,0.1143929);
   v2_trigEff_BvL__22->SetBinContent(8,0.1194786);
   v2_trigEff_BvL__22->SetBinContent(9,0.1197736);
   v2_trigEff_BvL__22->SetBinContent(10,0.1262324);
   v2_trigEff_BvL__22->SetEntries(1.039823);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v2_trigEff_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5487");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2751");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v2_trigEff_BvL__22->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v2_trigEff_BvL__22);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v2_trigEff_BvL__22->SetLineColor(ci);
   v2_trigEff_BvL__22->GetXaxis()->SetTitle("BvL tagging score");
   v2_trigEff_BvL__22->GetXaxis()->SetRange(1,100);
   v2_trigEff_BvL__22->GetXaxis()->SetLabelFont(42);
   v2_trigEff_BvL__22->GetXaxis()->SetTitleOffset(1);
   v2_trigEff_BvL__22->GetXaxis()->SetTitleFont(42);
   v2_trigEff_BvL__22->GetYaxis()->SetTitle("Efficiency");
   v2_trigEff_BvL__22->GetYaxis()->SetLabelFont(42);
   v2_trigEff_BvL__22->GetYaxis()->SetTitleFont(42);
   v2_trigEff_BvL__22->GetZaxis()->SetLabelFont(42);
   v2_trigEff_BvL__22->GetZaxis()->SetTitleOffset(1);
   v2_trigEff_BvL__22->GetZaxis()->SetTitleFont(42);
   v2_trigEff_BvL__22->Draw("HIST");
   BvL_2016v2_trigEff_16->Modified();
   BvL_2016v2_trigEff_16->cd();
   BvL_2016v2_trigEff_16->SetSelected(BvL_2016v2_trigEff_16);
}
