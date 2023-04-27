#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16_ideal_ref/CvB_2016_QuadJet_DoubleTag_16_ideal_ref
//=========  (Thu Apr 27 10:18:40 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16_ideal_ref = new TCanvas("CvB_2016_QuadJet_DoubleTag_16_ideal_ref", "CvB_2016_QuadJet_DoubleTag_16_ideal_ref",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->Range(-0.2,3.212008,1.133333,4.925594);
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetLogy();
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetLeftMargin(0.15);
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_CvB_ref__318 = new TH1D("_QuadJet_DoubleTag_ideal_CvB_ref__318","",10,0,1);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(1,29970);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(2,5608);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(3,4835);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(4,5613);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(5,6364);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(6,7437);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(7,10213);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(8,13872);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(9,18816);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetBinContent(10,11652);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetEntries(114380);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_CvB_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 114380 ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4857");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3467");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_CvB_ref__318);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_CvB_ref__318->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetXaxis()->SetRange(1,10);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB_ref__318->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->Modified();
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->cd();
   CvB_2016_QuadJet_DoubleTag_16_ideal_ref->SetSelected(CvB_2016_QuadJet_DoubleTag_16_ideal_ref);
}
