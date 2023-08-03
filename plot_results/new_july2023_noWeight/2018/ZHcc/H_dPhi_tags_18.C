void H_dPhi_tags_18()
{
//=========Macro generated from canvas: H_dPhi_tags_18/H_dPhi_tags_18
//=========  (Thu Aug  3 12:23:16 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_tags_18 = new TCanvas("H_dPhi_tags_18", "H_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_18->SetHighLightColor(2);
   H_dPhi_tags_18->Range(-0.8,-0.0008960813,4.533333,0.008064731);
   H_dPhi_tags_18->SetFillColor(0);
   H_dPhi_tags_18->SetBorderMode(0);
   H_dPhi_tags_18->SetBorderSize(2);
   H_dPhi_tags_18->SetLeftMargin(0.15);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   H_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi_stack_11 = new TH1D("VbbHcc_tags_H_dPhi_stack_11","",120,0,4);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(0,0.09330624);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(2,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(3,0.006827286);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(4,0.004551524);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(7,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(8,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(10,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(11,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(13,0.006827286);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(17,0.004551524);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(18,0.004551524);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(20,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(26,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(31,0.004551524);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(35,0.006827286);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(37,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(49,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(57,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(60,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(68,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(0,0.01457199);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(2,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(3,0.003941735);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(4,0.003218413);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(7,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(8,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(10,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(11,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(13,0.003941735);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(14,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(15,0.003218413);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(17,0.003218413);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(18,0.003218413);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(19,0.003218413);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(20,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(22,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(23,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(26,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(31,0.003218413);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(35,0.003941735);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(37,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(49,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(57,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(60,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(68,0.002275762);
   VbbHcc_tags_H_dPhi_stack_11->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dPhi_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dPhi_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_11->Draw("HIST");
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
