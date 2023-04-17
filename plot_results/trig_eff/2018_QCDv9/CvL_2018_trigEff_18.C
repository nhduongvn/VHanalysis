#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2018_trigEff_18()
{
//=========Macro generated from canvas: CvL_2018_trigEff_18/CvL_2018_trigEff_18
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *CvL_2018_trigEff_18 = new TCanvas("CvL_2018_trigEff_18", "CvL_2018_trigEff_18",0,0,600,600);
   CvL_2018_trigEff_18->SetHighLightColor(2);
   CvL_2018_trigEff_18->Range(-0.2183529,-0.1615385,1.171633,1.184615);
   CvL_2018_trigEff_18->SetFillColor(0);
   CvL_2018_trigEff_18->SetFillStyle(4000);
   CvL_2018_trigEff_18->SetBorderMode(0);
   CvL_2018_trigEff_18->SetBorderSize(2);
   CvL_2018_trigEff_18->SetLeftMargin(0.15709);
   CvL_2018_trigEff_18->SetRightMargin(0.1234783);
   CvL_2018_trigEff_18->SetBottomMargin(0.12);
   CvL_2018_trigEff_18->SetFrameFillStyle(1000);
   CvL_2018_trigEff_18->SetFrameBorderMode(0);
   CvL_2018_trigEff_18->SetFrameFillStyle(1000);
   CvL_2018_trigEff_18->SetFrameBorderMode(0);
   
   TH1D *_trigEff_CvL__28 = new TH1D("_trigEff_CvL__28","",10,0,1);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_trigEff_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =      0");
   ptstats_LaTex = ptstats->AddText("Std Dev   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_CvL__28->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_CvL__28);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_CvL__28->SetLineColor(ci);
   _trigEff_CvL__28->GetXaxis()->SetTitle("CvL tagging score");
   _trigEff_CvL__28->GetXaxis()->SetRange(1,100);
   _trigEff_CvL__28->GetXaxis()->SetLabelFont(42);
   _trigEff_CvL__28->GetXaxis()->SetTitleOffset(1);
   _trigEff_CvL__28->GetXaxis()->SetTitleFont(42);
   _trigEff_CvL__28->GetYaxis()->SetTitle("Efficiency");
   _trigEff_CvL__28->GetYaxis()->SetLabelFont(42);
   _trigEff_CvL__28->GetYaxis()->SetTitleFont(42);
   _trigEff_CvL__28->GetZaxis()->SetLabelFont(42);
   _trigEff_CvL__28->GetZaxis()->SetTitleOffset(1);
   _trigEff_CvL__28->GetZaxis()->SetTitleFont(42);
   _trigEff_CvL__28->Draw("HIST");
   CvL_2018_trigEff_18->Modified();
   CvL_2018_trigEff_18->cd();
   CvL_2018_trigEff_18->SetSelected(CvL_2018_trigEff_18);
}
