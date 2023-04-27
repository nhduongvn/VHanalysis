#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_ideal_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17_ideal/CvB_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17_ideal = new TCanvas("CvB_2017_QuadJet_noTag_17_ideal", "CvB_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   CvB_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17_ideal->Range(-0.2,-0.5458788,1.133333,1.902609);
   CvB_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17_ideal->SetLogy();
   CvB_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvB__161 = new TH1D("_QuadJet_noTag_ideal_CvB__161","",10,0,1);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(1,24);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(2,3);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(3,2);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(4,4);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(6,4);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(9,6);
   _QuadJet_noTag_ideal_CvB__161->SetBinContent(10,1);
   _QuadJet_noTag_ideal_CvB__161->SetEntries(44);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 44     ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.2525");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3138");
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
   CvB_2017_QuadJet_noTag_17_ideal->Modified();
   CvB_2017_QuadJet_noTag_17_ideal->cd();
   CvB_2017_QuadJet_noTag_17_ideal->SetSelected(CvB_2017_QuadJet_noTag_17_ideal);
}
