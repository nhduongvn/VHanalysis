#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_algo_16()
{
//=========Macro generated from canvas: H_mass_algo_16/H_mass_algo_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *H_mass_algo_16 = new TCanvas("H_mass_algo_16", "H_mass_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_algo_16->SetHighLightColor(2);
   H_mass_algo_16->Range(-80,-50.4535,453.3333,454.0814);
   H_mass_algo_16->SetFillColor(0);
   H_mass_algo_16->SetBorderMode(0);
   H_mass_algo_16->SetBorderSize(2);
   H_mass_algo_16->SetLeftMargin(0.15);
   H_mass_algo_16->SetFrameBorderMode(0);
   H_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_mass__382 = new TH1D("VbbHcc_algo_H_mass__382","",40,0,400);
   VbbHcc_algo_H_mass__382->SetBinContent(4,2.648911);
   VbbHcc_algo_H_mass__382->SetBinContent(5,31.17289);
   VbbHcc_algo_H_mass__382->SetBinContent(6,75.3425);
   VbbHcc_algo_H_mass__382->SetBinContent(7,147.3975);
   VbbHcc_algo_H_mass__382->SetBinContent(8,184.7811);
   VbbHcc_algo_H_mass__382->SetBinContent(9,330.5141);
   VbbHcc_algo_H_mass__382->SetBinContent(10,384.4076);
   VbbHcc_algo_H_mass__382->SetBinContent(11,273.8341);
   VbbHcc_algo_H_mass__382->SetBinContent(12,225.0294);
   VbbHcc_algo_H_mass__382->SetBinContent(13,226.6631);
   VbbHcc_algo_H_mass__382->SetBinContent(14,219.7469);
   VbbHcc_algo_H_mass__382->SetBinContent(15,220.238);
   VbbHcc_algo_H_mass__382->SetBinContent(16,216.6315);
   VbbHcc_algo_H_mass__382->SetBinContent(17,202.2236);
   VbbHcc_algo_H_mass__382->SetBinContent(18,183.5147);
   VbbHcc_algo_H_mass__382->SetBinContent(19,213.0939);
   VbbHcc_algo_H_mass__382->SetBinContent(20,202.6401);
   VbbHcc_algo_H_mass__382->SetBinContent(21,183.5492);
   VbbHcc_algo_H_mass__382->SetBinContent(22,207.6722);
   VbbHcc_algo_H_mass__382->SetBinContent(23,190.7517);
   VbbHcc_algo_H_mass__382->SetBinContent(24,188.3576);
   VbbHcc_algo_H_mass__382->SetBinContent(25,186.9785);
   VbbHcc_algo_H_mass__382->SetBinContent(26,184.6958);
   VbbHcc_algo_H_mass__382->SetBinContent(27,158.8185);
   VbbHcc_algo_H_mass__382->SetBinContent(28,164.2654);
   VbbHcc_algo_H_mass__382->SetBinContent(29,150.8317);
   VbbHcc_algo_H_mass__382->SetBinContent(30,164.3524);
   VbbHcc_algo_H_mass__382->SetBinContent(31,166.2133);
   VbbHcc_algo_H_mass__382->SetBinContent(32,147.2045);
   VbbHcc_algo_H_mass__382->SetBinContent(33,139.2799);
   VbbHcc_algo_H_mass__382->SetBinContent(34,141.3588);
   VbbHcc_algo_H_mass__382->SetBinContent(35,130.1962);
   VbbHcc_algo_H_mass__382->SetBinContent(36,132.9129);
   VbbHcc_algo_H_mass__382->SetBinContent(37,125.6257);
   VbbHcc_algo_H_mass__382->SetBinContent(38,119.047);
   VbbHcc_algo_H_mass__382->SetBinContent(39,133.7242);
   VbbHcc_algo_H_mass__382->SetBinContent(40,117.7479);
   VbbHcc_algo_H_mass__382->SetBinContent(41,6040.407);
   VbbHcc_algo_H_mass__382->SetBinError(4,1.828039);
   VbbHcc_algo_H_mass__382->SetBinError(5,6.551257);
   VbbHcc_algo_H_mass__382->SetBinError(6,8.505199);
   VbbHcc_algo_H_mass__382->SetBinError(7,11.73);
   VbbHcc_algo_H_mass__382->SetBinError(8,10.95045);
   VbbHcc_algo_H_mass__382->SetBinError(9,16.62774);
   VbbHcc_algo_H_mass__382->SetBinError(10,18.79987);
   VbbHcc_algo_H_mass__382->SetBinError(11,16.09633);
   VbbHcc_algo_H_mass__382->SetBinError(12,14.40154);
   VbbHcc_algo_H_mass__382->SetBinError(13,14.19416);
   VbbHcc_algo_H_mass__382->SetBinError(14,13.87074);
   VbbHcc_algo_H_mass__382->SetBinError(15,14.05893);
   VbbHcc_algo_H_mass__382->SetBinError(16,13.45428);
   VbbHcc_algo_H_mass__382->SetBinError(17,12.91593);
   VbbHcc_algo_H_mass__382->SetBinError(18,11.2444);
   VbbHcc_algo_H_mass__382->SetBinError(19,14.19833);
   VbbHcc_algo_H_mass__382->SetBinError(20,13.32989);
   VbbHcc_algo_H_mass__382->SetBinError(21,11.85666);
   VbbHcc_algo_H_mass__382->SetBinError(22,13.65529);
   VbbHcc_algo_H_mass__382->SetBinError(23,12.85983);
   VbbHcc_algo_H_mass__382->SetBinError(24,12.01274);
   VbbHcc_algo_H_mass__382->SetBinError(25,12.12389);
   VbbHcc_algo_H_mass__382->SetBinError(26,12.30139);
   VbbHcc_algo_H_mass__382->SetBinError(27,10.35615);
   VbbHcc_algo_H_mass__382->SetBinError(28,10.88449);
   VbbHcc_algo_H_mass__382->SetBinError(29,9.206292);
   VbbHcc_algo_H_mass__382->SetBinError(30,10.59394);
   VbbHcc_algo_H_mass__382->SetBinError(31,11.65299);
   VbbHcc_algo_H_mass__382->SetBinError(32,9.523496);
   VbbHcc_algo_H_mass__382->SetBinError(33,8.99753);
   VbbHcc_algo_H_mass__382->SetBinError(34,9.626041);
   VbbHcc_algo_H_mass__382->SetBinError(35,7.496846);
   VbbHcc_algo_H_mass__382->SetBinError(36,8.824891);
   VbbHcc_algo_H_mass__382->SetBinError(37,8.091593);
   VbbHcc_algo_H_mass__382->SetBinError(38,7.305548);
   VbbHcc_algo_H_mass__382->SetBinError(39,8.219951);
   VbbHcc_algo_H_mass__382->SetBinError(40,7.835885);
   VbbHcc_algo_H_mass__382->SetBinError(41,49.08475);
   VbbHcc_algo_H_mass__382->SetEntries(93738);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_algo_H_mass__382->SetFillColor(ci);
   VbbHcc_algo_H_mass__382->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_algo_H_mass__382->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_H_mass__382->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__382->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__382->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__382->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__382->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__382->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_mass__382->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_H_mass__382->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_mass__382->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_algo_16->Modified();
   H_mass_algo_16->cd();
   H_mass_algo_16->SetSelected(H_mass_algo_16);
}
