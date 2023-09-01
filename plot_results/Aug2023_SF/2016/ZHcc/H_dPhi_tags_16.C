#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_tags_16()
{
//=========Macro generated from canvas: H_dPhi_tags_16/H_dPhi_tags_16
//=========  (Fri Sep  1 13:23:32 2023) by ROOT version 6.28/04
   TCanvas *H_dPhi_tags_16 = new TCanvas("H_dPhi_tags_16", "H_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_16->SetHighLightColor(2);
   H_dPhi_tags_16->Range(-0.8,-0.0005532574,4.533333,0.004979316);
   H_dPhi_tags_16->SetFillColor(0);
   H_dPhi_tags_16->SetBorderMode(0);
   H_dPhi_tags_16->SetBorderSize(2);
   H_dPhi_tags_16->SetLeftMargin(0.15);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi__119 = new TH1D("VbbHcc_tags_H_dPhi__119","",120,0,4);
   VbbHcc_tags_H_dPhi__119->SetBinContent(0,0.04109828);
   VbbHcc_tags_H_dPhi__119->SetBinContent(1,0.002068793);
   VbbHcc_tags_H_dPhi__119->SetBinContent(3,0.004215294);
   VbbHcc_tags_H_dPhi__119->SetBinContent(4,0.002340957);
   VbbHcc_tags_H_dPhi__119->SetBinContent(13,0.002472895);
   VbbHcc_tags_H_dPhi__119->SetBinContent(14,0.002055762);
   VbbHcc_tags_H_dPhi__119->SetBinContent(15,0.002570627);
   VbbHcc_tags_H_dPhi__119->SetBinContent(17,0.001425773);
   VbbHcc_tags_H_dPhi__119->SetBinContent(18,0.001929603);
   VbbHcc_tags_H_dPhi__119->SetBinContent(19,0.002318411);
   VbbHcc_tags_H_dPhi__119->SetBinContent(20,0.00231513);
   VbbHcc_tags_H_dPhi__119->SetBinContent(31,0.001533761);
   VbbHcc_tags_H_dPhi__119->SetBinContent(36,0.001901718);
   VbbHcc_tags_H_dPhi__119->SetBinContent(40,0.002664007);
   VbbHcc_tags_H_dPhi__119->SetBinContent(48,0.001912616);
   VbbHcc_tags_H_dPhi__119->SetBinContent(53,0.00269847);
   VbbHcc_tags_H_dPhi__119->SetBinContent(60,0.001703818);
   VbbHcc_tags_H_dPhi__119->SetBinContent(80,0.002135123);
   VbbHcc_tags_H_dPhi__119->SetBinError(0,0.009883282);
   VbbHcc_tags_H_dPhi__119->SetBinError(1,0.002068793);
   VbbHcc_tags_H_dPhi__119->SetBinError(3,0.002992634);
   VbbHcc_tags_H_dPhi__119->SetBinError(4,0.002340957);
   VbbHcc_tags_H_dPhi__119->SetBinError(13,0.002472895);
   VbbHcc_tags_H_dPhi__119->SetBinError(14,0.002055762);
   VbbHcc_tags_H_dPhi__119->SetBinError(15,0.002570627);
   VbbHcc_tags_H_dPhi__119->SetBinError(17,0.001425773);
   VbbHcc_tags_H_dPhi__119->SetBinError(18,0.001929603);
   VbbHcc_tags_H_dPhi__119->SetBinError(19,0.002318411);
   VbbHcc_tags_H_dPhi__119->SetBinError(20,0.00231513);
   VbbHcc_tags_H_dPhi__119->SetBinError(31,0.001533761);
   VbbHcc_tags_H_dPhi__119->SetBinError(36,0.001901718);
   VbbHcc_tags_H_dPhi__119->SetBinError(40,0.002664007);
   VbbHcc_tags_H_dPhi__119->SetBinError(48,0.001912616);
   VbbHcc_tags_H_dPhi__119->SetBinError(53,0.00269847);
   VbbHcc_tags_H_dPhi__119->SetBinError(60,0.001703818);
   VbbHcc_tags_H_dPhi__119->SetBinError(80,0.002135123);
   VbbHcc_tags_H_dPhi__119->SetEntries(36);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_16->Modified();
   H_dPhi_tags_16->cd();
   H_dPhi_tags_16->SetSelected(H_dPhi_tags_16);
}
