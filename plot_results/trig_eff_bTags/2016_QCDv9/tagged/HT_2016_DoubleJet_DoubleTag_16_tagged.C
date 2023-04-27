#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: HT_2016_DoubleJet_DoubleTag_16_tagged/HT_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("HT_2016_DoubleJet_DoubleTag_16_tagged", "HT_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   HT_2016_DoubleJet_DoubleTag_16_tagged->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_HT__166 = new TH1D("_DoubleJet_DoubleTag_tagged_HT__166","",200,0,2000);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(35,0.04);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(36,0.03703704);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(37,0.03703704);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(38,0.04347826);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(39,0.05);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(41,0.04761905);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(43,0.08333333);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(44,0.04);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(46,0.05263158);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(50,0.1052632);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(51,0.15);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(55,0.05882353);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(56,0.07692308);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(57,0.05882353);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(58,0.08333333);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(63,0.09090909);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(64,0.1111111);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(66,0.09090909);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(68,0.1428571);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(69,0.09090909);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(71,0.07142857);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(72,0.09090909);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(86,0.25);
   _DoubleJet_DoubleTag_tagged_HT__166->SetBinContent(122,1);
   _DoubleJet_DoubleTag_tagged_HT__166->SetEntries(2.903336);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  807.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  318.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_HT__166->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_HT__166);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_HT__166->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_HT__166->GetXaxis()->SetTitle("H_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_HT__166->GetXaxis()->SetRange(1,2000);
   _DoubleJet_DoubleTag_tagged_HT__166->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HT__166->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_HT__166->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HT__166->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_HT__166->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HT__166->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HT__166->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_HT__166->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_HT__166->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_HT__166->Draw("HIST");
   HT_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   HT_2016_DoubleJet_DoubleTag_16_tagged->cd();
   HT_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(HT_2016_DoubleJet_DoubleTag_16_tagged);
}
