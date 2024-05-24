#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZZ_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: nB_medium_ZZ_tagOnly_2b1c_18/nB_medium_ZZ_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZZ_tagOnly_2b1c_18 = new TCanvas("nB_medium_ZZ_tagOnly_2b1c_18", "nB_medium_ZZ_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZZ_tagOnly_2b1c_18->SetHighLightColor(2);
   nB_medium_ZZ_tagOnly_2b1c_18->Range(-2.5,-115648.7,10.83333,1040838);
   nB_medium_ZZ_tagOnly_2b1c_18->SetFillColor(0);
   nB_medium_ZZ_tagOnly_2b1c_18->SetFillStyle(4000);
   nB_medium_ZZ_tagOnly_2b1c_18->SetBorderMode(0);
   nB_medium_ZZ_tagOnly_2b1c_18->SetBorderSize(2);
   nB_medium_ZZ_tagOnly_2b1c_18->SetLeftMargin(0.15);
   nB_medium_ZZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_ZZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   nB_medium_ZZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_ZZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__7590 = new TH1D("Jets_cut_nB_medium__7590","",10,-0.5,9.5);
   Jets_cut_nB_medium__7590->SetBinContent(1,881132.8);
   Jets_cut_nB_medium__7590->SetBinContent(2,120225.4);
   Jets_cut_nB_medium__7590->SetBinContent(3,19025.8);
   Jets_cut_nB_medium__7590->SetBinContent(4,1596.046);
   Jets_cut_nB_medium__7590->SetBinContent(5,164.9259);
   Jets_cut_nB_medium__7590->SetBinContent(6,4.349582);
   Jets_cut_nB_medium__7590->SetBinError(1,600.6922);
   Jets_cut_nB_medium__7590->SetBinError(2,226.0295);
   Jets_cut_nB_medium__7590->SetBinError(3,91.87693);
   Jets_cut_nB_medium__7590->SetBinError(4,25.85733);
   Jets_cut_nB_medium__7590->SetBinError(5,8.840751);
   Jets_cut_nB_medium__7590->SetBinError(6,1.408912);
   Jets_cut_nB_medium__7590->SetEntries(3526000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__7590->SetLineColor(ci);
   Jets_cut_nB_medium__7590->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__7590->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__7590->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7590->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7590->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7590->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__7590->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7590->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__7590->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__7590->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__7590->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7590->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7590->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7590->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7590->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZZ_tagOnly_2b1c_18->Modified();
   nB_medium_ZZ_tagOnly_2b1c_18->cd();
   nB_medium_ZZ_tagOnly_2b1c_18->SetSelected(nB_medium_ZZ_tagOnly_2b1c_18);
}
