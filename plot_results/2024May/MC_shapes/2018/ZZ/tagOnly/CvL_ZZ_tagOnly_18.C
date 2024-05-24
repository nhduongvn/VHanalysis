#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZZ_tagOnly_18()
{
//=========Macro generated from canvas: CvL_ZZ_tagOnly_18/CvL_ZZ_tagOnly_18
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZZ_tagOnly_18 = new TCanvas("CvL_ZZ_tagOnly_18", "CvL_ZZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZZ_tagOnly_18->SetHighLightColor(2);
   CvL_ZZ_tagOnly_18->Range(-0.2,-40599.84,1.133333,365398.5);
   CvL_ZZ_tagOnly_18->SetFillColor(0);
   CvL_ZZ_tagOnly_18->SetFillStyle(4000);
   CvL_ZZ_tagOnly_18->SetBorderMode(0);
   CvL_ZZ_tagOnly_18->SetBorderSize(2);
   CvL_ZZ_tagOnly_18->SetLeftMargin(0.15);
   CvL_ZZ_tagOnly_18->SetFrameFillStyle(1000);
   CvL_ZZ_tagOnly_18->SetFrameBorderMode(0);
   CvL_ZZ_tagOnly_18->SetFrameFillStyle(1000);
   CvL_ZZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5190 = new TH1D("Jets_cut_CvL__5190","",20,0,1);
   Jets_cut_CvL__5190->SetBinContent(1,279951.2);
   Jets_cut_CvL__5190->SetBinContent(2,309332.1);
   Jets_cut_CvL__5190->SetBinContent(3,122173.7);
   Jets_cut_CvL__5190->SetBinContent(4,52951.9);
   Jets_cut_CvL__5190->SetBinContent(5,29617.7);
   Jets_cut_CvL__5190->SetBinContent(6,20492.36);
   Jets_cut_CvL__5190->SetBinContent(7,15319.67);
   Jets_cut_CvL__5190->SetBinContent(8,12264.66);
   Jets_cut_CvL__5190->SetBinContent(9,10674);
   Jets_cut_CvL__5190->SetBinContent(10,10014.04);
   Jets_cut_CvL__5190->SetBinContent(11,9573.129);
   Jets_cut_CvL__5190->SetBinContent(12,9149.146);
   Jets_cut_CvL__5190->SetBinContent(13,9493.666);
   Jets_cut_CvL__5190->SetBinContent(14,9906.59);
   Jets_cut_CvL__5190->SetBinContent(15,11101.26);
   Jets_cut_CvL__5190->SetBinContent(16,12688.66);
   Jets_cut_CvL__5190->SetBinContent(17,15248.56);
   Jets_cut_CvL__5190->SetBinContent(18,19609.96);
   Jets_cut_CvL__5190->SetBinContent(19,26573.33);
   Jets_cut_CvL__5190->SetBinContent(20,64946.18);
   Jets_cut_CvL__5190->SetBinError(1,337.9532);
   Jets_cut_CvL__5190->SetBinError(2,350.4785);
   Jets_cut_CvL__5190->SetBinError(3,249.4947);
   Jets_cut_CvL__5190->SetBinError(4,163.9055);
   Jets_cut_CvL__5190->SetBinError(5,121.7716);
   Jets_cut_CvL__5190->SetBinError(6,99.90597);
   Jets_cut_CvL__5190->SetBinError(7,84.81335);
   Jets_cut_CvL__5190->SetBinError(8,75.5773);
   Jets_cut_CvL__5190->SetBinError(9,71.22932);
   Jets_cut_CvL__5190->SetBinError(10,67.27542);
   Jets_cut_CvL__5190->SetBinError(11,77.85352);
   Jets_cut_CvL__5190->SetBinError(12,64.39145);
   Jets_cut_CvL__5190->SetBinError(13,78.50798);
   Jets_cut_CvL__5190->SetBinError(14,66.57893);
   Jets_cut_CvL__5190->SetBinError(15,65.88286);
   Jets_cut_CvL__5190->SetBinError(16,73.67156);
   Jets_cut_CvL__5190->SetBinError(17,78.42286);
   Jets_cut_CvL__5190->SetBinError(18,87.18958);
   Jets_cut_CvL__5190->SetBinError(19,105.3347);
   Jets_cut_CvL__5190->SetBinError(20,163.3368);
   Jets_cut_CvL__5190->SetEntries(3672806);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5190->SetLineColor(ci);
   Jets_cut_CvL__5190->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5190->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5190->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5190->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5190->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5190->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5190->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5190->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5190->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5190->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5190->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5190->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5190->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5190->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5190->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZZ_tagOnly_18->Modified();
   CvL_ZZ_tagOnly_18->cd();
   CvL_ZZ_tagOnly_18->SetSelected(CvL_ZZ_tagOnly_18);
}
