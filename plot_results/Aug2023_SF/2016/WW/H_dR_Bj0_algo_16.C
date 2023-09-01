#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.2,-2.36322,6.8,21.26898);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLeftMargin(0.15);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0__519 = new TH1D("VbbHcc_algo_H_dR_Bj0__519","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(1,9.54022);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(2,18.00549);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(3,14.24315);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(4,10.0777);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(5,6.852834);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(6,4.434187);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(7,1.746801);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(8,3.090494);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(9,2.418647);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(10,1.746801);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(11,1.343693);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(12,0.6718465);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(13,0.5374772);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(14,0.5374772);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(15,0.2687386);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(16,0.1343693);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(17,0.4031079);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(18,0.4031079);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(19,0.2687386);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0__519->SetBinContent(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(1,1.132216);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(2,1.555437);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(3,1.383417);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(4,1.163672);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(5,0.9595887);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(6,0.7718929);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(7,0.4844754);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(8,0.6444125);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(9,0.5700807);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(10,0.4844754);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(11,0.424913);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(12,0.3004589);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(13,0.2687386);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(14,0.2687386);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(15,0.1900269);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(16,0.1343693);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(17,0.2327345);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(18,0.2327345);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(19,0.1900269);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(20,0.1343693);
   VbbHcc_algo_H_dR_Bj0__519->SetBinError(21,0.1343693);
   VbbHcc_algo_H_dR_Bj0__519->SetEntries(573);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_dR_Bj0__519->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0__519->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0__519->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0__519->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__519->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0__519->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__519->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__519->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__519->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__519->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0__519->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__519->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
