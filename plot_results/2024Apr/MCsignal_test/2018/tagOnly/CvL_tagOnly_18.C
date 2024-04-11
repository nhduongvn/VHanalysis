#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_tagOnly_18()
{
//=========Macro generated from canvas: CvL_tagOnly_18/CvL_tagOnly_18
//=========  (Thu Apr 11 14:04:10 2024) by ROOT version 6.28/10
   TCanvas *CvL_tagOnly_18 = new TCanvas("CvL_tagOnly_18", "CvL_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_tagOnly_18->SetHighLightColor(2);
   CvL_tagOnly_18->Range(-0.2,-6.987503e+10,1.133333,6.288753e+11);
   CvL_tagOnly_18->SetFillColor(0);
   CvL_tagOnly_18->SetFillStyle(4000);
   CvL_tagOnly_18->SetBorderMode(0);
   CvL_tagOnly_18->SetBorderSize(2);
   CvL_tagOnly_18->SetLeftMargin(0.15);
   CvL_tagOnly_18->SetFrameFillStyle(1000);
   CvL_tagOnly_18->SetFrameBorderMode(0);
   CvL_tagOnly_18->SetFrameFillStyle(1000);
   CvL_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__149 = new TH1D("Jets_cut_CvL__149","",20,0,1);
   Jets_cut_CvL__149->SetBinContent(1,5.323812e+11);
   Jets_cut_CvL__149->SetBinContent(2,4.071572e+11);
   Jets_cut_CvL__149->SetBinContent(3,1.305577e+11);
   Jets_cut_CvL__149->SetBinContent(4,5.071304e+10);
   Jets_cut_CvL__149->SetBinContent(5,2.677457e+10);
   Jets_cut_CvL__149->SetBinContent(6,1.72232e+10);
   Jets_cut_CvL__149->SetBinContent(7,1.175191e+10);
   Jets_cut_CvL__149->SetBinContent(8,8.695498e+09);
   Jets_cut_CvL__149->SetBinContent(9,7.11326e+09);
   Jets_cut_CvL__149->SetBinContent(10,5.872592e+09);
   Jets_cut_CvL__149->SetBinContent(11,5.12012e+09);
   Jets_cut_CvL__149->SetBinContent(12,4.233145e+09);
   Jets_cut_CvL__149->SetBinContent(13,4.011285e+09);
   Jets_cut_CvL__149->SetBinContent(14,3.745649e+09);
   Jets_cut_CvL__149->SetBinContent(15,3.683795e+09);
   Jets_cut_CvL__149->SetBinContent(16,4.006741e+09);
   Jets_cut_CvL__149->SetBinContent(17,4.573165e+09);
   Jets_cut_CvL__149->SetBinContent(18,5.671059e+09);
   Jets_cut_CvL__149->SetBinContent(19,7.527198e+09);
   Jets_cut_CvL__149->SetBinContent(20,2.14098e+10);
   Jets_cut_CvL__149->SetBinError(1,1.018358e+09);
   Jets_cut_CvL__149->SetBinError(2,8.889391e+08);
   Jets_cut_CvL__149->SetBinError(3,5.729894e+08);
   Jets_cut_CvL__149->SetBinError(4,3.457896e+08);
   Jets_cut_CvL__149->SetBinError(5,2.51975e+08);
   Jets_cut_CvL__149->SetBinError(6,2.363904e+08);
   Jets_cut_CvL__149->SetBinError(7,1.99055e+08);
   Jets_cut_CvL__149->SetBinError(8,1.438153e+08);
   Jets_cut_CvL__149->SetBinError(9,1.366348e+08);
   Jets_cut_CvL__149->SetBinError(10,1.196138e+08);
   Jets_cut_CvL__149->SetBinError(11,1.403603e+08);
   Jets_cut_CvL__149->SetBinError(12,9.580896e+07);
   Jets_cut_CvL__149->SetBinError(13,9.618053e+07);
   Jets_cut_CvL__149->SetBinError(14,8.678058e+07);
   Jets_cut_CvL__149->SetBinError(15,8.293124e+07);
   Jets_cut_CvL__149->SetBinError(16,8.424545e+07);
   Jets_cut_CvL__149->SetBinError(17,9.183566e+07);
   Jets_cut_CvL__149->SetBinError(18,1.016229e+08);
   Jets_cut_CvL__149->SetBinError(19,1.148709e+08);
   Jets_cut_CvL__149->SetBinError(20,2.121082e+08);
   Jets_cut_CvL__149->SetEntries(7709070);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__149->SetLineColor(ci);
   Jets_cut_CvL__149->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__149->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__149->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__149->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__149->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__149->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__149->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__149->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__149->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__149->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__149->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__149->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__149->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__149->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__149->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_tagOnly_18->Modified();
   CvL_tagOnly_18->cd();
   CvL_tagOnly_18->SetSelected(CvL_tagOnly_18);
}
