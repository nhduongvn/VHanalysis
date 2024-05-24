#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_ZZ_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_ZZ_DHZfirst_16/Z_dR_Bj0_ZZ_DHZfirst_16
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_ZZ_DHZfirst_16 = new TCanvas("Z_dR_Bj0_ZZ_DHZfirst_16", "Z_dR_Bj0_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetHighLightColor(2);
   Z_dR_Bj0_ZZ_DHZfirst_16->Range(-1.2,-2.138703,6.8,19.24833);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetFillColor(0);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetFillStyle(4000);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetBorderMode(0);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetBorderSize(2);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1828 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1828","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(1,3.4049);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(2,16.29488);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(3,7.053007);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(4,3.648107);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(5,1.70245);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(6,1.216036);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(7,0.4864143);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(8,1.459243);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(9,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(10,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(11,0.4864143);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(12,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(15,0.4864143);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(17,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(18,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinContent(20,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(1,0.9099978);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(2,1.990736);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(3,1.309711);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(4,0.9419372);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(5,0.6434656);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(6,0.5438277);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(7,0.3439469);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(8,0.5957334);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(9,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(10,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(11,0.3439469);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(12,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(15,0.3439469);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(17,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(18,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetBinError(20,0.2432072);
   VH_DHZfirst_Z_dR_Bj0__1828->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1828->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1828->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1828->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1828->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1828->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1828->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1828->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1828->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1828->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1828->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1828->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1828->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1828->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1828->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1828->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1828->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_ZZ_DHZfirst_16->Modified();
   Z_dR_Bj0_ZZ_DHZfirst_16->cd();
   Z_dR_Bj0_ZZ_DHZfirst_16->SetSelected(Z_dR_Bj0_ZZ_DHZfirst_16);
}
