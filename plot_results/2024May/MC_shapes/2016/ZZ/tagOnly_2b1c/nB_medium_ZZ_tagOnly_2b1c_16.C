#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZZ_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: nB_medium_ZZ_tagOnly_2b1c_16/nB_medium_ZZ_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZZ_tagOnly_2b1c_16 = new TCanvas("nB_medium_ZZ_tagOnly_2b1c_16", "nB_medium_ZZ_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZZ_tagOnly_2b1c_16->SetHighLightColor(2);
   nB_medium_ZZ_tagOnly_2b1c_16->Range(-2.5,-179658.4,10.83333,1616926);
   nB_medium_ZZ_tagOnly_2b1c_16->SetFillColor(0);
   nB_medium_ZZ_tagOnly_2b1c_16->SetFillStyle(4000);
   nB_medium_ZZ_tagOnly_2b1c_16->SetBorderMode(0);
   nB_medium_ZZ_tagOnly_2b1c_16->SetBorderSize(2);
   nB_medium_ZZ_tagOnly_2b1c_16->SetLeftMargin(0.15);
   nB_medium_ZZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_ZZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   nB_medium_ZZ_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_ZZ_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__7588 = new TH1D("Jets_cut_nB_medium__7588","",10,-0.5,9.5);
   Jets_cut_nB_medium__7588->SetBinContent(1,1368826);
   Jets_cut_nB_medium__7588->SetBinContent(2,149878.1);
   Jets_cut_nB_medium__7588->SetBinContent(3,14371.35);
   Jets_cut_nB_medium__7588->SetBinContent(4,639.0996);
   Jets_cut_nB_medium__7588->SetBinContent(5,43.92124);
   Jets_cut_nB_medium__7588->SetBinContent(6,0.9391688);
   Jets_cut_nB_medium__7588->SetBinError(1,1213.579);
   Jets_cut_nB_medium__7588->SetBinError(2,400.6113);
   Jets_cut_nB_medium__7588->SetBinError(3,114.6619);
   Jets_cut_nB_medium__7588->SetBinError(4,17.71456);
   Jets_cut_nB_medium__7588->SetBinError(5,3.048477);
   Jets_cut_nB_medium__7588->SetBinError(6,0.4785626);
   Jets_cut_nB_medium__7588->SetEntries(2433000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__7588->SetLineColor(ci);
   Jets_cut_nB_medium__7588->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__7588->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__7588->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7588->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7588->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7588->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__7588->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7588->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__7588->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__7588->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__7588->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7588->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7588->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7588->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7588->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZZ_tagOnly_2b1c_16->Modified();
   nB_medium_ZZ_tagOnly_2b1c_16->cd();
   nB_medium_ZZ_tagOnly_2b1c_16->SetSelected(nB_medium_ZZ_tagOnly_2b1c_16);
}
