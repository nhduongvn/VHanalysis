#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_trigEff_17()
{
//=========Macro generated from canvas: BvL_2017_trigEff_17/BvL_2017_trigEff_17
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_trigEff_17 = new TCanvas("BvL_2017_trigEff_17", "BvL_2017_trigEff_17",0,0,600,600);
   BvL_2017_trigEff_17->SetHighLightColor(2);
   BvL_2017_trigEff_17->Range(-0.2183529,0.009627374,1.171633,0.06893361);
   BvL_2017_trigEff_17->SetFillColor(0);
   BvL_2017_trigEff_17->SetFillStyle(4000);
   BvL_2017_trigEff_17->SetBorderMode(0);
   BvL_2017_trigEff_17->SetBorderSize(2);
   BvL_2017_trigEff_17->SetLeftMargin(0.15709);
   BvL_2017_trigEff_17->SetRightMargin(0.1234783);
   BvL_2017_trigEff_17->SetBottomMargin(0.12);
   BvL_2017_trigEff_17->SetFrameFillStyle(1000);
   BvL_2017_trigEff_17->SetFrameBorderMode(0);
   BvL_2017_trigEff_17->SetFrameFillStyle(1000);
   BvL_2017_trigEff_17->SetFrameBorderMode(0);
   
   TH1D *_trigEff_BvL__23 = new TH1D("_trigEff_BvL__23","",10,0,1);
   _trigEff_BvL__23->SetBinContent(1,0.01884203);
   _trigEff_BvL__23->SetBinContent(2,0.0317713);
   _trigEff_BvL__23->SetBinContent(3,0.03581933);
   _trigEff_BvL__23->SetBinContent(4,0.04038939);
   _trigEff_BvL__23->SetBinContent(5,0.04296565);
   _trigEff_BvL__23->SetBinContent(6,0.04562495);
   _trigEff_BvL__23->SetBinContent(7,0.04616815);
   _trigEff_BvL__23->SetBinContent(8,0.05005137);
   _trigEff_BvL__23->SetBinContent(9,0.0519664);
   _trigEff_BvL__23->SetBinContent(10,0.06080018);
   _trigEff_BvL__23->SetEntries(0.4243988);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_trigEff_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5719");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2734");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_BvL__23->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_BvL__23);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_BvL__23->SetLineColor(ci);
   _trigEff_BvL__23->GetXaxis()->SetTitle("BvL tagging score");
   _trigEff_BvL__23->GetXaxis()->SetRange(1,100);
   _trigEff_BvL__23->GetXaxis()->SetLabelFont(42);
   _trigEff_BvL__23->GetXaxis()->SetTitleOffset(1);
   _trigEff_BvL__23->GetXaxis()->SetTitleFont(42);
   _trigEff_BvL__23->GetYaxis()->SetTitle("Efficiency");
   _trigEff_BvL__23->GetYaxis()->SetLabelFont(42);
   _trigEff_BvL__23->GetYaxis()->SetTitleFont(42);
   _trigEff_BvL__23->GetZaxis()->SetLabelFont(42);
   _trigEff_BvL__23->GetZaxis()->SetTitleOffset(1);
   _trigEff_BvL__23->GetZaxis()->SetTitleFont(42);
   _trigEff_BvL__23->Draw("HIST");
   BvL_2017_trigEff_17->Modified();
   BvL_2017_trigEff_17->cd();
   BvL_2017_trigEff_17->SetSelected(BvL_2017_trigEff_17);
}
