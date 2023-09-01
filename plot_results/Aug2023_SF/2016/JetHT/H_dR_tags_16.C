#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_16()
{
//=========Macro generated from canvas: H_dR_tags_16/H_dR_tags_16
//=========  (Fri Sep  1 13:23:30 2023) by ROOT version 6.28/04
   TCanvas *H_dR_tags_16 = new TCanvas("H_dR_tags_16", "H_dR_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_16->SetHighLightColor(2);
   H_dR_tags_16->Range(-1.2,-780.9376,6.8,7028.438);
   H_dR_tags_16->SetFillColor(0);
   H_dR_tags_16->SetBorderMode(0);
   H_dR_tags_16->SetBorderSize(2);
   H_dR_tags_16->SetLeftMargin(0.15);
   H_dR_tags_16->SetFrameBorderMode(0);
   H_dR_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__78 = new TH1D("VbbHcc_tags_H_dR__78","",30,0,6);
   VbbHcc_tags_H_dR__78->SetBinContent(2,5);
   VbbHcc_tags_H_dR__78->SetBinContent(3,4585);
   VbbHcc_tags_H_dR__78->SetBinContent(4,4650);
   VbbHcc_tags_H_dR__78->SetBinContent(5,3660);
   VbbHcc_tags_H_dR__78->SetBinContent(6,3405);
   VbbHcc_tags_H_dR__78->SetBinContent(7,3334);
   VbbHcc_tags_H_dR__78->SetBinContent(8,3230);
   VbbHcc_tags_H_dR__78->SetBinContent(9,3453);
   VbbHcc_tags_H_dR__78->SetBinContent(10,3523);
   VbbHcc_tags_H_dR__78->SetBinContent(11,3847);
   VbbHcc_tags_H_dR__78->SetBinContent(12,4151);
   VbbHcc_tags_H_dR__78->SetBinContent(13,4460);
   VbbHcc_tags_H_dR__78->SetBinContent(14,5074);
   VbbHcc_tags_H_dR__78->SetBinContent(15,5473);
   VbbHcc_tags_H_dR__78->SetBinContent(16,5950);
   VbbHcc_tags_H_dR__78->SetBinContent(17,5596);
   VbbHcc_tags_H_dR__78->SetBinContent(18,5212);
   VbbHcc_tags_H_dR__78->SetBinContent(19,4677);
   VbbHcc_tags_H_dR__78->SetBinContent(20,4033);
   VbbHcc_tags_H_dR__78->SetBinContent(21,3382);
   VbbHcc_tags_H_dR__78->SetBinContent(22,2739);
   VbbHcc_tags_H_dR__78->SetBinContent(23,2199);
   VbbHcc_tags_H_dR__78->SetBinContent(24,1768);
   VbbHcc_tags_H_dR__78->SetBinContent(25,1396);
   VbbHcc_tags_H_dR__78->SetBinContent(26,1090);
   VbbHcc_tags_H_dR__78->SetBinContent(27,968);
   VbbHcc_tags_H_dR__78->SetBinContent(28,762);
   VbbHcc_tags_H_dR__78->SetBinContent(29,679);
   VbbHcc_tags_H_dR__78->SetBinContent(30,490);
   VbbHcc_tags_H_dR__78->SetBinContent(31,383);
   VbbHcc_tags_H_dR__78->SetEntries(94174);
   VbbHcc_tags_H_dR__78->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR__78->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR__78->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__78->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__78->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__78->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__78->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__78->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR__78->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR__78->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR__78->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_16->Modified();
   H_dR_tags_16->cd();
   H_dR_tags_16->SetSelected(H_dR_tags_16);
}
