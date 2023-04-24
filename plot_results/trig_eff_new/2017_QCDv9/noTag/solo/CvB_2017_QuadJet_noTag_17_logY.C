#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17_logY()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17/CvB_2017_QuadJet_noTag_17
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17 = new TCanvas("CvB_2017_QuadJet_noTag_17", "CvB_2017_QuadJet_noTag_17",0,0,600,600);
   CvB_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17->Range(-0.2,1.784254,1.133333,4.027717);
   CvB_2017_QuadJet_noTag_17->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17->SetLogy();
   CvB_2017_QuadJet_noTag_17->SetLeftMargin(0.15);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB__209 = new TH1D("_QuadJet_noTag_CvB__209","",10,0,1);
   _QuadJet_noTag_CvB__209->SetBinContent(1,1411);
   _QuadJet_noTag_CvB__209->SetBinContent(2,233);
   _QuadJet_noTag_CvB__209->SetBinContent(3,206);
   _QuadJet_noTag_CvB__209->SetBinContent(4,204);
   _QuadJet_noTag_CvB__209->SetBinContent(5,236);
   _QuadJet_noTag_CvB__209->SetBinContent(6,333);
   _QuadJet_noTag_CvB__209->SetBinContent(7,607);
   _QuadJet_noTag_CvB__209->SetBinContent(8,1318);
   _QuadJet_noTag_CvB__209->SetBinContent(9,3356);
   _QuadJet_noTag_CvB__209->SetBinContent(10,1740);
   _QuadJet_noTag_CvB__209->SetEntries(9644);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9644   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.659");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3194");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvB__209->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvB__209);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_CvB__209->SetLineColor(ci);
   _QuadJet_noTag_CvB__209->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_CvB__209->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_CvB__209->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__209->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB__209->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__209->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_CvB__209->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__209->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__209->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__209->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB__209->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__209->Draw("HIST");
   CvB_2017_QuadJet_noTag_17->Modified();
   CvB_2017_QuadJet_noTag_17->cd();
   CvB_2017_QuadJet_noTag_17->SetSelected(CvB_2017_QuadJet_noTag_17);
}
