#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-1221.15,6.8,10990.35);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__798 = new TH1D("VbbHcc_both_H_dR__798","",30,0,6);
   VbbHcc_both_H_dR__798->SetBinContent(2,2);
   VbbHcc_both_H_dR__798->SetBinContent(3,4620);
   VbbHcc_both_H_dR__798->SetBinContent(4,5079);
   VbbHcc_both_H_dR__798->SetBinContent(5,4153);
   VbbHcc_both_H_dR__798->SetBinContent(6,4128);
   VbbHcc_both_H_dR__798->SetBinContent(7,4310);
   VbbHcc_both_H_dR__798->SetBinContent(8,4440);
   VbbHcc_both_H_dR__798->SetBinContent(9,4823);
   VbbHcc_both_H_dR__798->SetBinContent(10,5069);
   VbbHcc_both_H_dR__798->SetBinContent(11,5667);
   VbbHcc_both_H_dR__798->SetBinContent(12,6377);
   VbbHcc_both_H_dR__798->SetBinContent(13,7145);
   VbbHcc_both_H_dR__798->SetBinContent(14,8157);
   VbbHcc_both_H_dR__798->SetBinContent(15,9024);
   VbbHcc_both_H_dR__798->SetBinContent(16,9304);
   VbbHcc_both_H_dR__798->SetBinContent(17,5768);
   VbbHcc_both_H_dR__798->SetBinContent(18,3806);
   VbbHcc_both_H_dR__798->SetBinContent(19,2649);
   VbbHcc_both_H_dR__798->SetBinContent(20,1870);
   VbbHcc_both_H_dR__798->SetBinContent(21,1276);
   VbbHcc_both_H_dR__798->SetBinContent(22,793);
   VbbHcc_both_H_dR__798->SetBinContent(23,497);
   VbbHcc_both_H_dR__798->SetBinContent(24,293);
   VbbHcc_both_H_dR__798->SetBinContent(25,151);
   VbbHcc_both_H_dR__798->SetBinContent(26,57);
   VbbHcc_both_H_dR__798->SetBinContent(27,24);
   VbbHcc_both_H_dR__798->SetBinContent(28,9);
   VbbHcc_both_H_dR__798->SetEntries(99491);
   VbbHcc_both_H_dR__798->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__798->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__798->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__798->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__798->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__798->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__798->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__798->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__798->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__798->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__798->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
