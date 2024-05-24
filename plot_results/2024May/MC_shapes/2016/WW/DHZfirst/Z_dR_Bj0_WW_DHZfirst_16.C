#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WW_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_WW_DHZfirst_16/Z_dR_Bj0_WW_DHZfirst_16
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WW_DHZfirst_16 = new TCanvas("Z_dR_Bj0_WW_DHZfirst_16", "Z_dR_Bj0_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WW_DHZfirst_16->SetHighLightColor(2);
   Z_dR_Bj0_WW_DHZfirst_16->Range(-1.2,-0.3527194,6.8,3.174475);
   Z_dR_Bj0_WW_DHZfirst_16->SetFillColor(0);
   Z_dR_Bj0_WW_DHZfirst_16->SetFillStyle(4000);
   Z_dR_Bj0_WW_DHZfirst_16->SetBorderMode(0);
   Z_dR_Bj0_WW_DHZfirst_16->SetBorderSize(2);
   Z_dR_Bj0_WW_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_Bj0_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_Bj0_WW_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1822 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1822","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(1,0.8062158);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(2,2.687386);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(3,1.074954);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(4,0.8062158);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(5,1.074954);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(7,0.6718465);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(8,0.8062158);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(9,0.2687386);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(10,0.1343693);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(11,0.2687386);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(12,0.1343693);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinContent(15,0.2687386);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(1,0.3291362);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(2,0.6009178);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(3,0.3800538);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(4,0.3291362);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(5,0.3800538);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(7,0.3004589);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(8,0.3291362);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(9,0.1900269);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(10,0.1343693);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(11,0.1900269);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(12,0.1343693);
   VH_DHZfirst_Z_dR_Bj0__1822->SetBinError(15,0.1900269);
   VH_DHZfirst_Z_dR_Bj0__1822->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1822->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1822->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1822->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1822->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1822->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1822->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1822->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1822->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1822->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1822->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1822->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1822->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1822->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1822->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1822->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1822->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WW_DHZfirst_16->Modified();
   Z_dR_Bj0_WW_DHZfirst_16->cd();
   Z_dR_Bj0_WW_DHZfirst_16->SetSelected(Z_dR_Bj0_WW_DHZfirst_16);
}
