#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_TripleTag_16_ideal/CvB_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed Apr 26 16:41:45 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_TripleTag_16_ideal = new TCanvas("CvB_2016_QuadJet_TripleTag_16_ideal", "CvB_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->Range(-0.2,2.768724,1.133333,4.531241);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   CvB_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_CvB__314 = new TH1D("_QuadJet_TripleTag_ideal_CvB__314","",10,0,1);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(1,11952);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(2,2163);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(3,1762);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(4,2198);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(5,2596);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(6,3058);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(7,4119);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(8,5655);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(9,7726);
   _QuadJet_TripleTag_ideal_CvB__314->SetBinContent(10,4439);
   _QuadJet_TripleTag_ideal_CvB__314->SetEntries(45668);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 45668  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4878");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.346");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_CvB__314->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_CvB__314);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_CvB__314->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__314->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_CvB__314->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_CvB__314->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_CvB__314->Draw("HIST");
   CvB_2016_QuadJet_TripleTag_16_ideal->Modified();
   CvB_2016_QuadJet_TripleTag_16_ideal->cd();
   CvB_2016_QuadJet_TripleTag_16_ideal->SetSelected(CvB_2016_QuadJet_TripleTag_16_ideal);
}
