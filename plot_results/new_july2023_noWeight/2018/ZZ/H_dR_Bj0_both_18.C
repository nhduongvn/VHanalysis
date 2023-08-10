void H_dR_Bj0_both_18()
{
//=========Macro generated from canvas: H_dR_Bj0_both_18/H_dR_Bj0_both_18
//=========  (Thu Aug 10 12:29:24 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_18 = new TCanvas("H_dR_Bj0_both_18", "H_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_18->SetHighLightColor(2);
   H_dR_Bj0_both_18->Range(-1.2,-1.686964,6.8,15.18268);
   H_dR_Bj0_both_18->SetFillColor(0);
   H_dR_Bj0_both_18->SetBorderMode(0);
   H_dR_Bj0_both_18->SetBorderSize(2);
   H_dR_Bj0_both_18->SetLeftMargin(0.15);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
   H_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(1,3.352972);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(2,12.85306);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(3,11.17657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(4,7.264773);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(5,2.514729);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(6,2.235315);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(7,3.911801);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(8,1.9559);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(9,2.794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(10,3.632387);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(11,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(12,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(13,2.235315);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(14,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(15,1.9559);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(16,1.676486);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(18,1.117657);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinContent(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(1,0.9679197);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(2,1.89508);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(3,1.767172);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(4,1.424739);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(5,0.8382431);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(6,0.7903031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(7,1.045473);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(8,0.7392609);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(9,0.8835858);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(10,1.007443);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(11,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(12,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(13,0.7903031);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(14,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(15,0.7392609);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(16,0.6844226);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(17,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(18,0.5588287);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(19,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(20,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetBinError(22,0.2794144);
   VbbHcc_both_H_dR_Bj0_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_dR_Bj0_stack_8->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_18->Modified();
   H_dR_Bj0_both_18->cd();
   H_dR_Bj0_both_18->SetSelected(H_dR_Bj0_both_18);
}
