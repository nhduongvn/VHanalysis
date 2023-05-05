#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ideal_ref/CvB_2016_DoubleJet_TripleTag_16_ideal_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ideal_ref = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ideal_ref", "CvB_2016_DoubleJet_TripleTag_16_ideal_ref",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->Range(-0.2,1.57079,1.133333,3.608056);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_ideal_CvB_ref__54 = new TH1D("_DoubleJet_TripleTag_ideal_CvB_ref__54","",10,0,1);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(1,1339);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(2,312);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(3,281);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(4,278);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(5,213);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(6,165);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(7,128);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(8,150);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(9,271);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetBinContent(10,119);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetEntries(3256);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3256   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2968");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3069");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_ideal_CvB_ref__54);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_ideal_CvB_ref__54->SetLineColor(ci);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_ideal_CvB_ref__54->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->Modified();
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->cd();
   CvB_2016_DoubleJet_TripleTag_16_ideal_ref->SetSelected(CvB_2016_DoubleJet_TripleTag_16_ideal_ref);
}
