#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_16()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_16/Z_dR_Bj0_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_tags_16 = new TCanvas("Z_dR_Bj0_tags_16", "Z_dR_Bj0_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_16->SetHighLightColor(2);
   Z_dR_Bj0_tags_16->Range(-1.2,-1723.575,6.8,15512.18);
   Z_dR_Bj0_tags_16->SetFillColor(0);
   Z_dR_Bj0_tags_16->SetBorderMode(0);
   Z_dR_Bj0_tags_16->SetBorderSize(2);
   Z_dR_Bj0_tags_16->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__183 = new TH1D("VbbHcc_tags_Z_dR_Bj0__183","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(1,3358);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(2,13132);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(3,12826);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(4,10309);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(5,8231);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(6,6652);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(7,5304);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(8,4661);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(9,3931);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(10,3450);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(11,3200);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(12,2797);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(13,2560);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(14,2347);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(15,2111);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(16,1816);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(17,1471);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(18,1219);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(19,1008);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(20,833);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(21,711);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(22,585);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(23,434);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(24,335);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(25,301);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(26,225);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(27,132);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(28,86);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(29,66);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(30,37);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(31,46);
   VbbHcc_tags_Z_dR_Bj0__183->SetEntries(94174);
   VbbHcc_tags_Z_dR_Bj0__183->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_tags_Z_dR_Bj0__183->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj0__183->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__183->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__183->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__183->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__183->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__183->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj0__183->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dR_Bj0__183->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj0__183->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_16->Modified();
   Z_dR_Bj0_tags_16->cd();
   Z_dR_Bj0_tags_16->SetSelected(Z_dR_Bj0_tags_16);
}
