#ifdef __CLING__
#pragma cling optimize(0)
#endif
void HT_2018_QuadJet_noTagV2_18_ideal_logY()
{
//=========Macro generated from canvas: HT_2018_QuadJet_noTagV2_18_ideal/HT_2018_QuadJet_noTagV2_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *HT_2018_QuadJet_noTagV2_18_ideal = new TCanvas("HT_2018_QuadJet_noTagV2_18_ideal", "HT_2018_QuadJet_noTagV2_18_ideal",0,0,600,600);
   HT_2018_QuadJet_noTagV2_18_ideal->SetHighLightColor(2);
   HT_2018_QuadJet_noTagV2_18_ideal->Range(-400,-3.748352,2266.667,0.7248713);
   HT_2018_QuadJet_noTagV2_18_ideal->SetFillColor(0);
   HT_2018_QuadJet_noTagV2_18_ideal->SetBorderMode(0);
   HT_2018_QuadJet_noTagV2_18_ideal->SetBorderSize(2);
   HT_2018_QuadJet_noTagV2_18_ideal->SetLogy();
   HT_2018_QuadJet_noTagV2_18_ideal->SetLeftMargin(0.15);
   HT_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   HT_2018_QuadJet_noTagV2_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV2_ideal_HT__80 = new TH1D("_QuadJet_noTagV2_ideal_HT__80","",200,0,2000);
   _QuadJet_noTagV2_ideal_HT__80->SetBinContent(42,1);
   _QuadJet_noTagV2_ideal_HT__80->SetBinContent(57,1);
   _QuadJet_noTagV2_ideal_HT__80->SetBinContent(66,1);
   _QuadJet_noTagV2_ideal_HT__80->SetBinContent(73,1);
   _QuadJet_noTagV2_ideal_HT__80->SetEntries(4);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV2_ideal_HT");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  588.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  118.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV2_ideal_HT__80->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV2_ideal_HT__80);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV2_ideal_HT__80->SetLineColor(ci);
   _QuadJet_noTagV2_ideal_HT__80->GetXaxis()->SetTitle("H_{T} [GeV]");
   _QuadJet_noTagV2_ideal_HT__80->GetXaxis()->SetRange(1,200);
   _QuadJet_noTagV2_ideal_HT__80->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_HT__80->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_HT__80->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_HT__80->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV2_ideal_HT__80->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_HT__80->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_HT__80->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_HT__80->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_HT__80->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_HT__80->Draw("HIST");
   HT_2018_QuadJet_noTagV2_18_ideal->Modified();
   HT_2018_QuadJet_noTagV2_18_ideal->cd();
   HT_2018_QuadJet_noTagV2_18_ideal->SetSelected(HT_2018_QuadJet_noTagV2_18_ideal);
}
