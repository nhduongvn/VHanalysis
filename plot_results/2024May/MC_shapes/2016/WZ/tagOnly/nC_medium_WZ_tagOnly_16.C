#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WZ_tagOnly_16()
{
//=========Macro generated from canvas: nC_medium_WZ_tagOnly_16/nC_medium_WZ_tagOnly_16
//=========  (Fri May 24 12:43:31 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WZ_tagOnly_16 = new TCanvas("nC_medium_WZ_tagOnly_16", "nC_medium_WZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WZ_tagOnly_16->SetHighLightColor(2);
   nC_medium_WZ_tagOnly_16->Range(-2.5,-478739.9,10.83333,4308659);
   nC_medium_WZ_tagOnly_16->SetFillColor(0);
   nC_medium_WZ_tagOnly_16->SetFillStyle(4000);
   nC_medium_WZ_tagOnly_16->SetBorderMode(0);
   nC_medium_WZ_tagOnly_16->SetBorderSize(2);
   nC_medium_WZ_tagOnly_16->SetLeftMargin(0.15);
   nC_medium_WZ_tagOnly_16->SetFrameFillStyle(1000);
   nC_medium_WZ_tagOnly_16->SetFrameBorderMode(0);
   nC_medium_WZ_tagOnly_16->SetFrameFillStyle(1000);
   nC_medium_WZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__5275 = new TH1D("Jets_cut_nC_medium__5275","",10,-0.5,9.5);
   Jets_cut_nC_medium__5275->SetBinContent(1,3647542);
   Jets_cut_nC_medium__5275->SetBinContent(2,810879);
   Jets_cut_nC_medium__5275->SetBinContent(3,89984);
   Jets_cut_nC_medium__5275->SetBinContent(4,6959.901);
   Jets_cut_nC_medium__5275->SetBinContent(5,626.9276);
   Jets_cut_nC_medium__5275->SetBinContent(6,41.01442);
   Jets_cut_nC_medium__5275->SetBinContent(7,1.720114);
   Jets_cut_nC_medium__5275->SetBinError(1,1340.256);
   Jets_cut_nC_medium__5275->SetBinError(2,618.7532);
   Jets_cut_nC_medium__5275->SetBinError(3,178.6583);
   Jets_cut_nC_medium__5275->SetBinError(4,31.27359);
   Jets_cut_nC_medium__5275->SetBinError(5,7.730482);
   Jets_cut_nC_medium__5275->SetBinError(6,2.08337);
   Jets_cut_nC_medium__5275->SetBinError(7,0.4152281);
   Jets_cut_nC_medium__5275->SetEntries(1.5518e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__5275->SetLineColor(ci);
   Jets_cut_nC_medium__5275->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__5275->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__5275->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5275->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__5275->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5275->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__5275->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5275->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__5275->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__5275->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__5275->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5275->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5275->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__5275->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5275->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WZ_tagOnly_16->Modified();
   nC_medium_WZ_tagOnly_16->cd();
   nC_medium_WZ_tagOnly_16->SetSelected(nC_medium_WZ_tagOnly_16);
}
