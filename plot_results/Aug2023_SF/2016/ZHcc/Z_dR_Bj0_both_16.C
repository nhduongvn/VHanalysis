#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.2,-0.002512788,6.8,0.02261509);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLeftMargin(0.15);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0__914 = new TH1D("VbbHcc_both_Z_dR_Bj0__914","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(2,0.01914505);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(3,0.01914505);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(4,0.01367504);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(5,0.01094003);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(8,0.005470015);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(14,0.01094003);
   VbbHcc_both_Z_dR_Bj0__914->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(2,0.00723615);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(3,0.00723615);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(4,0.006115663);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(5,0.005470015);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(8,0.003867885);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(14,0.005470015);
   VbbHcc_both_Z_dR_Bj0__914->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0__914->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0__914->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj0__914->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_both_Z_dR_Bj0__914->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj0__914->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__914->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0__914->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__914->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__914->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__914->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__914->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0__914->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__914->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
