#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: BvL_2016_QuadJet_TripleTag_16_ideal/BvL_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_QuadJet_TripleTag_16_ideal = new TCanvas("BvL_2016_QuadJet_TripleTag_16_ideal", "BvL_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_QuadJet_TripleTag_16_ideal->Range(-0.2,2.586867,1.133333,4.776599);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   BvL_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_BvL__290 = new TH1D("_QuadJet_TripleTag_ideal_BvL__290","",10,0,1);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(1,19058);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(2,3573);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(3,1984);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(4,2033);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(5,1627);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(6,1512);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(7,1279);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(8,1381);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(9,1892);
   _QuadJet_TripleTag_ideal_BvL__290->SetBinContent(10,11329);
   _QuadJet_TripleTag_ideal_BvL__290->SetEntries(45668);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 45668  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4049");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.4024");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_BvL__290->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_BvL__290);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_BvL__290->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_BvL__290->GetXaxis()->SetTitle("BvL tagging score");
   _QuadJet_TripleTag_ideal_BvL__290->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_BvL__290->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__290->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__290->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__290->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_BvL__290->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__290->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__290->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_BvL__290->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_BvL__290->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_BvL__290->Draw("HIST");
   BvL_2016_QuadJet_TripleTag_16_ideal->Modified();
   BvL_2016_QuadJet_TripleTag_16_ideal->cd();
   BvL_2016_QuadJet_TripleTag_16_ideal->SetSelected(BvL_2016_QuadJet_TripleTag_16_ideal);
}
