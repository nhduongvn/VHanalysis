void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Thu Aug  3 12:25:28 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.001794849,453.3333,0.01615364);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_11 = new TH1D("VbbHcc_both_H_mass_stack_11","",40,0,400);
   VbbHcc_both_H_mass_stack_11->SetBinContent(8,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinContent(10,0.005470015);
   VbbHcc_both_H_mass_stack_11->SetBinContent(11,0.005470015);
   VbbHcc_both_H_mass_stack_11->SetBinContent(12,0.01094003);
   VbbHcc_both_H_mass_stack_11->SetBinContent(13,0.01367504);
   VbbHcc_both_H_mass_stack_11->SetBinContent(14,0.01367504);
   VbbHcc_both_H_mass_stack_11->SetBinContent(15,0.005470015);
   VbbHcc_both_H_mass_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinContent(19,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinContent(20,0.008205022);
   VbbHcc_both_H_mass_stack_11->SetBinContent(21,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinContent(25,0.005470015);
   VbbHcc_both_H_mass_stack_11->SetBinContent(29,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinContent(30,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinContent(38,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinContent(41,0.008205022);
   VbbHcc_both_H_mass_stack_11->SetBinError(8,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinError(10,0.003867885);
   VbbHcc_both_H_mass_stack_11->SetBinError(11,0.003867885);
   VbbHcc_both_H_mass_stack_11->SetBinError(12,0.005470015);
   VbbHcc_both_H_mass_stack_11->SetBinError(13,0.006115663);
   VbbHcc_both_H_mass_stack_11->SetBinError(14,0.006115663);
   VbbHcc_both_H_mass_stack_11->SetBinError(15,0.003867885);
   VbbHcc_both_H_mass_stack_11->SetBinError(18,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinError(19,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinError(20,0.004737172);
   VbbHcc_both_H_mass_stack_11->SetBinError(21,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinError(25,0.003867885);
   VbbHcc_both_H_mass_stack_11->SetBinError(29,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinError(30,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinError(38,0.002735007);
   VbbHcc_both_H_mass_stack_11->SetBinError(41,0.004737172);
   VbbHcc_both_H_mass_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_mass_stack_11->SetFillColor(ci);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
