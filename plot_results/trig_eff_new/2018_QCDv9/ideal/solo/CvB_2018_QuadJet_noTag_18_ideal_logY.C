#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18_ideal/CvB_2018_QuadJet_noTag_18_ideal
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18_ideal = new TCanvas("CvB_2018_QuadJet_noTag_18_ideal", "CvB_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18_ideal->Range(-0.2,1.089212,1.133333,2.868808);
   CvB_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18_ideal->SetLogy();
   CvB_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvB__161 = new TH1D("_QuadJet_noTag_ideal_CvB__161","",10,0,1);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(1,259);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(2,42);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(3,37);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(4,42);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(5,57);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(6,59);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(7,94);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(8,132);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(9,168);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(10,114);
   _QuadJet_noTag_ideal_CvB__161->SetEntries(1004);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1004   ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5031");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.349");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvB__161->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvB__161);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_ideal_CvB__161->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvB__161->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_ideal_CvB__161->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_ideal_CvB__161->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__161->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB__161->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__161->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_ideal_CvB__161->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__161->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__161->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__161->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB__161->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__161->Draw("HIST");
   CvB_2018_QuadJet_noTag_18_ideal->Modified();
   CvB_2018_QuadJet_noTag_18_ideal->cd();
   CvB_2018_QuadJet_noTag_18_ideal->SetSelected(CvB_2018_QuadJet_noTag_18_ideal);
}
