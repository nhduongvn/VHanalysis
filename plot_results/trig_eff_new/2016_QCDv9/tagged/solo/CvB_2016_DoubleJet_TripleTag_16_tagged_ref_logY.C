#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_tagged_ref/CvB_2016_DoubleJet_TripleTag_16_tagged_ref
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_tagged_ref = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_tagged_ref", "CvB_2016_DoubleJet_TripleTag_16_tagged_ref",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->Range(-0.2,3.213407,1.133333,4.926452);
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvB_ref__213 = new TH1D("_DoubleJet_TripleTag_tagged_CvB_ref__213","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(1,30033);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(2,5621);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(3,4850);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(4,5633);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(5,6375);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(6,7466);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(7,10232);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(8,13903);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(9,18874);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetBinContent(10,11685);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetEntries(114672);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 114672 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4857");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3467");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvB_ref__213);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_CvB_ref__213->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB_ref__213->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->Modified();
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->cd();
   CvB_2016_DoubleJet_TripleTag_16_tagged_ref->SetSelected(CvB_2016_DoubleJet_TripleTag_16_tagged_ref);
}
