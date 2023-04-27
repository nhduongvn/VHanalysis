#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: CvB_2017_QuadJet_noTag_17/CvB_2017_QuadJet_noTag_17
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *CvB_2017_QuadJet_noTag_17 = new TCanvas("CvB_2017_QuadJet_noTag_17", "CvB_2017_QuadJet_noTag_17",0,0,600,600);
   CvB_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvB_2017_QuadJet_noTag_17->Range(-0.2183529,0.004253678,1.171633,0.005588218);
   CvB_2017_QuadJet_noTag_17->SetFillColor(0);
   CvB_2017_QuadJet_noTag_17->SetFillStyle(4000);
   CvB_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvB_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   CvB_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   CvB_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   CvB_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvB_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvB_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvB__52 = new TH1D("_QuadJet_noTag_CvB__52","",10,0,1);
   _QuadJet_noTag_CvB__52->SetBinContent(1,0.004827881);
   _QuadJet_noTag_CvB__52->SetBinContent(2,0.005012763);
   _QuadJet_noTag_CvB__52->SetBinContent(3,0.005167297);
   _QuadJet_noTag_CvB__52->SetBinContent(4,0.004925685);
   _QuadJet_noTag_CvB__52->SetBinContent(5,0.004461031);
   _QuadJet_noTag_CvB__52->SetBinContent(6,0.004690501);
   _QuadJet_noTag_CvB__52->SetBinContent(7,0.004830538);
   _QuadJet_noTag_CvB__52->SetBinContent(8,0.004950278);
   _QuadJet_noTag_CvB__52->SetBinContent(9,0.005140935);
   _QuadJet_noTag_CvB__52->SetBinContent(10,0.005405195);
   _QuadJet_noTag_CvB__52->SetEntries(0.0494121);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.505");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2912");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvB__52->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvB__52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_CvB__52->SetLineColor(ci);
   _QuadJet_noTag_CvB__52->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_CvB__52->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_CvB__52->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__52->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB__52->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__52->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_CvB__52->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__52->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__52->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvB__52->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvB__52->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvB__52->Draw("HIST");
   CvB_2017_QuadJet_noTag_17->Modified();
   CvB_2017_QuadJet_noTag_17->cd();
   CvB_2017_QuadJet_noTag_17->SetSelected(CvB_2017_QuadJet_noTag_17);
}
