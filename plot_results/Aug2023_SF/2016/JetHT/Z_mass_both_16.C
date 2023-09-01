#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_both_16()
{
//=========Macro generated from canvas: Z_mass_both_16/Z_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_both_16 = new TCanvas("Z_mass_both_16", "Z_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_both_16->SetHighLightColor(2);
   Z_mass_both_16->Range(-80,-507.675,453.3333,4569.075);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__723 = new TH1D("VbbHcc_both_Z_mass__723","",40,0,400);
   VbbHcc_both_Z_mass__723->SetBinContent(3,20);
   VbbHcc_both_Z_mass__723->SetBinContent(4,529);
   VbbHcc_both_Z_mass__723->SetBinContent(5,1959);
   VbbHcc_both_Z_mass__723->SetBinContent(6,3078);
   VbbHcc_both_Z_mass__723->SetBinContent(7,3679);
   VbbHcc_both_Z_mass__723->SetBinContent(8,3868);
   VbbHcc_both_Z_mass__723->SetBinContent(9,3779);
   VbbHcc_both_Z_mass__723->SetBinContent(10,3495);
   VbbHcc_both_Z_mass__723->SetBinContent(11,3412);
   VbbHcc_both_Z_mass__723->SetBinContent(12,3262);
   VbbHcc_both_Z_mass__723->SetBinContent(13,2950);
   VbbHcc_both_Z_mass__723->SetBinContent(14,2800);
   VbbHcc_both_Z_mass__723->SetBinContent(15,2572);
   VbbHcc_both_Z_mass__723->SetBinContent(16,2336);
   VbbHcc_both_Z_mass__723->SetBinContent(17,2272);
   VbbHcc_both_Z_mass__723->SetBinContent(18,2060);
   VbbHcc_both_Z_mass__723->SetBinContent(19,1969);
   VbbHcc_both_Z_mass__723->SetBinContent(20,1808);
   VbbHcc_both_Z_mass__723->SetBinContent(21,1714);
   VbbHcc_both_Z_mass__723->SetBinContent(22,1681);
   VbbHcc_both_Z_mass__723->SetBinContent(23,1521);
   VbbHcc_both_Z_mass__723->SetBinContent(24,1408);
   VbbHcc_both_Z_mass__723->SetBinContent(25,1334);
   VbbHcc_both_Z_mass__723->SetBinContent(26,1359);
   VbbHcc_both_Z_mass__723->SetBinContent(27,1322);
   VbbHcc_both_Z_mass__723->SetBinContent(28,1144);
   VbbHcc_both_Z_mass__723->SetBinContent(29,1150);
   VbbHcc_both_Z_mass__723->SetBinContent(30,1121);
   VbbHcc_both_Z_mass__723->SetBinContent(31,1044);
   VbbHcc_both_Z_mass__723->SetBinContent(32,968);
   VbbHcc_both_Z_mass__723->SetBinContent(33,977);
   VbbHcc_both_Z_mass__723->SetBinContent(34,997);
   VbbHcc_both_Z_mass__723->SetBinContent(35,932);
   VbbHcc_both_Z_mass__723->SetBinContent(36,894);
   VbbHcc_both_Z_mass__723->SetBinContent(37,902);
   VbbHcc_both_Z_mass__723->SetBinContent(38,869);
   VbbHcc_both_Z_mass__723->SetBinContent(39,817);
   VbbHcc_both_Z_mass__723->SetBinContent(40,775);
   VbbHcc_both_Z_mass__723->SetBinContent(41,30714);
   VbbHcc_both_Z_mass__723->SetEntries(99491);
   VbbHcc_both_Z_mass__723->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__723->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__723->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__723->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__723->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__723->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__723->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__723->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__723->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__723->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__723->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_both_16->Modified();
   Z_mass_both_16->cd();
   Z_mass_both_16->SetSelected(Z_mass_both_16);
}
