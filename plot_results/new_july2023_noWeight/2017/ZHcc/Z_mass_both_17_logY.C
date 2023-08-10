void Z_mass_both_17_logY()
{
//=========Macro generated from canvas: Z_mass_both_17/Z_mass_both_17
//=========  (Thu Aug 10 12:32:36 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_both_17 = new TCanvas("Z_mass_both_17", "Z_mass_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_17->SetHighLightColor(2);
   Z_mass_both_17->Range(-80,-3.325141,453.3333,-1.096768);
   Z_mass_both_17->SetFillColor(0);
   Z_mass_both_17->SetBorderMode(0);
   Z_mass_both_17->SetBorderSize(2);
   Z_mass_both_17->SetLogy();
   Z_mass_both_17->SetLeftMargin(0.15);
   Z_mass_both_17->SetFrameBorderMode(0);
   Z_mass_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass_stack_11 = new TH1D("VbbHcc_both_Z_mass_stack_11","",40,0,400);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(5,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(6,0.004740753);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(8,0.007901256);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(9,0.01422226);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(10,0.02528402);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(11,0.02528402);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(16,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(20,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(22,0.004740753);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(24,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(28,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(30,0.003160502);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(32,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(40,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinContent(41,0.03160502);
   VbbHcc_both_Z_mass_stack_11->SetBinError(5,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(6,0.002737075);
   VbbHcc_both_Z_mass_stack_11->SetBinError(8,0.003533549);
   VbbHcc_both_Z_mass_stack_11->SetBinError(9,0.004740753);
   VbbHcc_both_Z_mass_stack_11->SetBinError(10,0.006321005);
   VbbHcc_both_Z_mass_stack_11->SetBinError(11,0.006321005);
   VbbHcc_both_Z_mass_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_mass_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(16,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(18,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(20,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(22,0.002737075);
   VbbHcc_both_Z_mass_stack_11->SetBinError(24,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(26,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(28,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(30,0.002234813);
   VbbHcc_both_Z_mass_stack_11->SetBinError(32,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(40,0.001580251);
   VbbHcc_both_Z_mass_stack_11->SetBinError(41,0.007067098);
   VbbHcc_both_Z_mass_stack_11->SetEntries(95);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_17->Modified();
   Z_mass_both_17->cd();
   Z_mass_both_17->SetSelected(Z_mass_both_17);
}
