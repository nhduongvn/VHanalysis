void H_dR_Bj0_algo_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Aug 10 12:20:54 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.2,-4.377722,6.8,-0.438409);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLogy();
   H_dR_Bj0_algo_17->SetLeftMargin(0.15);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.02491268);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.07764452);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.05958282);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.03550057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02491268);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.01432479);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.01224873);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.009965071);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.00954986);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.006020564);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.004567324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.007473804);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.002283662);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.003944507);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001868451);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.00145324);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.001660845);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.0008304226);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.002274206);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.004014902);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.003517063);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.002714796);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.002274206);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.001724502);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.001594649);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.001438334);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.00140805);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001117991);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.0009737568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001245634);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.0009284407);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.0006885501);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0009049321);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.000622817);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0005492729);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0005871975);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0004152113);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1460);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0_stack_12->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_17->Modified();
   H_dR_Bj0_algo_17->cd();
   H_dR_Bj0_algo_17->SetSelected(H_dR_Bj0_algo_17);
}
