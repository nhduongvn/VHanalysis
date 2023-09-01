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
   Z_mass_both_16->Range(-80,-17.95655,453.3333,161.6089);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__727 = new TH1D("VbbHcc_both_Z_mass__727","",40,0,400);
   VbbHcc_both_Z_mass__727->SetBinContent(3,0.4363425);
   VbbHcc_both_Z_mass__727->SetBinContent(4,6.497377);
   VbbHcc_both_Z_mass__727->SetBinContent(5,12.23739);
   VbbHcc_both_Z_mass__727->SetBinContent(6,25.82496);
   VbbHcc_both_Z_mass__727->SetBinContent(7,55.04904);
   VbbHcc_both_Z_mass__727->SetBinContent(8,69.07538);
   VbbHcc_both_Z_mass__727->SetBinContent(9,117.024);
   VbbHcc_both_Z_mass__727->SetBinContent(10,136.8118);
   VbbHcc_both_Z_mass__727->SetBinContent(11,99.29903);
   VbbHcc_both_Z_mass__727->SetBinContent(12,55.64044);
   VbbHcc_both_Z_mass__727->SetBinContent(13,48.74942);
   VbbHcc_both_Z_mass__727->SetBinContent(14,37.77121);
   VbbHcc_both_Z_mass__727->SetBinContent(15,38.50559);
   VbbHcc_both_Z_mass__727->SetBinContent(16,28.98449);
   VbbHcc_both_Z_mass__727->SetBinContent(17,29.78293);
   VbbHcc_both_Z_mass__727->SetBinContent(18,28.65845);
   VbbHcc_both_Z_mass__727->SetBinContent(19,27.66095);
   VbbHcc_both_Z_mass__727->SetBinContent(20,31.75042);
   VbbHcc_both_Z_mass__727->SetBinContent(21,22.70208);
   VbbHcc_both_Z_mass__727->SetBinContent(22,29.14723);
   VbbHcc_both_Z_mass__727->SetBinContent(23,23.77004);
   VbbHcc_both_Z_mass__727->SetBinContent(24,18.67162);
   VbbHcc_both_Z_mass__727->SetBinContent(25,21.98379);
   VbbHcc_both_Z_mass__727->SetBinContent(26,21.54129);
   VbbHcc_both_Z_mass__727->SetBinContent(27,16.40222);
   VbbHcc_both_Z_mass__727->SetBinContent(28,21.28256);
   VbbHcc_both_Z_mass__727->SetBinContent(29,12.78802);
   VbbHcc_both_Z_mass__727->SetBinContent(30,20.92547);
   VbbHcc_both_Z_mass__727->SetBinContent(31,17.06679);
   VbbHcc_both_Z_mass__727->SetBinContent(32,18.79941);
   VbbHcc_both_Z_mass__727->SetBinContent(33,17.10474);
   VbbHcc_both_Z_mass__727->SetBinContent(34,21.83294);
   VbbHcc_both_Z_mass__727->SetBinContent(35,16.54631);
   VbbHcc_both_Z_mass__727->SetBinContent(36,12.26346);
   VbbHcc_both_Z_mass__727->SetBinContent(37,12.93377);
   VbbHcc_both_Z_mass__727->SetBinContent(38,16.11295);
   VbbHcc_both_Z_mass__727->SetBinContent(39,13.0228);
   VbbHcc_both_Z_mass__727->SetBinContent(40,11.13641);
   VbbHcc_both_Z_mass__727->SetBinContent(41,558.212);
   VbbHcc_both_Z_mass__727->SetBinError(3,0.2262983);
   VbbHcc_both_Z_mass__727->SetBinError(4,2.582205);
   VbbHcc_both_Z_mass__727->SetBinError(5,1.43404);
   VbbHcc_both_Z_mass__727->SetBinError(6,3.796391);
   VbbHcc_both_Z_mass__727->SetBinError(7,6.109733);
   VbbHcc_both_Z_mass__727->SetBinError(8,4.88331);
   VbbHcc_both_Z_mass__727->SetBinError(9,6.555425);
   VbbHcc_both_Z_mass__727->SetBinError(10,8.608421);
   VbbHcc_both_Z_mass__727->SetBinError(11,8.46224);
   VbbHcc_both_Z_mass__727->SetBinError(12,4.963741);
   VbbHcc_both_Z_mass__727->SetBinError(13,5.219091);
   VbbHcc_both_Z_mass__727->SetBinError(14,3.245663);
   VbbHcc_both_Z_mass__727->SetBinError(15,5.293098);
   VbbHcc_both_Z_mass__727->SetBinError(16,2.708782);
   VbbHcc_both_Z_mass__727->SetBinError(17,3.761605);
   VbbHcc_both_Z_mass__727->SetBinError(18,2.626099);
   VbbHcc_both_Z_mass__727->SetBinError(19,3.196617);
   VbbHcc_both_Z_mass__727->SetBinError(20,4.945257);
   VbbHcc_both_Z_mass__727->SetBinError(21,1.847748);
   VbbHcc_both_Z_mass__727->SetBinError(22,3.972779);
   VbbHcc_both_Z_mass__727->SetBinError(23,3.714788);
   VbbHcc_both_Z_mass__727->SetBinError(24,2.124177);
   VbbHcc_both_Z_mass__727->SetBinError(25,3.081925);
   VbbHcc_both_Z_mass__727->SetBinError(26,2.954316);
   VbbHcc_both_Z_mass__727->SetBinError(27,1.560413);
   VbbHcc_both_Z_mass__727->SetBinError(28,3.414106);
   VbbHcc_both_Z_mass__727->SetBinError(29,1.285763);
   VbbHcc_both_Z_mass__727->SetBinError(30,3.651334);
   VbbHcc_both_Z_mass__727->SetBinError(31,2.5719);
   VbbHcc_both_Z_mass__727->SetBinError(32,3.159694);
   VbbHcc_both_Z_mass__727->SetBinError(33,3.130857);
   VbbHcc_both_Z_mass__727->SetBinError(34,3.817374);
   VbbHcc_both_Z_mass__727->SetBinError(35,3.134281);
   VbbHcc_both_Z_mass__727->SetBinError(36,1.373094);
   VbbHcc_both_Z_mass__727->SetBinError(37,2.121367);
   VbbHcc_both_Z_mass__727->SetBinError(38,2.855823);
   VbbHcc_both_Z_mass__727->SetBinError(39,1.461909);
   VbbHcc_both_Z_mass__727->SetBinError(40,1.287836);
   VbbHcc_both_Z_mass__727->SetBinError(41,16.09731);
   VbbHcc_both_Z_mass__727->SetEntries(15448);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_Z_mass__727->SetFillColor(ci);
   VbbHcc_both_Z_mass__727->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__727->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__727->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__727->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__727->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__727->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__727->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__727->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__727->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__727->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__727->Draw("HIST");
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
