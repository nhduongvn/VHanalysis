#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj0_algo_16/H_dR_Bj0_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_algo_16 = new TCanvas("H_dR_Bj0_algo_16", "H_dR_Bj0_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_algo_16->SetHighLightColor(2);
   H_dR_Bj0_algo_16->Range(-1.2,-0.01205102,6.8,0.1084592);
   H_dR_Bj0_algo_16->SetFillColor(0);
   H_dR_Bj0_algo_16->SetBorderMode(0);
   H_dR_Bj0_algo_16->SetBorderSize(2);
   H_dR_Bj0_algo_16->SetLeftMargin(0.15);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   H_dR_Bj0_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj0__525 = new TH1D("VbbHcc_algo_H_dR_Bj0__525","",30,0,6);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(1,0.02786674);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(2,0.09181732);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(3,0.08002755);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(4,0.056448);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(5,0.02608041);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(6,0.02000689);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(7,0.02429408);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(8,0.01643423);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(9,0.01214704);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(10,0.007145317);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(11,0.00857438);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(12,0.006788051);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(13,0.004644456);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(14,0.005716254);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(15,0.00428719);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(16,0.001786329);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(17,0.005001722);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(18,0.001429063);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(19,0.001429063);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(20,0.002143595);
   VbbHcc_algo_H_dR_Bj0__525->SetBinContent(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(1,0.003155287);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(2,0.005727407);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(3,0.005347066);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(4,0.004490762);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(5,0.003052481);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(6,0.002673533);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(7,0.00294609);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(8,0.002423095);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(9,0.0020832);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(10,0.001597741);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(11,0.001750238);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(12,0.001557286);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(13,0.00128814);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(14,0.001429063);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(15,0.001237605);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(16,0.0007988707);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(17,0.001336766);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(18,0.0007145317);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(19,0.0007145317);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(20,0.000875119);
   VbbHcc_algo_H_dR_Bj0__525->SetBinError(25,0.0003572658);
   VbbHcc_algo_H_dR_Bj0__525->SetEntries(1132);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_algo_H_dR_Bj0__525->SetFillColor(ci);
   VbbHcc_algo_H_dR_Bj0__525->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_algo_H_dR_Bj0__525->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj0__525->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__525->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0__525->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__525->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__525->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__525->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj0__525->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj0__525->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj0__525->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_algo_16->Modified();
   H_dR_Bj0_algo_16->cd();
   H_dR_Bj0_algo_16->SetSelected(H_dR_Bj0_algo_16);
}
