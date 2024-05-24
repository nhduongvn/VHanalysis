#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZZ_tagOnly_16()
{
//=========Macro generated from canvas: CvL_ZZ_tagOnly_16/CvL_ZZ_tagOnly_16
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZZ_tagOnly_16 = new TCanvas("CvL_ZZ_tagOnly_16", "CvL_ZZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZZ_tagOnly_16->SetHighLightColor(2);
   CvL_ZZ_tagOnly_16->Range(-0.2,-50593.12,1.133333,455338);
   CvL_ZZ_tagOnly_16->SetFillColor(0);
   CvL_ZZ_tagOnly_16->SetFillStyle(4000);
   CvL_ZZ_tagOnly_16->SetBorderMode(0);
   CvL_ZZ_tagOnly_16->SetBorderSize(2);
   CvL_ZZ_tagOnly_16->SetLeftMargin(0.15);
   CvL_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   CvL_ZZ_tagOnly_16->SetFrameBorderMode(0);
   CvL_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   CvL_ZZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5188 = new TH1D("Jets_cut_CvL__5188","",20,0,1);
   Jets_cut_CvL__5188->SetBinContent(1,297567.2);
   Jets_cut_CvL__5188->SetBinContent(2,385471.3);
   Jets_cut_CvL__5188->SetBinContent(3,139413.5);
   Jets_cut_CvL__5188->SetBinContent(4,61561.88);
   Jets_cut_CvL__5188->SetBinContent(5,34614.39);
   Jets_cut_CvL__5188->SetBinContent(6,24415.6);
   Jets_cut_CvL__5188->SetBinContent(7,17905.69);
   Jets_cut_CvL__5188->SetBinContent(8,14597.46);
   Jets_cut_CvL__5188->SetBinContent(9,12757.33);
   Jets_cut_CvL__5188->SetBinContent(10,11820.57);
   Jets_cut_CvL__5188->SetBinContent(11,11273.35);
   Jets_cut_CvL__5188->SetBinContent(12,10985.24);
   Jets_cut_CvL__5188->SetBinContent(13,11126.24);
   Jets_cut_CvL__5188->SetBinContent(14,11923.46);
   Jets_cut_CvL__5188->SetBinContent(15,12889.4);
   Jets_cut_CvL__5188->SetBinContent(16,14892.71);
   Jets_cut_CvL__5188->SetBinContent(17,17001.22);
   Jets_cut_CvL__5188->SetBinContent(18,21330.96);
   Jets_cut_CvL__5188->SetBinContent(19,26680.54);
   Jets_cut_CvL__5188->SetBinContent(20,48182.41);
   Jets_cut_CvL__5188->SetBinError(1,540.4423);
   Jets_cut_CvL__5188->SetBinError(2,612.5849);
   Jets_cut_CvL__5188->SetBinError(3,374.3431);
   Jets_cut_CvL__5188->SetBinError(4,248.513);
   Jets_cut_CvL__5188->SetBinError(5,186.1808);
   Jets_cut_CvL__5188->SetBinError(6,157.3009);
   Jets_cut_CvL__5188->SetBinError(7,134.0912);
   Jets_cut_CvL__5188->SetBinError(8,121.428);
   Jets_cut_CvL__5188->SetBinError(9,113.8741);
   Jets_cut_CvL__5188->SetBinError(10,109.5976);
   Jets_cut_CvL__5188->SetBinError(11,107.4);
   Jets_cut_CvL__5188->SetBinError(12,106.0863);
   Jets_cut_CvL__5188->SetBinError(13,106.9998);
   Jets_cut_CvL__5188->SetBinError(14,110.9228);
   Jets_cut_CvL__5188->SetBinError(15,115.1543);
   Jets_cut_CvL__5188->SetBinError(16,124.3051);
   Jets_cut_CvL__5188->SetBinError(17,132.7529);
   Jets_cut_CvL__5188->SetBinError(18,149.0093);
   Jets_cut_CvL__5188->SetBinError(19,166.7688);
   Jets_cut_CvL__5188->SetBinError(20,221.5525);
   Jets_cut_CvL__5188->SetEntries(2522099);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5188->SetLineColor(ci);
   Jets_cut_CvL__5188->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5188->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5188->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5188->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5188->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5188->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5188->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5188->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5188->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5188->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5188->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5188->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5188->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5188->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5188->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZZ_tagOnly_16->Modified();
   CvL_ZZ_tagOnly_16->cd();
   CvL_ZZ_tagOnly_16->SetSelected(CvL_ZZ_tagOnly_16);
}
