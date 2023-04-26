#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_noTag_17_ideal/BvL_2017_QuadJet_noTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_noTag_17_ideal = new TCanvas("BvL_2017_QuadJet_noTag_17_ideal", "BvL_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   BvL_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   BvL_2017_QuadJet_noTag_17_ideal->Range(-0.2183529,0.002313659,1.171633,0.007429228);
   BvL_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   BvL_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   BvL_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   BvL_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   BvL_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   BvL_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   BvL_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   BvL_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   BvL_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_BvL__148 = new TH1D("_QuadJet_noTag_ideal_BvL__148","",10,0,1);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(1,0.005611119);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(2,0.004488906);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(3,0.004905568);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(4,0.006315331);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(5,0.006727664);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(6,0.003685504);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(7,0.006099627);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(8,0.003108486);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(9,0.005626829);
   _QuadJet_noTag_ideal_BvL__148->SetBinContent(10,0.004702953);
   _QuadJet_noTag_ideal_BvL__148->SetEntries(0.05127199);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4874");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2837");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_BvL__148->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_BvL__148);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_BvL__148->SetLineColor(ci);
   _QuadJet_noTag_ideal_BvL__148->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_noTag_ideal_BvL__148->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_ideal_BvL__148->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL__148->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_BvL__148->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL__148->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_BvL__148->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL__148->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL__148->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_BvL__148->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_BvL__148->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_BvL__148->Draw("HIST");
   BvL_2017_QuadJet_noTag_17_ideal->Modified();
   BvL_2017_QuadJet_noTag_17_ideal->cd();
   BvL_2017_QuadJet_noTag_17_ideal->SetSelected(BvL_2017_QuadJet_noTag_17_ideal);
}
