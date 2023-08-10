void H_mass_both_17_logY()
{
//=========Macro generated from canvas: H_mass_both_17/H_mass_both_17
//=========  (Thu Aug 10 12:21:22 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_17 = new TCanvas("H_mass_both_17", "H_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_17->SetHighLightColor(2);
   H_mass_both_17->Range(-80,-1.169443,453.3333,0.2090881);
   H_mass_both_17->SetFillColor(0);
   H_mass_both_17->SetBorderMode(0);
   H_mass_both_17->SetBorderSize(2);
   H_mass_both_17->SetLogy();
   H_mass_both_17->SetLeftMargin(0.15);
   H_mass_both_17->SetFrameBorderMode(0);
   H_mass_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_7 = new TH1D("VbbHcc_both_H_mass_stack_7","",40,0,400);
   VbbHcc_both_H_mass_stack_7->SetBinContent(7,0.6027669);
   VbbHcc_both_H_mass_stack_7->SetBinContent(8,0.5774447);
   VbbHcc_both_H_mass_stack_7->SetBinContent(9,0.5096275);
   VbbHcc_both_H_mass_stack_7->SetBinContent(12,0.2751033);
   VbbHcc_both_H_mass_stack_7->SetBinContent(15,0.2948417);
   VbbHcc_both_H_mass_stack_7->SetBinContent(17,0.3047304);
   VbbHcc_both_H_mass_stack_7->SetBinContent(18,0.6218506);
   VbbHcc_both_H_mass_stack_7->SetBinContent(20,0.1859687);
   VbbHcc_both_H_mass_stack_7->SetBinContent(22,0.3152355);
   VbbHcc_both_H_mass_stack_7->SetBinContent(23,0.2655071);
   VbbHcc_both_H_mass_stack_7->SetBinContent(24,0.3317125);
   VbbHcc_both_H_mass_stack_7->SetBinContent(27,0.2572919);
   VbbHcc_both_H_mass_stack_7->SetBinContent(28,0.294848);
   VbbHcc_both_H_mass_stack_7->SetBinContent(29,0.2891015);
   VbbHcc_both_H_mass_stack_7->SetBinContent(37,0.302748);
   VbbHcc_both_H_mass_stack_7->SetBinContent(41,1.70073);
   VbbHcc_both_H_mass_stack_7->SetBinError(7,0.4265743);
   VbbHcc_both_H_mass_stack_7->SetBinError(8,0.3334346);
   VbbHcc_both_H_mass_stack_7->SetBinError(9,0.3699033);
   VbbHcc_both_H_mass_stack_7->SetBinError(12,0.2751033);
   VbbHcc_both_H_mass_stack_7->SetBinError(15,0.2948417);
   VbbHcc_both_H_mass_stack_7->SetBinError(17,0.3047304);
   VbbHcc_both_H_mass_stack_7->SetBinError(18,0.4432299);
   VbbHcc_both_H_mass_stack_7->SetBinError(20,0.1859687);
   VbbHcc_both_H_mass_stack_7->SetBinError(22,0.3152355);
   VbbHcc_both_H_mass_stack_7->SetBinError(23,0.2655071);
   VbbHcc_both_H_mass_stack_7->SetBinError(24,0.3317125);
   VbbHcc_both_H_mass_stack_7->SetBinError(27,0.2572919);
   VbbHcc_both_H_mass_stack_7->SetBinError(28,0.294848);
   VbbHcc_both_H_mass_stack_7->SetBinError(29,0.2891015);
   VbbHcc_both_H_mass_stack_7->SetBinError(37,0.302748);
   VbbHcc_both_H_mass_stack_7->SetBinError(41,0.6975052);
   VbbHcc_both_H_mass_stack_7->SetEntries(26);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_17->Modified();
   H_mass_both_17->cd();
   H_mass_both_17->SetSelected(H_mass_both_17);
}
