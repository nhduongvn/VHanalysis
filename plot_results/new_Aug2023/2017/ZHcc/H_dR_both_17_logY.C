void H_dR_both_17_logY()
{
//=========Macro generated from canvas: H_dR_both_17/H_dR_both_17
//=========  (Tue Aug 22 09:18:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_17 = new TCanvas("H_dR_both_17", "H_dR_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_17->SetHighLightColor(2);
   H_dR_both_17->Range(-1.2,-3.512675,6.8,-1.17361);
   H_dR_both_17->SetFillColor(0);
   H_dR_both_17->SetBorderMode(0);
   H_dR_both_17->SetBorderSize(2);
   H_dR_both_17->SetLogy();
   H_dR_both_17->SetLeftMargin(0.15);
   H_dR_both_17->SetFrameBorderMode(0);
   H_dR_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_11 = new TH1D("VbbHcc_both_H_dR_stack_11","",30,0,6);
   VbbHcc_both_H_dR_stack_11->SetBinContent(3,0.003434412);
   VbbHcc_both_H_dR_stack_11->SetBinContent(4,0.02065067);
   VbbHcc_both_H_dR_stack_11->SetBinContent(5,0.007809649);
   VbbHcc_both_H_dR_stack_11->SetBinContent(6,0.01804384);
   VbbHcc_both_H_dR_stack_11->SetBinContent(7,0.01747791);
   VbbHcc_both_H_dR_stack_11->SetBinContent(8,0.01560817);
   VbbHcc_both_H_dR_stack_11->SetBinContent(9,0.005833825);
   VbbHcc_both_H_dR_stack_11->SetBinContent(10,0.005395594);
   VbbHcc_both_H_dR_stack_11->SetBinContent(11,0.005945392);
   VbbHcc_both_H_dR_stack_11->SetBinContent(12,0.007858506);
   VbbHcc_both_H_dR_stack_11->SetBinContent(13,0.007268515);
   VbbHcc_both_H_dR_stack_11->SetBinContent(14,0.004884706);
   VbbHcc_both_H_dR_stack_11->SetBinContent(15,0.00641907);
   VbbHcc_both_H_dR_stack_11->SetBinContent(16,0.007732482);
   VbbHcc_both_H_dR_stack_11->SetBinContent(17,0.008269425);
   VbbHcc_both_H_dR_stack_11->SetBinContent(18,0.001131928);
   VbbHcc_both_H_dR_stack_11->SetBinContent(20,0.00182132);
   VbbHcc_both_H_dR_stack_11->SetBinContent(21,0.001052596);
   VbbHcc_both_H_dR_stack_11->SetBinError(3,0.002502062);
   VbbHcc_both_H_dR_stack_11->SetBinError(4,0.005987255);
   VbbHcc_both_H_dR_stack_11->SetBinError(5,0.003509523);
   VbbHcc_both_H_dR_stack_11->SetBinError(6,0.00525411);
   VbbHcc_both_H_dR_stack_11->SetBinError(7,0.004969805);
   VbbHcc_both_H_dR_stack_11->SetBinError(8,0.005128169);
   VbbHcc_both_H_dR_stack_11->SetBinError(9,0.002941924);
   VbbHcc_both_H_dR_stack_11->SetBinError(10,0.003132007);
   VbbHcc_both_H_dR_stack_11->SetBinError(11,0.002987938);
   VbbHcc_both_H_dR_stack_11->SetBinError(12,0.003582191);
   VbbHcc_both_H_dR_stack_11->SetBinError(13,0.003471518);
   VbbHcc_both_H_dR_stack_11->SetBinError(14,0.002835526);
   VbbHcc_both_H_dR_stack_11->SetBinError(15,0.003260154);
   VbbHcc_both_H_dR_stack_11->SetBinError(16,0.003504844);
   VbbHcc_both_H_dR_stack_11->SetBinError(17,0.003740672);
   VbbHcc_both_H_dR_stack_11->SetBinError(18,0.001131928);
   VbbHcc_both_H_dR_stack_11->SetBinError(20,0.00182132);
   VbbHcc_both_H_dR_stack_11->SetBinError(21,0.001052596);
   VbbHcc_both_H_dR_stack_11->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_dR_stack_11->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_17->Modified();
   H_dR_both_17->cd();
   H_dR_both_17->SetSelected(H_dR_both_17);
}
