#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_tagFirst_18()
{
//=========Macro generated from canvas: nB_medium_tagFirst_18/nB_medium_tagFirst_18
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_tagFirst_18 = new TCanvas("nB_medium_tagFirst_18", "nB_medium_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_tagFirst_18->SetHighLightColor(2);
   nB_medium_tagFirst_18->Range(-2.5,-95.55316,10.83333,859.9784);
   nB_medium_tagFirst_18->SetFillColor(0);
   nB_medium_tagFirst_18->SetFillStyle(4000);
   nB_medium_tagFirst_18->SetBorderMode(0);
   nB_medium_tagFirst_18->SetBorderSize(2);
   nB_medium_tagFirst_18->SetLeftMargin(0.15);
   nB_medium_tagFirst_18->SetFrameFillStyle(1000);
   nB_medium_tagFirst_18->SetFrameBorderMode(0);
   nB_medium_tagFirst_18->SetFrameFillStyle(1000);
   nB_medium_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__231 = new TH1D("Jets_cut_nB_medium__231","",10,-0.5,9.5);
   Jets_cut_nB_medium__231->SetBinContent(1,728.024);
   Jets_cut_nB_medium__231->SetBinContent(2,222.0939);
   Jets_cut_nB_medium__231->SetBinContent(3,46.04785);
   Jets_cut_nB_medium__231->SetBinContent(4,5.905164);
   Jets_cut_nB_medium__231->SetBinContent(5,0.3719253);
   Jets_cut_nB_medium__231->SetBinContent(6,0.006504424);
   Jets_cut_nB_medium__231->SetBinError(1,1.419598);
   Jets_cut_nB_medium__231->SetBinError(2,0.7900232);
   Jets_cut_nB_medium__231->SetBinError(3,0.3659822);
   Jets_cut_nB_medium__231->SetBinError(4,0.140555);
   Jets_cut_nB_medium__231->SetBinError(5,0.03257215);
   Jets_cut_nB_medium__231->SetBinError(6,0.003814466);
   Jets_cut_nB_medium__231->SetEntries(499433);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__231->SetLineColor(ci);
   Jets_cut_nB_medium__231->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__231->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__231->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__231->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__231->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__231->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__231->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__231->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__231->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__231->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__231->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__231->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__231->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__231->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__231->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_tagFirst_18->Modified();
   nB_medium_tagFirst_18->cd();
   nB_medium_tagFirst_18->SetSelected(nB_medium_tagFirst_18);
}
