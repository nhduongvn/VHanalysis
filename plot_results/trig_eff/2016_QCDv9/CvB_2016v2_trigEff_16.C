#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016v2_trigEff_16()
{
//=========Macro generated from canvas: CvB_2016v2_trigEff_16/CvB_2016v2_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016v2_trigEff_16 = new TCanvas("CvB_2016v2_trigEff_16", "CvB_2016v2_trigEff_16",0,0,600,600);
   CvB_2016v2_trigEff_16->SetHighLightColor(2);
   CvB_2016v2_trigEff_16->Range(-0.2183529,0.03590098,1.171633,0.1390532);
   CvB_2016v2_trigEff_16->SetFillColor(0);
   CvB_2016v2_trigEff_16->SetFillStyle(4000);
   CvB_2016v2_trigEff_16->SetBorderMode(0);
   CvB_2016v2_trigEff_16->SetBorderSize(2);
   CvB_2016v2_trigEff_16->SetLeftMargin(0.15709);
   CvB_2016v2_trigEff_16->SetRightMargin(0.1234783);
   CvB_2016v2_trigEff_16->SetBottomMargin(0.12);
   CvB_2016v2_trigEff_16->SetFrameFillStyle(1000);
   CvB_2016v2_trigEff_16->SetFrameBorderMode(0);
   CvB_2016v2_trigEff_16->SetFrameFillStyle(1000);
   CvB_2016v2_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v2_trigEff_CvB__30 = new TH1D("v2_trigEff_CvB__30","",10,0,1);
   v2_trigEff_CvB__30->SetBinContent(1,0.1249066);
   v2_trigEff_CvB__30->SetBinContent(2,0.1169615);
   v2_trigEff_CvB__30->SetBinContent(3,0.1123761);
   v2_trigEff_CvB__30->SetBinContent(4,0.1019454);
   v2_trigEff_CvB__30->SetBinContent(5,0.0937832);
   v2_trigEff_CvB__30->SetBinContent(6,0.08436897);
   v2_trigEff_CvB__30->SetBinContent(7,0.07415041);
   v2_trigEff_CvB__30->SetBinContent(8,0.0627759);
   v2_trigEff_CvB__30->SetBinContent(9,0.053847);
   v2_trigEff_CvB__30->SetBinContent(10,0.05192817);
   v2_trigEff_CvB__30->SetEntries(0.8770433);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v2_trigEff_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4179");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2747");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v2_trigEff_CvB__30->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v2_trigEff_CvB__30);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v2_trigEff_CvB__30->SetLineColor(ci);
   v2_trigEff_CvB__30->GetXaxis()->SetTitle("CvB tagging score");
   v2_trigEff_CvB__30->GetXaxis()->SetRange(1,100);
   v2_trigEff_CvB__30->GetXaxis()->SetLabelFont(42);
   v2_trigEff_CvB__30->GetXaxis()->SetTitleOffset(1);
   v2_trigEff_CvB__30->GetXaxis()->SetTitleFont(42);
   v2_trigEff_CvB__30->GetYaxis()->SetTitle("Efficiency");
   v2_trigEff_CvB__30->GetYaxis()->SetLabelFont(42);
   v2_trigEff_CvB__30->GetYaxis()->SetTitleFont(42);
   v2_trigEff_CvB__30->GetZaxis()->SetLabelFont(42);
   v2_trigEff_CvB__30->GetZaxis()->SetTitleOffset(1);
   v2_trigEff_CvB__30->GetZaxis()->SetTitleFont(42);
   v2_trigEff_CvB__30->Draw("HIST");
   CvB_2016v2_trigEff_16->Modified();
   CvB_2016v2_trigEff_16->cd();
   CvB_2016v2_trigEff_16->SetSelected(CvB_2016v2_trigEff_16);
}
