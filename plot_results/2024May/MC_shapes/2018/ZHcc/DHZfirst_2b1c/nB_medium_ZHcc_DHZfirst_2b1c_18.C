#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZHcc_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: nB_medium_ZHcc_DHZfirst_2b1c_18/nB_medium_ZHcc_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:36 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZHcc_DHZfirst_2b1c_18 = new TCanvas("nB_medium_ZHcc_DHZfirst_2b1c_18", "nB_medium_ZHcc_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetHighLightColor(2);
   nB_medium_ZHcc_DHZfirst_2b1c_18->Range(-2.5,-109.2641,10.83333,983.3769);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetFillColor(0);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetFillStyle(4000);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetBorderMode(0);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetBorderSize(2);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__8343 = new TH1D("Jets_cut_nB_medium__8343","",10,-0.5,9.5);
   Jets_cut_nB_medium__8343->SetBinContent(1,832.4884);
   Jets_cut_nB_medium__8343->SetBinContent(2,269.1804);
   Jets_cut_nB_medium__8343->SetBinContent(3,60.75178);
   Jets_cut_nB_medium__8343->SetBinContent(4,8.33963);
   Jets_cut_nB_medium__8343->SetBinContent(5,0.5659282);
   Jets_cut_nB_medium__8343->SetBinContent(6,0.01376673);
   Jets_cut_nB_medium__8343->SetBinContent(7,0.0002580935);
   Jets_cut_nB_medium__8343->SetBinError(1,1.435956);
   Jets_cut_nB_medium__8343->SetBinError(2,0.8035489);
   Jets_cut_nB_medium__8343->SetBinError(3,0.375475);
   Jets_cut_nB_medium__8343->SetBinError(4,0.1446659);
   Jets_cut_nB_medium__8343->SetBinError(5,0.03410002);
   Jets_cut_nB_medium__8343->SetBinError(6,0.004358079);
   Jets_cut_nB_medium__8343->SetBinError(7,0.0002580935);
   Jets_cut_nB_medium__8343->SetEntries(993601);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__8343->SetLineColor(ci);
   Jets_cut_nB_medium__8343->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__8343->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__8343->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8343->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8343->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8343->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__8343->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8343->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__8343->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__8343->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__8343->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8343->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8343->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8343->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8343->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZHcc_DHZfirst_2b1c_18->Modified();
   nB_medium_ZHcc_DHZfirst_2b1c_18->cd();
   nB_medium_ZHcc_DHZfirst_2b1c_18->SetSelected(nB_medium_ZHcc_DHZfirst_2b1c_18);
}
