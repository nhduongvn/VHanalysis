#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_16()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(-1.2,-0.002512788,6.8,0.02261509);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetLeftMargin(0.15);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj0__884 = new TH1D("VbbHcc_both_H_dR_Bj0__884","",30,0,6);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(1,0.008205022);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(2,0.01914505);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(3,0.01094003);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(4,0.01914505);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(5,0.008205022);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(6,0.008205022);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(7,0.01094003);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(9,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(10,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(11,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(14,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinContent(16,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(1,0.004737172);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(2,0.00723615);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(3,0.005470015);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(4,0.00723615);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(5,0.004737172);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(6,0.004737172);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(7,0.005470015);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(9,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(10,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(11,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(14,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetBinError(16,0.002735007);
   VbbHcc_both_H_dR_Bj0__884->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_Bj0__884->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj0__884->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_both_H_dR_Bj0__884->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj0__884->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__884->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0__884->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__884->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__884->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__884->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__884->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0__884->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__884->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
