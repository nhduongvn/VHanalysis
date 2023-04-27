#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: HT_2017_QuadJet_noTag_17_ideal/HT_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *HT_2017_QuadJet_noTag_17_ideal = new TCanvas("HT_2017_QuadJet_noTag_17_ideal", "HT_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HT_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HT_2017_QuadJet_noTag_17_ideal->Range(-400,-0.4109811,2266.667,0.68853);
   HT_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   HT_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   HT_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   HT_2017_QuadJet_noTag_17_ideal->SetLogy();
   HT_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HT__137 = new TH1D("_QuadJet_noTag_ideal_HT__137","",200,0,2000);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(37,2);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(38,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(41,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(44,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(46,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(56,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(69,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(71,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(117,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(123,1);
   _QuadJet_noTag_ideal_HT__137->SetEntries(11);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  612.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  295.9");
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
