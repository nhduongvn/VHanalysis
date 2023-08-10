void Z_mass_both_16_logY()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Thu Aug 10 12:21:20 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(-80,-3.043099,453.3333,-1.054763);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLogy();
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.002869221);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(7,0.002864632);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.02943437);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.005401085);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.002944518);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.002869457);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.005891746);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.005754562);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.003126194);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.006089877);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(19,0.002933425);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(29,0.002862625);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(33,0.002965507);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.02868894);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.002869221);
   VbbHcc_both_Z_mass_stack_11->SetBinError(7,0.002864632);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.00932236);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.003830529);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.002944518);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.002869457);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.004166897);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.004069859);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.003126194);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.004313037);
   VbbHcc_both_Z_mass_stack_11->SetBinError(19,0.002933425);
   VbbHcc_both_Z_mass_stack_11->SetBinError(29,0.002862625);
   VbbHcc_both_Z_mass_stack_11->SetBinError(33,0.002965507);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.009113134);
   VbbHcc_both_Z_mass_stack_11->SetEntries(36);

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
