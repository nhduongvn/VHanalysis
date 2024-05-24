#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_ZZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_ZZ_DHZfirst_18/Z_dR_Bj0_ZZ_DHZfirst_18
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_ZZ_DHZfirst_18 = new TCanvas("Z_dR_Bj0_ZZ_DHZfirst_18", "Z_dR_Bj0_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetHighLightColor(2);
   Z_dR_Bj0_ZZ_DHZfirst_18->Range(-1.2,-1.134948,6.8,1.666723);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetFillColor(0);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetFillStyle(4000);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetBorderMode(0);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetBorderSize(2);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetLogy();
   Z_dR_Bj0_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1830 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1830","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(1,2.514729);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(2,12.85306);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(3,5.588287);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(4,2.794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(5,1.117657);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(6,0.2794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(7,0.2794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(9,0.2794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinContent(17,0.2794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(1,0.8382431);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(2,1.89508);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(3,1.249579);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(4,0.8835858);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(5,0.5588287);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(6,0.2794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(7,0.2794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(9,0.2794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetBinError(17,0.2794144);
   VH_DHZfirst_Z_dR_Bj0__1830->SetEntries(93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1830->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1830->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1830->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1830->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1830->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1830->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1830->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1830->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1830->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1830->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1830->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1830->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1830->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1830->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1830->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1830->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_ZZ_DHZfirst_18->Modified();
   Z_dR_Bj0_ZZ_DHZfirst_18->cd();
   Z_dR_Bj0_ZZ_DHZfirst_18->SetSelected(Z_dR_Bj0_ZZ_DHZfirst_18);
}
