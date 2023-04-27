#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ideal/CvB_2016_DoubleJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ideal", "CvB_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2,1.464323,1.133333,3.495619);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvB__320 = new TH1D("_DoubleJet_TripleTag_ideal_CvB__320","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(1,1035);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(2,216);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(3,196);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(4,184);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(5,157);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(6,115);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(7,93);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(8,108);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(9,207);
   _DoubleJet_TripleTag_ideal_CvB__320->SetBinContent(10,97);
   _DoubleJet_TripleTag_ideal_CvB__320->SetEntries(2408);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2408   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2946");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3116");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvB__320->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvB__320);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_CvB__320->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvB__320->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_ideal_CvB__320->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_CvB__320->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__320->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB__320->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__320->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_CvB__320->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__320->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__320->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__320->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB__320->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__320->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_ideal->Modified();
   CvB_2016_DoubleJet_TripleTag_16_ideal->cd();
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetSelected(CvB_2016_DoubleJet_TripleTag_16_ideal);
}
