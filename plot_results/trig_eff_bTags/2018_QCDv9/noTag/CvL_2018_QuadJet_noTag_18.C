#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_QuadJet_noTag_18()
{
//=========Macro generated from canvas: CvL_2018_QuadJet_noTag_18/CvL_2018_QuadJet_noTag_18
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_QuadJet_noTag_18 = new TCanvas("CvL_2018_QuadJet_noTag_18", "CvL_2018_QuadJet_noTag_18",0,0,600,600);
   CvL_2018_QuadJet_noTag_18->SetHighLightColor(2);
   CvL_2018_QuadJet_noTag_18->Range(-0.2183529,0.003433656,1.171633,0.004244663);
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
   
   TH1D *_QuadJet_noTag_CvL__46 = new TH1D("_QuadJet_noTag_CvL__46","",10,0,1);
   _QuadJet_noTag_CvL__46->SetBinContent(1,0.003814288);
   _QuadJet_noTag_CvL__46->SetBinContent(2,0.004133439);
   _QuadJet_noTag_CvL__46->SetBinContent(3,0.003851186);
   _QuadJet_noTag_CvL__46->SetBinContent(4,0.003924284);
   _QuadJet_noTag_CvL__46->SetBinContent(5,0.003996724);
   _QuadJet_noTag_CvL__46->SetBinContent(6,0.003559666);
   _QuadJet_noTag_CvL__46->SetBinContent(7,0.003932328);
   _QuadJet_noTag_CvL__46->SetBinContent(8,0.003994343);
   _QuadJet_noTag_CvL__46->SetBinContent(9,0.003759118);
   _QuadJet_noTag_CvL__46->SetBinContent(10,0.003682185);
   _QuadJet_noTag_CvL__46->SetEntries(0.03864756);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4955");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2864");
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
   CvL_2018_QuadJet_noTag_18->Modified();
   CvL_2018_QuadJet_noTag_18->cd();
   CvL_2018_QuadJet_noTag_18->SetSelected(CvL_2018_QuadJet_noTag_18);
}
