#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_TT_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nC_medium_TT_tagOnly_2b1c_17/nC_medium_TT_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_TT_tagOnly_2b1c_17 = new TCanvas("nC_medium_TT_tagOnly_2b1c_17", "nC_medium_TT_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_TT_tagOnly_2b1c_17->SetHighLightColor(2);
   nC_medium_TT_tagOnly_2b1c_17->Range(-2.5,-1414023,10.83333,1.272621e+07);
   nC_medium_TT_tagOnly_2b1c_17->SetFillColor(0);
   nC_medium_TT_tagOnly_2b1c_17->SetFillStyle(4000);
   nC_medium_TT_tagOnly_2b1c_17->SetBorderMode(0);
   nC_medium_TT_tagOnly_2b1c_17->SetBorderSize(2);
   nC_medium_TT_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nC_medium_TT_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nC_medium_TT_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nC_medium_TT_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nC_medium_TT_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7607 = new TH1D("Jets_cut_nC_medium__7607","",10,-0.5,9.5);
   Jets_cut_nC_medium__7607->SetBinContent(1,1.077091e+07);
   Jets_cut_nC_medium__7607->SetBinContent(2,1.077351e+07);
   Jets_cut_nC_medium__7607->SetBinContent(3,4941587);
   Jets_cut_nC_medium__7607->SetBinContent(4,1340627);
   Jets_cut_nC_medium__7607->SetBinContent(5,242322.9);
   Jets_cut_nC_medium__7607->SetBinContent(6,32049.86);
   Jets_cut_nC_medium__7607->SetBinContent(7,3366.66);
   Jets_cut_nC_medium__7607->SetBinContent(8,309.7703);
   Jets_cut_nC_medium__7607->SetBinContent(9,28.78122);
   Jets_cut_nC_medium__7607->SetBinContent(10,1.581306);
   Jets_cut_nC_medium__7607->SetBinError(1,754.513);
   Jets_cut_nC_medium__7607->SetBinError(2,816.6904);
   Jets_cut_nC_medium__7607->SetBinError(3,604.713);
   Jets_cut_nC_medium__7607->SetBinError(4,344.7716);
   Jets_cut_nC_medium__7607->SetBinError(5,159.5774);
   Jets_cut_nC_medium__7607->SetBinError(6,62.92414);
   Jets_cut_nC_medium__7607->SetBinError(7,22.08229);
   Jets_cut_nC_medium__7607->SetBinError(8,7.059425);
   Jets_cut_nC_medium__7607->SetBinError(9,2.434933);
   Jets_cut_nC_medium__7607->SetBinError(10,0.4596153);
   Jets_cut_nC_medium__7607->SetEntries(6.14341e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7607->SetLineColor(ci);
   Jets_cut_nC_medium__7607->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7607->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7607->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7607->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7607->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7607->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7607->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7607->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7607->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7607->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7607->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7607->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7607->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7607->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7607->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_TT_tagOnly_2b1c_17->Modified();
   nC_medium_TT_tagOnly_2b1c_17->cd();
   nC_medium_TT_tagOnly_2b1c_17->SetSelected(nC_medium_TT_tagOnly_2b1c_17);
}
