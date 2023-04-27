#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ref/CvB_2016_DoubleJet_TripleTag_16_ref
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ref = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ref", "CvB_2016_DoubleJet_TripleTag_16_ref",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ref->Range(-0.2,4.189214,1.133333,6.360349);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvB_ref__105 = new TH1D("_DoubleJet_TripleTag_CvB_ref__105","",10,0,1);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(1,310110);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(2,57690);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(3,51012);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(4,50975);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(5,63509);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(6,89980);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(7,155144);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(8,324940);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(9,733984);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(10,348928);
   _DoubleJet_TripleTag_CvB_ref__105->SetEntries(2186272);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2186272");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.6505");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3149");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_TripleTag_CvB_ref__105->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_TripleTag_CvB_ref__105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_TripleTag_CvB_ref__105->SetLineColor(ci);
   _DoubleJet_TripleTag_CvB_ref__105->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_TripleTag_CvB_ref__105->GetXaxis()->SetRange(1,10);
   _DoubleJet_TripleTag_CvB_ref__105->GetXaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB_ref__105->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB_ref__105->GetXaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB_ref__105->GetYaxis()->SetTitle("Events");
   _DoubleJet_TripleTag_CvB_ref__105->GetYaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB_ref__105->GetYaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB_ref__105->GetZaxis()->SetLabelFont(42);
   _DoubleJet_TripleTag_CvB_ref__105->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_TripleTag_CvB_ref__105->GetZaxis()->SetTitleFont(42);
   _DoubleJet_TripleTag_CvB_ref__105->Draw("HIST");
   CvB_2016_DoubleJet_TripleTag_16_ref->Modified();
   CvB_2016_DoubleJet_TripleTag_16_ref->cd();
   CvB_2016_DoubleJet_TripleTag_16_ref->SetSelected(CvB_2016_DoubleJet_TripleTag_16_ref);
}
