#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_algo_16()
{
//=========Macro generated from canvas: H_dR_algo_16/H_dR_algo_16
//=========  (Fri Sep  1 13:23:37 2023) by ROOT version 6.28/04
   TCanvas *H_dR_algo_16 = new TCanvas("H_dR_algo_16", "H_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_algo_16->SetHighLightColor(2);
   H_dR_algo_16->Range(-1.2,-1.425212,6.8,12.8269);
   H_dR_algo_16->SetFillColor(0);
   H_dR_algo_16->SetBorderMode(0);
   H_dR_algo_16->SetBorderSize(2);
   H_dR_algo_16->SetLeftMargin(0.15);
   H_dR_algo_16->SetFrameBorderMode(0);
   H_dR_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR__446 = new TH1D("VbbHcc_algo_H_dR__446","",30,0,6);
   VbbHcc_algo_H_dR__446->SetBinContent(3,7.785461);
   VbbHcc_algo_H_dR__446->SetBinContent(4,10.85875);
   VbbHcc_algo_H_dR__446->SetBinContent(5,9.696644);
   VbbHcc_algo_H_dR__446->SetBinContent(6,9.625047);
   VbbHcc_algo_H_dR__446->SetBinContent(7,5.956051);
   VbbHcc_algo_H_dR__446->SetBinContent(8,5.603437);
   VbbHcc_algo_H_dR__446->SetBinContent(9,6.389289);
   VbbHcc_algo_H_dR__446->SetBinContent(10,4.402977);
   VbbHcc_algo_H_dR__446->SetBinContent(11,4.384854);
   VbbHcc_algo_H_dR__446->SetBinContent(12,4.81816);
   VbbHcc_algo_H_dR__446->SetBinContent(13,5.895838);
   VbbHcc_algo_H_dR__446->SetBinContent(14,5.428524);
   VbbHcc_algo_H_dR__446->SetBinContent(15,4.724599);
   VbbHcc_algo_H_dR__446->SetBinContent(16,6.83101);
   VbbHcc_algo_H_dR__446->SetBinContent(17,4.511629);
   VbbHcc_algo_H_dR__446->SetBinContent(18,5.578587);
   VbbHcc_algo_H_dR__446->SetBinContent(19,5.735123);
   VbbHcc_algo_H_dR__446->SetBinContent(20,5.430353);
   VbbHcc_algo_H_dR__446->SetBinContent(21,4.241359);
   VbbHcc_algo_H_dR__446->SetBinContent(22,3.24919);
   VbbHcc_algo_H_dR__446->SetBinContent(23,2.790883);
   VbbHcc_algo_H_dR__446->SetBinContent(24,1.306272);
   VbbHcc_algo_H_dR__446->SetBinContent(25,2.222444);
   VbbHcc_algo_H_dR__446->SetBinContent(26,1.921229);
   VbbHcc_algo_H_dR__446->SetBinContent(27,2.551987);
   VbbHcc_algo_H_dR__446->SetBinContent(28,1.071115);
   VbbHcc_algo_H_dR__446->SetBinContent(29,0.6700413);
   VbbHcc_algo_H_dR__446->SetBinContent(30,0.1640944);
   VbbHcc_algo_H_dR__446->SetBinContent(31,0.3912662);
   VbbHcc_algo_H_dR__446->SetBinError(3,1.333181);
   VbbHcc_algo_H_dR__446->SetBinError(4,1.553506);
   VbbHcc_algo_H_dR__446->SetBinError(5,1.396197);
   VbbHcc_algo_H_dR__446->SetBinError(6,1.371745);
   VbbHcc_algo_H_dR__446->SetBinError(7,1.107519);
   VbbHcc_algo_H_dR__446->SetBinError(8,1.080845);
   VbbHcc_algo_H_dR__446->SetBinError(9,1.201732);
   VbbHcc_algo_H_dR__446->SetBinError(10,1.001082);
   VbbHcc_algo_H_dR__446->SetBinError(11,0.9478234);
   VbbHcc_algo_H_dR__446->SetBinError(12,0.9815354);
   VbbHcc_algo_H_dR__446->SetBinError(13,1.106469);
   VbbHcc_algo_H_dR__446->SetBinError(14,1.064306);
   VbbHcc_algo_H_dR__446->SetBinError(15,1.000189);
   VbbHcc_algo_H_dR__446->SetBinError(16,1.222784);
   VbbHcc_algo_H_dR__446->SetBinError(17,0.9569991);
   VbbHcc_algo_H_dR__446->SetBinError(18,1.084714);
   VbbHcc_algo_H_dR__446->SetBinError(19,1.079861);
   VbbHcc_algo_H_dR__446->SetBinError(20,1.074397);
   VbbHcc_algo_H_dR__446->SetBinError(21,0.9227842);
   VbbHcc_algo_H_dR__446->SetBinError(22,0.8116669);
   VbbHcc_algo_H_dR__446->SetBinError(23,0.7592664);
   VbbHcc_algo_H_dR__446->SetBinError(24,0.5648297);
   VbbHcc_algo_H_dR__446->SetBinError(25,0.65542);
   VbbHcc_algo_H_dR__446->SetBinError(26,0.6118647);
   VbbHcc_algo_H_dR__446->SetBinError(27,0.756211);
   VbbHcc_algo_H_dR__446->SetBinError(28,0.4915503);
   VbbHcc_algo_H_dR__446->SetBinError(29,0.388618);
   VbbHcc_algo_H_dR__446->SetBinError(30,0.1640944);
   VbbHcc_algo_H_dR__446->SetBinError(31,0.2770702);
   VbbHcc_algo_H_dR__446->SetEntries(665);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR__446->SetFillColor(ci);
   VbbHcc_algo_H_dR__446->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_algo_H_dR__446->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR__446->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__446->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR__446->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__446->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__446->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__446->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR__446->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR__446->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR__446->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_algo_16->Modified();
   H_dR_algo_16->cd();
   H_dR_algo_16->SetSelected(H_dR_algo_16);
}
