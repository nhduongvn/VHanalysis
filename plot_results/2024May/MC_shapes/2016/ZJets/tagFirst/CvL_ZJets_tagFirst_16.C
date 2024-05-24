#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZJets_tagFirst_16()
{
//=========Macro generated from canvas: CvL_ZJets_tagFirst_16/CvL_ZJets_tagFirst_16
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZJets_tagFirst_16 = new TCanvas("CvL_ZJets_tagFirst_16", "CvL_ZJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZJets_tagFirst_16->SetHighLightColor(2);
   CvL_ZJets_tagFirst_16->Range(-0.2,-3742829,1.133333,3.368546e+07);
   CvL_ZJets_tagFirst_16->SetFillColor(0);
   CvL_ZJets_tagFirst_16->SetFillStyle(4000);
   CvL_ZJets_tagFirst_16->SetBorderMode(0);
   CvL_ZJets_tagFirst_16->SetBorderSize(2);
   CvL_ZJets_tagFirst_16->SetLeftMargin(0.15);
   CvL_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   CvL_ZJets_tagFirst_16->SetFrameBorderMode(0);
   CvL_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   CvL_ZJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__4393 = new TH1D("Jets_cut_CvL__4393","",20,0,1);
   Jets_cut_CvL__4393->SetBinContent(1,2.209877e+07);
   Jets_cut_CvL__4393->SetBinContent(2,2.851679e+07);
   Jets_cut_CvL__4393->SetBinContent(3,1.000715e+07);
   Jets_cut_CvL__4393->SetBinContent(4,4303156);
   Jets_cut_CvL__4393->SetBinContent(5,2310894);
   Jets_cut_CvL__4393->SetBinContent(6,1526617);
   Jets_cut_CvL__4393->SetBinContent(7,1109389);
   Jets_cut_CvL__4393->SetBinContent(8,866079.1);
   Jets_cut_CvL__4393->SetBinContent(9,728669.5);
   Jets_cut_CvL__4393->SetBinContent(10,654682.9);
   Jets_cut_CvL__4393->SetBinContent(11,618605);
   Jets_cut_CvL__4393->SetBinContent(12,583525.8);
   Jets_cut_CvL__4393->SetBinContent(13,587922.3);
   Jets_cut_CvL__4393->SetBinContent(14,613265.3);
   Jets_cut_CvL__4393->SetBinContent(15,676039.2);
   Jets_cut_CvL__4393->SetBinContent(16,769169.1);
   Jets_cut_CvL__4393->SetBinContent(17,899168.7);
   Jets_cut_CvL__4393->SetBinContent(18,1122586);
   Jets_cut_CvL__4393->SetBinContent(19,1426744);
   Jets_cut_CvL__4393->SetBinContent(20,2645498);
   Jets_cut_CvL__4393->SetBinError(1,10835.19);
   Jets_cut_CvL__4393->SetBinError(2,12232.69);
   Jets_cut_CvL__4393->SetBinError(3,7504.256);
   Jets_cut_CvL__4393->SetBinError(4,4944.849);
   Jets_cut_CvL__4393->SetBinError(5,3642.686);
   Jets_cut_CvL__4393->SetBinError(6,2981.523);
   Jets_cut_CvL__4393->SetBinError(7,2565.174);
   Jets_cut_CvL__4393->SetBinError(8,2289.806);
   Jets_cut_CvL__4393->SetBinError(9,2108.071);
   Jets_cut_CvL__4393->SetBinError(10,2009.424);
   Jets_cut_CvL__4393->SetBinError(11,1976.678);
   Jets_cut_CvL__4393->SetBinError(12,1923.916);
   Jets_cut_CvL__4393->SetBinError(13,1944.922);
   Jets_cut_CvL__4393->SetBinError(14,1994.377);
   Jets_cut_CvL__4393->SetBinError(15,2114.386);
   Jets_cut_CvL__4393->SetBinError(16,2261.391);
   Jets_cut_CvL__4393->SetBinError(17,2457.529);
   Jets_cut_CvL__4393->SetBinError(18,2755.01);
   Jets_cut_CvL__4393->SetBinError(19,3117.37);
   Jets_cut_CvL__4393->SetBinError(20,4205.178);
   Jets_cut_CvL__4393->SetEntries(1.414727e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__4393->SetLineColor(ci);
   Jets_cut_CvL__4393->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__4393->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__4393->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__4393->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4393->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__4393->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__4393->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__4393->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__4393->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__4393->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__4393->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__4393->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__4393->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__4393->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__4393->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZJets_tagFirst_16->Modified();
   CvL_ZJets_tagFirst_16->cd();
   CvL_ZJets_tagFirst_16->SetSelected(CvL_ZJets_tagFirst_16);
}
