#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tags_18/Z_jetmass_JEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_tags_18 = new TCanvas("Z_jetmass_JEC_tags_18", "Z_jetmass_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tags_18->SetHighLightColor(2);
   Z_jetmass_JEC_tags_18->Range(-60,-0.002681522,340,0.0241337);
   Z_jetmass_JEC_tags_18->SetFillColor(0);
   Z_jetmass_JEC_tags_18->SetBorderMode(0);
   Z_jetmass_JEC_tags_18->SetBorderSize(2);
   Z_jetmass_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_JEC__360 = new TH1D("VbbHcc_tags_Z_jetmass_JEC__360","",150,0,300);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(3,0.0006281306);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(4,0.003296851);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(5,0.01245334);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(6,0.02043064);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(7,0.01816108);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(8,0.01425996);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(9,0.01054409);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(10,0.009953082);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(11,0.005183431);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(12,0.003050509);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(13,0.002239471);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(14,0.001349236);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(15,0.001092062);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(16,0.000337728);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(18,0.0006834982);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(19,0.0006501914);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(20,0.0002338834);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(21,0.000616594);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(24,0.0002940393);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(30,0.0007343541);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(31,0.000484904);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinContent(43,0.0001450742);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(3,0.0006281306);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(4,0.001337083);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(5,0.002160324);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(6,0.003173307);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(7,0.002867906);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(8,0.002231654);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(9,0.001972108);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(10,0.001912378);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(11,0.001469998);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(12,0.001271286);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(13,0.001041967);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(14,0.001096128);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(15,0.0006371385);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(16,0.000337728);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(18,0.0004959717);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(19,0.0004697569);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(20,0.0002338834);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(21,0.0004445632);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(24,0.0002940393);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(30,0.0007343541);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(31,0.000484904);
   VbbHcc_tags_Z_jetmass_JEC__360->SetBinError(43,0.0001450742);
   VbbHcc_tags_Z_jetmass_JEC__360->SetEntries(298);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tags_18->Modified();
   Z_jetmass_JEC_tags_18->cd();
   Z_jetmass_JEC_tags_18->SetSelected(Z_jetmass_JEC_tags_18);
}
