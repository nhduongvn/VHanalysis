void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Aug 10 12:28:40 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.2,-1.245943,6.8,11.21348);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_6 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(1,2.260213);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(2,9.492896);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(3,6.78064);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(4,4.068384);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(5,3.164299);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(6,3.616341);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(7,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(8,0.9040853);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(9,0.9040853);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(13,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(15,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinContent(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(1,1.010798);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(2,2.07152);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(3,1.750754);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(4,1.356128);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(5,1.195992);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(6,1.27857);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(7,0.7829609);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(8,0.6392849);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(9,0.6392849);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(13,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(15,0.7829609);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetBinError(21,0.4520427);
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetEntries(77);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_dR_Bj0_stack_6->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_algo_18->Modified();
   Z_dR_Bj0_algo_18->cd();
   Z_dR_Bj0_algo_18->SetSelected(Z_dR_Bj0_algo_18);
}
