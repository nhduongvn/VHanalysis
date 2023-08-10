void H_mass_tags_17()
{
//=========Macro generated from canvas: H_mass_tags_17/H_mass_tags_17
//=========  (Thu Aug  3 12:22:54 2023) by ROOT version 6.14/09
   TCanvas *H_mass_tags_17 = new TCanvas("H_mass_tags_17", "H_mass_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_tags_17->SetHighLightColor(2);
   H_mass_tags_17->Range(-80,-0.001659264,453.3333,0.01493337);
   H_mass_tags_17->SetFillColor(0);
   H_mass_tags_17->SetBorderMode(0);
   H_mass_tags_17->SetBorderSize(2);
   H_mass_tags_17->SetLeftMargin(0.15);
   H_mass_tags_17->SetFrameBorderMode(0);
   H_mass_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_mass_stack_11 = new TH1D("VbbHcc_tags_H_mass_stack_11","",40,0,400);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(5,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(6,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(7,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(8,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(10,0.004740753);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(11,0.01264201);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(12,0.01264201);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(13,0.01106176);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(14,0.007901256);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(15,0.006321005);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(16,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(18,0.004740753);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(23,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(24,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(30,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(34,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(37,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(38,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinContent(41,0.04424703);
   VbbHcc_tags_H_mass_stack_11->SetBinError(5,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(6,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(7,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(8,0.002234813);
   VbbHcc_tags_H_mass_stack_11->SetBinError(9,0.002234813);
   VbbHcc_tags_H_mass_stack_11->SetBinError(10,0.002737075);
   VbbHcc_tags_H_mass_stack_11->SetBinError(11,0.004469625);
   VbbHcc_tags_H_mass_stack_11->SetBinError(12,0.004469625);
   VbbHcc_tags_H_mass_stack_11->SetBinError(13,0.004180952);
   VbbHcc_tags_H_mass_stack_11->SetBinError(14,0.003533549);
   VbbHcc_tags_H_mass_stack_11->SetBinError(15,0.003160502);
   VbbHcc_tags_H_mass_stack_11->SetBinError(16,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(17,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(18,0.002737075);
   VbbHcc_tags_H_mass_stack_11->SetBinError(19,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(20,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(23,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(24,0.002234813);
   VbbHcc_tags_H_mass_stack_11->SetBinError(26,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(28,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(30,0.002234813);
   VbbHcc_tags_H_mass_stack_11->SetBinError(34,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(37,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(38,0.001580251);
   VbbHcc_tags_H_mass_stack_11->SetBinError(41,0.008361903);
   VbbHcc_tags_H_mass_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_mass_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_tags_17->Modified();
   H_mass_tags_17->cd();
   H_mass_tags_17->SetSelected(H_mass_tags_17);
}
