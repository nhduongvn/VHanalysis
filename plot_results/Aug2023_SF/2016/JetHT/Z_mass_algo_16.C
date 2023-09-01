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
   Z_mass_algo_16->Range(-80,-3765.169,453.3333,33886.52);
   Z_mass_algo_16->SetFillColor(0);
   Z_mass_algo_16->SetBorderMode(0);
   Z_mass_algo_16->SetBorderSize(2);
   Z_mass_algo_16->SetLeftMargin(0.15);
   Z_mass_algo_16->SetFrameBorderMode(0);
   Z_mass_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_Z_mass__363 = new TH1D("VbbHcc_algo_Z_mass__363","",40,0,400);
   VbbHcc_algo_Z_mass__363->SetBinContent(3,6);
   VbbHcc_algo_Z_mass__363->SetBinContent(4,689);
   VbbHcc_algo_Z_mass__363->SetBinContent(5,4776);
   VbbHcc_algo_Z_mass__363->SetBinContent(6,11209);
   VbbHcc_algo_Z_mass__363->SetBinContent(7,16691);
   VbbHcc_algo_Z_mass__363->SetBinContent(8,21519);
   VbbHcc_algo_Z_mass__363->SetBinContent(9,25260);
   VbbHcc_algo_Z_mass__363->SetBinContent(10,27452);
   VbbHcc_algo_Z_mass__363->SetBinContent(11,28687);
   VbbHcc_algo_Z_mass__363->SetBinContent(12,28654);
   VbbHcc_algo_Z_mass__363->SetBinContent(13,28194);
   VbbHcc_algo_Z_mass__363->SetBinContent(14,27156);
   VbbHcc_algo_Z_mass__363->SetBinContent(15,26144);
   VbbHcc_algo_Z_mass__363->SetBinContent(16,24397);
   VbbHcc_algo_Z_mass__363->SetBinContent(17,23088);
   VbbHcc_algo_Z_mass__363->SetBinContent(18,21723);
   VbbHcc_algo_Z_mass__363->SetBinContent(19,20433);
   VbbHcc_algo_Z_mass__363->SetBinContent(20,19233);
   VbbHcc_algo_Z_mass__363->SetBinContent(21,18265);
   VbbHcc_algo_Z_mass__363->SetBinContent(22,17323);
   VbbHcc_algo_Z_mass__363->SetBinContent(23,15983);
   VbbHcc_algo_Z_mass__363->SetBinContent(24,15356);
   VbbHcc_algo_Z_mass__363->SetBinContent(25,14442);
   VbbHcc_algo_Z_mass__363->SetBinContent(26,13436);
   VbbHcc_algo_Z_mass__363->SetBinContent(27,12978);
   VbbHcc_algo_Z_mass__363->SetBinContent(28,12210);
   VbbHcc_algo_Z_mass__363->SetBinContent(29,11539);
   VbbHcc_algo_Z_mass__363->SetBinContent(30,10807);
   VbbHcc_algo_Z_mass__363->SetBinContent(31,10441);
   VbbHcc_algo_Z_mass__363->SetBinContent(32,9756);
   VbbHcc_algo_Z_mass__363->SetBinContent(33,9317);
   VbbHcc_algo_Z_mass__363->SetBinContent(34,8961);
   VbbHcc_algo_Z_mass__363->SetBinContent(35,8415);
   VbbHcc_algo_Z_mass__363->SetBinContent(36,8096);
   VbbHcc_algo_Z_mass__363->SetBinContent(37,7653);
   VbbHcc_algo_Z_mass__363->SetBinContent(38,7322);
   VbbHcc_algo_Z_mass__363->SetBinContent(39,6932);
   VbbHcc_algo_Z_mass__363->SetBinContent(40,6708);
   VbbHcc_algo_Z_mass__363->SetBinContent(41,248116);
   VbbHcc_algo_Z_mass__363->SetEntries(829367);
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetRange(1,40);
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__363->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__363->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__363->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__363->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Z_mass__363->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Z_mass__363->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_Z_mass__363->Draw("HIST");
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
