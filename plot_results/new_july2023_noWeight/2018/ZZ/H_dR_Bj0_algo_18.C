void H_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Aug  3 12:24:43 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.2,-6.271106,6.8,56.43995);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLeftMargin(0.15);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_8 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_8","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(1,23.19139);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(2,47.77985);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(3,20.95608);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(4,16.76486);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(5,7.264773);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(6,6.705944);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(7,4.191215);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(8,5.588287);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(9,3.632387);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(10,4.750044);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(11,3.911801);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(12,0.8382431);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(13,0.8382431);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(14,1.676486);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(15,1.9559);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(16,0.5588287);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(17,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(18,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(19,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinContent(21,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(1,2.545586);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(2,3.653817);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(3,2.419799);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(4,2.164334);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(5,1.424739);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(6,1.368845);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(7,1.082167);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(8,1.249579);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(9,1.007443);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(10,1.152055);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(11,1.045473);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(12,0.4839599);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(13,0.4839599);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(14,0.6844226);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(15,0.7392609);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(16,0.3951516);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(17,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(18,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(19,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetBinError(21,0.2794144);
   VbbHcc_algo_H_dR_Bj0_stack_8->SetEntries(543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_H_dR_Bj0_stack_8->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_18->Modified();
   H_dR_Bj0_algo_18->cd();
   H_dR_Bj0_algo_18->SetSelected(H_dR_Bj0_algo_18);
}
