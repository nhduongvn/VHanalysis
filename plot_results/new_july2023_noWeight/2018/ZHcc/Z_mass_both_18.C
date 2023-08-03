void Z_mass_both_18()
{
//=========Macro generated from canvas: Z_mass_both_18/Z_mass_both_18
//=========  (Thu Aug  3 12:25:27 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_18 = new TCanvas("Z_mass_both_18", "Z_mass_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_18->SetHighLightColor(2);
   Z_mass_both_18->Range(-80,-0.005376488,453.3333,0.04838839);
   Z_mass_both_18->SetFillColor(0);
   Z_mass_both_18->SetBorderMode(0);
   Z_mass_both_18->SetBorderSize(2);
   Z_mass_both_18->SetLeftMargin(0.15);
   Z_mass_both_18->SetFrameBorderMode(0);
   Z_mass_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(4,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.03641219);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.04096371);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02503338);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.009103048);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(23,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(27,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(31,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(35,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(37,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02730914);
   VbbHcc_both_Z_mass_stack_11->SetBinError(4,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.003218413);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.003218413);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.009103048);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.00965524);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.007547848);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.004551524);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.003218413);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(23,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(27,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(31,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(35,0.003218413);
   VbbHcc_both_Z_mass_stack_11->SetBinError(37,0.002275762);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.00788347);
   VbbHcc_both_Z_mass_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_18->Modified();
   Z_mass_both_18->cd();
   Z_mass_both_18->SetSelected(Z_mass_both_18);
}
