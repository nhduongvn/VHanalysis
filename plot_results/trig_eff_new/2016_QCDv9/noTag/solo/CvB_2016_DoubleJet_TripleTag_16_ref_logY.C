#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ref/CvB_2016_DoubleJet_TripleTag_16_ref
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ref = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ref", "CvB_2016_DoubleJet_TripleTag_16_ref",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ref->Range(-0.2,4.188143,1.133333,6.359236);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvB_ref__201 = new TH1D("_DoubleJet_TripleTag_CvB_ref__201","",10,0,1);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(1,309375);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(2,57547);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(3,50893);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(4,50849);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(5,63339);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(6,89730);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(7,154713);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(8,324073);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(9,732113);
   _DoubleJet_TripleTag_CvB_ref__201->SetBinContent(10,348060);
   _DoubleJet_TripleTag_CvB_ref__201->SetEntries(2180692);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2180692");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6505");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3149");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_CvB_ref__201->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_CvB_ref__201);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_CvB_ref__201->SetLineColor(ci);
   _DoubleJet_TripleTag_CvB_ref__201->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_CvB_ref__201->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_CvB_ref__201->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB_ref__201->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB_ref__201->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB_ref__201->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_CvB_ref__201->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB_ref__201->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB_ref__201->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB_ref__201->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB_ref__201->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB_ref__201->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_ref->Modified();
   CvB_2016_DoubleJet_TripleTag_16_ref->cd();
   CvB_2016_DoubleJet_TripleTag_16_ref->SetSelected(CvB_2016_DoubleJet_TripleTag_16_ref);
}
