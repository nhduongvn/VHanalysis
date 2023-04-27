#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17/CvL_2017_QuadJet_noTag_17
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17 = new TCanvas("CvL_2017_QuadJet_noTag_17", "CvL_2017_QuadJet_noTag_17",0,0,600,600);
   CvL_2017_QuadJet_noTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17->Range(-0.2183529,0.004547257,1.171633,0.005451866);
   CvL_2017_QuadJet_noTag_17->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17->SetFillStyle(4000);
   CvL_2017_QuadJet_noTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17->SetLeftMargin(0.15709);
   CvL_2017_QuadJet_noTag_17->SetRightMargin(0.1234783);
   CvL_2017_QuadJet_noTag_17->SetBottomMargin(0.12);
   CvL_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17->SetFrameFillStyle(1000);
   CvL_2017_QuadJet_noTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_CvL__46 = new TH1D("_QuadJet_noTag_CvL__46","",10,0,1);
   _QuadJet_noTag_CvL__46->SetBinContent(1,0.005115193);
   _QuadJet_noTag_CvL__46->SetBinContent(2,0.005022583);
   _QuadJet_noTag_CvL__46->SetBinContent(3,0.00478256);
   _QuadJet_noTag_CvL__46->SetBinContent(4,0.005282022);
   _QuadJet_noTag_CvL__46->SetBinContent(5,0.004741073);
   _QuadJet_noTag_CvL__46->SetBinContent(6,0.004687809);
   _QuadJet_noTag_CvL__46->SetBinContent(7,0.005327805);
   _QuadJet_noTag_CvL__46->SetBinContent(8,0.00506877);
   _QuadJet_noTag_CvL__46->SetBinContent(9,0.004921816);
   _QuadJet_noTag_CvL__46->SetBinContent(10,0.004950319);
   _QuadJet_noTag_CvL__46->SetEntries(0.04989995);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4993");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2878");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_CvL__46->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_CvL__46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_noTag_CvL__46->SetLineColor(ci);
   _QuadJet_noTag_CvL__46->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_CvL__46->GetXaxis()->SetRange(1,100);
   _QuadJet_noTag_CvL__46->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__46->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__46->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__46->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_noTag_CvL__46->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__46->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__46->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_CvL__46->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_CvL__46->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_CvL__46->Draw("HIST");
   CvL_2017_QuadJet_noTag_17->Modified();
   CvL_2017_QuadJet_noTag_17->cd();
   CvL_2017_QuadJet_noTag_17->SetSelected(CvL_2017_QuadJet_noTag_17);
}
