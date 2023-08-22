void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Tue Aug 22 09:22:27 2023) by ROOT version 6.14/09
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.0175278,453.3333,0.1577502);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass_stack_6 = new TH1D("VbbHcc_both_H_mass_stack_6","",40,0,400);
   VbbHcc_both_H_mass_stack_6->SetBinContent(14,0.1195687);
   VbbHcc_both_H_mass_stack_6->SetBinContent(17,0.1152503);
   VbbHcc_both_H_mass_stack_6->SetBinContent(19,0.1294336);
   VbbHcc_both_H_mass_stack_6->SetBinContent(24,0.1142782);
   VbbHcc_both_H_mass_stack_6->SetBinContent(27,0.1243737);
   VbbHcc_both_H_mass_stack_6->SetBinContent(28,0.1335451);
   VbbHcc_both_H_mass_stack_6->SetBinContent(31,0.1234178);
   VbbHcc_both_H_mass_stack_6->SetBinContent(32,0.1297649);
   VbbHcc_both_H_mass_stack_6->SetBinContent(41,0.1953458);
   VbbHcc_both_H_mass_stack_6->SetBinError(14,0.1195687);
   VbbHcc_both_H_mass_stack_6->SetBinError(17,0.1152503);
   VbbHcc_both_H_mass_stack_6->SetBinError(19,0.1294336);
   VbbHcc_both_H_mass_stack_6->SetBinError(24,0.1142782);
   VbbHcc_both_H_mass_stack_6->SetBinError(27,0.1243737);
   VbbHcc_both_H_mass_stack_6->SetBinError(28,0.1335451);
   VbbHcc_both_H_mass_stack_6->SetBinError(31,0.1234178);
   VbbHcc_both_H_mass_stack_6->SetBinError(32,0.1297649);
   VbbHcc_both_H_mass_stack_6->SetBinError(41,0.1408959);
   VbbHcc_both_H_mass_stack_6->SetEntries(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_mass_stack_6->SetFillColor(ci);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_mass_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_mass_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass_stack_6->Draw("HIST");
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
