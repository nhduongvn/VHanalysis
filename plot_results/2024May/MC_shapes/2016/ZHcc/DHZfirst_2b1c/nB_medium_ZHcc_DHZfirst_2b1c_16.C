#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZHcc_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: nB_medium_ZHcc_DHZfirst_2b1c_16/nB_medium_ZHcc_DHZfirst_2b1c_16
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZHcc_DHZfirst_2b1c_16 = new TCanvas("nB_medium_ZHcc_DHZfirst_2b1c_16", "nB_medium_ZHcc_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetHighLightColor(2);
   nB_medium_ZHcc_DHZfirst_2b1c_16->Range(-2.5,-117.1179,10.83333,1054.061);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetFillColor(0);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetFillStyle(4000);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetBorderMode(0);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetBorderSize(2);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__8341 = new TH1D("Jets_cut_nB_medium__8341","",10,-0.5,9.5);
   Jets_cut_nB_medium__8341->SetBinContent(1,892.3266);
   Jets_cut_nB_medium__8341->SetBinContent(2,182.6082);
   Jets_cut_nB_medium__8341->SetBinContent(3,25.66978);
   Jets_cut_nB_medium__8341->SetBinContent(4,2.543118);
   Jets_cut_nB_medium__8341->SetBinContent(5,0.1334222);
   Jets_cut_nB_medium__8341->SetBinContent(6,0.005418191);
   Jets_cut_nB_medium__8341->SetBinError(1,2.881689);
   Jets_cut_nB_medium__8341->SetBinError(2,1.141232);
   Jets_cut_nB_medium__8341->SetBinError(3,0.3224529);
   Jets_cut_nB_medium__8341->SetBinError(4,0.07413676);
   Jets_cut_nB_medium__8341->SetBinError(5,0.01425253);
   Jets_cut_nB_medium__8341->SetBinError(6,0.003179544);
   Jets_cut_nB_medium__8341->SetEntries(498137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__8341->SetLineColor(ci);
   Jets_cut_nB_medium__8341->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__8341->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__8341->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8341->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8341->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8341->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__8341->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8341->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__8341->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__8341->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__8341->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8341->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__8341->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__8341->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__8341->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZHcc_DHZfirst_2b1c_16->Modified();
   nB_medium_ZHcc_DHZfirst_2b1c_16->cd();
   nB_medium_ZHcc_DHZfirst_2b1c_16->SetSelected(nB_medium_ZHcc_DHZfirst_2b1c_16);
}
