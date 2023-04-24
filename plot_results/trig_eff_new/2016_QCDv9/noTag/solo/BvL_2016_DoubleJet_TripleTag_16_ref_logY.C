#ifdef __CLING__
#pragma cling optimize(0)
#endif
void BvL_2016_DoubleJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: BvL_2016_DoubleJet_TripleTag_16_ref/BvL_2016_DoubleJet_TripleTag_16_ref
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *BvL_2016_DoubleJet_TripleTag_16_ref = new TCanvas("BvL_2016_DoubleJet_TripleTag_16_ref", "BvL_2016_DoubleJet_TripleTag_16_ref",0,0,600,600);
   BvL_2016_DoubleJet_TripleTag_16_ref->SetHighLightColor(2);
   BvL_2016_DoubleJet_TripleTag_16_ref->Range(-0.2,3.922112,1.133333,6.734585);
   BvL_2016_DoubleJet_TripleTag_16_ref->SetFillColor(0);
   BvL_2016_DoubleJet_TripleTag_16_ref->SetBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ref->SetBorderSize(2);
   BvL_2016_DoubleJet_TripleTag_16_ref->SetLogy();
   BvL_2016_DoubleJet_TripleTag_16_ref->SetLeftMargin(0.15);
   BvL_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   BvL_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_BvL_ref__153 = new TH1D("_DoubleJet_TripleTag_BvL_ref__153","",10,0,1);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(1,1498956);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(2,109257);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(3,56140);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(4,40709);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(5,33834);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(6,32339);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(7,31944);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(8,36951);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(9,48327);
   _DoubleJet_TripleTag_BvL_ref__153->SetBinContent(10,292235);
   _DoubleJet_TripleTag_BvL_ref__153->SetEntries(2180692);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_BvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2180692");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2214");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3536");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_BvL_ref__153->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_BvL_ref__153);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_BvL_ref__153->SetLineColor(ci);
   _DoubleJet_TripleTag_BvL_ref__153->GetXaxis()->SetTitle("BvL tagging score");
   _DoubleJet_TripleTag_BvL_ref__153->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_BvL_ref__153->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL_ref__153->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_BvL_ref__153->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL_ref__153->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_BvL_ref__153->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL_ref__153->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL_ref__153->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_BvL_ref__153->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_BvL_ref__153->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_BvL_ref__153->Draw("HIST");
   BvL_2016_DoubleJet_TripleTag_16_ref->Modified();
   BvL_2016_DoubleJet_TripleTag_16_ref->cd();
   BvL_2016_DoubleJet_TripleTag_16_ref->SetSelected(BvL_2016_DoubleJet_TripleTag_16_ref);
}
