#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-2837.622,6.8,25538.6);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__79 = new TH1D("VbbHcc_tags_H_dR__79","",30,0,6);
   VbbHcc_tags_H_dR__79->SetBinContent(3,20526.33);
   VbbHcc_tags_H_dR__79->SetBinContent(4,14434.73);
   VbbHcc_tags_H_dR__79->SetBinContent(5,10903.24);
   VbbHcc_tags_H_dR__79->SetBinContent(6,8590.623);
   VbbHcc_tags_H_dR__79->SetBinContent(7,8261.356);
   VbbHcc_tags_H_dR__79->SetBinContent(8,9764.2);
   VbbHcc_tags_H_dR__79->SetBinContent(9,10226.73);
   VbbHcc_tags_H_dR__79->SetBinContent(10,9249.841);
   VbbHcc_tags_H_dR__79->SetBinContent(11,10531.65);
   VbbHcc_tags_H_dR__79->SetBinContent(12,13405.83);
   VbbHcc_tags_H_dR__79->SetBinContent(13,11092.83);
   VbbHcc_tags_H_dR__79->SetBinContent(14,14118.91);
   VbbHcc_tags_H_dR__79->SetBinContent(15,21619.98);
   VbbHcc_tags_H_dR__79->SetBinContent(16,16171.28);
   VbbHcc_tags_H_dR__79->SetBinContent(17,18748.25);
   VbbHcc_tags_H_dR__79->SetBinContent(18,20325.51);
   VbbHcc_tags_H_dR__79->SetBinContent(19,14391.75);
   VbbHcc_tags_H_dR__79->SetBinContent(20,13764.86);
   VbbHcc_tags_H_dR__79->SetBinContent(21,6052.564);
   VbbHcc_tags_H_dR__79->SetBinContent(22,5056.938);
   VbbHcc_tags_H_dR__79->SetBinContent(23,4882.283);
   VbbHcc_tags_H_dR__79->SetBinContent(24,3190.038);
   VbbHcc_tags_H_dR__79->SetBinContent(25,2976.126);
   VbbHcc_tags_H_dR__79->SetBinContent(26,4715.416);
   VbbHcc_tags_H_dR__79->SetBinContent(27,3110.24);
   VbbHcc_tags_H_dR__79->SetBinContent(28,1284.184);
   VbbHcc_tags_H_dR__79->SetBinContent(29,12048.62);
   VbbHcc_tags_H_dR__79->SetBinContent(30,1857.424);
   VbbHcc_tags_H_dR__79->SetBinContent(31,1649.359);
   VbbHcc_tags_H_dR__79->SetBinError(3,3785.812);
   VbbHcc_tags_H_dR__79->SetBinError(4,2173.909);
   VbbHcc_tags_H_dR__79->SetBinError(5,2111.534);
   VbbHcc_tags_H_dR__79->SetBinError(6,1487.105);
   VbbHcc_tags_H_dR__79->SetBinError(7,1596.046);
   VbbHcc_tags_H_dR__79->SetBinError(8,1834.435);
   VbbHcc_tags_H_dR__79->SetBinError(9,1874.477);
   VbbHcc_tags_H_dR__79->SetBinError(10,1493.276);
   VbbHcc_tags_H_dR__79->SetBinError(11,1778.273);
   VbbHcc_tags_H_dR__79->SetBinError(12,2041.427);
   VbbHcc_tags_H_dR__79->SetBinError(13,1612.084);
   VbbHcc_tags_H_dR__79->SetBinError(14,1800.753);
   VbbHcc_tags_H_dR__79->SetBinError(15,6105.869);
   VbbHcc_tags_H_dR__79->SetBinError(16,2164.729);
   VbbHcc_tags_H_dR__79->SetBinError(17,3882.075);
   VbbHcc_tags_H_dR__79->SetBinError(18,2652.602);
   VbbHcc_tags_H_dR__79->SetBinError(19,1963.33);
   VbbHcc_tags_H_dR__79->SetBinError(20,2661.833);
   VbbHcc_tags_H_dR__79->SetBinError(21,1012.488);
   VbbHcc_tags_H_dR__79->SetBinError(22,703.8696);
   VbbHcc_tags_H_dR__79->SetBinError(23,1148.892);
   VbbHcc_tags_H_dR__79->SetBinError(24,739.6311);
   VbbHcc_tags_H_dR__79->SetBinError(25,864.0387);
   VbbHcc_tags_H_dR__79->SetBinError(26,3311.69);
   VbbHcc_tags_H_dR__79->SetBinError(27,912.3066);
   VbbHcc_tags_H_dR__79->SetBinError(28,288.0352);
   VbbHcc_tags_H_dR__79->SetBinError(29,9940.607);
   VbbHcc_tags_H_dR__79->SetBinError(30,826.5115);
   VbbHcc_tags_H_dR__79->SetBinError(31,989.2477);
   VbbHcc_tags_H_dR__79->SetEntries(10096);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR__79->SetFillColor(ci);
   VbbHcc_tags_H_dR__79->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__79->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__79->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__79->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__79->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__79->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__79->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__79->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__79->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__79->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__79->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
