#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_tagged/CvB_2016_DoubleJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:18:38 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_tagged = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_tagged", "CvB_2016_DoubleJet_TripleTag_16_tagged",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_tagged->Range(-0.2,2.65872,1.133333,4.412545);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_tagged_CvB__212 = new TH1D("_DoubleJet_TripleTag_tagged_CvB__212","",10,0,1);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(1,9112);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(2,1650);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(3,1365);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(4,1703);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(5,1979);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(6,2423);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(7,3166);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(8,4484);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(9,6042);
   _DoubleJet_TripleTag_tagged_CvB__212->SetBinContent(10,3360);
   _DoubleJet_TripleTag_tagged_CvB__212->SetEntries(35284);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 35284  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4904");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3449");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_tagged_CvB__212->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_tagged_CvB__212);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_tagged_CvB__212->SetLineColor(ci);
   _DoubleJet_TripleTag_tagged_CvB__212->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_tagged_CvB__212->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_tagged_CvB__212->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__212->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB__212->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__212->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_tagged_CvB__212->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__212->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__212->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_tagged_CvB__212->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_tagged_CvB__212->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_tagged_CvB__212->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_tagged->Modified();
   CvB_2016_DoubleJet_TripleTag_16_tagged->cd();
   CvB_2016_DoubleJet_TripleTag_16_tagged->SetSelected(CvB_2016_DoubleJet_TripleTag_16_tagged);
}
