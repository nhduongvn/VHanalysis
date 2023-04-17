#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016v1_trigEff_16()
{
//=========Macro generated from canvas: CvL_2016v1_trigEff_16/CvL_2016v1_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016v1_trigEff_16 = new TCanvas("CvL_2016v1_trigEff_16", "CvL_2016v1_trigEff_16",0,0,600,600);
   CvL_2016v1_trigEff_16->SetHighLightColor(2);
   CvL_2016v1_trigEff_16->Range(-0.2183529,0.04042383,1.171633,0.1980693);
   CvL_2016v1_trigEff_16->SetFillColor(0);
   CvL_2016v1_trigEff_16->SetFillStyle(4000);
   CvL_2016v1_trigEff_16->SetBorderMode(0);
   CvL_2016v1_trigEff_16->SetBorderSize(2);
   CvL_2016v1_trigEff_16->SetLeftMargin(0.15709);
   CvL_2016v1_trigEff_16->SetRightMargin(0.1234783);
   CvL_2016v1_trigEff_16->SetBottomMargin(0.12);
   CvL_2016v1_trigEff_16->SetFrameFillStyle(1000);
   CvL_2016v1_trigEff_16->SetFrameBorderMode(0);
   CvL_2016v1_trigEff_16->SetFrameFillStyle(1000);
   CvL_2016v1_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v1_trigEff_CvL__25 = new TH1D("v1_trigEff_CvL__25","",10,0,1);
   v1_trigEff_CvL__25->SetBinContent(1,0.06491786);
   v1_trigEff_CvL__25->SetBinContent(2,0.08963652);
   v1_trigEff_CvL__25->SetBinContent(3,0.1069396);
   v1_trigEff_CvL__25->SetBinContent(4,0.1192272);
   v1_trigEff_CvL__25->SetBinContent(5,0.1275708);
   v1_trigEff_CvL__25->SetBinContent(6,0.1349456);
   v1_trigEff_CvL__25->SetBinContent(7,0.1439935);
   v1_trigEff_CvL__25->SetBinContent(8,0.1517273);
   v1_trigEff_CvL__25->SetBinContent(9,0.1625249);
   v1_trigEff_CvL__25->SetBinContent(10,0.1764494);
   v1_trigEff_CvL__25->SetEntries(1.277933);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v1_trigEff_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5712");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2741");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v1_trigEff_CvL__25->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v1_trigEff_CvL__25);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v1_trigEff_CvL__25->SetLineColor(ci);
   v1_trigEff_CvL__25->GetXaxis()->SetTitle("CvL tagging score");
   v1_trigEff_CvL__25->GetXaxis()->SetRange(1,100);
   v1_trigEff_CvL__25->GetXaxis()->SetLabelFont(42);
   v1_trigEff_CvL__25->GetXaxis()->SetTitleOffset(1);
   v1_trigEff_CvL__25->GetXaxis()->SetTitleFont(42);
   v1_trigEff_CvL__25->GetYaxis()->SetTitle("Efficiency");
   v1_trigEff_CvL__25->GetYaxis()->SetLabelFont(42);
   v1_trigEff_CvL__25->GetYaxis()->SetTitleFont(42);
   v1_trigEff_CvL__25->GetZaxis()->SetLabelFont(42);
   v1_trigEff_CvL__25->GetZaxis()->SetTitleOffset(1);
   v1_trigEff_CvL__25->GetZaxis()->SetTitleFont(42);
   v1_trigEff_CvL__25->Draw("HIST");
   CvL_2016v1_trigEff_16->Modified();
   CvL_2016v1_trigEff_16->cd();
   CvL_2016v1_trigEff_16->SetSelected(CvL_2016v1_trigEff_16);
}
