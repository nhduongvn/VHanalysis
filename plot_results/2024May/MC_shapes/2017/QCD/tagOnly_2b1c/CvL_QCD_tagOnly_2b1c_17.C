#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_QCD_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: CvL_QCD_tagOnly_2b1c_17/CvL_QCD_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvL_QCD_tagOnly_2b1c_17 = new TCanvas("CvL_QCD_tagOnly_2b1c_17", "CvL_QCD_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_QCD_tagOnly_2b1c_17->SetHighLightColor(2);
   CvL_QCD_tagOnly_2b1c_17->Range(-0.2,-4.384838e+10,1.133333,3.946354e+11);
   CvL_QCD_tagOnly_2b1c_17->SetFillColor(0);
   CvL_QCD_tagOnly_2b1c_17->SetFillStyle(4000);
   CvL_QCD_tagOnly_2b1c_17->SetBorderMode(0);
   CvL_QCD_tagOnly_2b1c_17->SetBorderSize(2);
   CvL_QCD_tagOnly_2b1c_17->SetLeftMargin(0.15);
   CvL_QCD_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   CvL_QCD_tagOnly_2b1c_17->SetFrameBorderMode(0);
   CvL_QCD_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   CvL_QCD_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__7508 = new TH1D("Jets_cut_CvL__7508","",20,0,1);
   Jets_cut_CvL__7508->SetBinContent(1,3.340829e+11);
   Jets_cut_CvL__7508->SetBinContent(2,2.620422e+11);
   Jets_cut_CvL__7508->SetBinContent(3,7.233752e+10);
   Jets_cut_CvL__7508->SetBinContent(4,2.882074e+10);
   Jets_cut_CvL__7508->SetBinContent(5,1.52294e+10);
   Jets_cut_CvL__7508->SetBinContent(6,9.804775e+09);
   Jets_cut_CvL__7508->SetBinContent(7,6.892613e+09);
   Jets_cut_CvL__7508->SetBinContent(8,5.04046e+09);
   Jets_cut_CvL__7508->SetBinContent(9,4.024636e+09);
   Jets_cut_CvL__7508->SetBinContent(10,3.398075e+09);
   Jets_cut_CvL__7508->SetBinContent(11,2.951414e+09);
   Jets_cut_CvL__7508->SetBinContent(12,2.622683e+09);
   Jets_cut_CvL__7508->SetBinContent(13,2.410709e+09);
   Jets_cut_CvL__7508->SetBinContent(14,2.342326e+09);
   Jets_cut_CvL__7508->SetBinContent(15,2.421993e+09);
   Jets_cut_CvL__7508->SetBinContent(16,2.620035e+09);
   Jets_cut_CvL__7508->SetBinContent(17,2.906962e+09);
   Jets_cut_CvL__7508->SetBinContent(18,3.578616e+09);
   Jets_cut_CvL__7508->SetBinContent(19,4.81577e+09);
   Jets_cut_CvL__7508->SetBinContent(20,1.388681e+10);
   Jets_cut_CvL__7508->SetBinError(1,6.771585e+07);
   Jets_cut_CvL__7508->SetBinError(2,5.994677e+07);
   Jets_cut_CvL__7508->SetBinError(3,3.25808e+07);
   Jets_cut_CvL__7508->SetBinError(4,2.055029e+07);
   Jets_cut_CvL__7508->SetBinError(5,1.494084e+07);
   Jets_cut_CvL__7508->SetBinError(6,1.200929e+07);
   Jets_cut_CvL__7508->SetBinError(7,1.01037e+07);
   Jets_cut_CvL__7508->SetBinError(8,8646806);
   Jets_cut_CvL__7508->SetBinError(9,7727569);
   Jets_cut_CvL__7508->SetBinError(10,7098009);
   Jets_cut_CvL__7508->SetBinError(11,6579926);
   Jets_cut_CvL__7508->SetBinError(12,6190740);
   Jets_cut_CvL__7508->SetBinError(13,5902739);
   Jets_cut_CvL__7508->SetBinError(14,5803931);
   Jets_cut_CvL__7508->SetBinError(15,5873446);
   Jets_cut_CvL__7508->SetBinError(16,6086961);
   Jets_cut_CvL__7508->SetBinError(17,6376311);
   Jets_cut_CvL__7508->SetBinError(18,7052764);
   Jets_cut_CvL__7508->SetBinError(19,8148543);
   Jets_cut_CvL__7508->SetBinError(20,1.372358e+07);
   Jets_cut_CvL__7508->SetEntries(6.773086e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__7508->SetLineColor(ci);
   Jets_cut_CvL__7508->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__7508->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__7508->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__7508->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__7508->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__7508->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__7508->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__7508->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__7508->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__7508->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__7508->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__7508->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__7508->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__7508->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__7508->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_QCD_tagOnly_2b1c_17->Modified();
   CvL_QCD_tagOnly_2b1c_17->cd();
   CvL_QCD_tagOnly_2b1c_17->SetSelected(CvL_QCD_tagOnly_2b1c_17);
}
