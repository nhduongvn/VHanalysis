#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZZ_tagOnly_17()
{
//=========Macro generated from canvas: Z_dR_ZZ_tagOnly_17/Z_dR_ZZ_tagOnly_17
//=========  (Fri May 24 12:42:17 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZZ_tagOnly_17 = new TCanvas("Z_dR_ZZ_tagOnly_17", "Z_dR_ZZ_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZZ_tagOnly_17->SetHighLightColor(2);
   Z_dR_ZZ_tagOnly_17->Range(-1.2,-2.649129,6.8,23.84216);
   Z_dR_ZZ_tagOnly_17->SetFillColor(0);
   Z_dR_ZZ_tagOnly_17->SetFillStyle(4000);
   Z_dR_ZZ_tagOnly_17->SetBorderMode(0);
   Z_dR_ZZ_tagOnly_17->SetBorderSize(2);
   Z_dR_ZZ_tagOnly_17->SetLeftMargin(0.15);
   Z_dR_ZZ_tagOnly_17->SetFrameFillStyle(1000);
   Z_dR_ZZ_tagOnly_17->SetFrameBorderMode(0);
   Z_dR_ZZ_tagOnly_17->SetFrameFillStyle(1000);
   Z_dR_ZZ_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Z_dR__869 = new TH1D("VH_tagOnly_Z_dR__869","",30,0,6);
   VH_tagOnly_Z_dR__869->SetBinContent(3,11.83475);
   VH_tagOnly_Z_dR__869->SetBinContent(4,20.18384);
   VH_tagOnly_Z_dR__869->SetBinContent(5,16.04415);
   VH_tagOnly_Z_dR__869->SetBinContent(6,7.661184);
   VH_tagOnly_Z_dR__869->SetBinContent(7,4.263474);
   VH_tagOnly_Z_dR__869->SetBinContent(8,5.20632);
   VH_tagOnly_Z_dR__869->SetBinContent(9,2.317676);
   VH_tagOnly_Z_dR__869->SetBinContent(10,1.427633);
   VH_tagOnly_Z_dR__869->SetBinContent(11,1.839075);
   VH_tagOnly_Z_dR__869->SetBinContent(12,2.336449);
   VH_tagOnly_Z_dR__869->SetBinContent(13,3.250579);
   VH_tagOnly_Z_dR__869->SetBinContent(14,3.883167);
   VH_tagOnly_Z_dR__869->SetBinContent(15,3.872817);
   VH_tagOnly_Z_dR__869->SetBinContent(16,5.504414);
   VH_tagOnly_Z_dR__869->SetBinContent(17,2.953559);
   VH_tagOnly_Z_dR__869->SetBinContent(18,6.064402);
   VH_tagOnly_Z_dR__869->SetBinContent(19,4.130895);
   VH_tagOnly_Z_dR__869->SetBinContent(20,1.515762);
   VH_tagOnly_Z_dR__869->SetBinContent(21,2.641067);
   VH_tagOnly_Z_dR__869->SetBinContent(22,0.8713551);
   VH_tagOnly_Z_dR__869->SetBinContent(23,0.7114444);
   VH_tagOnly_Z_dR__869->SetBinContent(24,0.391329);
   VH_tagOnly_Z_dR__869->SetBinContent(25,1.15991);
   VH_tagOnly_Z_dR__869->SetBinContent(26,0.6977451);
   VH_tagOnly_Z_dR__869->SetBinContent(27,1.371692);
   VH_tagOnly_Z_dR__869->SetBinContent(28,2.034241);
   VH_tagOnly_Z_dR__869->SetBinContent(29,1.408606);
   VH_tagOnly_Z_dR__869->SetBinContent(31,0.1254538);
   VH_tagOnly_Z_dR__869->SetBinError(3,2.174407);
   VH_tagOnly_Z_dR__869->SetBinError(4,2.960812);
   VH_tagOnly_Z_dR__869->SetBinError(5,2.310446);
   VH_tagOnly_Z_dR__869->SetBinError(6,1.499304);
   VH_tagOnly_Z_dR__869->SetBinError(7,1.00011);
   VH_tagOnly_Z_dR__869->SetBinError(8,1.337503);
   VH_tagOnly_Z_dR__869->SetBinError(9,0.7479978);
   VH_tagOnly_Z_dR__869->SetBinError(10,0.5755567);
   VH_tagOnly_Z_dR__869->SetBinError(11,0.7231802);
   VH_tagOnly_Z_dR__869->SetBinError(12,0.7944492);
   VH_tagOnly_Z_dR__869->SetBinError(13,1.063865);
   VH_tagOnly_Z_dR__869->SetBinError(14,1.182925);
   VH_tagOnly_Z_dR__869->SetBinError(15,1.022527);
   VH_tagOnly_Z_dR__869->SetBinError(16,1.325322);
   VH_tagOnly_Z_dR__869->SetBinError(17,1.009613);
   VH_tagOnly_Z_dR__869->SetBinError(18,1.830212);
   VH_tagOnly_Z_dR__869->SetBinError(19,1.350656);
   VH_tagOnly_Z_dR__869->SetBinError(20,0.6284589);
   VH_tagOnly_Z_dR__869->SetBinError(21,0.9518991);
   VH_tagOnly_Z_dR__869->SetBinError(22,0.4465362);
   VH_tagOnly_Z_dR__869->SetBinError(23,0.4687256);
   VH_tagOnly_Z_dR__869->SetBinError(24,0.2828536);
   VH_tagOnly_Z_dR__869->SetBinError(25,0.512523);
   VH_tagOnly_Z_dR__869->SetBinError(26,0.416402);
   VH_tagOnly_Z_dR__869->SetBinError(27,0.5343089);
   VH_tagOnly_Z_dR__869->SetBinError(28,0.9814662);
   VH_tagOnly_Z_dR__869->SetBinError(29,0.5938662);
   VH_tagOnly_Z_dR__869->SetBinError(31,0.1254538);
   VH_tagOnly_Z_dR__869->SetEntries(445);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Z_dR__869->SetLineColor(ci);
   VH_tagOnly_Z_dR__869->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagOnly_Z_dR__869->GetXaxis()->SetRange(1,30);
   VH_tagOnly_Z_dR__869->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__869->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__869->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__869->GetYaxis()->SetTitle("Events/0.2");
   VH_tagOnly_Z_dR__869->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__869->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Z_dR__869->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Z_dR__869->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Z_dR__869->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__869->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Z_dR__869->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Z_dR__869->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Z_dR__869->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZZ_tagOnly_17->Modified();
   Z_dR_ZZ_tagOnly_17->cd();
   Z_dR_ZZ_tagOnly_17->SetSelected(Z_dR_ZZ_tagOnly_17);
}
