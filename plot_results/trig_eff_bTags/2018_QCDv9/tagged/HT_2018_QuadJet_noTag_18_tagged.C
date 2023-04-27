#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_noTag_18_tagged()
{
//=========Macro generated from canvas: HT_2018_QuadJet_noTag_18_tagged/HT_2018_QuadJet_noTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_noTag_18_tagged = new TCanvas("HT_2018_QuadJet_noTag_18_tagged", "HT_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   HT_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   HT_2018_QuadJet_noTag_18_tagged->Range(-436.7058,-0.08076923,2343.266,0.5923077);
   HT_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   HT_2018_QuadJet_noTag_18_tagged->SetFillStyle(4000);
   HT_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   HT_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   HT_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15709);
   HT_2018_QuadJet_noTag_18_tagged->SetRightMargin(0.1234783);
   HT_2018_QuadJet_noTag_18_tagged->SetBottomMargin(0.12);
   HT_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   HT_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   HT_2018_QuadJet_noTag_18_tagged->SetFrameFillStyle(1000);
   HT_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HT__82 = new TH1D("_QuadJet_noTag_tagged_HT__82","",200,0,2000);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(33,0.01538462);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(42,0.01639344);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(51,0.02857143);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(54,0.02857143);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(58,0.03333333);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(67,0.05);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(77,0.07142857);
   _QuadJet_noTag_tagged_HT__82->SetBinContent(92,0.5);
   _QuadJet_noTag_tagged_HT__82->SetEntries(0.7436828);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    815");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    162");
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
   HT_2018_QuadJet_noTag_18_tagged->Modified();
   HT_2018_QuadJet_noTag_18_tagged->cd();
   HT_2018_QuadJet_noTag_18_tagged->SetSelected(HT_2018_QuadJet_noTag_18_tagged);
}
