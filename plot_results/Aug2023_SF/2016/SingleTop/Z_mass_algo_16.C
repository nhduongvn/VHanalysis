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
   Z_mass_algo_16->Range(-80,-110.6868,453.3333,996.1812);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__365 = new TH1D("VbbHcc_algo_Z_mass__365","",40,0,400);
   VbbHcc_algo_Z_mass__365->SetBinContent(3,0.311023);
   VbbHcc_algo_Z_mass__365->SetBinContent(4,23.22159);
   VbbHcc_algo_Z_mass__365->SetBinContent(5,113.6173);
   VbbHcc_algo_Z_mass__365->SetBinContent(6,253.917);
   VbbHcc_algo_Z_mass__365->SetBinContent(7,395.0173);
   VbbHcc_algo_Z_mass__365->SetBinContent(8,596.2398);
   VbbHcc_algo_Z_mass__365->SetBinContent(9,801.196);
   VbbHcc_algo_Z_mass__365->SetBinContent(10,841.685);
   VbbHcc_algo_Z_mass__365->SetBinContent(11,841.686);
   VbbHcc_algo_Z_mass__365->SetBinContent(12,843.328);
   VbbHcc_algo_Z_mass__365->SetBinContent(13,804.3264);
   VbbHcc_algo_Z_mass__365->SetBinContent(14,715.5479);
   VbbHcc_algo_Z_mass__365->SetBinContent(15,640.868);
   VbbHcc_algo_Z_mass__365->SetBinContent(16,571.2888);
   VbbHcc_algo_Z_mass__365->SetBinContent(17,522.4283);
   VbbHcc_algo_Z_mass__365->SetBinContent(18,463.9101);
   VbbHcc_algo_Z_mass__365->SetBinContent(19,404.2729);
   VbbHcc_algo_Z_mass__365->SetBinContent(20,361.2844);
   VbbHcc_algo_Z_mass__365->SetBinContent(21,316.6116);
   VbbHcc_algo_Z_mass__365->SetBinContent(22,293.6256);
   VbbHcc_algo_Z_mass__365->SetBinContent(23,277.8137);
   VbbHcc_algo_Z_mass__365->SetBinContent(24,251.2222);
   VbbHcc_algo_Z_mass__365->SetBinContent(25,246.0826);
   VbbHcc_algo_Z_mass__365->SetBinContent(26,233.9298);
   VbbHcc_algo_Z_mass__365->SetBinContent(27,209.4196);
   VbbHcc_algo_Z_mass__365->SetBinContent(28,196.2336);
   VbbHcc_algo_Z_mass__365->SetBinContent(29,188.2965);
   VbbHcc_algo_Z_mass__365->SetBinContent(30,178.9905);
   VbbHcc_algo_Z_mass__365->SetBinContent(31,176.6534);
   VbbHcc_algo_Z_mass__365->SetBinContent(32,164.2588);
   VbbHcc_algo_Z_mass__365->SetBinContent(33,149.7939);
   VbbHcc_algo_Z_mass__365->SetBinContent(34,142.0009);
   VbbHcc_algo_Z_mass__365->SetBinContent(35,136.0923);
   VbbHcc_algo_Z_mass__365->SetBinContent(36,128.3769);
   VbbHcc_algo_Z_mass__365->SetBinContent(37,123.4464);
   VbbHcc_algo_Z_mass__365->SetBinContent(38,120.2608);
   VbbHcc_algo_Z_mass__365->SetBinContent(39,125.4872);
   VbbHcc_algo_Z_mass__365->SetBinContent(40,117.9773);
   VbbHcc_algo_Z_mass__365->SetBinContent(41,4536.323);
   VbbHcc_algo_Z_mass__365->SetBinError(3,0.1272903);
   VbbHcc_algo_Z_mass__365->SetBinError(4,1.582907);
   VbbHcc_algo_Z_mass__365->SetBinError(5,3.462254);
   VbbHcc_algo_Z_mass__365->SetBinError(6,5.284422);
   VbbHcc_algo_Z_mass__365->SetBinError(7,6.822991);
   VbbHcc_algo_Z_mass__365->SetBinError(8,8.634048);
   VbbHcc_algo_Z_mass__365->SetBinError(9,10.24189);
   VbbHcc_algo_Z_mass__365->SetBinError(10,10.16393);
   VbbHcc_algo_Z_mass__365->SetBinError(11,10.09128);
   VbbHcc_algo_Z_mass__365->SetBinError(12,10.16855);
   VbbHcc_algo_Z_mass__365->SetBinError(13,9.904069);
   VbbHcc_algo_Z_mass__365->SetBinError(14,9.397243);
   VbbHcc_algo_Z_mass__365->SetBinError(15,8.896115);
   VbbHcc_algo_Z_mass__365->SetBinError(16,8.398928);
   VbbHcc_algo_Z_mass__365->SetBinError(17,8.057295);
   VbbHcc_algo_Z_mass__365->SetBinError(18,7.700223);
   VbbHcc_algo_Z_mass__365->SetBinError(19,7.188382);
   VbbHcc_algo_Z_mass__365->SetBinError(20,6.832331);
   VbbHcc_algo_Z_mass__365->SetBinError(21,6.399267);
   VbbHcc_algo_Z_mass__365->SetBinError(22,6.214437);
   VbbHcc_algo_Z_mass__365->SetBinError(23,6.14902);
   VbbHcc_algo_Z_mass__365->SetBinError(24,5.793874);
   VbbHcc_algo_Z_mass__365->SetBinError(25,5.829337);
   VbbHcc_algo_Z_mass__365->SetBinError(26,5.683125);
   VbbHcc_algo_Z_mass__365->SetBinError(27,5.406867);
   VbbHcc_algo_Z_mass__365->SetBinError(28,5.167319);
   VbbHcc_algo_Z_mass__365->SetBinError(29,5.110586);
   VbbHcc_algo_Z_mass__365->SetBinError(30,4.972607);
   VbbHcc_algo_Z_mass__365->SetBinError(31,4.975538);
   VbbHcc_algo_Z_mass__365->SetBinError(32,4.79697);
   VbbHcc_algo_Z_mass__365->SetBinError(33,4.520219);
   VbbHcc_algo_Z_mass__365->SetBinError(34,4.395735);
   VbbHcc_algo_Z_mass__365->SetBinError(35,4.343755);
   VbbHcc_algo_Z_mass__365->SetBinError(36,4.226413);
   VbbHcc_algo_Z_mass__365->SetBinError(37,4.147982);
   VbbHcc_algo_Z_mass__365->SetBinError(38,4.065713);
   VbbHcc_algo_Z_mass__365->SetBinError(39,4.161071);
   VbbHcc_algo_Z_mass__365->SetBinError(40,4.095377);
   VbbHcc_algo_Z_mass__365->SetBinError(41,25.30059);
   VbbHcc_algo_Z_mass__365->SetEntries(350651);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_algo_Z_mass__365->SetFillColor(ci);
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__365->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__365->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__365->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__365->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__365->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__365->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__365->Draw("HIST");
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
