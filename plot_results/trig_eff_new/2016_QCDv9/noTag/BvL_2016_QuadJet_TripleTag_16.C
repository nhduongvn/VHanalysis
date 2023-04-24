#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16/BvL_2016_QuadJet_TripleTag_16
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16 = new TCanvas("BvL_2016_QuadJet_TripleTag_16", "BvL_2016_QuadJet_TripleTag_16",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16->Range(-0.2183529,0.07205737,1.171633,0.2276363);
   BvL_2016_QuadJet_TripleTag_16->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16->SetFillStyle(4000);
   BvL_2016_QuadJet_TripleTag_16->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16->SetLeftMargin(0.15709);
   BvL_2016_QuadJet_TripleTag_16->SetRightMargin(0.1234783);
   BvL_2016_QuadJet_TripleTag_16->SetBottomMargin(0.12);
   BvL_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16->SetFrameFillStyle(1000);
   BvL_2016_QuadJet_TripleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_BvL__145 = new TH1D("_QuadJet_TripleTag_BvL__145","",10,0,1);
   _QuadJet_TripleTag_BvL__145->SetBinContent(1,0.09623031);
   _QuadJet_TripleTag_BvL__145->SetBinContent(2,0.1573629);
   _QuadJet_TripleTag_BvL__145->SetBinContent(3,0.1724261);
   _QuadJet_TripleTag_BvL__145->SetBinContent(4,0.182343);
   _QuadJet_TripleTag_BvL__145->SetBinContent(5,0.1869126);
   _QuadJet_TripleTag_BvL__145->SetBinContent(6,0.1987693);
   _QuadJet_TripleTag_BvL__145->SetBinContent(7,0.1931818);
   _QuadJet_TripleTag_BvL__145->SetBinContent(8,0.2002652);
   _QuadJet_TripleTag_BvL__145->SetBinContent(9,0.1995572);
   _QuadJet_TripleTag_BvL__145->SetBinContent(10,0.2062997);
   _QuadJet_TripleTag_BvL__145->SetEntries(1.793348);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.541");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.274");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_BvL__145->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_BvL__145);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_BvL__145->SetLineColor(ci);
   _QuadJet_TripleTag_BvL__145->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_BvL__145->GetXaxis()->SetRange(1,100);
   _QuadJet_TripleTag_BvL__145->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__145->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__145->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__145->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_BvL__145->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__145->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__145->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_BvL__145->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_BvL__145->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_BvL__145->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16->Modified();
   BvL_2016_QuadJet_TripleTag_16->cd();
   BvL_2016_QuadJet_TripleTag_16->SetSelected(BvL_2016_QuadJet_TripleTag_16);
}
