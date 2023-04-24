#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: HT_2017_QuadJet_noTag_17/HT_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:19 2023) by ROOT version 6.26/06
   TCanvas *HT_2017_QuadJet_noTag_17 = new TCanvas("HT_2017_QuadJet_noTag_17", "HT_2017_QuadJet_noTag_17",0,0,600,600);
   HT_2017_QuadJet_noTag_17->SetHighLightColor(2);
   HT_2017_QuadJet_noTag_17->Range(-400,-0.4926327,2266.667,1.423394);
   HT_2017_QuadJet_noTag_17->SetFillColor(0);
   HT_2017_QuadJet_noTag_17->SetBorderMode(0);
   HT_2017_QuadJet_noTag_17->SetBorderSize(2);
   HT_2017_QuadJet_noTag_17->SetLogy();
   HT_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   HT_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   HT_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_HT__329 = new TH1D("_QuadJet_noTag_tagged_HT__329","",200,0,2000);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(28,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(29,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(30,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(31,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(32,4);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(33,4);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(34,5);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(35,3);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(36,9);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(37,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(38,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(39,5);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(40,6);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(41,4);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(42,4);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(43,3);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(44,6);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(45,5);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(46,5);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(47,5);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(49,3);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(50,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(51,5);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(52,3);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(53,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(54,5);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(55,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(58,2);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(59,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(60,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(61,2);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(64,2);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(65,2);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(66,3);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(67,2);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(68,2);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(69,3);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(71,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(72,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(74,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(76,3);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(77,3);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(80,2);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(83,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(84,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(87,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(95,1);
   _QuadJet_noTag_tagged_HT__329->SetBinContent(117,1);
   _QuadJet_noTag_tagged_HT__329->SetEntries(129);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 129    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  497.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  159.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_HT__329->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_HT__329);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_HT__329->SetLineColor(ci);
   _QuadJet_noTag_tagged_HT__329->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_tagged_HT__329->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_tagged_HT__329->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__329->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HT__329->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__329->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_HT__329->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__329->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__329->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_HT__329->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_HT__329->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_HT__329->Draw("HIST");
   HT_2017_QuadJet_noTag_17->Modified();
   HT_2017_QuadJet_noTag_17->cd();
   HT_2017_QuadJet_noTag_17->SetSelected(HT_2017_QuadJet_noTag_17);
}
