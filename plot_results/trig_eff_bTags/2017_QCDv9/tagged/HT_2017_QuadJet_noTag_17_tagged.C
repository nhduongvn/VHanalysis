#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2017_QuadJet_noTag_17_tagged()
{
//=========Macro generated from canvas: HT_2017_QuadJet_noTag_17_tagged/HT_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *HT_2017_QuadJet_noTag_17_tagged = new TCanvas("HT_2017_QuadJet_noTag_17_tagged", "HT_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   HT_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   HT_2017_QuadJet_noTag_17_tagged->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HT_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   HT_2017_QuadJet_noTag_17_tagged->SetFillStyle(4000);
   HT_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   HT_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   HT_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15709);
   HT_2017_QuadJet_noTag_17_tagged->SetRightMargin(0.1234783);
   HT_2017_QuadJet_noTag_17_tagged->SetBottomMargin(0.12);
   HT_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   HT_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   HT_2017_QuadJet_noTag_17_tagged->SetFrameFillStyle(1000);
   HT_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HT__82 = new TH1D("_QuadJet_noTag_tagged_HT__82","",200,0,2000);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(28,0.03846154);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(37,0.06896552);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(38,0.04166667);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(41,0.03571429);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(44,0.03333333);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(46,0.02380952);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(56,0.07142857);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(69,0.08333333);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(71,0.07692308);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(117,0.5);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(123,1);
   _QuadJet_noTag_tagged_HT__82->SetEntries(1.973636);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =   1039");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  306.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_HT__82->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_HT__82);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_HT__82->SetLineColor(ci);
   _QuadJet_noTag_tagged_HT__82->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_tagged_HT__82->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_tagged_HT__82->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__82->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HT__82->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__82->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_HT__82->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__82->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__82->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__82->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HT__82->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__82->Draw("HIST");
   HT_2017_QuadJet_noTag_17_tagged->Modified();
   HT_2017_QuadJet_noTag_17_tagged->cd();
   HT_2017_QuadJet_noTag_17_tagged->SetSelected(HT_2017_QuadJet_noTag_17_tagged);
}
