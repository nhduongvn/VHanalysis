#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_ideal_ref/BvL_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_ideal_ref", "BvL_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-0.2,1.088201,1.133333,3.630414);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_BvL_ref__42 = new TH1D("_DoubleJet_TripleTag_ideal_BvL_ref__42","",10,0,1);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(1,579);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(2,44);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(3,89);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(4,288);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(5,213);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(6,202);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(7,170);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(8,196);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(9,220);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetBinContent(10,1255);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetEntries(3256);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3256   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6216");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3655");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_BvL_ref__42);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_BvL_ref__42->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_BvL_ref__42->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   BvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(BvL_2016_DoubleJet_TripleTag_16_ideal_ref);
}
