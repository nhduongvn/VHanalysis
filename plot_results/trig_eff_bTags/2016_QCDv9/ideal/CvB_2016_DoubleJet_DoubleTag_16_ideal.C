#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_DoubleJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: CvB_2016_DoubleJet_DoubleTag_16_ideal/CvB_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:48 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("CvB_2016_DoubleJet_DoubleTag_16_ideal", "CvB_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->Range(-0.2183529,0.008877318,1.171633,0.06983537);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFillStyle(4000);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_CvB__322 = new TH1D("_DoubleJet_DoubleTag_ideal_CvB__322","",10,0,1);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(1,0.03950617);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(2,0.03272727);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(3,0.028);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(4,0.06147541);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(5,0.04663212);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(6,0.03401361);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(7,0.01834862);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(8,0.02325581);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(9,0.0375);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetBinContent(10,0.04545455);
   _DoubleJet_DoubleTag_ideal_CvB__322->SetEntries(0.3669136);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4893");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2905");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_CvB__322->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_CvB__322);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_ideal_CvB__322->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetXaxis()->SetTitle("CvB tagging score");
   _DoubleJet_DoubleTag_ideal_CvB__322->GetXaxis()->SetRange(1,100);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_ideal_CvB__322->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_CvB__322->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_CvB__322->Draw("HIST");
   CvB_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   CvB_2016_DoubleJet_DoubleTag_16_ideal->cd();
   CvB_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(CvB_2016_DoubleJet_DoubleTag_16_ideal);
}
