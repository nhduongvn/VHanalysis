#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18/CvB_2018_QuadJet_noTag_18
//=========  (Wed Apr 26 16:41:57 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18 = new TCanvas("CvB_2018_QuadJet_noTag_18", "CvB_2018_QuadJet_noTag_18",0,0,600,600);
   CvB_2018_QuadJet_noTag_18->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18->Range(-0.2183529,0.003352393,1.171633,0.00404543);
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
   
   TH1D *_QuadJet_noTag_CvB__52 = new TH1D("_QuadJet_noTag_CvB__52","",10,0,1);
   _QuadJet_noTag_CvB__52->SetBinContent(1,0.003791162);
   _QuadJet_noTag_CvB__52->SetBinContent(2,0.003695507);
   _QuadJet_noTag_CvB__52->SetBinContent(3,0.003941297);
   _QuadJet_noTag_CvB__52->SetBinContent(4,0.003725919);
   _QuadJet_noTag_CvB__52->SetBinContent(5,0.003460073);
   _QuadJet_noTag_CvB__52->SetBinContent(6,0.003799498);
   _QuadJet_noTag_CvB__52->SetBinContent(7,0.003928327);
   _QuadJet_noTag_CvB__52->SetBinContent(8,0.003827612);
   _QuadJet_noTag_CvB__52->SetBinContent(9,0.003950385);
   _QuadJet_noTag_CvB__52->SetBinContent(10,0.003825221);
   _QuadJet_noTag_CvB__52->SetEntries(0.037945);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5033");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2883");
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
   CvB_2018_QuadJet_noTag_18->Modified();
   CvB_2018_QuadJet_noTag_18->cd();
   CvB_2018_QuadJet_noTag_18->SetSelected(CvB_2018_QuadJet_noTag_18);
}
