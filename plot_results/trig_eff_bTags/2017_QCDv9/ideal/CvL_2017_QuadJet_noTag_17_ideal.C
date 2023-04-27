#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_ideal()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_ideal/CvL_2017_QuadJet_noTag_17_ideal
//=========  (Thu Apr 27 10:19:54 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_ideal = new TCanvas("CvL_2017_QuadJet_noTag_17_ideal", "CvL_2017_QuadJet_noTag_17_ideal",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_ideal->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_ideal->Range(-0.2183529,0.002632719,1.171633,0.01590466);
   CvL_2017_QuadJet_noTag_17_ideal->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetFillStyle(4000);
   CvL_2017_QuadJet_noTag_17_ideal->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_ideal->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_noTag_17_ideal->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_noTag_17_ideal->SetBottomMargin(0.12);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL__154 = new TH1D("_QuadJet_noTag_ideal_CvL__154","",10,0,1);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(1,0.01030928);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(2,0.008928571);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(3,0.01408451);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(4,0.004694836);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(5,0.01321586);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(6,0.0125523);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(7,0.01355932);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(8,0.00968523);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(9,0.004754358);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(10,0.01006036);
   _QuadJet_noTag_ideal_CvL__154->SetEntries(0.1018446);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4865");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2757");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_ideal_CvL__154->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_ideal_CvL__154);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_ideal_CvL__154->SetLineColor(ci);
   _QuadJet_noTag_ideal_CvL__154->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_ideal_CvL__154->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_ideal_CvL__154->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__154->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__154->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__154->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_ideal_CvL__154->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__154->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__154->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_ideal_CvL__154->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_ideal_CvL__154->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_ideal_CvL__154->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_ideal->Modified();
   CvL_2017_QuadJet_noTag_17_ideal->cd();
   CvL_2017_QuadJet_noTag_17_ideal->SetSelected(CvL_2017_QuadJet_noTag_17_ideal);
}
