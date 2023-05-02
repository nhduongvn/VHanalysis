#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_noTagV3_18_ideal()
{
//=========Macro generated from canvas: HT_2018_QuadJet_noTagV3_18_ideal/HT_2018_QuadJet_noTagV3_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_noTagV3_18_ideal = new TCanvas("HT_2018_QuadJet_noTagV3_18_ideal", "HT_2018_QuadJet_noTagV3_18_ideal",0,0,600,600);
   HT_2018_QuadJet_noTagV3_18_ideal->SetHighLightColor(2);
   HT_2018_QuadJet_noTagV3_18_ideal->Range(-436.7058,-0.1615385,2343.266,1.184615);
   HT_2018_QuadJet_noTagV3_18_ideal->SetFillColor(0);
   HT_2018_QuadJet_noTagV3_18_ideal->SetFillStyle(4000);
   HT_2018_QuadJet_noTagV3_18_ideal->SetBorderMode(0);
   HT_2018_QuadJet_noTagV3_18_ideal->SetBorderSize(2);
   HT_2018_QuadJet_noTagV3_18_ideal->SetLeftMargin(0.15709);
   HT_2018_QuadJet_noTagV3_18_ideal->SetRightMargin(0.1234783);
   HT_2018_QuadJet_noTagV3_18_ideal->SetBottomMargin(0.12);
   HT_2018_QuadJet_noTagV3_18_ideal->SetFrameFillStyle(1000);
   HT_2018_QuadJet_noTagV3_18_ideal->SetFrameBorderMode(0);
   HT_2018_QuadJet_noTagV3_18_ideal->SetFrameFillStyle(1000);
   HT_2018_QuadJet_noTagV3_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV3_ideal_HT__82 = new TH1D("_QuadJet_noTagV3_ideal_HT__82","",200,0,2000);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV3_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV3_ideal_HT__82->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV3_ideal_HT__82);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTagV3_ideal_HT__82->SetLineColor(ci);
   _QuadJet_noTagV3_ideal_HT__82->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTagV3_ideal_HT__82->GetXaxis()->SetRange(1,2000);
   _QuadJet_noTagV3_ideal_HT__82->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_HT__82->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_HT__82->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_HT__82->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTagV3_ideal_HT__82->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_HT__82->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_HT__82->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV3_ideal_HT__82->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV3_ideal_HT__82->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV3_ideal_HT__82->Draw("HIST");
   HT_2018_QuadJet_noTagV3_18_ideal->Modified();
   HT_2018_QuadJet_noTagV3_18_ideal->cd();
   HT_2018_QuadJet_noTagV3_18_ideal->SetSelected(HT_2018_QuadJet_noTagV3_18_ideal);
}
