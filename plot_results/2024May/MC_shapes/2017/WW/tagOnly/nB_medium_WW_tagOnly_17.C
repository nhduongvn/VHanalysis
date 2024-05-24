#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WW_tagOnly_17()
{
//=========Macro generated from canvas: nB_medium_WW_tagOnly_17/nB_medium_WW_tagOnly_17
//=========  (Fri May 24 12:43:30 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WW_tagOnly_17 = new TCanvas("nB_medium_WW_tagOnly_17", "nB_medium_WW_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WW_tagOnly_17->SetHighLightColor(2);
   nB_medium_WW_tagOnly_17->Range(-2.5,-561694.3,10.83333,5055248);
   nB_medium_WW_tagOnly_17->SetFillColor(0);
   nB_medium_WW_tagOnly_17->SetFillStyle(4000);
   nB_medium_WW_tagOnly_17->SetBorderMode(0);
   nB_medium_WW_tagOnly_17->SetBorderSize(2);
   nB_medium_WW_tagOnly_17->SetLeftMargin(0.15);
   nB_medium_WW_tagOnly_17->SetFrameFillStyle(1000);
   nB_medium_WW_tagOnly_17->SetFrameBorderMode(0);
   nB_medium_WW_tagOnly_17->SetFrameFillStyle(1000);
   nB_medium_WW_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__5243 = new TH1D("Jets_cut_nB_medium__5243","",10,-0.5,9.5);
   Jets_cut_nB_medium__5243->SetBinContent(1,4279575);
   Jets_cut_nB_medium__5243->SetBinContent(2,164092);
   Jets_cut_nB_medium__5243->SetBinContent(3,4678.794);
   Jets_cut_nB_medium__5243->SetBinContent(4,124.2744);
   Jets_cut_nB_medium__5243->SetBinContent(5,4.385876);
   Jets_cut_nB_medium__5243->SetBinContent(6,0.4837121);
   Jets_cut_nB_medium__5243->SetBinError(1,1161.834);
   Jets_cut_nB_medium__5243->SetBinError(2,221.9556);
   Jets_cut_nB_medium__5243->SetBinError(3,37.59262);
   Jets_cut_nB_medium__5243->SetBinError(4,6.500323);
   Jets_cut_nB_medium__5243->SetBinError(5,1.275428);
   Jets_cut_nB_medium__5243->SetBinError(6,0.4837121);
   Jets_cut_nB_medium__5243->SetEntries(1.5634e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__5243->SetLineColor(ci);
   Jets_cut_nB_medium__5243->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__5243->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__5243->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5243->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__5243->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5243->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__5243->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5243->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__5243->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__5243->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__5243->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5243->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5243->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__5243->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5243->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WW_tagOnly_17->Modified();
   nB_medium_WW_tagOnly_17->cd();
   nB_medium_WW_tagOnly_17->SetSelected(nB_medium_WW_tagOnly_17);
}
