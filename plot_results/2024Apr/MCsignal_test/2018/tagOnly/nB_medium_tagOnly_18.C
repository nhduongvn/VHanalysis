#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_tagOnly_18()
{
//=========Macro generated from canvas: nB_medium_tagOnly_18/nB_medium_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_tagOnly_18 = new TCanvas("nB_medium_tagOnly_18", "nB_medium_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_tagOnly_18->SetHighLightColor(2);
   nB_medium_tagOnly_18->Range(-2.5,-2.393421e+11,10.83333,2.154079e+12);
   nB_medium_tagOnly_18->SetFillColor(0);
   nB_medium_tagOnly_18->SetFillStyle(4000);
   nB_medium_tagOnly_18->SetBorderMode(0);
   nB_medium_tagOnly_18->SetBorderSize(2);
   nB_medium_tagOnly_18->SetLeftMargin(0.15);
   nB_medium_tagOnly_18->SetFrameFillStyle(1000);
   nB_medium_tagOnly_18->SetFrameBorderMode(0);
   nB_medium_tagOnly_18->SetFrameFillStyle(1000);
   nB_medium_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__103 = new TH1D("Jets_cut_nB_medium__103","",10,-0.5,9.5);
   Jets_cut_nB_medium__103->SetBinContent(1,1.823559e+12);
   Jets_cut_nB_medium__103->SetBinContent(2,4.331776e+10);
   Jets_cut_nB_medium__103->SetBinContent(3,1.344041e+09);
   Jets_cut_nB_medium__103->SetBinContent(4,1.076728e+07);
   Jets_cut_nB_medium__103->SetBinError(1,2.132968e+09);
   Jets_cut_nB_medium__103->SetBinError(2,3.420985e+08);
   Jets_cut_nB_medium__103->SetBinError(3,6.05313e+07);
   Jets_cut_nB_medium__103->SetBinError(4,5567691);
   Jets_cut_nB_medium__103->SetEntries(1009181);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__103->SetLineColor(ci);
   Jets_cut_nB_medium__103->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__103->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__103->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__103->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__103->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__103->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__103->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__103->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__103->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__103->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__103->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__103->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__103->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__103->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__103->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_tagOnly_18->Modified();
   nB_medium_tagOnly_18->cd();
   nB_medium_tagOnly_18->SetSelected(nB_medium_tagOnly_18);
}
