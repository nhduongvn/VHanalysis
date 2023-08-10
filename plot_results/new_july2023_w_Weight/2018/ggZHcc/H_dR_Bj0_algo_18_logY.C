void H_dR_Bj0_algo_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_18/H_dR_Bj0_algo_18
//=========  (Thu Aug 10 10:42:10 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_algo_18 = new TCanvas("H_dR_Bj0_algo_18", "H_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_18->SetHighLightColor(2);
   H_dR_Bj0_algo_18->Range(-1.2,-4.219201,6.8,-0.271248);
   H_dR_Bj0_algo_18->SetFillColor(0);
   H_dR_Bj0_algo_18->SetBorderMode(0);
   H_dR_Bj0_algo_18->SetBorderSize(2);
   H_dR_Bj0_algo_18->SetLogy();
   H_dR_Bj0_algo_18->SetLeftMargin(0.15);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   H_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0_stack_12 = new TH1D("VbbHcc_algo_H_dR_Bj0_stack_12","",30,0,6);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(1,0.03266259);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(2,0.1138696);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(3,0.06982003);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(4,0.04494852);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(5,0.02187495);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(6,0.01947769);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(7,0.01648112);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(8,0.01498284);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(9,0.008989704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(10,0.007791077);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(11,0.008690047);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(12,0.009289361);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(13,0.003595882);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(14,0.002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(15,0.001198627);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(16,0.001498284);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(17,0.0008989704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(18,0.0008989704);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(19,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinContent(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(1,0.003128509);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(2,0.005841386);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(3,0.004574062);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(4,0.003670031);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(5,0.002560269);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(6,0.00241591);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(7,0.002222314);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(8,0.002118894);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(9,0.001641288);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(10,0.001527956);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(11,0.001613701);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(12,0.001668418);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(13,0.001038042);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(14,0.000947598);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(15,0.0005993136);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(16,0.000670053);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(17,0.0005190208);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(18,0.0005190208);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(19,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetBinError(21,0.0002996568);
   VbbHcc_algo_H_dR_Bj0_stack_12->SetEntries(1270);

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
