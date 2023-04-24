#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18/CvB_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:57 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18 = new TCanvas("CvB_2018_QuadJet_noTag_18", "CvB_2018_QuadJet_noTag_18",0,0,600,600);
   CvB_2018_QuadJet_noTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18->Range(-0.2183529,0.004098442,1.171633,0.00547081);
   CvB_2018_QuadJet_noTag_18->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18->SetFillStyle(4000);
   CvB_2018_QuadJet_noTag_18->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   CvB_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   CvB_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   CvB_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvB__106 = new TH1D("_QuadJet_noTag_tagged_CvB__106","",10,0,1);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(1,0.004462461);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(2,0.004311672);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(3,0.00454713);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(4,0.004549302);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(5,0.004944054);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(6,0.004470036);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(7,0.005058573);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(8,0.005282599);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(9,0.004791608);
   _QuadJet_noTag_tagged_CvB__106->SetBinContent(10,0.004948578);
   _QuadJet_noTag_tagged_CvB__106->SetEntries(0.04736601);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5132");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2857");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvB__106->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvB__106);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_tagged_CvB__106->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__106->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvB__106->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvB__106->Draw("HIST");
   CvB_2018_QuadJet_noTag_18->Modified();
   CvB_2018_QuadJet_noTag_18->cd();
   CvB_2018_QuadJet_noTag_18->SetSelected(CvB_2018_QuadJet_noTag_18);
}
