#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_ZZ_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_ZZ_DHZfirst_18/Z_dR_Bj1_ZZ_DHZfirst_18
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_ZZ_DHZfirst_18 = new TCanvas("Z_dR_Bj1_ZZ_DHZfirst_18", "Z_dR_Bj1_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetHighLightColor(2);
   Z_dR_Bj1_ZZ_DHZfirst_18->Range(-1.2,-1.246887,6.8,11.22198);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetFillColor(0);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetFillStyle(4000);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetBorderMode(0);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetBorderSize(2);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__1860 = new TH1D("VH_DHZfirst_Z_dR_Bj1__1860","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(2,6.705944);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(3,9.500088);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(4,3.632387);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(5,1.397072);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(6,0.5588287);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(7,0.5588287);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(8,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(10,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(11,0.5588287);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(13,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(15,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(16,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(18,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(21,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(22,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(23,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(24,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinContent(27,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(2,1.368845);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(3,1.629252);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(4,1.007443);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(5,0.6247895);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(6,0.3951516);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(7,0.3951516);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(8,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(10,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(11,0.3951516);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(13,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(15,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(16,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(18,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(21,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(22,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(23,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(24,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetBinError(27,0.2794144);
   VH_DHZfirst_Z_dR_Bj1__1860->SetEntries(93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__1860->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__1860->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__1860->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__1860->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1860->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1860->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1860->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__1860->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1860->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__1860->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__1860->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__1860->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1860->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1860->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1860->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1860->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_ZZ_DHZfirst_18->Modified();
   Z_dR_Bj1_ZZ_DHZfirst_18->cd();
   Z_dR_Bj1_ZZ_DHZfirst_18->SetSelected(Z_dR_Bj1_ZZ_DHZfirst_18);
}
