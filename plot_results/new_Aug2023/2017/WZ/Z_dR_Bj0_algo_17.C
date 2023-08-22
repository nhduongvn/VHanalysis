void Z_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_17/Z_dR_Bj0_algo_17
//=========  (Tue Aug 22 09:21:49 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_17 = new TCanvas("Z_dR_Bj0_algo_17", "Z_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_17->SetHighLightColor(2);
   Z_dR_Bj0_algo_17->Range(-1.2,-2.923682,6.8,26.31313);
   Z_dR_Bj0_algo_17->SetFillColor(0);
   Z_dR_Bj0_algo_17->SetBorderMode(0);
   Z_dR_Bj0_algo_17->SetBorderSize(2);
   Z_dR_Bj0_algo_17->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(1,5.568917);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(2,22.27567);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(3,13.25933);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(4,8.220783);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(5,3.447425);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(6,3.182238);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(7,3.182238);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(8,1.856306);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(9,2.386679);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(10,1.325933);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(11,1.060746);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(12,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(13,0.7955596);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(14,1.060746);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(15,1.325933);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(16,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(17,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(18,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(20,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(22,0.2651865);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinContent(25,0.2651865);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(1,1.215237);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(2,2.430475);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(3,1.875152);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(4,1.476496);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(5,0.9561437);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(6,0.9186331);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(7,0.9186331);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(8,0.7016176);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(9,0.7955596);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(10,0.5929751);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(11,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(12,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(13,0.4593166);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(14,0.5303731);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(15,0.5929751);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(16,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(17,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(18,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(20,0.3750304);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(22,0.2651865);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetBinError(25,0.2651865);
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetEntries(272);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_Z_dR_Bj0_stack_7->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_17->Modified();
   Z_dR_Bj0_algo_17->cd();
   Z_dR_Bj0_algo_17->SetSelected(Z_dR_Bj0_algo_17);
}
