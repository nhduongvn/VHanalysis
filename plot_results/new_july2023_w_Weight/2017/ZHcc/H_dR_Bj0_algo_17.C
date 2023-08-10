void H_dR_Bj0_algo_17()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_17/H_dR_Bj0_algo_17
//=========  (Thu Aug 10 12:24:12 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_17 = new TCanvas("H_dR_Bj0_algo_17", "H_dR_Bj0_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_17->SetHighLightColor(2);
   H_dR_Bj0_algo_17->Range(-1.2,-0.02219265,6.8,0.1997339);
   H_dR_Bj0_algo_17->SetFillColor(0);
   H_dR_Bj0_algo_17->SetBorderMode(0);
   H_dR_Bj0_algo_17->SetBorderSize(2);
   H_dR_Bj0_algo_17->SetLeftMargin(0.15);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   H_dR_Bj0_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(1,0.06953105);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(2,0.1690869);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(3,0.1311608);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(4,0.08533356);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(5,0.03318527);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(6,0.03318527);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(7,0.03160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(8,0.01738276);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(9,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(10,0.01896301);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(11,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(12,0.01106176);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(13,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(15,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(16,0.007901256);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(18,0.004740753);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(19,0.003160502);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinContent(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(1,0.0104822);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(2,0.01634624);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(3,0.01439677);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(4,0.01161243);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(5,0.00724162);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(6,0.00724162);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(7,0.007067098);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(8,0.0052411);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(9,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(10,0.005474151);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(11,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(12,0.004180952);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(13,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(14,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(15,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(16,0.003533549);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(18,0.002737075);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(19,0.002234813);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetBinError(22,0.001580251);
   VbbHcc_algo_H_dR_Bj0_stack_11->SetEntries(413);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_H_dR_Bj0_stack_11->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0_stack_11->Draw("HIST");
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
