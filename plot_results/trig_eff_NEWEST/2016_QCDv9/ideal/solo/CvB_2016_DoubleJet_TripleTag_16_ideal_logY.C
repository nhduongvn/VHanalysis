#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ideal/CvB_2016_DoubleJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ideal = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ideal", "CvB_2016_DoubleJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal->Range(-0.2,1.509359,1.133333,3.533844);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvB__53 = new TH1D("_DoubleJet_TripleTag_ideal_CvB__53","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(1,1132);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(2,246);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(3,213);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(4,206);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(5,172);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(6,130);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(7,108);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(8,123);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(9,231);
   _DoubleJet_TripleTag_ideal_CvB__53->SetBinContent(10,103);
   _DoubleJet_TripleTag_ideal_CvB__53->SetEntries(2664);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2664   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2967");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3116");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvB__53->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvB__53);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_CvB__53->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvB__53->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_ideal_CvB__53->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_CvB__53->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__53->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB__53->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__53->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_CvB__53->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__53->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__53->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB__53->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB__53->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB__53->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_ideal->Modified();
   CvB_2016_DoubleJet_TripleTag_16_ideal->cd();
   CvB_2016_DoubleJet_TripleTag_16_ideal->SetSelected(CvB_2016_DoubleJet_TripleTag_16_ideal);
}
