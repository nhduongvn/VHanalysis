void H_dR_Bj1_both_17()
{
//=========Macro generated from canvas: H_dR_Bj1_both_17/H_dR_Bj1_both_17
//=========  (Thu Aug 10 12:29:25 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_17 = new TCanvas("H_dR_Bj1_both_17", "H_dR_Bj1_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_17->SetHighLightColor(2);
   H_dR_Bj1_both_17->Range(-1.2,-0.00138966,6.8,0.01250694);
   H_dR_Bj1_both_17->SetFillColor(0);
   H_dR_Bj1_both_17->SetBorderMode(0);
   H_dR_Bj1_both_17->SetBorderSize(2);
   H_dR_Bj1_both_17->SetLeftMargin(0.15);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   H_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_12 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_12","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(1,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(2,0.01058789);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(3,0.01038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(4,0.009342254);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(5,0.007473804);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(6,0.004359719);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(7,0.002491268);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(8,0.00332169);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(9,0.003114085);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(10,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(11,0.00145324);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(12,0.002283662);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(13,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(14,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(15,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(16,0.001038028);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(18,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinContent(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(1,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(2,0.001482601);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(3,0.001467994);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(4,0.001392661);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(5,0.001245634);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(6,0.0009513686);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(7,0.0007191671);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(8,0.0008304226);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(9,0.0008040532);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(10,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(11,0.0005492729);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(12,0.0006885501);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(13,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(14,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(15,0.0004152113);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(16,0.0004642204);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(18,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetBinError(22,0.0002076057);
   VbbHcc_both_H_dR_Bj1_stack_12->SetEntries(308);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_17->Modified();
   H_dR_Bj1_both_17->cd();
   H_dR_Bj1_both_17->SetSelected(H_dR_Bj1_both_17);
}
