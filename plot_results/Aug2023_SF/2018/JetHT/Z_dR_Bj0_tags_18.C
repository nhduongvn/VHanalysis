#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_tags_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_tags_18/Z_dR_Bj0_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *Z_dR_Bj0_tags_18 = new TCanvas("Z_dR_Bj0_tags_18", "Z_dR_Bj0_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_tags_18->SetHighLightColor(2);
   Z_dR_Bj0_tags_18->Range(-1.2,-5552.663,6.8,49973.96);
   Z_dR_Bj0_tags_18->SetFillColor(0);
   Z_dR_Bj0_tags_18->SetBorderMode(0);
   Z_dR_Bj0_tags_18->SetBorderSize(2);
   Z_dR_Bj0_tags_18->SetLeftMargin(0.15);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   Z_dR_Bj0_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj0__183 = new TH1D("VbbHcc_tags_Z_dR_Bj0__183","",30,0,6);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(1,9210);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(2,42021);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(3,42306);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(4,33874);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(5,27071);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(6,21576);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(7,17742);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(8,14756);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(9,12966);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(10,11598);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(11,10511);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(12,9840);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(13,8779);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(14,7864);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(15,6906);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(16,5909);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(17,4829);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(18,4058);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(19,3420);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(20,2712);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(21,2310);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(22,1852);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(23,1529);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(24,1162);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(25,919);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(26,693);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(27,453);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(28,245);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(29,191);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(30,98);
   VbbHcc_tags_Z_dR_Bj0__183->SetBinContent(31,174);
   VbbHcc_tags_Z_dR_Bj0__183->SetEntries(307574);
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_tags_18->Modified();
   Z_dR_Bj0_tags_18->cd();
   Z_dR_Bj0_tags_18->SetSelected(Z_dR_Bj0_tags_18);
}
