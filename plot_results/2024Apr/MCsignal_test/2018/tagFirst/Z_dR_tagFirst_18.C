#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_tagFirst_18()
{
//=========Macro generated from canvas: Z_dR_tagFirst_18/Z_dR_tagFirst_18
//=========  (Thu Apr 11 14:04:08 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_tagFirst_18 = new TCanvas("Z_dR_tagFirst_18", "Z_dR_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_tagFirst_18->SetHighLightColor(2);
   Z_dR_tagFirst_18->Range(-1.2,-61630.97,6.8,554678.7);
   Z_dR_tagFirst_18->SetFillColor(0);
   Z_dR_tagFirst_18->SetFillStyle(4000);
   Z_dR_tagFirst_18->SetBorderMode(0);
   Z_dR_tagFirst_18->SetBorderSize(2);
   Z_dR_tagFirst_18->SetLeftMargin(0.15);
   Z_dR_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_tagFirst_18->SetFrameBorderMode(0);
   Z_dR_tagFirst_18->SetFrameFillStyle(1000);
   Z_dR_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__5 = new TH1D("VH_tagFirst_Z_dR__5","",30,0,6);
   VH_tagFirst_Z_dR__5->SetBinContent(3,126127);
   VH_tagFirst_Z_dR__5->SetBinContent(4,243644.7);
   VH_tagFirst_Z_dR__5->SetBinContent(5,303776.5);
   VH_tagFirst_Z_dR__5->SetBinContent(6,171188.2);
   VH_tagFirst_Z_dR__5->SetBinContent(7,49304.46);
   VH_tagFirst_Z_dR__5->SetBinContent(8,234006.4);
   VH_tagFirst_Z_dR__5->SetBinContent(9,52545.52);
   VH_tagFirst_Z_dR__5->SetBinContent(10,327812.4);
   VH_tagFirst_Z_dR__5->SetBinContent(11,127743.4);
   VH_tagFirst_Z_dR__5->SetBinContent(12,469569.3);
   VH_tagFirst_Z_dR__5->SetBinContent(13,88452.43);
   VH_tagFirst_Z_dR__5->SetBinContent(14,370686.8);
   VH_tagFirst_Z_dR__5->SetBinContent(15,56714.85);
   VH_tagFirst_Z_dR__5->SetBinContent(16,18919.36);
   VH_tagFirst_Z_dR__5->SetBinContent(17,66580.27);
   VH_tagFirst_Z_dR__5->SetBinContent(18,172751.7);
   VH_tagFirst_Z_dR__5->SetBinContent(19,76933.55);
   VH_tagFirst_Z_dR__5->SetBinContent(20,26956.56);
   VH_tagFirst_Z_dR__5->SetBinContent(21,47912.01);
   VH_tagFirst_Z_dR__5->SetBinContent(22,88186.59);
   VH_tagFirst_Z_dR__5->SetBinContent(23,19461.76);
   VH_tagFirst_Z_dR__5->SetBinContent(24,18555.99);
   VH_tagFirst_Z_dR__5->SetBinContent(25,3791.696);
   VH_tagFirst_Z_dR__5->SetBinContent(26,91247.05);
   VH_tagFirst_Z_dR__5->SetBinContent(27,22081.95);
   VH_tagFirst_Z_dR__5->SetBinContent(28,98838.7);
   VH_tagFirst_Z_dR__5->SetBinContent(29,109630.2);
   VH_tagFirst_Z_dR__5->SetBinContent(30,76657.92);
   VH_tagFirst_Z_dR__5->SetBinContent(31,32273.49);
   VH_tagFirst_Z_dR__5->SetBinError(3,29548.86);
   VH_tagFirst_Z_dR__5->SetBinError(4,171926.7);
   VH_tagFirst_Z_dR__5->SetBinError(5,181566.8);
   VH_tagFirst_Z_dR__5->SetBinError(6,59265.97);
   VH_tagFirst_Z_dR__5->SetBinError(7,17198.27);
   VH_tagFirst_Z_dR__5->SetBinError(8,158505.3);
   VH_tagFirst_Z_dR__5->SetBinError(9,26156.9);
   VH_tagFirst_Z_dR__5->SetBinError(10,250793.1);
   VH_tagFirst_Z_dR__5->SetBinError(11,65561.5);
   VH_tagFirst_Z_dR__5->SetBinError(12,304066.3);
   VH_tagFirst_Z_dR__5->SetBinError(13,34500.16);
   VH_tagFirst_Z_dR__5->SetBinError(14,251430.1);
   VH_tagFirst_Z_dR__5->SetBinError(15,18385.15);
   VH_tagFirst_Z_dR__5->SetBinError(16,5014.105);
   VH_tagFirst_Z_dR__5->SetBinError(17,27968.02);
   VH_tagFirst_Z_dR__5->SetBinError(18,106953.7);
   VH_tagFirst_Z_dR__5->SetBinError(19,29102.32);
   VH_tagFirst_Z_dR__5->SetBinError(20,10962.11);
   VH_tagFirst_Z_dR__5->SetBinError(21,24145.12);
   VH_tagFirst_Z_dR__5->SetBinError(22,64681.97);
   VH_tagFirst_Z_dR__5->SetBinError(23,6160.746);
   VH_tagFirst_Z_dR__5->SetBinError(24,8909.666);
   VH_tagFirst_Z_dR__5->SetBinError(25,1686.015);
   VH_tagFirst_Z_dR__5->SetBinError(26,78091.66);
   VH_tagFirst_Z_dR__5->SetBinError(27,11498.92);
   VH_tagFirst_Z_dR__5->SetBinError(28,70602.64);
   VH_tagFirst_Z_dR__5->SetBinError(29,79994.82);
   VH_tagFirst_Z_dR__5->SetBinError(30,71950.36);
   VH_tagFirst_Z_dR__5->SetBinError(31,27693.05);
   VH_tagFirst_Z_dR__5->SetEntries(846);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__5->SetLineColor(ci);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__5->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_tagFirst_18->Modified();
   Z_dR_tagFirst_18->cd();
   Z_dR_tagFirst_18->SetSelected(Z_dR_tagFirst_18);
}
