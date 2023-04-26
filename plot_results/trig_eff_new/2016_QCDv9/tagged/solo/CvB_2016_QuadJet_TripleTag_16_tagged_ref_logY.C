#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_tagged_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_tagged_ref/CvB_2016_QuadJet_TripleTag_16_tagged_ref
//=========  (Tue Apr 25 23:03:08 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_tagged_ref = new TCanvas("CvB_2016_QuadJet_TripleTag_16_tagged_ref", "CvB_2016_QuadJet_TripleTag_16_tagged_ref",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->Range(-0.2,3.217488,1.133333,4.928946);
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvB_ref__207 = new TH1D("_QuadJet_TripleTag_tagged_CvB_ref__207","",10,0,1);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(1,30217);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(2,5660);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(3,4894);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(4,5657);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(5,6409);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(6,7539);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(7,10289);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(8,13978);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(9,18997);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetBinContent(10,11772);
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetEntries(115412);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 115412 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4858");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3467");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvB_ref__207);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvB_ref__207->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvB_ref__207->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvB_ref__207->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->Modified();
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->cd();
   CvB_2016_QuadJet_TripleTag_16_tagged_ref->SetSelected(CvB_2016_QuadJet_TripleTag_16_tagged_ref);
}
