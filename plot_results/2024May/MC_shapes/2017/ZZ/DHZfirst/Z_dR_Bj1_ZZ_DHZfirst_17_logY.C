#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_ZZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_ZZ_DHZfirst_17/Z_dR_Bj1_ZZ_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_ZZ_DHZfirst_17 = new TCanvas("Z_dR_Bj1_ZZ_DHZfirst_17", "Z_dR_Bj1_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetHighLightColor(2);
   Z_dR_Bj1_ZZ_DHZfirst_17->Range(-1.2,-1.203834,6.8,1.328338);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetFillColor(0);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetFillStyle(4000);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetBorderMode(0);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetBorderSize(2);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetLogy();
   Z_dR_Bj1_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__1859 = new TH1D("VH_DHZfirst_Z_dR_Bj1__1859","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(2,6.050305);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(3,6.27439);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(4,3.137195);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(5,0.6722561);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(6,0.8963415);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(8,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(9,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(14,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(18,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(20,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(26,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinContent(27,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(2,1.164382);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(3,1.185748);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(4,0.8384507);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(5,0.3881272);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(6,0.4481707);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(8,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(9,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(14,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(18,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(20,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(26,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetBinError(27,0.2240854);
   VH_DHZfirst_Z_dR_Bj1__1859->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__1859->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__1859->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__1859->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__1859->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1859->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1859->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1859->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__1859->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1859->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__1859->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__1859->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__1859->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1859->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1859->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1859->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1859->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_ZZ_DHZfirst_17->Modified();
   Z_dR_Bj1_ZZ_DHZfirst_17->cd();
   Z_dR_Bj1_ZZ_DHZfirst_17->SetSelected(Z_dR_Bj1_ZZ_DHZfirst_17);
}
