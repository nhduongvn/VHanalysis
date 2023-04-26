#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2018_QuadJet_TripleTag_18_ideal()
{
//=========Macro generated from canvas: BvL_2018_QuadJet_TripleTag_18_ideal/BvL_2018_QuadJet_TripleTag_18_ideal
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *BvL_2018_QuadJet_TripleTag_18_ideal = new TCanvas("BvL_2018_QuadJet_TripleTag_18_ideal", "BvL_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   BvL_2018_QuadJet_TripleTag_18_ideal->Range(-0.2183529,0.2193382,1.171633,0.3127593);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFillStyle(4000);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15709);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetRightMargin(0.1234783);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetBottomMargin(0.12);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameFillStyle(1000);
   BvL_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__145 = new TH1D("_QuadJet_TripleTag_ideal_BvL__145","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(1,0.2399715);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(2,0.2747096);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(3,0.2999472);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(4,0.262772);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(5,0.2683802);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(6,0.27177);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(7,0.2497738);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(8,0.2338534);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(9,0.2495498);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(10,0.2499281);
   _QuadJet_TripleTag_ideal_BvL__145->SetEntries(2.600656);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4913");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2838");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__145->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__145);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_ideal_BvL__145->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__145->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__145->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_ideal_BvL__145->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__145->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__145->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__145->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_ideal_BvL__145->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__145->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__145->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__145->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__145->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__145->Draw("HIST");
   BvL_2018_QuadJet_TripleTag_18_ideal->Modified();
   BvL_2018_QuadJet_TripleTag_18_ideal->cd();
   BvL_2018_QuadJet_TripleTag_18_ideal->SetSelected(BvL_2018_QuadJet_TripleTag_18_ideal);
}
