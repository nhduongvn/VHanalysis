#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_tagOnly_18()
{
//=========Macro generated from canvas: CvB_tagOnly_18/CvB_tagOnly_18
//=========  (Thu Apr 11 14:04:10 2024) by ROOT version 6.28/10
   TCanvas *CvB_tagOnly_18 = new TCanvas("CvB_tagOnly_18", "CvB_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_tagOnly_18->SetHighLightColor(2);
   CvB_tagOnly_18->Range(-0.2,-5.410558e+10,1.133333,4.869502e+11);
   CvB_tagOnly_18->SetFillColor(0);
   CvB_tagOnly_18->SetFillStyle(4000);
   CvB_tagOnly_18->SetBorderMode(0);
   CvB_tagOnly_18->SetBorderSize(2);
   CvB_tagOnly_18->SetLeftMargin(0.15);
   CvB_tagOnly_18->SetFrameFillStyle(1000);
   CvB_tagOnly_18->SetFrameBorderMode(0);
   CvB_tagOnly_18->SetFrameFillStyle(1000);
   CvB_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__150 = new TH1D("Jets_cut_CvB__150","",20,0,1);
   Jets_cut_CvB__150->SetBinContent(1,1.874924e+10);
   Jets_cut_CvB__150->SetBinContent(2,3.376942e+09);
   Jets_cut_CvB__150->SetBinContent(3,2.498876e+09);
   Jets_cut_CvB__150->SetBinContent(4,2.621581e+09);
   Jets_cut_CvB__150->SetBinContent(5,3.012089e+09);
   Jets_cut_CvB__150->SetBinContent(6,3.513523e+09);
   Jets_cut_CvB__150->SetBinContent(7,4.364642e+09);
   Jets_cut_CvB__150->SetBinContent(8,5.685822e+09);
   Jets_cut_CvB__150->SetBinContent(9,6.962936e+09);
   Jets_cut_CvB__150->SetBinContent(10,9.629538e+09);
   Jets_cut_CvB__150->SetBinContent(11,1.300452e+10);
   Jets_cut_CvB__150->SetBinContent(12,1.773617e+10);
   Jets_cut_CvB__150->SetBinContent(13,2.609869e+10);
   Jets_cut_CvB__150->SetBinContent(14,3.82652e+10);
   Jets_cut_CvB__150->SetBinContent(15,6.128534e+10);
   Jets_cut_CvB__150->SetBinContent(16,1.031632e+11);
   Jets_cut_CvB__150->SetBinContent(17,1.947013e+11);
   Jets_cut_CvB__150->SetBinContent(18,4.122329e+11);
   Jets_cut_CvB__150->SetBinContent(19,3.084787e+11);
   Jets_cut_CvB__150->SetBinContent(20,2.684095e+10);
   Jets_cut_CvB__150->SetBinError(1,2.03463e+08);
   Jets_cut_CvB__150->SetBinError(2,7.899057e+07);
   Jets_cut_CvB__150->SetBinError(3,6.642914e+07);
   Jets_cut_CvB__150->SetBinError(4,6.946409e+07);
   Jets_cut_CvB__150->SetBinError(5,7.630461e+07);
   Jets_cut_CvB__150->SetBinError(6,8.627266e+07);
   Jets_cut_CvB__150->SetBinError(7,9.995234e+07);
   Jets_cut_CvB__150->SetBinError(8,1.183593e+08);
   Jets_cut_CvB__150->SetBinError(9,1.282509e+08);
   Jets_cut_CvB__150->SetBinError(10,1.495281e+08);
   Jets_cut_CvB__150->SetBinError(11,1.768724e+08);
   Jets_cut_CvB__150->SetBinError(12,2.293706e+08);
   Jets_cut_CvB__150->SetBinError(13,2.375293e+08);
   Jets_cut_CvB__150->SetBinError(14,2.971266e+08);
   Jets_cut_CvB__150->SetBinError(15,3.638817e+08);
   Jets_cut_CvB__150->SetBinError(16,4.617817e+08);
   Jets_cut_CvB__150->SetBinError(17,6.141364e+08);
   Jets_cut_CvB__150->SetBinError(18,9.052299e+08);
   Jets_cut_CvB__150->SetBinError(19,8.112348e+08);
   Jets_cut_CvB__150->SetBinError(20,2.4997e+08);
   Jets_cut_CvB__150->SetEntries(7709070);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__150->SetLineColor(ci);
   Jets_cut_CvB__150->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__150->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__150->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__150->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__150->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__150->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__150->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__150->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__150->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__150->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__150->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__150->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__150->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__150->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__150->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_tagOnly_18->Modified();
   CvB_tagOnly_18->cd();
   CvB_tagOnly_18->SetSelected(CvB_tagOnly_18);
}
