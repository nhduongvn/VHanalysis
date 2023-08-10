void Z_dR_Bj0_algo_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_algo_18/Z_dR_Bj0_algo_18
//=========  (Thu Aug 10 12:28:40 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_algo_18 = new TCanvas("Z_dR_Bj0_algo_18", "Z_dR_Bj0_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_algo_18->SetHighLightColor(2);
   Z_dR_Bj0_algo_18->Range(-1.2,-0.0382328,6.8,0.3440952);
   Z_dR_Bj0_algo_18->SetFillColor(0);
   Z_dR_Bj0_algo_18->SetBorderMode(0);
   Z_dR_Bj0_algo_18->SetBorderSize(2);
   Z_dR_Bj0_algo_18->SetLeftMargin(0.15);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   Z_dR_Bj0_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_algo_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(1,0.05461829);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(2,0.2912975);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(3,0.1593033);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(4,0.06827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(5,0.05461829);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(6,0.03641219);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(7,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(8,0.03413643);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(9,0.0182061);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(10,0.01137881);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(11,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(12,0.01365457);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(13,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(14,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(15,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(16,0.006827286);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(19,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinContent(20,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(1,0.01114891);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(2,0.02574731);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(3,0.01904039);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(4,0.01246486);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(5,0.01114891);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(6,0.009103048);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(7,0.005574455);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(8,0.008813988);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(9,0.006436827);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(10,0.005088758);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(11,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(12,0.005574455);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(13,0.004551524);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(14,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(15,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(16,0.003941735);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(17,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(19,0.003218413);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetBinError(20,0.002275762);
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetEntries(352);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_algo_Z_dR_Bj0_stack_11->SetFillColor(ci);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR_Bj0_stack_11->Draw("HIST");
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
