#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: HT_2016_QuadJet_DoubleTag_16_tagged/HT_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *HT_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("HT_2016_QuadJet_DoubleTag_16_tagged", "HT_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   HT_2016_QuadJet_DoubleTag_16_tagged->Range(-400,-0.4329925,2266.667,0.8866327);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   HT_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   HT_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_HT__161 = new TH1D("_QuadJet_DoubleTag_tagged_HT__161","",200,0,2000);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(24,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(30,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(32,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(33,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(34,2);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(35,3);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(36,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(37,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(38,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(41,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(42,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(44,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(47,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(51,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(52,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(54,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(56,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(69,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(72,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(73,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(84,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetBinContent(163,1);
   _QuadJet_DoubleTag_tagged_HT__161->SetEntries(25);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 25     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  495.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  275.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_HT__161->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_HT__161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_HT__161->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_HT__161->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_HT__161->GetXaxis()->SetRange(1,200);
   _QuadJet_DoubleTag_tagged_HT__161->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HT__161->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_HT__161->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HT__161->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_HT__161->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HT__161->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HT__161->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_HT__161->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_HT__161->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_HT__161->Draw("HIST");
   HT_2016_QuadJet_DoubleTag_16_tagged->Modified();
   HT_2016_QuadJet_DoubleTag_16_tagged->cd();
   HT_2016_QuadJet_DoubleTag_16_tagged->SetSelected(HT_2016_QuadJet_DoubleTag_16_tagged);
}
