#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: CvB_2018_QuadJet_noTag_18_ideal/CvB_2018_QuadJet_noTag_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2018_QuadJet_noTag_18_ideal = new TCanvas("CvB_2018_QuadJet_noTag_18_ideal", "CvB_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   CvB_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   CvB_2018_QuadJet_noTag_18_ideal->Range(-0.2183529,-0.001374795,1.171633,0.01008183);
   CvB_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   CvB_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   CvB_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   CvB_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   CvB_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   CvB_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvB__148 = new TH1D("_QuadJet_noTag_ideal_CvB__148","",10,0,1);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(1,0.003595946);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(2,0.006700168);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(3,0.001639344);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(4,0.003724395);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(5,0.008510638);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(6,0.005263158);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(7,0.006097561);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(8,0.003690037);
   _QuadJet_noTag_ideal_CvB__148->SetBinContent(9,0.007692308);
   _QuadJet_noTag_ideal_CvB__148->SetEntries(0.04691355);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.488");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2559");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvB__148->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvB__148);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_CvB__148->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvB__148->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_noTag_ideal_CvB__148->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_ideal_CvB__148->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__148->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB__148->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__148->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_CvB__148->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__148->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__148->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvB__148->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvB__148->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvB__148->Draw("HIST");
   CvB_2018_QuadJet_noTag_18_ideal->Modified();
   CvB_2018_QuadJet_noTag_18_ideal->cd();
   CvB_2018_QuadJet_noTag_18_ideal->SetSelected(CvB_2018_QuadJet_noTag_18_ideal);
}
