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
   Z_dR_Bj0_both_16->Range(-1.2,-0.001500517,6.8,0.01350465);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLeftMargin(0.15);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0__915 = new TH1D("VbbHcc_both_Z_dR_Bj0__915","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(1,0.001429063);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(2,0.01143251);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(3,0.01143251);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(4,0.009646178);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(5,0.003215393);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(6,0.001429063);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(7,0.001429063);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(8,0.001429063);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(9,0.001786329);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(11,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(12,0.0007145317);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(13,0.0007145317);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(16,0.001429063);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(17,0.001071798);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(19,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinContent(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(1,0.0007145317);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(2,0.002021001);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(3,0.002021001);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(4,0.001856408);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(5,0.001071798);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(6,0.0007145317);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(7,0.0007145317);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(8,0.0007145317);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(9,0.0007988707);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(11,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(12,0.0005052502);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(13,0.0005052502);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(16,0.0007145317);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(17,0.0006188026);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(19,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(20,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(21,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetBinError(25,0.0003572658);
   VbbHcc_both_Z_dR_Bj0__915->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_dR_Bj0__915->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj0__915->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_both_Z_dR_Bj0__915->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj0__915->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__915->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0__915->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__915->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__915->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__915->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__915->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0__915->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__915->Draw("HIST");
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
