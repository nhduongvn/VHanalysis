#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16_ideal_ref/CvB_2016_DoubleJet_DoubleTag_16_ideal_ref
//=========  (Wed Apr 26 16:41:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16_ideal_ref = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16_ideal_ref", "CvB_2016_DoubleJet_DoubleTag_16_ideal_ref",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->Range(-0.2,3.012422,1.133333,4.730858);
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLogy();
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_CvB_ref__324 = new TH1D("_DoubleJet_DoubleTag_ideal_CvB_ref__324","",10,0,1);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(1,19119);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(2,3594);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(3,3057);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(4,3586);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(5,4064);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(6,4798);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(7,6558);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(8,9491);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(9,13080);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetBinContent(10,7717);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetEntries(75064);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 75064  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4951");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3465");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_CvB_ref__324);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB_ref__324->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->Modified();
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->cd();
   CvB_2016_DoubleJet_DoubleTag_16_ideal_ref->SetSelected(CvB_2016_DoubleJet_DoubleTag_16_ideal_ref);
}
