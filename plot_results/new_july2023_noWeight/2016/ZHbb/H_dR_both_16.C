void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Thu Aug  3 12:25:47 2023) by ROOT version 6.14/09
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.55019,6.8,4.95171);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_stack_9 = new TH1D("VbbHcc_both_H_dR_stack_9","",30,0,6);
   VbbHcc_both_H_dR_stack_9->SetBinContent(3,1.981237);
   VbbHcc_both_H_dR_stack_9->SetBinContent(4,3.713789);
   VbbHcc_both_H_dR_stack_9->SetBinContent(5,4.191924);
   VbbHcc_both_H_dR_stack_9->SetBinContent(6,3.635474);
   VbbHcc_both_H_dR_stack_9->SetBinContent(7,2.633864);
   VbbHcc_both_H_dR_stack_9->SetBinContent(8,1.945514);
   VbbHcc_both_H_dR_stack_9->SetBinContent(9,1.382194);
   VbbHcc_both_H_dR_stack_9->SetBinContent(10,1.264035);
   VbbHcc_both_H_dR_stack_9->SetBinContent(11,1.397308);
   VbbHcc_both_H_dR_stack_9->SetBinContent(12,1.836972);
   VbbHcc_both_H_dR_stack_9->SetBinContent(13,2.460746);
   VbbHcc_both_H_dR_stack_9->SetBinContent(14,3.18207);
   VbbHcc_both_H_dR_stack_9->SetBinContent(15,3.978961);
   VbbHcc_both_H_dR_stack_9->SetBinContent(16,3.926751);
   VbbHcc_both_H_dR_stack_9->SetBinContent(17,1.353342);
   VbbHcc_both_H_dR_stack_9->SetBinContent(18,0.475387);
   VbbHcc_both_H_dR_stack_9->SetBinContent(19,0.1854834);
   VbbHcc_both_H_dR_stack_9->SetBinContent(20,0.09342865);
   VbbHcc_both_H_dR_stack_9->SetBinContent(21,0.06182779);
   VbbHcc_both_H_dR_stack_9->SetBinContent(22,0.02335716);
   VbbHcc_both_H_dR_stack_9->SetBinContent(23,0.01373951);
   VbbHcc_both_H_dR_stack_9->SetBinContent(24,0.006869754);
   VbbHcc_both_H_dR_stack_9->SetBinContent(26,0.002747902);
   VbbHcc_both_H_dR_stack_9->SetBinError(3,0.05217396);
   VbbHcc_both_H_dR_stack_9->SetBinError(4,0.07143223);
   VbbHcc_both_H_dR_stack_9->SetBinError(5,0.07589135);
   VbbHcc_both_H_dR_stack_9->SetBinError(6,0.07067505);
   VbbHcc_both_H_dR_stack_9->SetBinError(7,0.06015645);
   VbbHcc_both_H_dR_stack_9->SetBinError(8,0.05170146);
   VbbHcc_both_H_dR_stack_9->SetBinError(9,0.04357829);
   VbbHcc_both_H_dR_stack_9->SetBinError(10,0.04167399);
   VbbHcc_both_H_dR_stack_9->SetBinError(11,0.04381589);
   VbbHcc_both_H_dR_stack_9->SetBinError(12,0.05023852);
   VbbHcc_both_H_dR_stack_9->SetBinError(13,0.05814588);
   VbbHcc_both_H_dR_stack_9->SetBinError(14,0.06612116);
   VbbHcc_both_H_dR_stack_9->SetBinError(15,0.07393847);
   VbbHcc_both_H_dR_stack_9->SetBinError(16,0.07345177);
   VbbHcc_both_H_dR_stack_9->SetBinError(17,0.04312105);
   VbbHcc_both_H_dR_stack_9->SetBinError(18,0.02555696);
   VbbHcc_both_H_dR_stack_9->SetBinError(19,0.01596387);
   VbbHcc_both_H_dR_stack_9->SetBinError(20,0.01132989);
   VbbHcc_both_H_dR_stack_9->SetBinError(21,0.009216742);
   VbbHcc_both_H_dR_stack_9->SetBinError(22,0.005664944);
   VbbHcc_both_H_dR_stack_9->SetBinError(23,0.004344814);
   VbbHcc_both_H_dR_stack_9->SetBinError(24,0.003072247);
   VbbHcc_both_H_dR_stack_9->SetBinError(26,0.00194306);
   VbbHcc_both_H_dR_stack_9->SetEntries(28929);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_dR_stack_9->SetFillColor(ci);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_stack_9->Draw("HIST");
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
