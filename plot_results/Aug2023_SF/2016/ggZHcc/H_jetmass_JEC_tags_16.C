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
   H_jetmass_JEC_tags_16->Range(-60,-0.0008604294,340,0.007743864);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__300 = new TH1D("VbbHcc_tags_H_jetmass_JEC__300","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(3,0.001445225);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(4,0.002838514);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(5,0.005465632);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(6,0.006555652);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(7,0.005860458);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(8,0.002544236);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(9,0.003462193);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(10,0.001181463);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(11,0.002101808);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(13,0.002177205);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(14,0.0003910043);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(15,0.0002025324);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(17,0.0003182442);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(18,0.0003479732);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(21,0.0003487364);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(28,0.0003315104);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinContent(58,0.000277623);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(3,0.0006033222);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(4,0.0009044282);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(5,0.001234459);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(6,0.001364476);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(7,0.00129384);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(8,0.0008525454);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(9,0.001004367);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(10,0.0005949945);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(11,0.0008015458);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(13,0.0008282784);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(14,0.0003910043);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(15,0.0002025324);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(17,0.0003182442);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(18,0.0003479732);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(21,0.0003487364);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(28,0.0003315104);
   VbbHcc_tags_H_jetmass_JEC__300->SetBinError(58,0.000277623);
   VbbHcc_tags_H_jetmass_JEC__300->SetEntries(127);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetmass_JEC__300->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__300->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__300->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__300->Draw("HIST");
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
