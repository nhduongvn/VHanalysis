#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_TripleTag_16_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_TripleTag_16_ref/CvB_2016_DoubleJet_TripleTag_16_ref
//=========  (Wed Apr 26 16:41:42 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_TripleTag_16_ref = new TCanvas("CvB_2016_DoubleJet_TripleTag_16_ref", "CvB_2016_DoubleJet_TripleTag_16_ref",0,0,600,600);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_TripleTag_16_ref->Range(-0.2,4.185229,1.133333,6.356237);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFillColor(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetLogy();
   CvB_2016_DoubleJet_TripleTag_16_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_TripleTag_16_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_TripleTag_CvB_ref__105 = new TH1D("_DoubleJet_TripleTag_CvB_ref__105","",10,0,1);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(1,307278);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(2,57157);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(3,50544);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(4,50508);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(5,62911);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(6,89130);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(7,153765);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(8,322061);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(9,727089);
   _DoubleJet_TripleTag_CvB_ref__105->SetBinContent(10,345517);
   _DoubleJet_TripleTag_CvB_ref__105->SetEntries(2165960);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_TripleTag_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2165960");
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
