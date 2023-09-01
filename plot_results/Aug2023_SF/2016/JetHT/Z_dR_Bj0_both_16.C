#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Fri Sep  1 13:23:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.2,-2174.55,6.8,19570.95);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLeftMargin(0.15);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0__903 = new TH1D("VbbHcc_both_Z_dR_Bj0__903","",30,0,6);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(1,5050);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(2,16568);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(3,15215);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(4,11335);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(5,8583);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(6,6782);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(7,5300);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(8,4439);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(9,3698);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(10,3072);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(11,2720);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(12,2516);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(13,2103);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(14,1965);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(15,1714);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(16,1502);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(17,1272);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(18,1104);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(19,943);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(20,774);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(21,646);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(22,545);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(23,393);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(24,344);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(25,306);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(26,236);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(27,141);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(28,93);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(29,60);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(30,32);
   VbbHcc_both_Z_dR_Bj0__903->SetBinContent(31,40);
   VbbHcc_both_Z_dR_Bj0__903->SetEntries(99491);
   VbbHcc_both_Z_dR_Bj0__903->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_both_Z_dR_Bj0__903->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj0__903->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__903->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0__903->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__903->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__903->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__903->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0__903->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_dR_Bj0__903->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0__903->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
