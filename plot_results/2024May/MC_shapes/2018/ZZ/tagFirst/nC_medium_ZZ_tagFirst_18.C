#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZZ_tagFirst_18()
{
//=========Macro generated from canvas: nC_medium_ZZ_tagFirst_18/nC_medium_ZZ_tagFirst_18
//=========  (Fri May 24 12:43:15 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZZ_tagFirst_18 = new TCanvas("nC_medium_ZZ_tagFirst_18", "nC_medium_ZZ_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZZ_tagFirst_18->SetHighLightColor(2);
   nC_medium_ZZ_tagFirst_18->Range(-2.5,-97742.58,10.83333,879683.2);
   nC_medium_ZZ_tagFirst_18->SetFillColor(0);
   nC_medium_ZZ_tagFirst_18->SetFillStyle(4000);
   nC_medium_ZZ_tagFirst_18->SetBorderMode(0);
   nC_medium_ZZ_tagFirst_18->SetBorderSize(2);
   nC_medium_ZZ_tagFirst_18->SetLeftMargin(0.15);
   nC_medium_ZZ_tagFirst_18->SetFrameFillStyle(1000);
   nC_medium_ZZ_tagFirst_18->SetFrameBorderMode(0);
   nC_medium_ZZ_tagFirst_18->SetFrameFillStyle(1000);
   nC_medium_ZZ_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__4500 = new TH1D("Jets_cut_nC_medium__4500","",10,-0.5,9.5);
   Jets_cut_nC_medium__4500->SetBinContent(1,744705.3);
   Jets_cut_nC_medium__4500->SetBinContent(2,222200.6);
   Jets_cut_nC_medium__4500->SetBinContent(3,47368.44);
   Jets_cut_nC_medium__4500->SetBinContent(4,7018.927);
   Jets_cut_nC_medium__4500->SetBinContent(5,776.5666);
   Jets_cut_nC_medium__4500->SetBinContent(6,67.5856);
   Jets_cut_nC_medium__4500->SetBinContent(7,11.3309);
   Jets_cut_nC_medium__4500->SetBinContent(8,0.5970267);
   Jets_cut_nC_medium__4500->SetBinError(1,539.6918);
   Jets_cut_nC_medium__4500->SetBinError(2,311.0383);
   Jets_cut_nC_medium__4500->SetBinError(3,165.2589);
   Jets_cut_nC_medium__4500->SetBinError(4,69.22231);
   Jets_cut_nC_medium__4500->SetBinError(5,29.54625);
   Jets_cut_nC_medium__4500->SetBinError(6,9.679396);
   Jets_cut_nC_medium__4500->SetBinError(7,5.407644);
   Jets_cut_nC_medium__4500->SetBinError(8,0.5970267);
   Jets_cut_nC_medium__4500->SetEntries(3526000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__4500->SetLineColor(ci);
   Jets_cut_nC_medium__4500->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__4500->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__4500->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4500->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4500->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4500->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__4500->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4500->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__4500->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__4500->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__4500->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4500->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4500->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4500->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4500->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZZ_tagFirst_18->Modified();
   nC_medium_ZZ_tagFirst_18->cd();
   nC_medium_ZZ_tagFirst_18->SetSelected(nC_medium_ZZ_tagFirst_18);
}
