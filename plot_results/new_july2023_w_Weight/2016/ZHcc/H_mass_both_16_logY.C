void H_mass_both_16_logY()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Thu Aug 10 10:42:53 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-3.122815,453.3333,-1.386925);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLogy();
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_11 = new TH1D("VbbHcc_both_H_mass_stack_11","",40,0,400);
   VbbHcc_both_H_mass_stack_11->SetBinContent(8,0.002248041);
   VbbHcc_both_H_mass_stack_11->SetBinContent(10,0.005434571);
   VbbHcc_both_H_mass_stack_11->SetBinContent(11,0.005832377);
   VbbHcc_both_H_mass_stack_11->SetBinContent(12,0.01227098);
   VbbHcc_both_H_mass_stack_11->SetBinContent(13,0.01451903);
   VbbHcc_both_H_mass_stack_11->SetBinContent(14,0.01445484);
   VbbHcc_both_H_mass_stack_11->SetBinContent(15,0.005946964);
   VbbHcc_both_H_mass_stack_11->SetBinContent(18,0.002756475);
   VbbHcc_both_H_mass_stack_11->SetBinContent(19,0.002909221);
   VbbHcc_both_H_mass_stack_11->SetBinContent(20,0.008660514);
   VbbHcc_both_H_mass_stack_11->SetBinContent(21,0.003216674);
   VbbHcc_both_H_mass_stack_11->SetBinContent(24,0.003126194);
   VbbHcc_both_H_mass_stack_11->SetBinContent(25,0.006212335);
   VbbHcc_both_H_mass_stack_11->SetBinContent(29,0.003079495);
   VbbHcc_both_H_mass_stack_11->SetBinContent(30,0.002672373);
   VbbHcc_both_H_mass_stack_11->SetBinContent(38,0.002888021);
   VbbHcc_both_H_mass_stack_11->SetBinContent(41,0.008468065);
   VbbHcc_both_H_mass_stack_11->SetBinError(8,0.002248041);
   VbbHcc_both_H_mass_stack_11->SetBinError(10,0.003856022);
   VbbHcc_both_H_mass_stack_11->SetBinError(11,0.004124561);
   VbbHcc_both_H_mass_stack_11->SetBinError(12,0.006143966);
   VbbHcc_both_H_mass_stack_11->SetBinError(13,0.006493406);
   VbbHcc_both_H_mass_stack_11->SetBinError(14,0.006465457);
   VbbHcc_both_H_mass_stack_11->SetBinError(15,0.004210642);
   VbbHcc_both_H_mass_stack_11->SetBinError(18,0.002756475);
   VbbHcc_both_H_mass_stack_11->SetBinError(19,0.002909221);
   VbbHcc_both_H_mass_stack_11->SetBinError(20,0.005000473);
   VbbHcc_both_H_mass_stack_11->SetBinError(21,0.003216674);
   VbbHcc_both_H_mass_stack_11->SetBinError(24,0.003126194);
   VbbHcc_both_H_mass_stack_11->SetBinError(25,0.004395632);
   VbbHcc_both_H_mass_stack_11->SetBinError(29,0.003079495);
   VbbHcc_both_H_mass_stack_11->SetBinError(30,0.002672373);
   VbbHcc_both_H_mass_stack_11->SetBinError(38,0.002888021);
   VbbHcc_both_H_mass_stack_11->SetBinError(41,0.004900466);
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
