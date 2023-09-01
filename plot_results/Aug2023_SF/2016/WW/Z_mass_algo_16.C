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
   Z_mass_algo_16->Range(-80,-0.7394486,453.3333,6.655037);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__369 = new TH1D("VbbHcc_algo_Z_mass__369","",40,0,400);
   VbbHcc_algo_Z_mass__369->SetBinContent(5,0.4849281);
   VbbHcc_algo_Z_mass__369->SetBinContent(6,0.6725295);
   VbbHcc_algo_Z_mass__369->SetBinContent(7,2.043348);
   VbbHcc_algo_Z_mass__369->SetBinContent(8,3.080079);
   VbbHcc_algo_Z_mass__369->SetBinContent(9,5.633893);
   VbbHcc_algo_Z_mass__369->SetBinContent(10,3.027331);
   VbbHcc_algo_Z_mass__369->SetBinContent(11,2.159444);
   VbbHcc_algo_Z_mass__369->SetBinContent(12,1.817132);
   VbbHcc_algo_Z_mass__369->SetBinContent(13,2.179138);
   VbbHcc_algo_Z_mass__369->SetBinContent(14,1.09235);
   VbbHcc_algo_Z_mass__369->SetBinContent(15,0.7558911);
   VbbHcc_algo_Z_mass__369->SetBinContent(16,1.39283);
   VbbHcc_algo_Z_mass__369->SetBinContent(17,0.6478102);
   VbbHcc_algo_Z_mass__369->SetBinContent(18,1.322736);
   VbbHcc_algo_Z_mass__369->SetBinContent(19,1.198339);
   VbbHcc_algo_Z_mass__369->SetBinContent(20,0.9038464);
   VbbHcc_algo_Z_mass__369->SetBinContent(21,0.7017772);
   VbbHcc_algo_Z_mass__369->SetBinContent(22,1.417538);
   VbbHcc_algo_Z_mass__369->SetBinContent(23,0.7052867);
   VbbHcc_algo_Z_mass__369->SetBinContent(24,0.8979014);
   VbbHcc_algo_Z_mass__369->SetBinContent(25,0.7343505);
   VbbHcc_algo_Z_mass__369->SetBinContent(26,0.84391);
   VbbHcc_algo_Z_mass__369->SetBinContent(27,0.736793);
   VbbHcc_algo_Z_mass__369->SetBinContent(28,1.004037);
   VbbHcc_algo_Z_mass__369->SetBinContent(29,0.8422644);
   VbbHcc_algo_Z_mass__369->SetBinContent(30,0.66706);
   VbbHcc_algo_Z_mass__369->SetBinContent(31,0.9340979);
   VbbHcc_algo_Z_mass__369->SetBinContent(32,0.1994086);
   VbbHcc_algo_Z_mass__369->SetBinContent(33,0.6768763);
   VbbHcc_algo_Z_mass__369->SetBinContent(34,0.778263);
   VbbHcc_algo_Z_mass__369->SetBinContent(35,0.3981306);
   VbbHcc_algo_Z_mass__369->SetBinContent(36,0.6538703);
   VbbHcc_algo_Z_mass__369->SetBinContent(37,0.220248);
   VbbHcc_algo_Z_mass__369->SetBinContent(38,0.5903417);
   VbbHcc_algo_Z_mass__369->SetBinContent(39,0.6384634);
   VbbHcc_algo_Z_mass__369->SetBinContent(40,0.438404);
   VbbHcc_algo_Z_mass__369->SetBinContent(41,20.12657);
   VbbHcc_algo_Z_mass__369->SetBinError(5,0.218882);
   VbbHcc_algo_Z_mass__369->SetBinError(6,0.2556905);
   VbbHcc_algo_Z_mass__369->SetBinError(7,0.4729899);
   VbbHcc_algo_Z_mass__369->SetBinError(8,0.5772886);
   VbbHcc_algo_Z_mass__369->SetBinError(9,0.7952951);
   VbbHcc_algo_Z_mass__369->SetBinError(10,0.5753545);
   VbbHcc_algo_Z_mass__369->SetBinError(11,0.4825407);
   VbbHcc_algo_Z_mass__369->SetBinError(12,0.4498227);
   VbbHcc_algo_Z_mass__369->SetBinError(13,0.491268);
   VbbHcc_algo_Z_mass__369->SetBinError(14,0.3363504);
   VbbHcc_algo_Z_mass__369->SetBinError(15,0.2866613);
   VbbHcc_algo_Z_mass__369->SetBinError(16,0.3769055);
   VbbHcc_algo_Z_mass__369->SetBinError(17,0.2682654);
   VbbHcc_algo_Z_mass__369->SetBinError(18,0.3851564);
   VbbHcc_algo_Z_mass__369->SetBinError(19,0.3703969);
   VbbHcc_algo_Z_mass__369->SetBinError(20,0.3041832);
   VbbHcc_algo_Z_mass__369->SetBinError(21,0.2899039);
   VbbHcc_algo_Z_mass__369->SetBinError(22,0.4293639);
   VbbHcc_algo_Z_mass__369->SetBinError(23,0.2916425);
   VbbHcc_algo_Z_mass__369->SetBinError(24,0.3071122);
   VbbHcc_algo_Z_mass__369->SetBinError(25,0.27971);
   VbbHcc_algo_Z_mass__369->SetBinError(26,0.3060633);
   VbbHcc_algo_Z_mass__369->SetBinError(27,0.3029482);
   VbbHcc_algo_Z_mass__369->SetBinError(28,0.3396094);
   VbbHcc_algo_Z_mass__369->SetBinError(29,0.3208598);
   VbbHcc_algo_Z_mass__369->SetBinError(30,0.2765359);
   VbbHcc_algo_Z_mass__369->SetBinError(31,0.331582);
   VbbHcc_algo_Z_mass__369->SetBinError(32,0.1415894);
   VbbHcc_algo_Z_mass__369->SetBinError(33,0.2804726);
   VbbHcc_algo_Z_mass__369->SetBinError(34,0.333035);
   VbbHcc_algo_Z_mass__369->SetBinError(35,0.2026451);
   VbbHcc_algo_Z_mass__369->SetBinError(36,0.2937169);
   VbbHcc_algo_Z_mass__369->SetBinError(37,0.1592345);
   VbbHcc_algo_Z_mass__369->SetBinError(38,0.2484935);
   VbbHcc_algo_Z_mass__369->SetBinError(39,0.3047106);
   VbbHcc_algo_Z_mass__369->SetBinError(40,0.2207607);
   VbbHcc_algo_Z_mass__369->SetBinError(41,1.547436);
   VbbHcc_algo_Z_mass__369->SetEntries(573);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_Z_mass__369->SetFillColor(ci);
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__369->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__369->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__369->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__369->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__369->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__369->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__369->Draw("HIST");
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
