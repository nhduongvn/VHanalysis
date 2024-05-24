#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_ZZ_DHZfirst_17()
{
//=========Macro generated from canvas: Z_dR_ZZ_DHZfirst_17/Z_dR_ZZ_DHZfirst_17
//=========  (Fri May 24 12:42:28 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_ZZ_DHZfirst_17 = new TCanvas("Z_dR_ZZ_DHZfirst_17", "Z_dR_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_ZZ_DHZfirst_17->SetHighLightColor(2);
   Z_dR_ZZ_DHZfirst_17->Range(-1.2,-0.6137533,6.8,5.523779);
   Z_dR_ZZ_DHZfirst_17->SetFillColor(0);
   Z_dR_ZZ_DHZfirst_17->SetFillStyle(4000);
   Z_dR_ZZ_DHZfirst_17->SetBorderMode(0);
   Z_dR_ZZ_DHZfirst_17->SetBorderSize(2);
   Z_dR_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__1589 = new TH1D("VH_DHZfirst_Z_dR__1589","",30,0,6);
   VH_DHZfirst_Z_dR__1589->SetBinContent(3,4.137922);
   VH_DHZfirst_Z_dR__1589->SetBinContent(4,4.676215);
   VH_DHZfirst_Z_dR__1589->SetBinContent(5,3.681192);
   VH_DHZfirst_Z_dR__1589->SetBinContent(6,2.691128);
   VH_DHZfirst_Z_dR__1589->SetBinContent(7,0.7178812);
   VH_DHZfirst_Z_dR__1589->SetBinContent(8,0.8871471);
   VH_DHZfirst_Z_dR__1589->SetBinContent(10,0.1736909);
   VH_DHZfirst_Z_dR__1589->SetBinContent(11,0.2013183);
   VH_DHZfirst_Z_dR__1589->SetBinContent(12,0.3294395);
   VH_DHZfirst_Z_dR__1589->SetBinContent(14,0.3077808);
   VH_DHZfirst_Z_dR__1589->SetBinContent(18,0.4924073);
   VH_DHZfirst_Z_dR__1589->SetBinContent(27,0.3525356);
   VH_DHZfirst_Z_dR__1589->SetBinContent(28,0.3028779);
   VH_DHZfirst_Z_dR__1589->SetBinContent(31,0.1254538);
   VH_DHZfirst_Z_dR__1589->SetBinError(3,1.065032);
   VH_DHZfirst_Z_dR__1589->SetBinError(4,1.408863);
   VH_DHZfirst_Z_dR__1589->SetBinError(5,1.119071);
   VH_DHZfirst_Z_dR__1589->SetBinError(6,0.7783503);
   VH_DHZfirst_Z_dR__1589->SetBinError(7,0.3647147);
   VH_DHZfirst_Z_dR__1589->SetBinError(8,0.655782);
   VH_DHZfirst_Z_dR__1589->SetBinError(10,0.1736909);
   VH_DHZfirst_Z_dR__1589->SetBinError(11,0.2013183);
   VH_DHZfirst_Z_dR__1589->SetBinError(12,0.2345015);
   VH_DHZfirst_Z_dR__1589->SetBinError(14,0.3077808);
   VH_DHZfirst_Z_dR__1589->SetBinError(18,0.3528752);
   VH_DHZfirst_Z_dR__1589->SetBinError(27,0.254013);
   VH_DHZfirst_Z_dR__1589->SetBinError(28,0.2177523);
   VH_DHZfirst_Z_dR__1589->SetBinError(31,0.1254538);
   VH_DHZfirst_Z_dR__1589->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__1589->SetLineColor(ci);
   VH_DHZfirst_Z_dR__1589->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__1589->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__1589->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1589->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1589->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1589->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__1589->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1589->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__1589->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__1589->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__1589->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1589->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__1589->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__1589->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__1589->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_ZZ_DHZfirst_17->Modified();
   Z_dR_ZZ_DHZfirst_17->cd();
   Z_dR_ZZ_DHZfirst_17->SetSelected(Z_dR_ZZ_DHZfirst_17);
}
