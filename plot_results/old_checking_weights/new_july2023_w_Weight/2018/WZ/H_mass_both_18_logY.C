void H_mass_both_18_logY()
{
//=========Macro generated from canvas: H_mass_both_18/H_mass_both_18
//=========  (Thu Aug 10 10:42:54 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_18 = new TCanvas("H_mass_both_18", "H_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_18->SetHighLightColor(2);
   H_mass_both_18->Range(-80,-1.511985,453.3333,1.01562);
   H_mass_both_18->SetFillColor(0);
   H_mass_both_18->SetBorderMode(0);
   H_mass_both_18->SetBorderSize(2);
   H_mass_both_18->SetLogy();
   H_mass_both_18->SetLeftMargin(0.15);
   H_mass_both_18->SetFrameBorderMode(0);
   H_mass_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_7 = new TH1D("VbbHcc_both_H_mass_stack_7","",40,0,400);
   VbbHcc_both_H_mass_stack_7->SetBinContent(4,0.3730917);
   VbbHcc_both_H_mass_stack_7->SetBinContent(8,0.7645357);
   VbbHcc_both_H_mass_stack_7->SetBinContent(9,3.057103);
   VbbHcc_both_H_mass_stack_7->SetBinContent(10,0.4786962);
   VbbHcc_both_H_mass_stack_7->SetBinContent(11,0.5166625);
   VbbHcc_both_H_mass_stack_7->SetBinContent(12,0.6010888);
   VbbHcc_both_H_mass_stack_7->SetBinContent(13,0.2694972);
   VbbHcc_both_H_mass_stack_7->SetBinContent(14,0.5093878);
   VbbHcc_both_H_mass_stack_7->SetBinContent(16,0.9833285);
   VbbHcc_both_H_mass_stack_7->SetBinContent(18,0.5144501);
   VbbHcc_both_H_mass_stack_7->SetBinContent(19,0.3767055);
   VbbHcc_both_H_mass_stack_7->SetBinContent(20,0.1101045);
   VbbHcc_both_H_mass_stack_7->SetBinContent(22,0.3789058);
   VbbHcc_both_H_mass_stack_7->SetBinContent(23,0.5166625);
   VbbHcc_both_H_mass_stack_7->SetBinContent(26,0.7594282);
   VbbHcc_both_H_mass_stack_7->SetBinContent(27,0.3816532);
   VbbHcc_both_H_mass_stack_7->SetBinContent(31,0.5144501);
   VbbHcc_both_H_mass_stack_7->SetBinContent(32,0.4963468);
   VbbHcc_both_H_mass_stack_7->SetBinContent(37,0.5144501);
   VbbHcc_both_H_mass_stack_7->SetBinContent(41,2.689942);
   VbbHcc_both_H_mass_stack_7->SetBinError(4,0.3730917);
   VbbHcc_both_H_mass_stack_7->SetBinError(8,0.5406293);
   VbbHcc_both_H_mass_stack_7->SetBinError(9,1.16466);
   VbbHcc_both_H_mass_stack_7->SetBinError(10,0.4786962);
   VbbHcc_both_H_mass_stack_7->SetBinError(11,0.5166625);
   VbbHcc_both_H_mass_stack_7->SetBinError(12,0.6010888);
   VbbHcc_both_H_mass_stack_7->SetBinError(13,0.2694972);
   VbbHcc_both_H_mass_stack_7->SetBinError(14,0.5093878);
   VbbHcc_both_H_mass_stack_7->SetBinError(16,0.9833285);
   VbbHcc_both_H_mass_stack_7->SetBinError(18,0.5144501);
   VbbHcc_both_H_mass_stack_7->SetBinError(19,0.3767055);
   VbbHcc_both_H_mass_stack_7->SetBinError(20,0.1101045);
   VbbHcc_both_H_mass_stack_7->SetBinError(22,0.3789058);
   VbbHcc_both_H_mass_stack_7->SetBinError(23,0.5166625);
   VbbHcc_both_H_mass_stack_7->SetBinError(26,0.5369981);
   VbbHcc_both_H_mass_stack_7->SetBinError(27,0.3816532);
   VbbHcc_both_H_mass_stack_7->SetBinError(31,0.5144501);
   VbbHcc_both_H_mass_stack_7->SetBinError(32,0.4963468);
   VbbHcc_both_H_mass_stack_7->SetBinError(37,0.5144501);
   VbbHcc_both_H_mass_stack_7->SetBinError(41,1.135431);
   VbbHcc_both_H_mass_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_mass_stack_7->SetFillColor(ci);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_18->Modified();
   H_mass_both_18->cd();
   H_mass_both_18->SetSelected(H_mass_both_18);
}
