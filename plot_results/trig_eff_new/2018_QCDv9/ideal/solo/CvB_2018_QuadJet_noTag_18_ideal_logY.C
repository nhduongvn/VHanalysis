#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_ideal_logY()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18_ideal/CvB_2018_QuadJet_noTag_18_ideal
//=========  (Wed Apr 26 16:41:58 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18_ideal = new TCanvas("CvB_2018_QuadJet_noTag_18_ideal", "CvB_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18_ideal->Range(-0.2,1.090915,1.133333,2.853479);
   CvB_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18_ideal->SetLogy();
   CvB_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvB__161 = new TH1D("_QuadJet_noTag_ideal_CvB__161","",10,0,1);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(1,251);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(2,41);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(3,37);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(4,44);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(5,56);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(6,59);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(7,92);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(8,129);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(9,166);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(10,109);
   _QuadJet_noTag_ideal_CvB__161->SetEntries(984);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 984    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5032");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3476");
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
