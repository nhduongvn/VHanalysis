#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18/CvL_2018_QuadJet_noTag_18
//=========  (Tue Apr 18 16:14:02 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18 = new TCanvas("CvL_2018_QuadJet_noTag_18", "CvL_2018_QuadJet_noTag_18",0,0,600,600);
   CvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18->Range(-0.2183529,-0.1615385,1.171633,1.184615);
   CvL_2018_QuadJet_noTag_18->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18->SetFillStyle(4000);
   CvL_2018_QuadJet_noTag_18->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_noTag_18->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_noTag_18->SetBottomMargin(0.12);
   CvL_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL__190 = new TH1D("_QuadJet_noTag_CvL__190","",10,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvL__190->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvL__190);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_CvL__190->SetLineColor(ci);
   _QuadJet_noTag_CvL__190->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_CvL__190->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_CvL__190->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__190->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__190->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__190->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_CvL__190->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__190->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__190->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__190->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__190->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__190->Draw("HIST");
   CvL_2018_QuadJet_noTag_18->Modified();
   CvL_2018_QuadJet_noTag_18->cd();
   CvL_2018_QuadJet_noTag_18->SetSelected(CvL_2018_QuadJet_noTag_18);
}
