#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_ZZ_DHZfirst_17()
{
//=========Macro generated from canvas: H_dR_Bj0_ZZ_DHZfirst_17/H_dR_Bj0_ZZ_DHZfirst_17
//=========  (Fri May 24 12:42:30 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_ZZ_DHZfirst_17 = new TCanvas("H_dR_Bj0_ZZ_DHZfirst_17", "H_dR_Bj0_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_ZZ_DHZfirst_17->SetHighLightColor(2);
   H_dR_Bj0_ZZ_DHZfirst_17->Range(-1.2,-0.999981,6.8,8.999829);
   H_dR_Bj0_ZZ_DHZfirst_17->SetFillColor(0);
   H_dR_Bj0_ZZ_DHZfirst_17->SetFillStyle(4000);
   H_dR_Bj0_ZZ_DHZfirst_17->SetBorderMode(0);
   H_dR_Bj0_ZZ_DHZfirst_17->SetBorderSize(2);
   H_dR_Bj0_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_Bj0_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj0_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_Bj0_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj0_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1769 = new TH1D("VH_DHZfirst_H_dR_Bj0__1769","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(1,4.033537);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(2,7.618902);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(3,2.240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(4,1.120427);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(5,0.8963415);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(6,0.6722561);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(7,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(8,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(9,0.4481707);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(10,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(11,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(16,0.4481707);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinContent(17,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(1,0.9507137);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(2,1.306631);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(3,0.7086201);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(4,0.5010701);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(5,0.4481707);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(6,0.3881272);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(7,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(8,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(9,0.3169046);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(10,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(11,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(16,0.3169046);
   VH_DHZfirst_H_dR_Bj0__1769->SetBinError(17,0.2240854);
   VH_DHZfirst_H_dR_Bj0__1769->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1769->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1769->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1769->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1769->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1769->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1769->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1769->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1769->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1769->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1769->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1769->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1769->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1769->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1769->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1769->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1769->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_ZZ_DHZfirst_17->Modified();
   H_dR_Bj0_ZZ_DHZfirst_17->cd();
   H_dR_Bj0_ZZ_DHZfirst_17->SetSelected(H_dR_Bj0_ZZ_DHZfirst_17);
}
