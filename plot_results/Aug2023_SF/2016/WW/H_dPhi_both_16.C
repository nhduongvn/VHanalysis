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
   H_dPhi_both_16->Range(-0.8,-0.01846816,4.533333,0.1662135);
   H_dPhi_both_16->SetFillColor(0);
   H_dPhi_both_16->SetBorderMode(0);
   H_dPhi_both_16->SetBorderSize(2);
   H_dPhi_both_16->SetLeftMargin(0.15);
   H_dPhi_both_16->SetFrameBorderMode(0);
   H_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi__834 = new TH1D("VbbHcc_both_H_dPhi__834","",120,0,4);
   VbbHcc_both_H_dPhi__834->SetBinContent(0,0.3244409);
   VbbHcc_both_H_dPhi__834->SetBinContent(26,0.1002972);
   VbbHcc_both_H_dPhi__834->SetBinContent(27,0.1081721);
   VbbHcc_both_H_dPhi__834->SetBinContent(37,0.09694687);
   VbbHcc_both_H_dPhi__834->SetBinContent(47,0.1147185);
   VbbHcc_both_H_dPhi__834->SetBinContent(58,0.1407098);
   VbbHcc_both_H_dPhi__834->SetBinContent(69,0.1336153);
   VbbHcc_both_H_dPhi__834->SetBinContent(90,0.103617);
   VbbHcc_both_H_dPhi__834->SetBinContent(92,0.1336795);
   VbbHcc_both_H_dPhi__834->SetBinError(0,0.1876274);
   VbbHcc_both_H_dPhi__834->SetBinError(26,0.1002972);
   VbbHcc_both_H_dPhi__834->SetBinError(27,0.1081721);
   VbbHcc_both_H_dPhi__834->SetBinError(37,0.09694687);
   VbbHcc_both_H_dPhi__834->SetBinError(47,0.1147185);
   VbbHcc_both_H_dPhi__834->SetBinError(58,0.1407098);
   VbbHcc_both_H_dPhi__834->SetBinError(69,0.1336153);
   VbbHcc_both_H_dPhi__834->SetBinError(90,0.103617);
   VbbHcc_both_H_dPhi__834->SetBinError(92,0.1336795);
   VbbHcc_both_H_dPhi__834->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dPhi__834->SetFillColor(ci);
   VbbHcc_both_H_dPhi__834->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi__834->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi__834->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__834->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dPhi__834->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__834->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__834->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__834->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__834->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dPhi__834->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__834->Draw("HIST");
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
