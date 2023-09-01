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
   H_dPhi_both_16->Range(-0.8,-0.0006036607,4.533333,0.005432946);
   H_dPhi_both_16->SetFillColor(0);
   H_dPhi_both_16->SetBorderMode(0);
   H_dPhi_both_16->SetBorderSize(2);
   H_dPhi_both_16->SetLeftMargin(0.15);
   H_dPhi_both_16->SetFrameBorderMode(0);
   H_dPhi_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi__839 = new TH1D("VbbHcc_both_H_dPhi__839","",120,0,4);
   VbbHcc_both_H_dPhi__839->SetBinContent(0,0.04989825);
   VbbHcc_both_H_dPhi__839->SetBinContent(1,0.002318411);
   VbbHcc_both_H_dPhi__839->SetBinContent(3,0.001927266);
   VbbHcc_both_H_dPhi__839->SetBinContent(17,0.00204855);
   VbbHcc_both_H_dPhi__839->SetBinContent(19,0.002472895);
   VbbHcc_both_H_dPhi__839->SetBinContent(22,0.002055762);
   VbbHcc_both_H_dPhi__839->SetBinContent(34,0.002340957);
   VbbHcc_both_H_dPhi__839->SetBinContent(50,0.00459932);
   VbbHcc_both_H_dPhi__839->SetBinContent(51,0.002570627);
   VbbHcc_both_H_dPhi__839->SetBinContent(54,0.001775999);
   VbbHcc_both_H_dPhi__839->SetBinContent(55,0.001929603);
   VbbHcc_both_H_dPhi__839->SetBinContent(56,0.001871144);
   VbbHcc_both_H_dPhi__839->SetBinContent(75,0.002126481);
   VbbHcc_both_H_dPhi__839->SetBinContent(81,0.001425773);
   VbbHcc_both_H_dPhi__839->SetBinError(0,0.01086143);
   VbbHcc_both_H_dPhi__839->SetBinError(1,0.002318411);
   VbbHcc_both_H_dPhi__839->SetBinError(3,0.001927266);
   VbbHcc_both_H_dPhi__839->SetBinError(17,0.00204855);
   VbbHcc_both_H_dPhi__839->SetBinError(19,0.002472895);
   VbbHcc_both_H_dPhi__839->SetBinError(22,0.002055762);
   VbbHcc_both_H_dPhi__839->SetBinError(34,0.002340957);
   VbbHcc_both_H_dPhi__839->SetBinError(50,0.003268558);
   VbbHcc_both_H_dPhi__839->SetBinError(51,0.002570627);
   VbbHcc_both_H_dPhi__839->SetBinError(54,0.001775999);
   VbbHcc_both_H_dPhi__839->SetBinError(55,0.001929603);
   VbbHcc_both_H_dPhi__839->SetBinError(56,0.001871144);
   VbbHcc_both_H_dPhi__839->SetBinError(75,0.002126481);
   VbbHcc_both_H_dPhi__839->SetBinError(81,0.001425773);
   VbbHcc_both_H_dPhi__839->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dPhi__839->SetFillColor(ci);
   VbbHcc_both_H_dPhi__839->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi__839->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi__839->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__839->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dPhi__839->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__839->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__839->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__839->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi__839->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dPhi__839->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi__839->Draw("HIST");
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
