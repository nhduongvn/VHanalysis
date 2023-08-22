void H_dR_Bj1_both_16()
{
//=========Macro generated from canvas: H_dR_Bj1_both_16/H_dR_Bj1_both_16
//=========  (Tue Aug 22 09:23:05 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_16 = new TCanvas("H_dR_Bj1_both_16", "H_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_16->SetHighLightColor(2);
   H_dR_Bj1_both_16->Range(-1.2,-0.001312952,6.8,0.01181657);
   H_dR_Bj1_both_16->SetFillColor(0);
   H_dR_Bj1_both_16->SetBorderMode(0);
   H_dR_Bj1_both_16->SetBorderSize(2);
   H_dR_Bj1_both_16->SetLeftMargin(0.15);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   H_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.008931646);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01000344);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.006788051);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.006073519);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.003215393);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.001429063);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.001786329);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.001890473);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.001557286);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001473045);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.001071798);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.001129774);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.0007145317);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0006188026);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0005052502);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0007988707);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0003572658);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_Bj1_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_12->Draw("HIST");
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
