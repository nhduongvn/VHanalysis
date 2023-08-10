void H_mass_both_18()
{
//=========Macro generated from canvas: H_mass_both_18/H_mass_both_18
//=========  (Thu Aug 10 12:24:40 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_18 = new TCanvas("H_mass_both_18", "H_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_18->SetHighLightColor(2);
   H_mass_both_18->Range(-80,-0.002813117,453.3333,0.02531806);
   H_mass_both_18->SetFillColor(0);
   H_mass_both_18->SetBorderMode(0);
   H_mass_both_18->SetBorderSize(2);
   H_mass_both_18->SetLeftMargin(0.15);
   H_mass_both_18->SetFrameBorderMode(0);
   H_mass_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_11 = new TH1D("VbbHcc_both_H_mass_stack_11","",40,0,400);
   VbbHcc_both_H_mass_stack_11->SetBinContent(5,0.005387581);
   VbbHcc_both_H_mass_stack_11->SetBinContent(6,0.002842044);
   VbbHcc_both_H_mass_stack_11->SetBinContent(7,0.005727716);
   VbbHcc_both_H_mass_stack_11->SetBinContent(9,0.008357118);
   VbbHcc_both_H_mass_stack_11->SetBinContent(10,0.01530002);
   VbbHcc_both_H_mass_stack_11->SetBinContent(11,0.00719506);
   VbbHcc_both_H_mass_stack_11->SetBinContent(12,0.02115188);
   VbbHcc_both_H_mass_stack_11->SetBinContent(13,0.02143327);
   VbbHcc_both_H_mass_stack_11->SetBinContent(14,0.02059349);
   VbbHcc_both_H_mass_stack_11->SetBinContent(15,0.01008032);
   VbbHcc_both_H_mass_stack_11->SetBinContent(16,0.003415932);
   VbbHcc_both_H_mass_stack_11->SetBinContent(17,0.01199152);
   VbbHcc_both_H_mass_stack_11->SetBinContent(19,0.0113851);
   VbbHcc_both_H_mass_stack_11->SetBinContent(20,0.004981604);
   VbbHcc_both_H_mass_stack_11->SetBinContent(22,0.003682377);
   VbbHcc_both_H_mass_stack_11->SetBinContent(23,0.005642558);
   VbbHcc_both_H_mass_stack_11->SetBinContent(24,0.004476201);
   VbbHcc_both_H_mass_stack_11->SetBinContent(25,0.005387581);
   VbbHcc_both_H_mass_stack_11->SetBinContent(26,0.005608622);
   VbbHcc_both_H_mass_stack_11->SetBinContent(29,0.00557904);
   VbbHcc_both_H_mass_stack_11->SetBinContent(30,0.0003310851);
   VbbHcc_both_H_mass_stack_11->SetBinContent(32,0.001269256);
   VbbHcc_both_H_mass_stack_11->SetBinContent(36,0.002811088);
   VbbHcc_both_H_mass_stack_11->SetBinContent(38,0.001999389);
   VbbHcc_both_H_mass_stack_11->SetBinContent(40,0.007905503);
   VbbHcc_both_H_mass_stack_11->SetBinError(5,0.003813205);
   VbbHcc_both_H_mass_stack_11->SetBinError(6,0.002842044);
   VbbHcc_both_H_mass_stack_11->SetBinError(7,0.004050224);
   VbbHcc_both_H_mass_stack_11->SetBinError(9,0.004825604);
   VbbHcc_both_H_mass_stack_11->SetBinError(10,0.006875919);
   VbbHcc_both_H_mass_stack_11->SetBinError(11,0.005094153);
   VbbHcc_both_H_mass_stack_11->SetBinError(12,0.008152622);
   VbbHcc_both_H_mass_stack_11->SetBinError(13,0.008173799);
   VbbHcc_both_H_mass_stack_11->SetBinError(14,0.007830126);
   VbbHcc_both_H_mass_stack_11->SetBinError(15,0.005370949);
   VbbHcc_both_H_mass_stack_11->SetBinError(16,0.003415932);
   VbbHcc_both_H_mass_stack_11->SetBinError(17,0.006030873);
   VbbHcc_both_H_mass_stack_11->SetBinError(19,0.005699581);
   VbbHcc_both_H_mass_stack_11->SetBinError(20,0.003590427);
   VbbHcc_both_H_mass_stack_11->SetBinError(22,0.003682377);
   VbbHcc_both_H_mass_stack_11->SetBinError(23,0.003989917);
   VbbHcc_both_H_mass_stack_11->SetBinError(24,0.003278366);
   VbbHcc_both_H_mass_stack_11->SetBinError(25,0.003813205);
   VbbHcc_both_H_mass_stack_11->SetBinError(26,0.003967563);
   VbbHcc_both_H_mass_stack_11->SetBinError(29,0.003945095);
   VbbHcc_both_H_mass_stack_11->SetBinError(30,0.0003310851);
   VbbHcc_both_H_mass_stack_11->SetBinError(32,0.001269256);
   VbbHcc_both_H_mass_stack_11->SetBinError(36,0.002811088);
   VbbHcc_both_H_mass_stack_11->SetBinError(38,0.001999389);
   VbbHcc_both_H_mass_stack_11->SetBinError(40,0.004630372);
   VbbHcc_both_H_mass_stack_11->SetEntries(69);

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
