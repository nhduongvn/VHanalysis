#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_QuadJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: HT_2016_QuadJet_DoubleTag_16_tagged/HT_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("HT_2016_QuadJet_DoubleTag_16_tagged", "HT_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   HT_2016_QuadJet_DoubleTag_16_tagged->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFillStyle(4000);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_HT__160 = new TH1D("_QuadJet_DoubleTag_tagged_HT__160","",200,0,2000);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(24,0.09090909);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(30,0.04545455);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(32,0.04347826);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(33,0.04166667);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(34,0.05882353);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(35,0.12);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(36,0.03703704);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(37,0.03703704);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(38,0.04347826);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(41,0.04761905);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(42,0.03333333);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(44,0.04);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(47,0.06666667);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(51,0.05);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(52,0.05882353);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(54,0.07692308);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(56,0.07692308);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(69,0.09090909);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(72,0.09090909);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(73,0.2);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(84,0.2);
   _QuadJet_DoubleTag_tagged_HT__160->SetBinContent(163,1);
   _QuadJet_DoubleTag_tagged_HT__160->SetEntries(2.549991);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  961.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  553.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_HT__160->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_HT__160);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_HT__160->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_HT__160->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_HT__160->GetXaxis()->SetRange(1,2000);
   _QuadJet_DoubleTag_tagged_HT__160->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HT__160->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_HT__160->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HT__160->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_HT__160->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HT__160->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HT__160->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HT__160->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_HT__160->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HT__160->Draw("HIST");
   HT_2016_QuadJet_DoubleTag_16_tagged->Modified();
   HT_2016_QuadJet_DoubleTag_16_tagged->cd();
   HT_2016_QuadJet_DoubleTag_16_tagged->SetSelected(HT_2016_QuadJet_DoubleTag_16_tagged);
}
