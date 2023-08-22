void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Tue Aug 22 09:22:28 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.001442065,453.3333,0.01297858);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_11 = new TH1D("VbbHcc_both_H_mass_stack_11","",40,0,400);
   VbbHcc_both_H_mass_stack_11->SetBinContent(8,0.001598357);
   VbbHcc_both_H_mass_stack_11->SetBinContent(10,0.004022886);
   VbbHcc_both_H_mass_stack_11->SetBinContent(11,0.004226718);
   VbbHcc_both_H_mass_stack_11->SetBinContent(12,0.009291255);
   VbbHcc_both_H_mass_stack_11->SetBinContent(13,0.01098716);
   VbbHcc_both_H_mass_stack_11->SetBinContent(14,0.01022793);
   VbbHcc_both_H_mass_stack_11->SetBinContent(15,0.004463875);
   VbbHcc_both_H_mass_stack_11->SetBinContent(18,0.002108704);
   VbbHcc_both_H_mass_stack_11->SetBinContent(19,0.001765897);
   VbbHcc_both_H_mass_stack_11->SetBinContent(20,0.005978323);
   VbbHcc_both_H_mass_stack_11->SetBinContent(21,0.002332089);
   VbbHcc_both_H_mass_stack_11->SetBinContent(24,0.003126194);
   VbbHcc_both_H_mass_stack_11->SetBinContent(25,0.004546294);
   VbbHcc_both_H_mass_stack_11->SetBinContent(29,0.002272667);
   VbbHcc_both_H_mass_stack_11->SetBinContent(30,0.002036349);
   VbbHcc_both_H_mass_stack_11->SetBinContent(38,0.002209336);
   VbbHcc_both_H_mass_stack_11->SetBinContent(41,0.00640311);
   VbbHcc_both_H_mass_stack_11->SetBinError(8,0.001598357);
   VbbHcc_both_H_mass_stack_11->SetBinError(10,0.002864742);
   VbbHcc_both_H_mass_stack_11->SetBinError(11,0.002990404);
   VbbHcc_both_H_mass_stack_11->SetBinError(12,0.004655025);
   VbbHcc_both_H_mass_stack_11->SetBinError(13,0.004918903);
   VbbHcc_both_H_mass_stack_11->SetBinError(14,0.004580202);
   VbbHcc_both_H_mass_stack_11->SetBinError(15,0.003163539);
   VbbHcc_both_H_mass_stack_11->SetBinError(18,0.002108704);
   VbbHcc_both_H_mass_stack_11->SetBinError(19,0.001765897);
   VbbHcc_both_H_mass_stack_11->SetBinError(20,0.003465716);
   VbbHcc_both_H_mass_stack_11->SetBinError(21,0.002332089);
   VbbHcc_both_H_mass_stack_11->SetBinError(24,0.003126194);
   VbbHcc_both_H_mass_stack_11->SetBinError(25,0.003221637);
   VbbHcc_both_H_mass_stack_11->SetBinError(29,0.002272667);
   VbbHcc_both_H_mass_stack_11->SetBinError(30,0.002036349);
   VbbHcc_both_H_mass_stack_11->SetBinError(38,0.002209336);
   VbbHcc_both_H_mass_stack_11->SetBinError(41,0.003707054);
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
