#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_ideal/BvL_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_ideal", "BvL_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2,0.9146722,1.133333,3.528863);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_BvL__296 = new TH1D("_DoubleJet_TripleTag_ideal_BvL__296","",10,0,1);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(1,444);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(2,30);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(3,63);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(4,196);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(5,140);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(6,140);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(7,119);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(8,146);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(9,153);
   _DoubleJet_TripleTag_ideal_BvL__296->SetBinContent(10,977);
   _DoubleJet_TripleTag_ideal_BvL__296->SetEntries(2408);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2408   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6281");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3702");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_BvL__296->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_BvL__296);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_BvL__296->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_BvL__296->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_ideal_BvL__296->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_BvL__296->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__296->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL__296->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__296->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_BvL__296->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__296->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__296->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__296->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL__296->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__296->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_ideal->Modified();
   BvL_2016_DoubleJet_TripleTag_16_ideal->cd();
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetSelected(BvL_2016_DoubleJet_TripleTag_16_ideal);
}
