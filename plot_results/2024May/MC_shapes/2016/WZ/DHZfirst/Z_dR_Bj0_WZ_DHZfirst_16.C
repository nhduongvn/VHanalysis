#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WZ_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_WZ_DHZfirst_16/Z_dR_Bj0_WZ_DHZfirst_16
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WZ_DHZfirst_16 = new TCanvas("Z_dR_Bj0_WZ_DHZfirst_16", "Z_dR_Bj0_WZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WZ_DHZfirst_16->SetHighLightColor(2);
   Z_dR_Bj0_WZ_DHZfirst_16->Range(-1.2,-2.942973,6.8,26.48675);
   Z_dR_Bj0_WZ_DHZfirst_16->SetFillColor(0);
   Z_dR_Bj0_WZ_DHZfirst_16->SetFillStyle(4000);
   Z_dR_Bj0_WZ_DHZfirst_16->SetBorderMode(0);
   Z_dR_Bj0_WZ_DHZfirst_16->SetBorderSize(2);
   Z_dR_Bj0_WZ_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_Bj0_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_WZ_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_Bj0_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_WZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1825 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1825","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(1,6.42202);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(2,22.42265);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(3,11.32017);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(4,3.809673);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(5,2.176956);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(6,1.306174);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(7,0.6530868);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(8,0.8707824);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(9,0.544239);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(10,0.4353912);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(11,0.4353912);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(12,0.1088478);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(15,0.1088478);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(18,0.2176956);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(19,0.1088478);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinContent(20,0.1088478);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(1,0.8360758);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(2,1.56226);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(3,1.110034);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(4,0.6439523);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(5,0.4867822);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(6,0.3770598);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(7,0.2666216);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(8,0.3078681);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(9,0.2433911);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(10,0.2176956);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(11,0.2176956);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(12,0.1088478);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(15,0.1088478);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(18,0.153934);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(19,0.1088478);
   VH_DHZfirst_Z_dR_Bj0__1825->SetBinError(20,0.1088478);
   VH_DHZfirst_Z_dR_Bj0__1825->SetEntries(469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1825->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1825->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1825->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1825->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1825->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1825->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1825->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1825->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1825->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1825->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1825->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1825->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1825->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1825->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1825->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1825->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WZ_DHZfirst_16->Modified();
   Z_dR_Bj0_WZ_DHZfirst_16->cd();
   Z_dR_Bj0_WZ_DHZfirst_16->SetSelected(Z_dR_Bj0_WZ_DHZfirst_16);
}
