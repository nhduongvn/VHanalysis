#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: CvB_2016_QuadJet_DoubleTag_16_ideal/CvB_2016_QuadJet_DoubleTag_16_ideal
//=========  (Tue Apr 25 23:03:10 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("CvB_2016_QuadJet_DoubleTag_16_ideal", "CvB_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   CvB_2016_QuadJet_DoubleTag_16_ideal->Range(-0.2183529,0.01839193,1.171633,0.02779583);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFillStyle(4000);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_CvB__316 = new TH1D("_QuadJet_DoubleTag_ideal_CvB__316","",10,0,1);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(1,0.02533661);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(2,0.02213565);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(3,0.02070521);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(4,0.02146532);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(5,0.01985306);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(6,0.02170439);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(7,0.02307917);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(8,0.02538362);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(9,0.02650615);
   _QuadJet_DoubleTag_ideal_CvB__316->SetBinContent(10,0.0264077);
   _QuadJet_DoubleTag_ideal_CvB__316->SetEntries(0.2325769);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5151");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2959");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_CvB__316->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_CvB__316);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_ideal_CvB__316->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_CvB__316->GetXaxis()->SetTitle("CvB tagging score");
   _QuadJet_DoubleTag_ideal_CvB__316->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_ideal_CvB__316->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB__316->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvB__316->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB__316->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_ideal_CvB__316->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB__316->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB__316->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_CvB__316->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_CvB__316->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_CvB__316->Draw("HIST");
   CvB_2016_QuadJet_DoubleTag_16_ideal->Modified();
   CvB_2016_QuadJet_DoubleTag_16_ideal->cd();
   CvB_2016_QuadJet_DoubleTag_16_ideal->SetSelected(CvB_2016_QuadJet_DoubleTag_16_ideal);
}
