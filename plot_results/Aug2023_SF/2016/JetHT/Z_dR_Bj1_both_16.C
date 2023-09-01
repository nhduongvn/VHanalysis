#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.2,-2121.394,6.8,19092.54);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetLeftMargin(0.15);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj1__918 = new TH1D("VbbHcc_both_Z_dR_Bj1__918","",30,0,6);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(1,4965);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(2,16163);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(3,14798);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(4,10949);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(5,8829);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(6,6636);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(7,5327);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(8,4447);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(9,3681);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(10,3199);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(11,2814);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(12,2508);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(13,2218);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(14,2000);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(15,1868);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(16,1642);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(17,1332);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(18,1173);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(19,961);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(20,867);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(21,747);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(22,569);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(23,493);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(24,387);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(25,308);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(26,220);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(27,159);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(28,111);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(29,57);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(30,29);
   VbbHcc_both_Z_dR_Bj1__918->SetBinContent(31,34);
   VbbHcc_both_Z_dR_Bj1__918->SetEntries(99491);
   VbbHcc_both_Z_dR_Bj1__918->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_both_Z_dR_Bj1__918->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj1__918->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__918->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1__918->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__918->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__918->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__918->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1__918->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj1__918->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1__918->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
