#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_DHZfirst_18/Z_dR_Bj1_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_DHZfirst_18 = new TCanvas("Z_dR_Bj1_DHZfirst_18", "Z_dR_Bj1_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_DHZfirst_18->SetHighLightColor(2);
   Z_dR_Bj1_DHZfirst_18->Range(-1.2,-8117.424,6.8,73056.81);
   Z_dR_Bj1_DHZfirst_18->SetFillColor(0);
   Z_dR_Bj1_DHZfirst_18->SetFillStyle(4000);
   Z_dR_Bj1_DHZfirst_18->SetBorderMode(0);
   Z_dR_Bj1_DHZfirst_18->SetBorderSize(2);
   Z_dR_Bj1_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_Bj1_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_Bj1_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__62 = new TH1D("VH_DHZfirst_Z_dR_Bj1__62","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(2,8882.944);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(3,61847.04);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(4,16280.99);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(5,8882.944);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(6,2183.925);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(7,17087.01);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(8,305.7868);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(9,1048.234);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(10,829.904);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(11,1572.352);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(12,524.1172);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(13,1048.234);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(14,524.1172);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(16,305.7868);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(18,829.904);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(19,524.1172);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinContent(28,524.1172);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(2,7366.74);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(3,61020.15);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(4,10374.29);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(5,7366.74);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(6,1005.538);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(7,10399.64);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(8,305.7868);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(9,741.2136);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(10,606.7985);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(11,907.7976);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(12,524.1172);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(13,741.2136);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(14,524.1172);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(16,305.7868);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(18,606.7985);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(19,524.1172);
   VH_DHZfirst_Z_dR_Bj1__62->SetBinError(28,524.1172);
   VH_DHZfirst_Z_dR_Bj1__62->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__62->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__62->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__62->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__62->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__62->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_DHZfirst_18->Modified();
   Z_dR_Bj1_DHZfirst_18->cd();
   Z_dR_Bj1_DHZfirst_18->SetSelected(Z_dR_Bj1_DHZfirst_18);
}
