#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2017_QuadJet_TripleTag_17_ideal()
{
//=========Macro generated from canvas: BvL_2017_QuadJet_TripleTag_17_ideal/BvL_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue Apr 25 23:02:19 2023) by ROOT version 6.26/06
   TCanvas *BvL_2017_QuadJet_TripleTag_17_ideal = new TCanvas("BvL_2017_QuadJet_TripleTag_17_ideal", "BvL_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   BvL_2017_QuadJet_TripleTag_17_ideal->Range(-0.2183529,0.1501268,1.171633,0.215204);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFillStyle(4000);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15709);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetRightMargin(0.1234783);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetBottomMargin(0.12);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFrameFillStyle(1000);
   BvL_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__145 = new TH1D("_QuadJet_TripleTag_ideal_BvL__145","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(1,0.1602382);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(2,0.1934077);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(3,0.2062791);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(4,0.1805314);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(5,0.1778794);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(6,0.1845823);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(7,0.1650288);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(8,0.1607087);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(9,0.1618276);
   _QuadJet_TripleTag_ideal_BvL__145->SetBinContent(10,0.1815824);
   _QuadJet_TripleTag_ideal_BvL__145->SetEntries(1.772066);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4916");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2853");
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
   BvL_2017_QuadJet_TripleTag_17_ideal->Modified();
   BvL_2017_QuadJet_TripleTag_17_ideal->cd();
   BvL_2017_QuadJet_TripleTag_17_ideal->SetSelected(BvL_2017_QuadJet_TripleTag_17_ideal);
}
