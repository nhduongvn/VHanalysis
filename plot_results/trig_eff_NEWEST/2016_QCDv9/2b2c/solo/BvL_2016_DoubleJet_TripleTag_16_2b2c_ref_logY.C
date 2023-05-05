#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_2b2c_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_2b2c_ref/BvL_2016_DoubleJet_TripleTag_16_2b2c_ref
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_2b2c_ref = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_2b2c_ref", "BvL_2016_DoubleJet_TripleTag_16_2b2c_ref",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->Range(-0.2,2.84449,1.133333,5.059122);
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_2b2c_BvL_ref__150 = new TH1D("_DoubleJet_TripleTag_2b2c_BvL_ref__150","",10,0,1);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(1,36317);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(2,5949);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(3,3116);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(4,3710);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(5,2912);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(6,2573);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(7,2328);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(8,2589);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(9,3423);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetBinContent(10,19847);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetEntries(82764);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_2b2c_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 82764  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3945");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.402");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_2b2c_BvL_ref__150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->SetLineColor(ci);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_2b2c_BvL_ref__150->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->Modified();
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->cd();
   BvL_2016_DoubleJet_TripleTag_16_2b2c_ref->SetSelected(BvL_2016_DoubleJet_TripleTag_16_2b2c_ref);
}
