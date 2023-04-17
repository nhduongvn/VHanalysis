#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_trigEff_17()
{
//=========Macro generated from canvas: CvL_2017_trigEff_17/CvL_2017_trigEff_17
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_trigEff_17 = new TCanvas("CvL_2017_trigEff_17", "CvL_2017_trigEff_17",0,0,600,600);
   CvL_2017_trigEff_17->SetHighLightColor(2);
   CvL_2017_trigEff_17->Range(-0.2183529,0.006781901,1.171633,0.07298296);
   CvL_2017_trigEff_17->SetFillColor(0);
   CvL_2017_trigEff_17->SetFillStyle(4000);
   CvL_2017_trigEff_17->SetBorderMode(0);
   CvL_2017_trigEff_17->SetBorderSize(2);
   CvL_2017_trigEff_17->SetLeftMargin(0.15709);
   CvL_2017_trigEff_17->SetRightMargin(0.1234783);
   CvL_2017_trigEff_17->SetBottomMargin(0.12);
   CvL_2017_trigEff_17->SetFrameFillStyle(1000);
   CvL_2017_trigEff_17->SetFrameBorderMode(0);
   CvL_2017_trigEff_17->SetFrameFillStyle(1000);
   CvL_2017_trigEff_17->SetFrameBorderMode(0);
   
   TH1D *_trigEff_CvL__27 = new TH1D("_trigEff_CvL__27","",10,0,1);
   _trigEff_CvL__27->SetBinContent(1,0.01706783);
   _trigEff_CvL__27->SetBinContent(2,0.02349474);
   _trigEff_CvL__27->SetBinContent(3,0.02833862);
   _trigEff_CvL__27->SetBinContent(4,0.03196708);
   _trigEff_CvL__27->SetBinContent(5,0.03437596);
   _trigEff_CvL__27->SetBinContent(6,0.03778857);
   _trigEff_CvL__27->SetBinContent(7,0.04338682);
   _trigEff_CvL__27->SetBinContent(8,0.04823707);
   _trigEff_CvL__27->SetBinContent(9,0.05403854);
   _trigEff_CvL__27->SetBinContent(10,0.06390396);
   _trigEff_CvL__27->SetEntries(0.3825992);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_trigEff_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  0.601");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2737");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_CvL__27->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_CvL__27);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_CvL__27->SetLineColor(ci);
   _trigEff_CvL__27->GetXaxis()->SetTitle("CvL tagging score");
   _trigEff_CvL__27->GetXaxis()->SetRange(1,100);
   _trigEff_CvL__27->GetXaxis()->SetLabelFont(42);
   _trigEff_CvL__27->GetXaxis()->SetTitleOffset(1);
   _trigEff_CvL__27->GetXaxis()->SetTitleFont(42);
   _trigEff_CvL__27->GetYaxis()->SetTitle("Efficiency");
   _trigEff_CvL__27->GetYaxis()->SetLabelFont(42);
   _trigEff_CvL__27->GetYaxis()->SetTitleFont(42);
   _trigEff_CvL__27->GetZaxis()->SetLabelFont(42);
   _trigEff_CvL__27->GetZaxis()->SetTitleOffset(1);
   _trigEff_CvL__27->GetZaxis()->SetTitleFont(42);
   _trigEff_CvL__27->Draw("HIST");
   CvL_2017_trigEff_17->Modified();
   CvL_2017_trigEff_17->cd();
   CvL_2017_trigEff_17->SetSelected(CvL_2017_trigEff_17);
}
