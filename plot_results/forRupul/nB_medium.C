#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium()
{
//=========Macro generated from canvas: nB_medium/nB_medium
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *nB_medium = new TCanvas("nB_medium", "nB_medium",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium->SetHighLightColor(2);
   nB_medium->Range(-2.5,-44775.15,10.83333,402976.3);
   nB_medium->SetFillColor(0);
   nB_medium->SetFillStyle(4000);
   nB_medium->SetBorderMode(0);
   nB_medium->SetBorderSize(2);
   nB_medium->SetLeftMargin(0.15);
   nB_medium->SetFrameFillStyle(1000);
   nB_medium->SetFrameBorderMode(0);
   nB_medium->SetFrameFillStyle(1000);
   nB_medium->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__29 = new TH1D("Jets_cut_nB_medium__29","",10,-0.5,9.5);
   Jets_cut_nB_medium__29->SetBinContent(1,341143.9);
   Jets_cut_nB_medium__29->SetBinContent(2,104070.7);
   Jets_cut_nB_medium__29->SetBinContent(3,21577.51);
   Jets_cut_nB_medium__29->SetBinContent(4,2767.094);
   Jets_cut_nB_medium__29->SetBinContent(5,174.2801);
   Jets_cut_nB_medium__29->SetBinContent(6,3.0479);
   Jets_cut_nB_medium__29->SetBinError(1,665.2077);
   Jets_cut_nB_medium__29->SetBinError(2,370.1961);
   Jets_cut_nB_medium__29->SetBinError(3,171.4952);
   Jets_cut_nB_medium__29->SetBinError(4,65.8625);
   Jets_cut_nB_medium__29->SetBinError(5,15.26295);
   Jets_cut_nB_medium__29->SetBinError(6,1.787416);
   Jets_cut_nB_medium__29->SetEntries(499433);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__29->SetLineColor(ci);
   Jets_cut_nB_medium__29->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__29->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__29->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__29->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__29->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__29->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__29->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__29->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__29->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__29->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__29->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__29->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__29->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__29->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__29->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium->Modified();
   nB_medium->cd();
   nB_medium->SetSelected(nB_medium);
}
