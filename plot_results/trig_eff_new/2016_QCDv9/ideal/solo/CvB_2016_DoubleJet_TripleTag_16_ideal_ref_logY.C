#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ideal_ref/CvB_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Tue Apr 25 23:03:10 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ideal_ref", "CvB_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-0.2,3.016178,1.133333,4.733836);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvB_ref__321 = new TH1D("_DoubleJet_TripleTag_ideal_CvB_ref__321","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(1,19254);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(2,3618);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(3,3083);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(4,3598);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(5,4085);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(6,4849);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(7,6592);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(8,9546);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(9,13163);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetBinContent(10,7776);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetEntries(75564);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 75564  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.495");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3466");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvB_ref__321);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_CvB_ref__321->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__321->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(CvB_2016_DoubleJet_TripleTag_16_ideal_ref);
}
