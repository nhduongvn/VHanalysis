#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_DoubleJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvL_2016_DoubleJet_TripleTag_16_ref/CvL_2016_DoubleJet_TripleTag_16_ref
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_DoubleJet_TripleTag_16_ref = new TCanvas("CvL_2016_DoubleJet_TripleTag_16_ref", "CvL_2016_DoubleJet_TripleTag_16_ref",0,0,600,600);
   CvL_2016_DoubleJet_TripleTag_16_ref->SetHighLightColor(2);
   CvL_2016_DoubleJet_TripleTag_16_ref->Range(-0.2,4.136876,1.133333,6.563796);
   CvL_2016_DoubleJet_TripleTag_16_ref->SetFillColor(0);
   CvL_2016_DoubleJet_TripleTag_16_ref->SetBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ref->SetBorderSize(2);
   CvL_2016_DoubleJet_TripleTag_16_ref->SetLogy();
   CvL_2016_DoubleJet_TripleTag_16_ref->SetLeftMargin(0.15);
   CvL_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   CvL_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvL_ref__93 = new TH1D("_DoubleJet_TripleTag_CvL_ref__93","",10,0,1);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(1,1105491);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(2,354215);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(3,108340);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(4,64293);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(5,49560);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(6,47929);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(7,53954);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(8,70896);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(9,107635);
   _DoubleJet_TripleTag_CvL_ref__93->SetBinContent(10,218379);
   _DoubleJet_TripleTag_CvL_ref__93->SetEntries(2180692);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvL_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2180692");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2754");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3232");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_CvL_ref__93->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_CvL_ref__93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_CvL_ref__93->SetLineColor(ci);
   _DoubleJet_TripleTag_CvL_ref__93->GetXaxis()->SetTitle("CvL tagging score");
   _DoubleJet_TripleTag_CvL_ref__93->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_CvL_ref__93->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL_ref__93->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvL_ref__93->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL_ref__93->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_CvL_ref__93->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL_ref__93->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL_ref__93->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvL_ref__93->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvL_ref__93->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvL_ref__93->Draw("HIST");
   CvL_2016_DoubleJet_TripleTag_16_ref->Modified();
   CvL_2016_DoubleJet_TripleTag_16_ref->cd();
   CvL_2016_DoubleJet_TripleTag_16_ref->SetSelected(CvL_2016_DoubleJet_TripleTag_16_ref);
}
