#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: HT_2018_QuadJet_noTag_18_ideal/HT_2018_QuadJet_noTag_18_ideal
//=========  (Thu Apr 27 10:20:02 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_noTag_18_ideal = new TCanvas("HT_2018_QuadJet_noTag_18_ideal", "HT_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   HT_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   HT_2018_QuadJet_noTag_18_ideal->Range(-400,-3.748352,2266.667,0.7248713);
   HT_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   HT_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   HT_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   HT_2018_QuadJet_noTag_18_ideal->SetLogy();
   HT_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   HT_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   HT_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HT__137 = new TH1D("_QuadJet_noTag_ideal_HT__137","",200,0,2000);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(33,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(42,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(51,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(54,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(58,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(67,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(77,1);
   _QuadJet_noTag_ideal_HT__137->SetBinContent(92,1);
   _QuadJet_noTag_ideal_HT__137->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  586.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  178.1");
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
   HT_2018_QuadJet_noTag_18_ideal->Modified();
   HT_2018_QuadJet_noTag_18_ideal->cd();
   HT_2018_QuadJet_noTag_18_ideal->SetSelected(HT_2018_QuadJet_noTag_18_ideal);
}
