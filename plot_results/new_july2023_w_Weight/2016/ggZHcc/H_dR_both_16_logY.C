void H_dR_both_16_logY()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug 10 12:21:34 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-3.991453,6.8,-1.622961);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLogy();
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_12 = new TH1D("VbbHcc_both_H_dR_stack_12","",30,0,6);
   VbbHcc_both_H_dR_stack_12->SetBinContent(3,0.001176057);
   VbbHcc_both_H_dR_stack_12->SetBinContent(4,0.003174029);
   VbbHcc_both_H_dR_stack_12->SetBinContent(5,0.005832182);
   VbbHcc_both_H_dR_stack_12->SetBinContent(6,0.002787966);
   VbbHcc_both_H_dR_stack_12->SetBinContent(7,0.007288543);
   VbbHcc_both_H_dR_stack_12->SetBinContent(8,0.003128911);
   VbbHcc_both_H_dR_stack_12->SetBinContent(9,0.002039826);
   VbbHcc_both_H_dR_stack_12->SetBinContent(10,0.002350478);
   VbbHcc_both_H_dR_stack_12->SetBinContent(11,0.00219577);
   VbbHcc_both_H_dR_stack_12->SetBinContent(12,0.004500661);
   VbbHcc_both_H_dR_stack_12->SetBinContent(13,0.002968987);
   VbbHcc_both_H_dR_stack_12->SetBinContent(14,0.004975322);
   VbbHcc_both_H_dR_stack_12->SetBinContent(15,0.00236107);
   VbbHcc_both_H_dR_stack_12->SetBinContent(16,0.005717871);
   VbbHcc_both_H_dR_stack_12->SetBinContent(17,0.00110431);
   VbbHcc_both_H_dR_stack_12->SetBinContent(18,0.0003519057);
   VbbHcc_both_H_dR_stack_12->SetBinError(3,0.0006793139);
   VbbHcc_both_H_dR_stack_12->SetBinError(4,0.00107333);
   VbbHcc_both_H_dR_stack_12->SetBinError(5,0.0015073);
   VbbHcc_both_H_dR_stack_12->SetBinError(6,0.001054966);
   VbbHcc_both_H_dR_stack_12->SetBinError(7,0.001675588);
   VbbHcc_both_H_dR_stack_12->SetBinError(8,0.001074505);
   VbbHcc_both_H_dR_stack_12->SetBinError(9,0.0009133793);
   VbbHcc_both_H_dR_stack_12->SetBinError(10,0.0009609696);
   VbbHcc_both_H_dR_stack_12->SetBinError(11,0.0009004339);
   VbbHcc_both_H_dR_stack_12->SetBinError(12,0.001301007);
   VbbHcc_both_H_dR_stack_12->SetBinError(13,0.00105518);
   VbbHcc_both_H_dR_stack_12->SetBinError(14,0.001381494);
   VbbHcc_both_H_dR_stack_12->SetBinError(15,0.0009654832);
   VbbHcc_both_H_dR_stack_12->SetBinError(16,0.001479485);
   VbbHcc_both_H_dR_stack_12->SetBinError(17,0.0006386872);
   VbbHcc_both_H_dR_stack_12->SetBinError(18,0.0003519057);
   VbbHcc_both_H_dR_stack_12->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR_stack_12->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
