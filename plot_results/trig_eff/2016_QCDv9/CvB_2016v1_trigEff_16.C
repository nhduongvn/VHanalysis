#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_2016v1_trigEff_16()
{
//=========Macro generated from canvas: CvB_2016v1_trigEff_16/CvB_2016v1_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *CvB_2016v1_trigEff_16 = new TCanvas("CvB_2016v1_trigEff_16", "CvB_2016v1_trigEff_16",0,0,600,600);
   CvB_2016v1_trigEff_16->SetHighLightColor(2);
   CvB_2016v1_trigEff_16->Range(-0.2183529,0.04879487,1.171633,0.1853935);
   CvB_2016v1_trigEff_16->SetFillColor(0);
   CvB_2016v1_trigEff_16->SetFillStyle(4000);
   CvB_2016v1_trigEff_16->SetBorderMode(0);
   CvB_2016v1_trigEff_16->SetBorderSize(2);
   CvB_2016v1_trigEff_16->SetLeftMargin(0.15709);
   CvB_2016v1_trigEff_16->SetRightMargin(0.1234783);
   CvB_2016v1_trigEff_16->SetBottomMargin(0.12);
   CvB_2016v1_trigEff_16->SetFrameFillStyle(1000);
   CvB_2016v1_trigEff_16->SetFrameBorderMode(0);
   CvB_2016v1_trigEff_16->SetFrameFillStyle(1000);
   CvB_2016v1_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v1_trigEff_CvB__29 = new TH1D("v1_trigEff_CvB__29","",10,0,1);
   v1_trigEff_CvB__29->SetBinContent(1,0.16666);
   v1_trigEff_CvB__29->SetBinContent(2,0.1544697);
   v1_trigEff_CvB__29->SetBinContent(3,0.1473231);
   v1_trigEff_CvB__29->SetBinContent(4,0.1335092);
   v1_trigEff_CvB__29->SetBinContent(5,0.1229557);
   v1_trigEff_CvB__29->SetBinContent(6,0.1096862);
   v1_trigEff_CvB__29->SetBinContent(7,0.09703267);
   v1_trigEff_CvB__29->SetBinContent(8,0.08114);
   v1_trigEff_CvB__29->SetBinContent(9,0.07001876);
   v1_trigEff_CvB__29->SetBinContent(10,0.07051105);
   v1_trigEff_CvB__29->SetEntries(1.153306);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v1_trigEff_CvB");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4172");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2757");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v1_trigEff_CvB__29->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v1_trigEff_CvB__29);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v1_trigEff_CvB__29->SetLineColor(ci);
   v1_trigEff_CvB__29->GetXaxis()->SetTitle("CvB tagging score");
   v1_trigEff_CvB__29->GetXaxis()->SetRange(1,100);
   v1_trigEff_CvB__29->GetXaxis()->SetLabelFont(42);
   v1_trigEff_CvB__29->GetXaxis()->SetTitleOffset(1);
   v1_trigEff_CvB__29->GetXaxis()->SetTitleFont(42);
   v1_trigEff_CvB__29->GetYaxis()->SetTitle("Efficiency");
   v1_trigEff_CvB__29->GetYaxis()->SetLabelFont(42);
   v1_trigEff_CvB__29->GetYaxis()->SetTitleFont(42);
   v1_trigEff_CvB__29->GetZaxis()->SetLabelFont(42);
   v1_trigEff_CvB__29->GetZaxis()->SetTitleOffset(1);
   v1_trigEff_CvB__29->GetZaxis()->SetTitleFont(42);
   v1_trigEff_CvB__29->Draw("HIST");
   CvB_2016v1_trigEff_16->Modified();
   CvB_2016v1_trigEff_16->cd();
   CvB_2016v1_trigEff_16->SetSelected(CvB_2016v1_trigEff_16);
}
