#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_16/Z_jetmass_JEC_tags_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_tags_16 = new TCanvas("Z_jetmass_JEC_tags_16", "Z_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_16->SetHighLightColor(2);
   Z_jetmass_JEC_tags_16->Range(-60,-0.0009596115,340,0.008636503);
   Z_jetmass_JEC_tags_16->SetFillColor(0);
   Z_jetmass_JEC_tags_16->SetBorderMode(0);
   Z_jetmass_JEC_tags_16->SetBorderSize(2);
   Z_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__360 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__360","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(4,0.002095025);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(5,0.006341421);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(6,0.007311325);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(7,0.006073386);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(8,0.003969426);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(9,0.002987812);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(10,0.001426829);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(11,0.001447102);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(12,0.001438175);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(14,0.0002765116);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(16,0.0005521187);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(20,0.0003336279);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(21,0.0003478785);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(22,0.0003431276);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(23,0.0003370889);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(25,0.0002789308);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(33,0.0002902258);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(4,0.0007964436);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(5,0.001372212);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(6,0.001448116);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(7,0.001312848);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(8,0.001044369);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(9,0.0009086554);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(10,0.0006555991);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(11,0.0006481885);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(12,0.0006520436);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(14,0.0002765116);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(16,0.0003912968);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(20,0.0003336279);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(21,0.0003478785);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(22,0.0003431276);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(23,0.0003370889);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(25,0.0002789308);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(33,0.0002902258);
   VbbHcc_tags_Z_jetmass_JEC__360->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_JEC__360->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_JEC__360->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetmass_JEC__360->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_JEC__360->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__360->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__360->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__360->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__360->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__360->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_JEC__360->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_JEC__360->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_JEC__360->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_16->Modified();
   Z_jetmass_JEC_tags_16->cd();
   Z_jetmass_JEC_tags_16->SetSelected(Z_jetmass_JEC_tags_16);
}
