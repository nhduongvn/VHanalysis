#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_tags_18()
{
//=========Macro generated from canvas: H_dPhi_tags_18/H_dPhi_tags_18
//=========  (Fri Sep  1 13:34:43 2023) by ROOT version 6.28/04
   TCanvas *H_dPhi_tags_18 = new TCanvas("H_dPhi_tags_18", "H_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_18->SetHighLightColor(2);
   H_dPhi_tags_18->Range(-0.8,-0.001093683,4.533333,0.00984315);
   H_dPhi_tags_18->SetFillColor(0);
   H_dPhi_tags_18->SetBorderMode(0);
   H_dPhi_tags_18->SetBorderSize(2);
   H_dPhi_tags_18->SetLeftMargin(0.15);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi__119 = new TH1D("VbbHcc_tags_H_dPhi__119","",120,0,4);
   VbbHcc_tags_H_dPhi__119->SetBinContent(0,0.1008905);
   VbbHcc_tags_H_dPhi__119->SetBinContent(2,0.002440408);
   VbbHcc_tags_H_dPhi__119->SetBinContent(3,0.006329439);
   VbbHcc_tags_H_dPhi__119->SetBinContent(4,0.005029741);
   VbbHcc_tags_H_dPhi__119->SetBinContent(7,0.002031966);
   VbbHcc_tags_H_dPhi__119->SetBinContent(8,0.002267097);
   VbbHcc_tags_H_dPhi__119->SetBinContent(10,0.001839988);
   VbbHcc_tags_H_dPhi__119->SetBinContent(11,0.002567018);
   VbbHcc_tags_H_dPhi__119->SetBinContent(13,0.008332826);
   VbbHcc_tags_H_dPhi__119->SetBinContent(14,0.002710381);
   VbbHcc_tags_H_dPhi__119->SetBinContent(15,0.005743562);
   VbbHcc_tags_H_dPhi__119->SetBinContent(17,0.004675955);
   VbbHcc_tags_H_dPhi__119->SetBinContent(18,0.003857545);
   VbbHcc_tags_H_dPhi__119->SetBinContent(19,0.004688856);
   VbbHcc_tags_H_dPhi__119->SetBinContent(20,0.002384567);
   VbbHcc_tags_H_dPhi__119->SetBinContent(22,0.002039442);
   VbbHcc_tags_H_dPhi__119->SetBinContent(23,0.002094698);
   VbbHcc_tags_H_dPhi__119->SetBinContent(26,0.003571179);
   VbbHcc_tags_H_dPhi__119->SetBinContent(31,0.007088494);
   VbbHcc_tags_H_dPhi__119->SetBinContent(35,0.008256953);
   VbbHcc_tags_H_dPhi__119->SetBinContent(37,0.002391988);
   VbbHcc_tags_H_dPhi__119->SetBinContent(49,0.001354401);
   VbbHcc_tags_H_dPhi__119->SetBinContent(57,0.004685718);
   VbbHcc_tags_H_dPhi__119->SetBinContent(60,0.002299241);
   VbbHcc_tags_H_dPhi__119->SetBinContent(68,0.002945999);
   VbbHcc_tags_H_dPhi__119->SetBinError(0,0.01646762);
   VbbHcc_tags_H_dPhi__119->SetBinError(2,0.002440408);
   VbbHcc_tags_H_dPhi__119->SetBinError(3,0.003884556);
   VbbHcc_tags_H_dPhi__119->SetBinError(4,0.003564543);
   VbbHcc_tags_H_dPhi__119->SetBinError(7,0.002031966);
   VbbHcc_tags_H_dPhi__119->SetBinError(8,0.002267097);
   VbbHcc_tags_H_dPhi__119->SetBinError(10,0.001839988);
   VbbHcc_tags_H_dPhi__119->SetBinError(11,0.002567018);
   VbbHcc_tags_H_dPhi__119->SetBinError(13,0.00484423);
   VbbHcc_tags_H_dPhi__119->SetBinError(14,0.002710381);
   VbbHcc_tags_H_dPhi__119->SetBinError(15,0.004283873);
   VbbHcc_tags_H_dPhi__119->SetBinError(17,0.003319333);
   VbbHcc_tags_H_dPhi__119->SetBinError(18,0.002733316);
   VbbHcc_tags_H_dPhi__119->SetBinError(19,0.0033552);
   VbbHcc_tags_H_dPhi__119->SetBinError(20,0.002384567);
   VbbHcc_tags_H_dPhi__119->SetBinError(22,0.002039442);
   VbbHcc_tags_H_dPhi__119->SetBinError(23,0.002094698);
   VbbHcc_tags_H_dPhi__119->SetBinError(26,0.003571179);
   VbbHcc_tags_H_dPhi__119->SetBinError(31,0.005497394);
   VbbHcc_tags_H_dPhi__119->SetBinError(35,0.005198614);
   VbbHcc_tags_H_dPhi__119->SetBinError(37,0.002391988);
   VbbHcc_tags_H_dPhi__119->SetBinError(49,0.001354401);
   VbbHcc_tags_H_dPhi__119->SetBinError(57,0.004685718);
   VbbHcc_tags_H_dPhi__119->SetBinError(60,0.002299241);
   VbbHcc_tags_H_dPhi__119->SetBinError(68,0.002945999);
   VbbHcc_tags_H_dPhi__119->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dPhi__119->SetFillColor(ci);
   VbbHcc_tags_H_dPhi__119->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi__119->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi__119->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__119->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__119->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__119->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__119->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__119->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi__119->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dPhi__119->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi__119->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_18->Modified();
   H_dPhi_tags_18->cd();
   H_dPhi_tags_18->SetSelected(H_dPhi_tags_18);
}
