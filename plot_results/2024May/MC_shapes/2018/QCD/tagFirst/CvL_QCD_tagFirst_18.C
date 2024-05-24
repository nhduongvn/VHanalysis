#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_QCD_tagFirst_18()
{
//=========Macro generated from canvas: CvL_QCD_tagFirst_18/CvL_QCD_tagFirst_18
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CvL_QCD_tagFirst_18 = new TCanvas("CvL_QCD_tagFirst_18", "CvL_QCD_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_QCD_tagFirst_18->SetHighLightColor(2);
   CvL_QCD_tagFirst_18->Range(-0.2,-6.994281e+10,1.133333,6.294852e+11);
   CvL_QCD_tagFirst_18->SetFillColor(0);
   CvL_QCD_tagFirst_18->SetFillStyle(4000);
   CvL_QCD_tagFirst_18->SetBorderMode(0);
   CvL_QCD_tagFirst_18->SetBorderSize(2);
   CvL_QCD_tagFirst_18->SetLeftMargin(0.15);
   CvL_QCD_tagFirst_18->SetFrameFillStyle(1000);
   CvL_QCD_tagFirst_18->SetFrameBorderMode(0);
   CvL_QCD_tagFirst_18->SetFrameFillStyle(1000);
   CvL_QCD_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__4389 = new TH1D("Jets_cut_CvL__4389","",20,0,1);
   Jets_cut_CvL__4389->SetBinContent(1,5.328975e+11);
   Jets_cut_CvL__4389->SetBinContent(2,4.07498e+11);
   Jets_cut_CvL__4389->SetBinContent(3,1.314167e+11);
   Jets_cut_CvL__4389->SetBinContent(4,5.126804e+10);
   Jets_cut_CvL__4389->SetBinContent(5,2.666097e+10);
   Jets_cut_CvL__4389->SetBinContent(6,1.691678e+10);
   Jets_cut_CvL__4389->SetBinContent(7,1.178799e+10);
   Jets_cut_CvL__4389->SetBinContent(8,8.605014e+09);
   Jets_cut_CvL__4389->SetBinContent(9,6.821704e+09);
   Jets_cut_CvL__4389->SetBinContent(10,5.701941e+09);
   Jets_cut_CvL__4389->SetBinContent(11,4.949873e+09);
   Jets_cut_CvL__4389->SetBinContent(12,4.339969e+09);
   Jets_cut_CvL__4389->SetBinContent(13,3.974021e+09);
   Jets_cut_CvL__4389->SetBinContent(14,3.844353e+09);
   Jets_cut_CvL__4389->SetBinContent(15,3.928187e+09);
   Jets_cut_CvL__4389->SetBinContent(16,4.212772e+09);
   Jets_cut_CvL__4389->SetBinContent(17,4.662298e+09);
   Jets_cut_CvL__4389->SetBinContent(18,5.655105e+09);
   Jets_cut_CvL__4389->SetBinContent(19,7.563341e+09);
   Jets_cut_CvL__4389->SetBinContent(20,2.149373e+10);
   Jets_cut_CvL__4389->SetBinError(1,1.127703e+08);
   Jets_cut_CvL__4389->SetBinError(2,9.635246e+07);
   Jets_cut_CvL__4389->SetBinError(3,6.463881e+07);
   Jets_cut_CvL__4389->SetBinError(4,3.980355e+07);
   Jets_cut_CvL__4389->SetBinError(5,2.889063e+07);
   Jets_cut_CvL__4389->SetBinError(6,2.317288e+07);
   Jets_cut_CvL__4389->SetBinError(7,1.925158e+07);
   Jets_cut_CvL__4389->SetBinError(8,1.615258e+07);
   Jets_cut_CvL__4389->SetBinError(9,1.471227e+07);
   Jets_cut_CvL__4389->SetBinError(10,1.313147e+07);
   Jets_cut_CvL__4389->SetBinError(11,1.288357e+07);
   Jets_cut_CvL__4389->SetBinError(12,1.166882e+07);
   Jets_cut_CvL__4389->SetBinError(13,1.068112e+07);
   Jets_cut_CvL__4389->SetBinError(14,1.040924e+07);
   Jets_cut_CvL__4389->SetBinError(15,1.042068e+07);
   Jets_cut_CvL__4389->SetBinError(16,1.041264e+07);
   Jets_cut_CvL__4389->SetBinError(17,1.097398e+07);
   Jets_cut_CvL__4389->SetBinError(18,1.176371e+07);
   Jets_cut_CvL__4389->SetBinError(19,1.348707e+07);
   Jets_cut_CvL__4389->SetBinError(20,2.267587e+07);
   Jets_cut_CvL__4389->SetEntries(7.315384e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__4389->SetLineColor(ci);
   Jets_cut_CvL__4389->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__4389->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__4389->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__4389->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4389->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__4389->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__4389->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__4389->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__4389->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__4389->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__4389->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__4389->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__4389->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4389->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__4389->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_QCD_tagFirst_18->Modified();
   CvL_QCD_tagFirst_18->cd();
   CvL_QCD_tagFirst_18->SetSelected(CvL_QCD_tagFirst_18);
}
