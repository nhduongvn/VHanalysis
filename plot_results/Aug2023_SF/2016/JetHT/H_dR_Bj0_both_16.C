#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_both_16()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(-1.2,-1651.913,6.8,14867.21);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetLeftMargin(0.15);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj0__873 = new TH1D("VbbHcc_both_H_dR_Bj0__873","",30,0,6);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(1,4191);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(2,12586);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(3,12389);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(4,9797);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(5,8065);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(6,6688);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(7,5708);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(8,4994);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(9,4499);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(10,4005);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(11,3852);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(12,3636);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(13,3379);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(14,3338);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(15,3202);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(16,3036);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(17,1875);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(18,1281);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(19,962);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(20,641);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(21,487);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(22,340);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(23,220);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(24,127);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(25,78);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(26,45);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(27,22);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(28,19);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(29,11);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(30,7);
   VbbHcc_both_H_dR_Bj0__873->SetBinContent(31,11);
   VbbHcc_both_H_dR_Bj0__873->SetEntries(99491);
   VbbHcc_both_H_dR_Bj0__873->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_both_H_dR_Bj0__873->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj0__873->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__873->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0__873->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__873->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__873->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__873->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0__873->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR_Bj0__873->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0__873->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
