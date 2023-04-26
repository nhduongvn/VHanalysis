#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: HT_2017_QuadJet_noTag_17_ideal/HT_2017_QuadJet_noTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *HT_2017_QuadJet_noTag_17_ideal = new TCanvas("HT_2017_QuadJet_noTag_17_ideal", "HT_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HT_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HT_2017_QuadJet_noTag_17_ideal->Range(-400,-0.5035265,2266.667,1.521438);
   HT_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   HT_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   HT_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   HT_2017_QuadJet_noTag_17_ideal->SetLogy();
   HT_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HT__137 = new TH1D("_QuadJet_noTag_ideal_HT__137","",200,0,2000);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(28,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(29,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(30,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(31,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(32,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(33,4);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(34,6);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(35,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(36,11);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(37,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(38,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(39,6);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(40,6);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(41,4);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(42,4);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(43,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(44,6);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(45,5);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(46,7);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(47,5);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(49,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(50,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(51,6);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(52,4);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(53,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(54,5);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(55,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(58,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(59,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(60,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(61,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(64,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(65,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(66,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(67,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(68,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(69,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(71,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(72,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(73,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(74,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(76,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(77,3);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(80,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(82,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(83,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(84,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(87,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(95,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(117,1);
   _QuadJet_noTag_ideal_HT__137->SetEntries(143);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 143    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  496.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  158.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HT__137->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HT__137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_HT__137->SetLineColor(ci);
   _QuadJet_noTag_ideal_HT__137->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HT__137->GetXaxis()->SetRange(1,200);
   _QuadJet_noTag_ideal_HT__137->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__137->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HT__137->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__137->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_HT__137->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__137->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__137->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__137->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HT__137->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__137->Draw("HIST");
   HT_2017_QuadJet_noTag_17_ideal->Modified();
   HT_2017_QuadJet_noTag_17_ideal->cd();
   HT_2017_QuadJet_noTag_17_ideal->SetSelected(HT_2017_QuadJet_noTag_17_ideal);
}
