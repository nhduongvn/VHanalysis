#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_noTag_18_tagged_logY()
{
//=========Macro generated from canvas: HT_2018_QuadJet_noTag_18_tagged/HT_2018_QuadJet_noTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_noTag_18_tagged = new TCanvas("HT_2018_QuadJet_noTag_18_tagged", "HT_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   HT_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   HT_2018_QuadJet_noTag_18_tagged->Range(-400,-3.748352,2266.667,0.7248713);
   HT_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   HT_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   HT_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   HT_2018_QuadJet_noTag_18_tagged->SetLogy();
   HT_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15);
   HT_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   HT_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HT__83 = new TH1D("_QuadJet_noTag_tagged_HT__83","",200,0,2000);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(33,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(42,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(51,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(54,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(58,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(67,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(77,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(92,1);
   _QuadJet_noTag_tagged_HT__83->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  586.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  178.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_HT__83->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_HT__83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_HT__83->SetLineColor(ci);
   _QuadJet_noTag_tagged_HT__83->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_tagged_HT__83->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_tagged_HT__83->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__83->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HT__83->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__83->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_HT__83->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__83->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__83->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__83->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HT__83->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__83->Draw("HIST");
   HT_2018_QuadJet_noTag_18_tagged->Modified();
   HT_2018_QuadJet_noTag_18_tagged->cd();
   HT_2018_QuadJet_noTag_18_tagged->SetSelected(HT_2018_QuadJet_noTag_18_tagged);
}
