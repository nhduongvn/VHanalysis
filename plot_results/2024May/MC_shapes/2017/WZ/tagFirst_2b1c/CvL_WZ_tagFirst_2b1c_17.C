#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WZ_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: CvL_WZ_tagFirst_2b1c_17/CvL_WZ_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CvL_WZ_tagFirst_2b1c_17 = new TCanvas("CvL_WZ_tagFirst_2b1c_17", "CvL_WZ_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WZ_tagFirst_2b1c_17->SetHighLightColor(2);
   CvL_WZ_tagFirst_2b1c_17->Range(-0.2,-67586.59,1.133333,608279.3);
   CvL_WZ_tagFirst_2b1c_17->SetFillColor(0);
   CvL_WZ_tagFirst_2b1c_17->SetFillStyle(4000);
   CvL_WZ_tagFirst_2b1c_17->SetBorderMode(0);
   CvL_WZ_tagFirst_2b1c_17->SetBorderSize(2);
   CvL_WZ_tagFirst_2b1c_17->SetLeftMargin(0.15);
   CvL_WZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CvL_WZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   CvL_WZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CvL_WZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__6746 = new TH1D("Jets_cut_CvL__6746","",20,0,1);
   Jets_cut_CvL__6746->SetBinContent(1,462300.4);
   Jets_cut_CvL__6746->SetBinContent(2,514945.4);
   Jets_cut_CvL__6746->SetBinContent(3,177344.4);
   Jets_cut_CvL__6746->SetBinContent(4,77870.82);
   Jets_cut_CvL__6746->SetBinContent(5,43567.64);
   Jets_cut_CvL__6746->SetBinContent(6,29958.77);
   Jets_cut_CvL__6746->SetBinContent(7,22623.68);
   Jets_cut_CvL__6746->SetBinContent(8,17959.24);
   Jets_cut_CvL__6746->SetBinContent(9,15278.12);
   Jets_cut_CvL__6746->SetBinContent(10,13841.85);
   Jets_cut_CvL__6746->SetBinContent(11,12930.65);
   Jets_cut_CvL__6746->SetBinContent(12,12235.64);
   Jets_cut_CvL__6746->SetBinContent(13,12064.62);
   Jets_cut_CvL__6746->SetBinContent(14,12300.32);
   Jets_cut_CvL__6746->SetBinContent(15,13349.36);
   Jets_cut_CvL__6746->SetBinContent(16,14902.71);
   Jets_cut_CvL__6746->SetBinContent(17,17207.35);
   Jets_cut_CvL__6746->SetBinContent(18,21516.03);
   Jets_cut_CvL__6746->SetBinContent(19,28501.93);
   Jets_cut_CvL__6746->SetBinContent(20,82721.98);
   Jets_cut_CvL__6746->SetBinError(1,326.0899);
   Jets_cut_CvL__6746->SetBinError(2,346.6425);
   Jets_cut_CvL__6746->SetBinError(3,209.6355);
   Jets_cut_CvL__6746->SetBinError(4,138.9226);
   Jets_cut_CvL__6746->SetBinError(5,103.968);
   Jets_cut_CvL__6746->SetBinError(6,86.17035);
   Jets_cut_CvL__6746->SetBinError(7,75.01902);
   Jets_cut_CvL__6746->SetBinError(8,66.83959);
   Jets_cut_CvL__6746->SetBinError(9,61.50783);
   Jets_cut_CvL__6746->SetBinError(10,58.53975);
   Jets_cut_CvL__6746->SetBinError(11,56.53031);
   Jets_cut_CvL__6746->SetBinError(12,54.78686);
   Jets_cut_CvL__6746->SetBinError(13,54.42719);
   Jets_cut_CvL__6746->SetBinError(14,55.01939);
   Jets_cut_CvL__6746->SetBinError(15,57.3602);
   Jets_cut_CvL__6746->SetBinError(16,60.56328);
   Jets_cut_CvL__6746->SetBinError(17,65.12591);
   Jets_cut_CvL__6746->SetBinError(18,73.03285);
   Jets_cut_CvL__6746->SetBinError(19,84.18242);
   Jets_cut_CvL__6746->SetBinError(20,141.3235);
   Jets_cut_CvL__6746->SetEntries(7822457);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__6746->SetLineColor(ci);
   Jets_cut_CvL__6746->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__6746->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__6746->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__6746->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__6746->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__6746->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__6746->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__6746->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__6746->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__6746->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__6746->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__6746->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__6746->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__6746->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__6746->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WZ_tagFirst_2b1c_17->Modified();
   CvL_WZ_tagFirst_2b1c_17->cd();
   CvL_WZ_tagFirst_2b1c_17->SetSelected(CvL_WZ_tagFirst_2b1c_17);
}
