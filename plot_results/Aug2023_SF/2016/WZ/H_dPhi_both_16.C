#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_both_16()
{
//=========Macro generated from canvas: H_dPhi_both_16/H_dPhi_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *H_dPhi_both_16 = new TCanvas("H_dPhi_both_16", "H_dPhi_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_16->SetHighLightColor(2);
   H_dPhi_both_16->Range(-0.8,-0.02451067,4.533333,0.220596);
   H_dPhi_both_16->SetFillColor(0);
   H_dPhi_both_16->SetBorderMode(0);
   H_dPhi_both_16->SetBorderSize(2);
   H_dPhi_both_16->SetLeftMargin(0.15);
   H_dPhi_both_16->SetFrameBorderMode(0);
   H_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi__835 = new TH1D("VbbHcc_both_H_dPhi__835","",120,0,4);
   VbbHcc_both_H_dPhi__835->SetBinContent(0,2.66024);
   VbbHcc_both_H_dPhi__835->SetBinContent(7,0.08449427);
   VbbHcc_both_H_dPhi__835->SetBinContent(9,0.07912677);
   VbbHcc_both_H_dPhi__835->SetBinContent(13,0.0849636);
   VbbHcc_both_H_dPhi__835->SetBinContent(14,0.06786106);
   VbbHcc_both_H_dPhi__835->SetBinContent(15,0.1227835);
   VbbHcc_both_H_dPhi__835->SetBinContent(22,0.1099732);
   VbbHcc_both_H_dPhi__835->SetBinContent(32,0.1098299);
   VbbHcc_both_H_dPhi__835->SetBinContent(33,0.1252896);
   VbbHcc_both_H_dPhi__835->SetBinContent(38,0.08004759);
   VbbHcc_both_H_dPhi__835->SetBinContent(40,0.08794218);
   VbbHcc_both_H_dPhi__835->SetBinContent(42,0.07985507);
   VbbHcc_both_H_dPhi__835->SetBinContent(55,0.1428178);
   VbbHcc_both_H_dPhi__835->SetBinContent(69,0.08391191);
   VbbHcc_both_H_dPhi__835->SetBinContent(74,0.06333091);
   VbbHcc_both_H_dPhi__835->SetBinContent(77,0.09546661);
   VbbHcc_both_H_dPhi__835->SetBinContent(80,0.1627573);
   VbbHcc_both_H_dPhi__835->SetBinContent(81,0.08024226);
   VbbHcc_both_H_dPhi__835->SetBinContent(86,0.09378195);
   VbbHcc_both_H_dPhi__835->SetBinContent(88,0.1433357);
   VbbHcc_both_H_dPhi__835->SetBinContent(89,0.08505562);
   VbbHcc_both_H_dPhi__835->SetBinContent(90,0.1867479);
   VbbHcc_both_H_dPhi__835->SetBinContent(94,0.05989596);
   VbbHcc_both_H_dPhi__835->SetBinError(0,0.5128018);
   VbbHcc_both_H_dPhi__835->SetBinError(7,0.08449427);
   VbbHcc_both_H_dPhi__835->SetBinError(9,0.07912677);
   VbbHcc_both_H_dPhi__835->SetBinError(13,0.0849636);
   VbbHcc_both_H_dPhi__835->SetBinError(14,0.06786106);
   VbbHcc_both_H_dPhi__835->SetBinError(15,0.1227835);
   VbbHcc_both_H_dPhi__835->SetBinError(22,0.1099732);
   VbbHcc_both_H_dPhi__835->SetBinError(32,0.1098299);
   VbbHcc_both_H_dPhi__835->SetBinError(33,0.1252896);
   VbbHcc_both_H_dPhi__835->SetBinError(38,0.08004759);
   VbbHcc_both_H_dPhi__835->SetBinError(40,0.08794218);
   VbbHcc_both_H_dPhi__835->SetBinError(42,0.07985507);
   VbbHcc_both_H_dPhi__835->SetBinError(55,0.1428178);
   VbbHcc_both_H_dPhi__835->SetBinError(69,0.08391191);
   VbbHcc_both_H_dPhi__835->SetBinError(74,0.06333091);
   VbbHcc_both_H_dPhi__835->SetBinError(77,0.09546661);
   VbbHcc_both_H_dPhi__835->SetBinError(80,0.11638);
   VbbHcc_both_H_dPhi__835->SetBinError(81,0.08024226);
   VbbHcc_both_H_dPhi__835->SetBinError(86,0.09378195);
   VbbHcc_both_H_dPhi__835->SetBinError(88,0.1433357);
   VbbHcc_both_H_dPhi__835->SetBinError(89,0.08505562);
   VbbHcc_both_H_dPhi__835->SetBinError(90,0.132125);
   VbbHcc_both_H_dPhi__835->SetBinError(94,0.05989596);
   VbbHcc_both_H_dPhi__835->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dPhi__835->SetFillColor(ci);
   VbbHcc_both_H_dPhi__835->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi__835->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi__835->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__835->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dPhi__835->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__835->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__835->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__835->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__835->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dPhi__835->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__835->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_16->Modified();
   H_dPhi_both_16->cd();
   H_dPhi_both_16->SetSelected(H_dPhi_both_16);
}
