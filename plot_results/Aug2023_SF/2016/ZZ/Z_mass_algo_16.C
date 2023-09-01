#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_algo_16()
{
//=========Macro generated from canvas: Z_mass_algo_16/Z_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_mass_algo_16 = new TCanvas("Z_mass_algo_16", "Z_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_algo_16->SetHighLightColor(2);
   Z_mass_algo_16->Range(-80,-2.401622,453.3333,21.6146);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__371 = new TH1D("VbbHcc_algo_Z_mass__371","",40,0,400);
   VbbHcc_algo_Z_mass__371->SetBinContent(4,0.5119906);
   VbbHcc_algo_Z_mass__371->SetBinContent(5,0.9518285);
   VbbHcc_algo_Z_mass__371->SetBinContent(6,2.299864);
   VbbHcc_algo_Z_mass__371->SetBinContent(7,3.156016);
   VbbHcc_algo_Z_mass__371->SetBinContent(8,7.819222);
   VbbHcc_algo_Z_mass__371->SetBinContent(9,18.29807);
   VbbHcc_algo_Z_mass__371->SetBinContent(10,15.81304);
   VbbHcc_algo_Z_mass__371->SetBinContent(11,8.743554);
   VbbHcc_algo_Z_mass__371->SetBinContent(12,4.397904);
   VbbHcc_algo_Z_mass__371->SetBinContent(13,3.741753);
   VbbHcc_algo_Z_mass__371->SetBinContent(14,2.337342);
   VbbHcc_algo_Z_mass__371->SetBinContent(15,2.443228);
   VbbHcc_algo_Z_mass__371->SetBinContent(16,2.821946);
   VbbHcc_algo_Z_mass__371->SetBinContent(17,1.795727);
   VbbHcc_algo_Z_mass__371->SetBinContent(18,3.308672);
   VbbHcc_algo_Z_mass__371->SetBinContent(19,2.293075);
   VbbHcc_algo_Z_mass__371->SetBinContent(20,1.46366);
   VbbHcc_algo_Z_mass__371->SetBinContent(21,2.622457);
   VbbHcc_algo_Z_mass__371->SetBinContent(22,2.628072);
   VbbHcc_algo_Z_mass__371->SetBinContent(23,2.238572);
   VbbHcc_algo_Z_mass__371->SetBinContent(24,1.16595);
   VbbHcc_algo_Z_mass__371->SetBinContent(25,0.7012969);
   VbbHcc_algo_Z_mass__371->SetBinContent(26,1.53621);
   VbbHcc_algo_Z_mass__371->SetBinContent(27,1.272998);
   VbbHcc_algo_Z_mass__371->SetBinContent(28,0.6031577);
   VbbHcc_algo_Z_mass__371->SetBinContent(29,1.614668);
   VbbHcc_algo_Z_mass__371->SetBinContent(30,0.5143831);
   VbbHcc_algo_Z_mass__371->SetBinContent(31,1.603475);
   VbbHcc_algo_Z_mass__371->SetBinContent(32,0.5623693);
   VbbHcc_algo_Z_mass__371->SetBinContent(33,1.290733);
   VbbHcc_algo_Z_mass__371->SetBinContent(34,1.326118);
   VbbHcc_algo_Z_mass__371->SetBinContent(35,1.015459);
   VbbHcc_algo_Z_mass__371->SetBinContent(36,0.8763254);
   VbbHcc_algo_Z_mass__371->SetBinContent(37,1.48569);
   VbbHcc_algo_Z_mass__371->SetBinContent(38,0.7059777);
   VbbHcc_algo_Z_mass__371->SetBinContent(39,1.282602);
   VbbHcc_algo_Z_mass__371->SetBinContent(40,1.459929);
   VbbHcc_algo_Z_mass__371->SetBinContent(41,25.53288);
   VbbHcc_algo_Z_mass__371->SetBinError(4,0.3813977);
   VbbHcc_algo_Z_mass__371->SetBinError(5,0.4267852);
   VbbHcc_algo_Z_mass__371->SetBinError(6,0.6945398);
   VbbHcc_algo_Z_mass__371->SetBinError(7,0.8259612);
   VbbHcc_algo_Z_mass__371->SetBinError(8,1.256689);
   VbbHcc_algo_Z_mass__371->SetBinError(9,2.018223);
   VbbHcc_algo_Z_mass__371->SetBinError(10,1.8333);
   VbbHcc_algo_Z_mass__371->SetBinError(11,1.341902);
   VbbHcc_algo_Z_mass__371->SetBinError(12,0.9401042);
   VbbHcc_algo_Z_mass__371->SetBinError(13,0.8700246);
   VbbHcc_algo_Z_mass__371->SetBinError(14,0.70356);
   VbbHcc_algo_Z_mass__371->SetBinError(15,0.7150268);
   VbbHcc_algo_Z_mass__371->SetBinError(16,0.7780797);
   VbbHcc_algo_Z_mass__371->SetBinError(17,0.6104908);
   VbbHcc_algo_Z_mass__371->SetBinError(18,0.842249);
   VbbHcc_algo_Z_mass__371->SetBinError(19,0.7087718);
   VbbHcc_algo_Z_mass__371->SetBinError(20,0.5595841);
   VbbHcc_algo_Z_mass__371->SetBinError(21,0.7319311);
   VbbHcc_algo_Z_mass__371->SetBinError(22,0.7713827);
   VbbHcc_algo_Z_mass__371->SetBinError(23,0.6838373);
   VbbHcc_algo_Z_mass__371->SetBinError(24,0.4885765);
   VbbHcc_algo_Z_mass__371->SetBinError(25,0.3592723);
   VbbHcc_algo_Z_mass__371->SetBinError(26,0.5593516);
   VbbHcc_algo_Z_mass__371->SetBinError(27,0.4840348);
   VbbHcc_algo_Z_mass__371->SetBinError(28,0.3544204);
   VbbHcc_algo_Z_mass__371->SetBinError(29,0.5741908);
   VbbHcc_algo_Z_mass__371->SetBinError(30,0.3725369);
   VbbHcc_algo_Z_mass__371->SetBinError(31,0.5846261);
   VbbHcc_algo_Z_mass__371->SetBinError(32,0.3392516);
   VbbHcc_algo_Z_mass__371->SetBinError(33,0.5383117);
   VbbHcc_algo_Z_mass__371->SetBinError(34,0.5505523);
   VbbHcc_algo_Z_mass__371->SetBinError(35,0.4581763);
   VbbHcc_algo_Z_mass__371->SetBinError(36,0.4459073);
   VbbHcc_algo_Z_mass__371->SetBinError(37,0.5670195);
   VbbHcc_algo_Z_mass__371->SetBinError(38,0.4126449);
   VbbHcc_algo_Z_mass__371->SetBinError(39,0.5265876);
   VbbHcc_algo_Z_mass__371->SetBinError(40,0.5589549);
   VbbHcc_algo_Z_mass__371->SetBinError(41,2.272527);
   VbbHcc_algo_Z_mass__371->SetEntries(665);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_algo_Z_mass__371->SetFillColor(ci);
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__371->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__371->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__371->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__371->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__371->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__371->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__371->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_algo_16->Modified();
   Z_mass_algo_16->cd();
   Z_mass_algo_16->SetSelected(Z_mass_algo_16);
}
