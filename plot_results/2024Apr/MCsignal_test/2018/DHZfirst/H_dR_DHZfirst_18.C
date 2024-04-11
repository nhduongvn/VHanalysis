#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_DHZfirst_18()
{
//=========Macro generated from canvas: H_dR_DHZfirst_18/H_dR_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *H_dR_DHZfirst_18 = new TCanvas("H_dR_DHZfirst_18", "H_dR_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_DHZfirst_18->SetHighLightColor(2);
   H_dR_DHZfirst_18->Range(-1.24,-24088.85,7.026667,216799.6);
   H_dR_DHZfirst_18->SetFillColor(0);
   H_dR_DHZfirst_18->SetFillStyle(4000);
   H_dR_DHZfirst_18->SetBorderMode(0);
   H_dR_DHZfirst_18->SetBorderSize(2);
   H_dR_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__54 = new TH1D("VH_DHZfirst_H_dR__54","",30,0,6);
   VH_DHZfirst_H_dR__54->SetBinContent(3,323.6378);
   VH_DHZfirst_H_dR__54->SetBinContent(4,183534.1);
   VH_DHZfirst_H_dR__54->SetBinContent(5,16515.21);
   VH_DHZfirst_H_dR__54->SetBinContent(6,1924.736);
   VH_DHZfirst_H_dR__54->SetBinContent(7,27471.99);
   VH_DHZfirst_H_dR__54->SetBinContent(8,7476.941);
   VH_DHZfirst_H_dR__54->SetBinContent(9,9134.004);
   VH_DHZfirst_H_dR__54->SetBinContent(10,1076.417);
   VH_DHZfirst_H_dR__54->SetBinContent(11,1296.944);
   VH_DHZfirst_H_dR__54->SetBinContent(12,12810.2);
   VH_DHZfirst_H_dR__54->SetBinContent(13,1516.11);
   VH_DHZfirst_H_dR__54->SetBinContent(14,2051.066);
   VH_DHZfirst_H_dR__54->SetBinContent(15,1888.016);
   VH_DHZfirst_H_dR__54->SetBinContent(17,1004.088);
   VH_DHZfirst_H_dR__54->SetBinContent(18,1814.493);
   VH_DHZfirst_H_dR__54->SetBinContent(19,877.3532);
   VH_DHZfirst_H_dR__54->SetBinContent(21,319.0205);
   VH_DHZfirst_H_dR__54->SetBinContent(23,1483.732);
   VH_DHZfirst_H_dR__54->SetBinContent(24,694.3154);
   VH_DHZfirst_H_dR__54->SetBinContent(25,7507.148);
   VH_DHZfirst_H_dR__54->SetBinContent(29,1546.174);
   VH_DHZfirst_H_dR__54->SetBinContent(31,1572.413);
   VH_DHZfirst_H_dR__54->SetBinError(3,323.6378);
   VH_DHZfirst_H_dR__54->SetBinError(4,179219);
   VH_DHZfirst_H_dR__54->SetBinError(5,14591.37);
   VH_DHZfirst_H_dR__54->SetBinError(6,1189.356);
   VH_DHZfirst_H_dR__54->SetBinError(7,20925.34);
   VH_DHZfirst_H_dR__54->SetBinError(8,5492.639);
   VH_DHZfirst_H_dR__54->SetBinError(9,8353.775);
   VH_DHZfirst_H_dR__54->SetBinError(10,761.4662);
   VH_DHZfirst_H_dR__54->SetBinError(11,919.3159);
   VH_DHZfirst_H_dR__54->SetBinError(12,11101.43);
   VH_DHZfirst_H_dR__54->SetBinError(13,1516.11);
   VH_DHZfirst_H_dR__54->SetBinError(14,1562.504);
   VH_DHZfirst_H_dR__54->SetBinError(15,1048.931);
   VH_DHZfirst_H_dR__54->SetBinError(17,1004.088);
   VH_DHZfirst_H_dR__54->SetBinError(18,1049.106);
   VH_DHZfirst_H_dR__54->SetBinError(19,877.3532);
   VH_DHZfirst_H_dR__54->SetBinError(21,319.0205);
   VH_DHZfirst_H_dR__54->SetBinError(23,1062.576);
   VH_DHZfirst_H_dR__54->SetBinError(24,694.3154);
   VH_DHZfirst_H_dR__54->SetBinError(25,7507.148);
   VH_DHZfirst_H_dR__54->SetBinError(29,1546.174);
   VH_DHZfirst_H_dR__54->SetBinError(31,1572.413);
   VH_DHZfirst_H_dR__54->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__54->SetLineColor(ci);
   VH_DHZfirst_H_dR__54->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__54->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__54->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__54->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__54->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__54->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__54->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__54->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__54->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__54->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__54->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__54->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__54->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__54->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__54->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_DHZfirst_18->Modified();
   H_dR_DHZfirst_18->cd();
   H_dR_DHZfirst_18->SetSelected(H_dR_DHZfirst_18);
}
