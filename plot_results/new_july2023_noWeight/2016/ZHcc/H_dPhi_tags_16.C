void H_dPhi_tags_16()
{
//=========Macro generated from canvas: H_dPhi_tags_16/H_dPhi_tags_16
//=========  (Thu Aug  3 12:23:15 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_tags_16 = new TCanvas("H_dPhi_tags_16", "H_dPhi_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_16->SetHighLightColor(2);
   H_dPhi_tags_16->Range(-0.8,-0.0007179395,4.533333,0.006461455);
   H_dPhi_tags_16->SetFillColor(0);
   H_dPhi_tags_16->SetBorderMode(0);
   H_dPhi_tags_16->SetBorderSize(2);
   H_dPhi_tags_16->SetLeftMargin(0.15);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   H_dPhi_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi_stack_11 = new TH1D("VbbHcc_tags_H_dPhi_stack_11","",120,0,4);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(0,0.04923013);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(3,0.005470015);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(4,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(13,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(17,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(20,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(31,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(36,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(40,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(48,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(53,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(60,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinContent(80,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(0,0.01160365);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(3,0.003867885);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(4,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(13,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(14,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(17,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(19,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(20,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(31,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(36,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(40,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(48,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(53,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(60,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetBinError(80,0.002735007);
   VbbHcc_tags_H_dPhi_stack_11->SetEntries(36);

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
