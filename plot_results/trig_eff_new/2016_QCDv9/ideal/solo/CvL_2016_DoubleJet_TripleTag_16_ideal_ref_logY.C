#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_ideal_ref/CvL_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Wed Apr 26 16:41:44 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_ideal_ref", "CvL_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-0.2,3.012547,1.133333,4.753811);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvL_ref__309 = new TH1D("_DoubleJet_TripleTag_ideal_CvL_ref__309","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(1,10209);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(2,20051);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(3,6115);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(4,4049);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(5,3075);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(6,3074);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(7,3473);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(8,4555);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(9,6878);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetBinContent(10,13585);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetEntries(75064);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 75064  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4523");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3484");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvL_ref__309);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_CvL_ref__309->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvL_ref__309->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   CvL_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(CvL_2016_DoubleJet_TripleTag_16_ideal_ref);
}
