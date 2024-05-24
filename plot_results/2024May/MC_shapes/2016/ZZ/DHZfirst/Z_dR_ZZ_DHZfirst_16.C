#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZZ_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dR_ZZ_DHZfirst_16/Z_dR_ZZ_DHZfirst_16
//=========  (Fri May 24 12:42:28 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZZ_DHZfirst_16 = new TCanvas("Z_dR_ZZ_DHZfirst_16", "Z_dR_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZZ_DHZfirst_16->SetHighLightColor(2);
   Z_dR_ZZ_DHZfirst_16->Range(-1.2,-0.7425914,6.8,6.683322);
   Z_dR_ZZ_DHZfirst_16->SetFillColor(0);
   Z_dR_ZZ_DHZfirst_16->SetFillStyle(4000);
   Z_dR_ZZ_DHZfirst_16->SetBorderMode(0);
   Z_dR_ZZ_DHZfirst_16->SetBorderSize(2);
   Z_dR_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1588 = new TH1D("VH_DHZfirst_Z_dR__1588","",30,0,6);
   VH_DHZfirst_Z_dR__1588->SetBinContent(3,4.979824);
   VH_DHZfirst_Z_dR__1588->SetBinContent(4,5.295284);
   VH_DHZfirst_Z_dR__1588->SetBinContent(5,5.657838);
   VH_DHZfirst_Z_dR__1588->SetBinContent(6,3.67581);
   VH_DHZfirst_Z_dR__1588->SetBinContent(7,2.926956);
   VH_DHZfirst_Z_dR__1588->SetBinContent(8,0.413764);
   VH_DHZfirst_Z_dR__1588->SetBinContent(9,1.296514);
   VH_DHZfirst_Z_dR__1588->SetBinContent(10,0.2085897);
   VH_DHZfirst_Z_dR__1588->SetBinContent(11,0.5350524);
   VH_DHZfirst_Z_dR__1588->SetBinContent(12,0.5643425);
   VH_DHZfirst_Z_dR__1588->SetBinContent(13,0.3696223);
   VH_DHZfirst_Z_dR__1588->SetBinContent(14,0.1993334);
   VH_DHZfirst_Z_dR__1588->SetBinContent(16,0.2075212);
   VH_DHZfirst_Z_dR__1588->SetBinContent(18,0.3572692);
   VH_DHZfirst_Z_dR__1588->SetBinContent(21,0.2613578);
   VH_DHZfirst_Z_dR__1588->SetBinContent(22,0.3236124);
   VH_DHZfirst_Z_dR__1588->SetBinContent(23,0.1717981);
   VH_DHZfirst_Z_dR__1588->SetBinContent(24,0.3223432);
   VH_DHZfirst_Z_dR__1588->SetBinContent(26,0.1084592);
   VH_DHZfirst_Z_dR__1588->SetBinContent(27,0.1986667);
   VH_DHZfirst_Z_dR__1588->SetBinContent(28,1.334355);
   VH_DHZfirst_Z_dR__1588->SetBinContent(29,0.5938585);
   VH_DHZfirst_Z_dR__1588->SetBinContent(30,0.1839259);
   VH_DHZfirst_Z_dR__1588->SetBinError(3,1.046588);
   VH_DHZfirst_Z_dR__1588->SetBinError(4,1.065674);
   VH_DHZfirst_Z_dR__1588->SetBinError(5,1.078232);
   VH_DHZfirst_Z_dR__1588->SetBinError(6,0.8782425);
   VH_DHZfirst_Z_dR__1588->SetBinError(7,0.7402874);
   VH_DHZfirst_Z_dR__1588->SetBinError(8,0.2516204);
   VH_DHZfirst_Z_dR__1588->SetBinError(9,0.4994575);
   VH_DHZfirst_Z_dR__1588->SetBinError(10,0.2085897);
   VH_DHZfirst_Z_dR__1588->SetBinError(11,0.312946);
   VH_DHZfirst_Z_dR__1588->SetBinError(12,0.3263669);
   VH_DHZfirst_Z_dR__1588->SetBinError(13,0.2615737);
   VH_DHZfirst_Z_dR__1588->SetBinError(14,0.1993334);
   VH_DHZfirst_Z_dR__1588->SetBinError(16,0.2075212);
   VH_DHZfirst_Z_dR__1588->SetBinError(18,0.2526305);
   VH_DHZfirst_Z_dR__1588->SetBinError(21,0.2613578);
   VH_DHZfirst_Z_dR__1588->SetBinError(22,0.2289959);
   VH_DHZfirst_Z_dR__1588->SetBinError(23,0.1717981);
   VH_DHZfirst_Z_dR__1588->SetBinError(24,0.2309257);
   VH_DHZfirst_Z_dR__1588->SetBinError(26,0.1084592);
   VH_DHZfirst_Z_dR__1588->SetBinError(27,0.1986667);
   VH_DHZfirst_Z_dR__1588->SetBinError(28,0.5176371);
   VH_DHZfirst_Z_dR__1588->SetBinError(29,0.3431745);
   VH_DHZfirst_Z_dR__1588->SetBinError(30,0.1839259);
   VH_DHZfirst_Z_dR__1588->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1588->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1588->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1588->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1588->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1588->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1588->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1588->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1588->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1588->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1588->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1588->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1588->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1588->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1588->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1588->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1588->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZZ_DHZfirst_16->Modified();
   Z_dR_ZZ_DHZfirst_16->cd();
   Z_dR_ZZ_DHZfirst_16->SetSelected(Z_dR_ZZ_DHZfirst_16);
}
