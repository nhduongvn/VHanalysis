#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: HT_2017_QuadJet_noTag_17_tagged/HT_2017_QuadJet_noTag_17_tagged
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *HT_2017_QuadJet_noTag_17_tagged = new TCanvas("HT_2017_QuadJet_noTag_17_tagged", "HT_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   HT_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   HT_2017_QuadJet_noTag_17_tagged->Range(-400,-0.4926327,2266.667,1.423394);
   HT_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   HT_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   HT_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   HT_2017_QuadJet_noTag_17_tagged->SetLogy();
   HT_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   HT_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   HT_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HT__83 = new TH1D("_QuadJet_noTag_tagged_HT__83","",200,0,2000);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(28,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(29,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(30,2);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(31,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(32,4);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(33,4);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(34,6);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(35,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(36,9);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(37,2);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(38,2);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(39,5);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(40,6);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(41,4);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(42,4);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(43,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(44,6);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(45,5);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(46,7);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(47,4);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(49,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(50,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(51,6);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(52,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(53,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(54,5);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(55,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(58,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(59,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(60,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(61,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(64,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(65,2);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(66,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(67,2);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(68,2);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(69,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(72,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(73,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(74,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(76,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(77,3);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(80,2);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(82,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(83,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(84,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(87,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(95,1);
   _QuadJet_noTag_tagged_HT__83->SetBinContent(117,1);
   _QuadJet_noTag_tagged_HT__83->SetEntries(139);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 139    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  497.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  159.6");
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
