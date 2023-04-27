#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: HT_2017_QuadJet_noTag_17_tagged/HT_2017_QuadJet_noTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *HT_2017_QuadJet_noTag_17_tagged = new TCanvas("HT_2017_QuadJet_noTag_17_tagged", "HT_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   HT_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   HT_2017_QuadJet_noTag_17_tagged->Range(-400,-0.4109811,2266.667,0.68853);
   HT_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   HT_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   HT_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   HT_2017_QuadJet_noTag_17_tagged->SetLogy();
   HT_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   HT_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   HT_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HT__83 = new TH1D("_QuadJet_noTag_tagged_HT__83","",200,0,2000);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(28,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(37,2);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(38,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(41,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(44,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(46,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(56,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(69,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(71,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(117,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(123,1);
   _QuadJet_noTag_tagged_HT__83->SetEntries(12);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  583.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  298.5");
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
   HT_2017_QuadJet_noTag_17_tagged->Modified();
   HT_2017_QuadJet_noTag_17_tagged->cd();
   HT_2017_QuadJet_noTag_17_tagged->SetSelected(HT_2017_QuadJet_noTag_17_tagged);
}
