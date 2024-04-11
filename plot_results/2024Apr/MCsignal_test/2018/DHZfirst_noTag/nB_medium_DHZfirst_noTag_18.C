#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_DHZfirst_noTag_18()
{
//=========Macro generated from canvas: nB_medium_DHZfirst_noTag_18/nB_medium_DHZfirst_noTag_18
//=========  (Thu Apr 11 14:04:11 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_DHZfirst_noTag_18 = new TCanvas("nB_medium_DHZfirst_noTag_18", "nB_medium_DHZfirst_noTag_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_DHZfirst_noTag_18->SetHighLightColor(2);
   nB_medium_DHZfirst_noTag_18->Range(-2.5,-2.520629e+11,10.83333,2.268566e+12);
   nB_medium_DHZfirst_noTag_18->SetFillColor(0);
   nB_medium_DHZfirst_noTag_18->SetFillStyle(4000);
   nB_medium_DHZfirst_noTag_18->SetBorderMode(0);
   nB_medium_DHZfirst_noTag_18->SetBorderSize(2);
   nB_medium_DHZfirst_noTag_18->SetLeftMargin(0.15);
   nB_medium_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   nB_medium_DHZfirst_noTag_18->SetFrameBorderMode(0);
   nB_medium_DHZfirst_noTag_18->SetFrameFillStyle(1000);
   nB_medium_DHZfirst_noTag_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__203 = new TH1D("Jets_cut_nB_medium__203","",10,-0.5,9.5);
   Jets_cut_nB_medium__203->SetBinContent(1,1.920479e+12);
   Jets_cut_nB_medium__203->SetBinContent(2,5.252403e+10);
   Jets_cut_nB_medium__203->SetBinContent(3,2.134937e+09);
   Jets_cut_nB_medium__203->SetBinContent(4,3.722356e+07);
   Jets_cut_nB_medium__203->SetBinContent(5,620368.1);
   Jets_cut_nB_medium__203->SetBinContent(6,61602.44);
   Jets_cut_nB_medium__203->SetBinError(1,2.135001e+09);
   Jets_cut_nB_medium__203->SetBinError(2,3.434188e+08);
   Jets_cut_nB_medium__203->SetBinError(3,6.111406e+07);
   Jets_cut_nB_medium__203->SetBinError(4,5809093);
   Jets_cut_nB_medium__203->SetBinError(5,183508);
   Jets_cut_nB_medium__203->SetBinError(6,36000.58);
   Jets_cut_nB_medium__203->SetEntries(3876893);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__203->SetLineColor(ci);
   Jets_cut_nB_medium__203->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__203->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__203->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__203->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__203->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__203->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__203->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__203->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__203->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__203->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__203->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__203->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__203->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__203->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__203->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_DHZfirst_noTag_18->Modified();
   nB_medium_DHZfirst_noTag_18->cd();
   nB_medium_DHZfirst_noTag_18->SetSelected(nB_medium_DHZfirst_noTag_18);
}
