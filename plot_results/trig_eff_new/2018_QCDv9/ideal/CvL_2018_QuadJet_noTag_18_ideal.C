#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18_ideal()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18_ideal/CvL_2018_QuadJet_noTag_18_ideal
//=========  (Tue Apr 25 23:01:42 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18_ideal = new TCanvas("CvL_2018_QuadJet_noTag_18_ideal", "CvL_2018_QuadJet_noTag_18_ideal",0,0,600,600);
   CvL_2018_QuadJet_noTag_18_ideal->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18_ideal->Range(-0.2183529,0.003840603,1.171633,0.006916118);
   CvL_2018_QuadJet_noTag_18_ideal->SetFillColor(0);
   CvL_2018_QuadJet_noTag_18_ideal->SetFillStyle(4000);
   CvL_2018_QuadJet_noTag_18_ideal->SetBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal->SetBorderSize(2);
   CvL_2018_QuadJet_noTag_18_ideal->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_noTag_18_ideal->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_noTag_18_ideal->SetBottomMargin(0.12);
   CvL_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTag_18_ideal->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_ideal_CvL__154 = new TH1D("_QuadJet_noTag_ideal_CvL__154","",10,0,1);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(1,0.005961499);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(2,0.005222237);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(3,0.004366251);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(4,0.005679471);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(5,0.006494333);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(6,0.004639773);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(7,0.004318459);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(8,0.005167528);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(9,0.004779751);
   _QuadJet_noTag_ideal_CvL__154->SetBinContent(10,0.004507661);
   _QuadJet_noTag_ideal_CvL__154->SetEntries(0.05113696);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4823");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2858");
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
   CvL_2018_QuadJet_noTag_18_ideal->Modified();
   CvL_2018_QuadJet_noTag_18_ideal->cd();
   CvL_2018_QuadJet_noTag_18_ideal->SetSelected(CvL_2018_QuadJet_noTag_18_ideal);
}
