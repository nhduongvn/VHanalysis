#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_3B_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_3B/CvB_2016_DoubleJet_TripleTag_16_3B
//=========  (Wed May  3 17:53:44 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_3B = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_3B", "CvB_2016_DoubleJet_TripleTag_16_3B",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_3B->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_3B->Range(-0.2,2.683278,1.133333,4.480755);
   CvB_2016_DoubleJet_TripleTag_16_3B->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_3B->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_3B->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_3B->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_3B->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_3B->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_3B_CvB__107 = new TH1D("_DoubleJet_TripleTag_3B_CvB__107","",10,0,1);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(1,10555);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(2,2127);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(3,2068);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(4,1888);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(5,1710);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(6,1459);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(7,1498);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(8,2115);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(9,4364);
   _DoubleJet_TripleTag_3B_CvB__107->SetBinContent(10,2188);
   _DoubleJet_TripleTag_3B_CvB__107->SetEntries(29972);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_3B_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 29972  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.3874");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3485");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_3B_CvB__107->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_3B_CvB__107);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_3B_CvB__107->SetLineColor(ci);
   _DoubleJet_TripleTag_3B_CvB__107->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_3B_CvB__107->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_3B_CvB__107->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvB__107->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvB__107->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvB__107->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_3B_CvB__107->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvB__107->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvB__107->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_3B_CvB__107->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_3B_CvB__107->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_3B_CvB__107->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_3B->Modified();
   CvB_2016_DoubleJet_TripleTag_16_3B->cd();
   CvB_2016_DoubleJet_TripleTag_16_3B->SetSelected(CvB_2016_DoubleJet_TripleTag_16_3B);
}
