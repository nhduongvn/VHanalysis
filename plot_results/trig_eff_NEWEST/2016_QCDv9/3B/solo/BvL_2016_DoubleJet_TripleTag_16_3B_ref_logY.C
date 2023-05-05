#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_3B_ref/BvL_2016_DoubleJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_3B_ref = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_3B_ref", "BvL_2016_DoubleJet_TripleTag_16_3B_ref",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->Range(-0.2,2.482757,1.133333,4.696691);
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_BvL_ref__96 = new TH1D("_DoubleJet_TripleTag_3B_BvL_ref__96","",10,0,1);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(1,15132);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(2,1012);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(3,1469);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(4,3844);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(5,2858);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(6,2539);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(7,2253);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(8,2387);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(9,2851);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetBinContent(10,15767);
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetEntries(50112);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 50112  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5186");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3997");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_BvL_ref__96);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_BvL_ref__96->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_BvL_ref__96->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_BvL_ref__96->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->Modified();
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->cd();
   BvL_2016_DoubleJet_TripleTag_16_3B_ref->SetSelected(BvL_2016_DoubleJet_TripleTag_16_3B_ref);
}
