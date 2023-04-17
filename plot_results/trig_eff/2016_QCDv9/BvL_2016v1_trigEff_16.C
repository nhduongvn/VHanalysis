#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016v1_trigEff_16()
{
//=========Macro generated from canvas: BvL_2016v1_trigEff_16/BvL_2016v1_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016v1_trigEff_16 = new TCanvas("BvL_2016v1_trigEff_16", "BvL_2016v1_trigEff_16",0,0,600,600);
   BvL_2016v1_trigEff_16->SetHighLightColor(2);
   BvL_2016v1_trigEff_16->Range(-0.2183529,0.05058626,1.171633,0.1871422);
   BvL_2016v1_trigEff_16->SetFillColor(0);
   BvL_2016v1_trigEff_16->SetFillStyle(4000);
   BvL_2016v1_trigEff_16->SetBorderMode(0);
   BvL_2016v1_trigEff_16->SetBorderSize(2);
   BvL_2016v1_trigEff_16->SetLeftMargin(0.15709);
   BvL_2016v1_trigEff_16->SetRightMargin(0.1234783);
   BvL_2016v1_trigEff_16->SetBottomMargin(0.12);
   BvL_2016v1_trigEff_16->SetFrameFillStyle(1000);
   BvL_2016v1_trigEff_16->SetFrameBorderMode(0);
   BvL_2016v1_trigEff_16->SetFrameFillStyle(1000);
   BvL_2016v1_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v1_trigEff_BvL__21 = new TH1D("v1_trigEff_BvL__21","",10,0,1);
   v1_trigEff_BvL__21->SetBinContent(1,0.07180352);
   v1_trigEff_BvL__21->SetBinContent(2,0.1155585);
   v1_trigEff_BvL__21->SetBinContent(3,0.1266494);
   v1_trigEff_BvL__21->SetBinContent(4,0.1349176);
   v1_trigEff_BvL__21->SetBinContent(5,0.1394363);
   v1_trigEff_BvL__21->SetBinContent(6,0.1486628);
   v1_trigEff_BvL__21->SetBinContent(7,0.1506291);
   v1_trigEff_BvL__21->SetBinContent(8,0.1579553);
   v1_trigEff_BvL__21->SetBinContent(9,0.1583055);
   v1_trigEff_BvL__21->SetBinContent(10,0.1684145);
   v1_trigEff_BvL__21->SetEntries(1.372332);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v1_trigEff_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5503");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2748");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v1_trigEff_BvL__21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v1_trigEff_BvL__21);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v1_trigEff_BvL__21->SetLineColor(ci);
   v1_trigEff_BvL__21->GetXaxis()->SetTitle("BvL tagging score");
   v1_trigEff_BvL__21->GetXaxis()->SetRange(1,100);
   v1_trigEff_BvL__21->GetXaxis()->SetLabelFont(42);
   v1_trigEff_BvL__21->GetXaxis()->SetTitleOffset(1);
   v1_trigEff_BvL__21->GetXaxis()->SetTitleFont(42);
   v1_trigEff_BvL__21->GetYaxis()->SetTitle("Efficiency");
   v1_trigEff_BvL__21->GetYaxis()->SetLabelFont(42);
   v1_trigEff_BvL__21->GetYaxis()->SetTitleFont(42);
   v1_trigEff_BvL__21->GetZaxis()->SetLabelFont(42);
   v1_trigEff_BvL__21->GetZaxis()->SetTitleOffset(1);
   v1_trigEff_BvL__21->GetZaxis()->SetTitleFont(42);
   v1_trigEff_BvL__21->Draw("HIST");
   BvL_2016v1_trigEff_16->Modified();
   BvL_2016v1_trigEff_16->cd();
   BvL_2016v1_trigEff_16->SetSelected(BvL_2016v1_trigEff_16);
}
