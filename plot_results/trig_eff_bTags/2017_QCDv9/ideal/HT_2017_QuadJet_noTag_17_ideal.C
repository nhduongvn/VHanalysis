#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: HT_2017_QuadJet_noTag_17_ideal/HT_2017_QuadJet_noTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *HT_2017_QuadJet_noTag_17_ideal = new TCanvas("HT_2017_QuadJet_noTag_17_ideal", "HT_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   HT_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   HT_2017_QuadJet_noTag_17_ideal->Range(-436.7058,-0.02937063,2343.266,0.2153846);
   HT_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   HT_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   HT_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   HT_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   HT_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   HT_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   HT_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   HT_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_HT__28 = new TH1D("_QuadJet_noTag_ideal_HT__28","",200,0,2000);
   _QuadJet_noTag_ideal_HT__28->SetBinContent(37,0.1818182);
   _QuadJet_noTag_ideal_HT__28->SetEntries(0.1818182);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =    365");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 5.395e-06");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_HT__28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_HT__28);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_HT__28->SetLineColor(ci);
   _QuadJet_noTag_ideal_HT__28->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTag_ideal_HT__28->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTag_ideal_HT__28->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__28->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HT__28->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__28->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_HT__28->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__28->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__28->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_HT__28->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_HT__28->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_HT__28->Draw("HIST");
   HT_2017_QuadJet_noTag_17_ideal->Modified();
   HT_2017_QuadJet_noTag_17_ideal->cd();
   HT_2017_QuadJet_noTag_17_ideal->SetSelected(HT_2017_QuadJet_noTag_17_ideal);
}
