void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Thu Aug  3 12:26:15 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.2,-0.1717674,6.8,1.545906);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetLeftMargin(0.15);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,0.5452932);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,1.308704);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.7634105);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,0.8724691);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(7,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.3271759);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(10,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(11,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(12,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(14,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(15,0.2181173);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(16,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(19,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(24,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.2438625);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,0.3777902);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.288542);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.3084644);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(7,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.1888951);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(10,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(11,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(12,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(14,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(15,0.1542322);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(16,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(19,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(24,0.1090586);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
