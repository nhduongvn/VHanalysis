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
   H_dR_tags_18->Range(-1.2,-2561.213,6.8,23050.91);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR__78 = new TH1D("VbbHcc_tags_H_dR__78","",30,0,6);
   VbbHcc_tags_H_dR__78->SetBinContent(2,13);
   VbbHcc_tags_H_dR__78->SetBinContent(3,14570);
   VbbHcc_tags_H_dR__78->SetBinContent(4,15419);
   VbbHcc_tags_H_dR__78->SetBinContent(5,11654);
   VbbHcc_tags_H_dR__78->SetBinContent(6,10983);
   VbbHcc_tags_H_dR__78->SetBinContent(7,10448);
   VbbHcc_tags_H_dR__78->SetBinContent(8,10460);
   VbbHcc_tags_H_dR__78->SetBinContent(9,10667);
   VbbHcc_tags_H_dR__78->SetBinContent(10,11143);
   VbbHcc_tags_H_dR__78->SetBinContent(11,12128);
   VbbHcc_tags_H_dR__78->SetBinContent(12,13297);
   VbbHcc_tags_H_dR__78->SetBinContent(13,14808);
   VbbHcc_tags_H_dR__78->SetBinContent(14,16857);
   VbbHcc_tags_H_dR__78->SetBinContent(15,18120);
   VbbHcc_tags_H_dR__78->SetBinContent(16,19514);
   VbbHcc_tags_H_dR__78->SetBinContent(17,18782);
   VbbHcc_tags_H_dR__78->SetBinContent(18,17314);
   VbbHcc_tags_H_dR__78->SetBinContent(19,15832);
   VbbHcc_tags_H_dR__78->SetBinContent(20,13661);
   VbbHcc_tags_H_dR__78->SetBinContent(21,11360);
   VbbHcc_tags_H_dR__78->SetBinContent(22,8961);
   VbbHcc_tags_H_dR__78->SetBinContent(23,7176);
   VbbHcc_tags_H_dR__78->SetBinContent(24,5654);
   VbbHcc_tags_H_dR__78->SetBinContent(25,4538);
   VbbHcc_tags_H_dR__78->SetBinContent(26,3560);
   VbbHcc_tags_H_dR__78->SetBinContent(27,2910);
   VbbHcc_tags_H_dR__78->SetBinContent(28,2507);
   VbbHcc_tags_H_dR__78->SetBinContent(29,2290);
   VbbHcc_tags_H_dR__78->SetBinContent(30,1605);
   VbbHcc_tags_H_dR__78->SetBinContent(31,1343);
   VbbHcc_tags_H_dR__78->SetEntries(307574);
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
