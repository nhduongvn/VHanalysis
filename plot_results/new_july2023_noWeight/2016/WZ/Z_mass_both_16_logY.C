void Z_mass_both_16_logY()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Thu Aug 10 12:32:35 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(-80,-1.44133,453.3333,0.3382666);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLogy();
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_7 = new TH1D("VbbHcc_both_Z_mass_stack_7","",40,0,400);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(7,0.3271759);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(8,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(9,0.4362346);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(10,0.7634105);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(13,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(14,0.3271759);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(17,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(18,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(20,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(26,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(27,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(28,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(31,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(32,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(38,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinContent(41,1.744938);
   VbbHcc_both_Z_mass_stack_7->SetBinError(7,0.1888951);
   VbbHcc_both_Z_mass_stack_7->SetBinError(8,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(9,0.2181173);
   VbbHcc_both_Z_mass_stack_7->SetBinError(10,0.288542);
   VbbHcc_both_Z_mass_stack_7->SetBinError(12,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(13,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(14,0.1888951);
   VbbHcc_both_Z_mass_stack_7->SetBinError(15,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(17,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(18,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(20,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(26,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(27,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(28,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(31,0.1542322);
   VbbHcc_both_Z_mass_stack_7->SetBinError(32,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(38,0.1090586);
   VbbHcc_both_Z_mass_stack_7->SetBinError(41,0.4362346);
   VbbHcc_both_Z_mass_stack_7->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_16->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->SetSelected(Z_mass_both_16);
}
