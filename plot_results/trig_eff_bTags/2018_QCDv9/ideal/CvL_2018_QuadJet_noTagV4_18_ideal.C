#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTagV4_18_ideal()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTagV4_18_ideal/CvL_2018_QuadJet_noTagV4_18_ideal
//=========  (Tue May  2 10:29:48 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTagV4_18_ideal = new TCanvas("CvL_2018_QuadJet_noTagV4_18_ideal", "CvL_2018_QuadJet_noTagV4_18_ideal",0,0,600,600);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetHighLightColor(2);
   CvL_2018_QuadJet_noTagV4_18_ideal->Range(-0.2183529,-0.0005227782,1.171633,0.003833707);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetFillColor(0);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetFillStyle(4000);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetBorderMode(0);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetBorderSize(2);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetLeftMargin(0.15709);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetRightMargin(0.1234783);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetBottomMargin(0.12);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetFrameBorderMode(0);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetFrameFillStyle(1000);
   CvL_2018_QuadJet_noTagV4_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV4_ideal_CvL__139 = new TH1D("_QuadJet_noTagV4_ideal_CvL__139","",10,0,1);
   _QuadJet_noTagV4_ideal_CvL__139->SetBinContent(8,0.002702703);
   _QuadJet_noTagV4_ideal_CvL__139->SetBinContent(9,0.003236246);
   _QuadJet_noTagV4_ideal_CvL__139->SetBinContent(10,0.0007331378);
   _QuadJet_noTagV4_ideal_CvL__139->SetEntries(0.006672086);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV4_ideal_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.8205");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.06541");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV4_ideal_CvL__139->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV4_ideal_CvL__139);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTagV4_ideal_CvL__139->SetLineColor(ci);
   _QuadJet_noTagV4_ideal_CvL__139->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTagV4_ideal_CvL__139->GetXaxis()->SetRange(1,100);
   _QuadJet_noTagV4_ideal_CvL__139->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_CvL__139->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV4_ideal_CvL__139->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_CvL__139->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTagV4_ideal_CvL__139->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_CvL__139->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_CvL__139->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_CvL__139->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV4_ideal_CvL__139->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_CvL__139->Draw("HIST");
   CvL_2018_QuadJet_noTagV4_18_ideal->Modified();
   CvL_2018_QuadJet_noTagV4_18_ideal->cd();
   CvL_2018_QuadJet_noTagV4_18_ideal->SetSelected(CvL_2018_QuadJet_noTagV4_18_ideal);
}
