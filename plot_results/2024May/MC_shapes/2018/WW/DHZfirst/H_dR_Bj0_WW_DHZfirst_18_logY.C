#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_WW_DHZfirst_18/H_dR_Bj0_WW_DHZfirst_18
//=========  (Thu May 23 20:48:49 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WW_DHZfirst_18 = new TCanvas("H_dR_Bj0_WW_DHZfirst_18", "H_dR_Bj0_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WW_DHZfirst_18->SetHighLightColor(2);
   H_dR_Bj0_WW_DHZfirst_18->Range(-1.2,-0.7723779,6.8,0.5472473);
   H_dR_Bj0_WW_DHZfirst_18->SetFillColor(0);
   H_dR_Bj0_WW_DHZfirst_18->SetFillStyle(4000);
   H_dR_Bj0_WW_DHZfirst_18->SetBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_18->SetBorderSize(2);
   H_dR_Bj0_WW_DHZfirst_18->SetLogy();
   H_dR_Bj0_WW_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_Bj0_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1764 = new TH1D("VH_DHZfirst_H_dR_Bj0__1764","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinContent(1,0.9154711);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinContent(2,0.4577355);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinContent(3,0.4577355);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinContent(4,0.4577355);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinContent(5,1.373207);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinContent(6,0.4577355);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinError(1,0.6473358);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinError(2,0.4577355);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinError(3,0.4577355);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinError(4,0.4577355);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinError(5,0.7928212);
   VH_DHZfirst_H_dR_Bj0__1764->SetBinError(6,0.4577355);
   VH_DHZfirst_H_dR_Bj0__1764->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1764->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1764->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1764->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1764->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1764->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1764->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1764->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1764->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1764->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1764->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1764->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1764->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1764->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1764->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1764->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1764->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WW_DHZfirst_18->Modified();
   H_dR_Bj0_WW_DHZfirst_18->cd();
   H_dR_Bj0_WW_DHZfirst_18->SetSelected(H_dR_Bj0_WW_DHZfirst_18);
}
