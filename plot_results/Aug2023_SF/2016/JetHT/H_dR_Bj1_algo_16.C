#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_algo_16()
{
//=========Macro generated from canvas: H_dR_Bj1_algo_16/H_dR_Bj1_algo_16
//=========  (Fri Sep  1 13:23:38 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj1_algo_16 = new TCanvas("H_dR_Bj1_algo_16", "H_dR_Bj1_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_algo_16->SetHighLightColor(2);
   H_dR_Bj1_algo_16->Range(-1.2,-7818.563,6.8,70367.06);
   H_dR_Bj1_algo_16->SetFillColor(0);
   H_dR_Bj1_algo_16->SetBorderMode(0);
   H_dR_Bj1_algo_16->SetBorderSize(2);
   H_dR_Bj1_algo_16->SetLeftMargin(0.15);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   H_dR_Bj1_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_dR_Bj1__528 = new TH1D("VbbHcc_algo_H_dR_Bj1__528","",30,0,6);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(1,23);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(2,21618);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(3,49205);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(4,50570);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(5,58899);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(6,59570);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(7,57039);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(8,54326);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(9,50155);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(10,47574);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(11,44157);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(12,42098);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(13,40007);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(14,37601);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(15,35201);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(16,32886);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(17,28642);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(18,24646);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(19,20987);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(20,17424);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(21,14058);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(22,11059);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(23,8890);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(24,6772);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(25,5272);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(26,3821);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(27,2793);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(28,1803);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(29,1050);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(30,603);
   VbbHcc_algo_H_dR_Bj1__528->SetBinContent(31,618);
   VbbHcc_algo_H_dR_Bj1__528->SetEntries(829367);
   VbbHcc_algo_H_dR_Bj1__528->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_algo_H_dR_Bj1__528->GetXaxis()->SetRange(1,30);
   VbbHcc_algo_H_dR_Bj1__528->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__528->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1__528->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__528->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__528->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__528->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_dR_Bj1__528->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_dR_Bj1__528->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_dR_Bj1__528->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_algo_16->Modified();
   H_dR_Bj1_algo_16->cd();
   H_dR_Bj1_algo_16->SetSelected(H_dR_Bj1_algo_16);
}
