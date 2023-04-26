#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16_tagged_ref/CvB_2016_DoubleJet_DoubleTag_16_tagged_ref
//=========  (Tue Apr 25 23:03:08 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16_tagged_ref = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16_tagged_ref", "CvB_2016_DoubleJet_DoubleTag_16_tagged_ref",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->Range(-0.2,3.217488,1.133333,4.928946);
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetLogy();
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetLeftMargin(0.15);
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_CvB_ref__216 = new TH1D("_DoubleJet_DoubleTag_tagged_CvB_ref__216","",10,0,1);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(1,30217);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(2,5660);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(3,4894);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(4,5657);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(5,6409);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(6,7539);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(7,10289);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(8,13978);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(9,18997);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetBinContent(10,11772);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetEntries(115412);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 115412 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4858");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3467");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_CvB_ref__216);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetXaxis()->SetRange(1,10);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_CvB_ref__216->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->Modified();
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->cd();
   CvB_2016_DoubleJet_DoubleTag_16_tagged_ref->SetSelected(CvB_2016_DoubleJet_DoubleTag_16_tagged_ref);
}
