void H_mass_tags_16_logY()
{
//=========Macro generated from canvas: H_mass_tags_16/H_mass_tags_16
//=========  (Tue Aug 22 09:15:52 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_16 = new TCanvas("H_mass_tags_16", "H_mass_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_16->SetHighLightColor(2);
   H_mass_tags_16->Range(-80,-1.584235,453.3333,0.1123008);
   H_mass_tags_16->SetFillColor(0);
   H_mass_tags_16->SetBorderMode(0);
   H_mass_tags_16->SetBorderSize(2);
   H_mass_tags_16->SetLogy();
   H_mass_tags_16->SetLeftMargin(0.15);
   H_mass_tags_16->SetFrameBorderMode(0);
   H_mass_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_7 = new TH1D("VbbHcc_tags_H_mass_stack_7","",40,0,400);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(5,0.08824371);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(6,0.07699256);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(7,0.07725225);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(8,0.2815548);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(9,0.4624857);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(11,0.08708107);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(12,0.09124724);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(13,0.2853515);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(14,0.07823021);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(18,0.07873842);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(19,0.0860683);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(20,0.0797212);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(27,0.09774741);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(29,0.09078265);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(30,0.1738679);
   VbbHcc_tags_H_mass_stack_7->SetBinContent(41,1.933065);
   VbbHcc_tags_H_mass_stack_7->SetBinError(5,0.08824371);
   VbbHcc_tags_H_mass_stack_7->SetBinError(6,0.07699256);
   VbbHcc_tags_H_mass_stack_7->SetBinError(7,0.07725225);
   VbbHcc_tags_H_mass_stack_7->SetBinError(8,0.1627365);
   VbbHcc_tags_H_mass_stack_7->SetBinError(9,0.2072893);
   VbbHcc_tags_H_mass_stack_7->SetBinError(11,0.08708107);
   VbbHcc_tags_H_mass_stack_7->SetBinError(12,0.09124724);
   VbbHcc_tags_H_mass_stack_7->SetBinError(13,0.1656259);
   VbbHcc_tags_H_mass_stack_7->SetBinError(14,0.07823021);
   VbbHcc_tags_H_mass_stack_7->SetBinError(18,0.07873842);
   VbbHcc_tags_H_mass_stack_7->SetBinError(19,0.0860683);
   VbbHcc_tags_H_mass_stack_7->SetBinError(20,0.0797212);
   VbbHcc_tags_H_mass_stack_7->SetBinError(27,0.09774741);
   VbbHcc_tags_H_mass_stack_7->SetBinError(29,0.09078265);
   VbbHcc_tags_H_mass_stack_7->SetBinError(30,0.122958);
   VbbHcc_tags_H_mass_stack_7->SetBinError(41,0.4239258);
   VbbHcc_tags_H_mass_stack_7->SetEntries(45);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_mass_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_16->Modified();
   H_mass_tags_16->cd();
   H_mass_tags_16->SetSelected(H_mass_tags_16);
}
