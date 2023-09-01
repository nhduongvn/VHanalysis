#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Fri Sep  1 13:23:34 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-1.136115,340,10.22503);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__296 = new TH1D("VbbHcc_tags_H_jetmass_JEC__296","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(3,0.6751297);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(4,5.062368);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(5,5.726119);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(6,8.656111);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(7,4.630406);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(8,1.983726);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(9,2.030385);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(10,2.564453);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(11,0.6662479);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(12,1.387624);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(13,0.4209106);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(14,1.281587);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(15,0.2002323);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(19,0.5458323);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(20,0.2595944);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(22,0.2690476);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinContent(51,0.2876854);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(3,0.3905009);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(4,1.05566);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(5,1.138172);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(6,1.332362);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(7,1.004092);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(8,0.6504942);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(9,0.6602854);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(10,0.7832479);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(11,0.3919442);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(12,0.5726196);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(13,0.2977133);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(14,0.5767927);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(15,0.2002323);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(19,0.3883198);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(20,0.2595944);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(22,0.2690476);
   VbbHcc_tags_H_jetmass_JEC__296->SetBinError(51,0.2876854);
   VbbHcc_tags_H_jetmass_JEC__296->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_JEC__296->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__296->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__296->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__296->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_16->Modified();
   H_jetmass_JEC_tags_16->cd();
   H_jetmass_JEC_tags_16->SetSelected(H_jetmass_JEC_tags_16);
}
