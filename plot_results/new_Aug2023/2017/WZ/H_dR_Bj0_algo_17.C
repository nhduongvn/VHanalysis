void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Tue Aug 22 09:21:44 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.2,-3.028099,6.8,27.25289);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLeftMargin(0.15);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(1,8.485969);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(2,23.07123);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(3,10.07709);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(4,7.69041);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(5,3.182238);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(6,2.121492);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(7,3.182238);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(8,3.977798);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(9,1.325933);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(10,2.651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(11,1.591119);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(12,0.5303731);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(13,1.325933);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(14,1.060746);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(16,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(18,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(19,0.5303731);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(20,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinContent(21,0.5303731);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(1,1.500122);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(2,2.473495);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(3,1.63472);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(4,1.428073);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(5,0.9186331);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(6,0.7500608);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(7,0.9186331);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(8,1.027063);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(9,0.5929751);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(10,0.8385935);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(11,0.6495717);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(12,0.3750304);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(13,0.5929751);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(14,0.5303731);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(16,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(18,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(19,0.3750304);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(20,0.2651865);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetBinError(21,0.3750304);
   VbbHcc_algo_H_dR_Bj0_stack_7->SetEntries(272);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_algo_H_dR_Bj0_stack_7->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_7->Draw("HIST");
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
