#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_ideal/BvL_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_ideal", "BvL_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2,1.025384,1.133333,3.559083);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_BvL__41 = new TH1D("_DoubleJet_TripleTag_ideal_BvL__41","",10,0,1);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(1,490);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(2,38);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(3,69);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(4,215);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(5,153);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(6,158);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(7,139);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(8,159);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(9,176);
   _DoubleJet_TripleTag_ideal_BvL__41->SetBinContent(10,1067);
   _DoubleJet_TripleTag_ideal_BvL__41->SetEntries(2664);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_BvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2664   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6265");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3697");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_BvL__41->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_BvL__41);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_BvL__41->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_BvL__41->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_ideal_BvL__41->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_BvL__41->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__41->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL__41->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__41->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_BvL__41->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__41->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__41->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL__41->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL__41->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL__41->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_ideal->Modified();
   BvL_2016_DoubleJet_TripleTag_16_ideal->cd();
   BvL_2016_DoubleJet_TripleTag_16_ideal->SetSelected(BvL_2016_DoubleJet_TripleTag_16_ideal);
}
