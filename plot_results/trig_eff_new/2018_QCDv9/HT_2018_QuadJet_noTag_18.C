#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: HT_2018_QuadJet_noTag_18/HT_2018_QuadJet_noTag_18
//=========  (Tue Apr 18 16:14:01 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_noTag_18 = new TCanvas("HT_2018_QuadJet_noTag_18", "HT_2018_QuadJet_noTag_18",0,0,600,600);
   HT_2018_QuadJet_noTag_18->SetHighLightColor(2);
   HT_2018_QuadJet_noTag_18->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HT_2018_QuadJet_noTag_18->SetFillColor(0);
   HT_2018_QuadJet_noTag_18->SetFillStyle(4000);
   HT_2018_QuadJet_noTag_18->SetBorderMode(0);
   HT_2018_QuadJet_noTag_18->SetBorderSize(2);
   HT_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   HT_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   HT_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   HT_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   HT_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   HT_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   HT_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_HT__118 = new TH1D("_QuadJet_noTag_HT__118","",200,0,2000);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_HT__118->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_HT__118);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_HT__118->SetLineColor(ci);
   _QuadJet_noTag_HT__118->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_HT__118->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_HT__118->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_HT__118->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_HT__118->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_HT__118->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_HT__118->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_HT__118->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_HT__118->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_HT__118->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_HT__118->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_HT__118->Draw("HIST");
   HT_2018_QuadJet_noTag_18->Modified();
   HT_2018_QuadJet_noTag_18->cd();
   HT_2018_QuadJet_noTag_18->SetSelected(HT_2018_QuadJet_noTag_18);
}
