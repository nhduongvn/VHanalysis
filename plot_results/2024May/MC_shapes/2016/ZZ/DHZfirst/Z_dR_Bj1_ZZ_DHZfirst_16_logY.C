#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_ZZ_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_ZZ_DHZfirst_16/Z_dR_Bj1_ZZ_DHZfirst_16
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_ZZ_DHZfirst_16 = new TCanvas("Z_dR_Bj1_ZZ_DHZfirst_16", "Z_dR_Bj1_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetHighLightColor(2);
   Z_dR_Bj1_ZZ_DHZfirst_16->Range(-1.2,-1.197531,6.8,1.627244);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetFillColor(0);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetFillStyle(4000);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetBorderMode(0);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetBorderSize(2);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetLogy();
   Z_dR_Bj1_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj1_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__1858 = new TH1D("VH_DHZfirst_Z_dR_Bj1__1858","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(2,8.025836);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(3,11.67394);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(4,6.566593);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(5,3.4049);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(6,0.9728286);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(7,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(8,1.216036);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(10,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(11,1.216036);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(13,0.4864143);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(14,0.4864143);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(15,0.9728286);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(17,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(20,0.7296215);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(21,0.4864143);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(23,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(24,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinContent(27,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(2,1.397119);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(3,1.684989);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(4,1.263741);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(5,0.9099978);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(6,0.4864143);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(7,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(8,0.5438277);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(10,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(11,0.5438277);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(13,0.3439469);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(14,0.3439469);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(15,0.4864143);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(17,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(20,0.4212471);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(21,0.3439469);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(23,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(24,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetBinError(27,0.2432072);
   VH_DHZfirst_Z_dR_Bj1__1858->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__1858->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__1858->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__1858->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__1858->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1858->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1858->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1858->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__1858->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1858->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__1858->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__1858->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__1858->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1858->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1858->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1858->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1858->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_ZZ_DHZfirst_16->Modified();
   Z_dR_Bj1_ZZ_DHZfirst_16->cd();
   Z_dR_Bj1_ZZ_DHZfirst_16->SetSelected(Z_dR_Bj1_ZZ_DHZfirst_16);
}
