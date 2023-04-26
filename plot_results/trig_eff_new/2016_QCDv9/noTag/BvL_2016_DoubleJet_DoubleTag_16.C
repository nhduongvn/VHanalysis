#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_DoubleTag_16/BvL_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_DoubleTag_16 = new TCanvas("BvL_2016_DoubleJet_DoubleTag_16", "BvL_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   BvL_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   BvL_2016_DoubleJet_DoubleTag_16->Range(-0.2183529,0.005011998,1.171633,0.0127288);
   BvL_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   BvL_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   BvL_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   BvL_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   BvL_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   BvL_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_BvL__82 = new TH1D("_DoubleJet_DoubleTag_BvL__82","",10,0,1);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(1,0.00621099);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(2,0.008155084);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(3,0.008835055);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(4,0.009015205);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(5,0.0109653);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(6,0.009678716);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(7,0.01054971);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(8,0.01106871);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(9,0.01167049);
   _DoubleJet_DoubleTag_BvL__82->SetBinContent(10,0.01116225);
   _DoubleJet_DoubleTag_BvL__82->SetEntries(0.09731152);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.543");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2777");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_BvL__82->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_BvL__82);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_BvL__82->SetLineColor(ci);
   _DoubleJet_DoubleTag_BvL__82->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_DoubleTag_BvL__82->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_BvL__82->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_BvL__82->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_BvL__82->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_BvL__82->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_BvL__82->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_BvL__82->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_BvL__82->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_BvL__82->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_BvL__82->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_BvL__82->Draw("HIST");
   BvL_2016_DoubleJet_DoubleTag_16->Modified();
   BvL_2016_DoubleJet_DoubleTag_16->cd();
   BvL_2016_DoubleJet_DoubleTag_16->SetSelected(BvL_2016_DoubleJet_DoubleTag_16);
}
