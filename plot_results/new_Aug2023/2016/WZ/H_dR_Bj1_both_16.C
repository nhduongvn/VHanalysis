void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Tue Aug 22 09:23:04 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.2,-0.162025,6.8,1.458225);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLeftMargin(0.15);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(1,0.4489005);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,1.234476);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,0.3366753);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,0.5611256);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,0.4489005);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.6733507);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(10,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(12,0.4489005);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(13,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(14,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(23,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(1,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.3722086);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,0.1943796);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.250943);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.2748943);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.1587103);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.1587103);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(10,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(12,0.2244502);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(13,0.1587103);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(14,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.1587103);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(23,0.1122251);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(49);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_16->Modified();
   H_dR_Bj1_both_16->cd();
   H_dR_Bj1_both_16->SetSelected(H_dR_Bj1_both_16);
}
