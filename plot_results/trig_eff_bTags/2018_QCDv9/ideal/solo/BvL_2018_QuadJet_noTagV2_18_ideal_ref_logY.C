#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_noTagV2_18_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_noTagV2_18_ideal_ref/BvL_2018_QuadJet_noTagV2_18_ideal_ref
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_noTagV2_18_ideal_ref = new TCanvas("BvL_2018_QuadJet_noTagV2_18_ideal_ref", "BvL_2018_QuadJet_noTagV2_18_ideal_ref",0,0,600,600);
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetHighLightColor(2);
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->Range(-0.2,1.261744,1.133333,3.829446);
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetFillColor(0);
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetBorderMode(0);
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetBorderSize(2);
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetLogy();
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetLeftMargin(0.15);
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetFrameBorderMode(0);
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV2_ideal_BvL_ref__117 = new TH1D("_QuadJet_noTagV2_ideal_BvL_ref__117","",10,0,1);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(1,970);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(2,66);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(3,139);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(4,379);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(5,317);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(6,274);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(7,280);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(8,268);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(9,318);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetBinContent(10,1973);
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetEntries(4984);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV2_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 4984   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6184");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3754");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV2_ideal_BvL_ref__117);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV2_ideal_BvL_ref__117->SetLineColor(ci);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetXaxis()->SetRange(1,10);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV2_ideal_BvL_ref__117->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV2_ideal_BvL_ref__117->Draw("HIST");
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->Modified();
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->cd();
   BvL_2018_QuadJet_noTagV2_18_ideal_ref->SetSelected(BvL_2018_QuadJet_noTagV2_18_ideal_ref);
}
