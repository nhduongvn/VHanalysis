#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_algo_16()
{
//=========Macro generated from canvas: Z_dR_algo_16/Z_dR_algo_16
//=========  (Fri Sep  1 13:23:36 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_algo_16 = new TCanvas("Z_dR_algo_16", "Z_dR_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_algo_16->SetHighLightColor(2);
   Z_dR_algo_16->Range(-1.2,-7846.651,6.8,70619.85);
   Z_dR_algo_16->SetFillColor(0);
   Z_dR_algo_16->SetBorderMode(0);
   Z_dR_algo_16->SetBorderSize(2);
   Z_dR_algo_16->SetLeftMargin(0.15);
   Z_dR_algo_16->SetFrameBorderMode(0);
   Z_dR_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_dR__423 = new TH1D("VbbHcc_algo_Z_dR__423","",30,0,6);
   VbbHcc_algo_Z_dR__423->SetBinContent(2,42);
   VbbHcc_algo_Z_dR__423->SetBinContent(3,49159);
   VbbHcc_algo_Z_dR__423->SetBinContent(4,59784);
   VbbHcc_algo_Z_dR__423->SetBinContent(5,50420);
   VbbHcc_algo_Z_dR__423->SetBinContent(6,48363);
   VbbHcc_algo_Z_dR__423->SetBinContent(7,47618);
   VbbHcc_algo_Z_dR__423->SetBinContent(8,46361);
   VbbHcc_algo_Z_dR__423->SetBinContent(9,45485);
   VbbHcc_algo_Z_dR__423->SetBinContent(10,43627);
   VbbHcc_algo_Z_dR__423->SetBinContent(11,41928);
   VbbHcc_algo_Z_dR__423->SetBinContent(12,39793);
   VbbHcc_algo_Z_dR__423->SetBinContent(13,37794);
   VbbHcc_algo_Z_dR__423->SetBinContent(14,35176);
   VbbHcc_algo_Z_dR__423->SetBinContent(15,33366);
   VbbHcc_algo_Z_dR__423->SetBinContent(16,31698);
   VbbHcc_algo_Z_dR__423->SetBinContent(17,26784);
   VbbHcc_algo_Z_dR__423->SetBinContent(18,23658);
   VbbHcc_algo_Z_dR__423->SetBinContent(19,21589);
   VbbHcc_algo_Z_dR__423->SetBinContent(20,19656);
   VbbHcc_algo_Z_dR__423->SetBinContent(21,17667);
   VbbHcc_algo_Z_dR__423->SetBinContent(22,15997);
   VbbHcc_algo_Z_dR__423->SetBinContent(23,14992);
   VbbHcc_algo_Z_dR__423->SetBinContent(24,13858);
   VbbHcc_algo_Z_dR__423->SetBinContent(25,12648);
   VbbHcc_algo_Z_dR__423->SetBinContent(26,11581);
   VbbHcc_algo_Z_dR__423->SetBinContent(27,10486);
   VbbHcc_algo_Z_dR__423->SetBinContent(28,9650);
   VbbHcc_algo_Z_dR__423->SetBinContent(29,8502);
   VbbHcc_algo_Z_dR__423->SetBinContent(30,6202);
   VbbHcc_algo_Z_dR__423->SetBinContent(31,5483);
   VbbHcc_algo_Z_dR__423->SetEntries(829367);
   VbbHcc_algo_Z_dR__423->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_algo_Z_dR__423->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_Z_dR__423->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__423->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR__423->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__423->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__423->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__423->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_dR__423->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_dR__423->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_dR__423->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_algo_16->Modified();
   Z_dR_algo_16->cd();
   Z_dR_algo_16->SetSelected(Z_dR_algo_16);
}
