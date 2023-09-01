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
   Z_mass_both_16->Range(-80,-0.09468814,453.3333,0.8521932);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__730 = new TH1D("VbbHcc_both_Z_mass__730","",40,0,400);
   VbbHcc_both_Z_mass__730->SetBinContent(7,0.2452696);
   VbbHcc_both_Z_mass__730->SetBinContent(8,0.1069391);
   VbbHcc_both_Z_mass__730->SetBinContent(9,0.3409478);
   VbbHcc_both_Z_mass__730->SetBinContent(10,0.7214334);
   VbbHcc_both_Z_mass__730->SetBinContent(12,0.109159);
   VbbHcc_both_Z_mass__730->SetBinContent(13,0.1482715);
   VbbHcc_both_Z_mass__730->SetBinContent(14,0.3001478);
   VbbHcc_both_Z_mass__730->SetBinContent(15,0.1696037);
   VbbHcc_both_Z_mass__730->SetBinContent(17,0.07500666);
   VbbHcc_both_Z_mass__730->SetBinContent(18,0.2071181);
   VbbHcc_both_Z_mass__730->SetBinContent(19,0.08483032);
   VbbHcc_both_Z_mass__730->SetBinContent(20,0.08696594);
   VbbHcc_both_Z_mass__730->SetBinContent(26,0.1174079);
   VbbHcc_both_Z_mass__730->SetBinContent(27,0.08310132);
   VbbHcc_both_Z_mass__730->SetBinContent(28,0.1753819);
   VbbHcc_both_Z_mass__730->SetBinContent(31,0.1535721);
   VbbHcc_both_Z_mass__730->SetBinContent(32,0.08024226);
   VbbHcc_both_Z_mass__730->SetBinContent(38,0.08802072);
   VbbHcc_both_Z_mass__730->SetBinContent(41,1.596331);
   VbbHcc_both_Z_mass__730->SetBinError(7,0.1417982);
   VbbHcc_both_Z_mass__730->SetBinError(8,0.1069391);
   VbbHcc_both_Z_mass__730->SetBinError(9,0.1735466);
   VbbHcc_both_Z_mass__730->SetBinError(10,0.2778777);
   VbbHcc_both_Z_mass__730->SetBinError(12,0.109159);
   VbbHcc_both_Z_mass__730->SetBinError(13,0.1050811);
   VbbHcc_both_Z_mass__730->SetBinError(14,0.1781241);
   VbbHcc_both_Z_mass__730->SetBinError(15,0.1199346);
   VbbHcc_both_Z_mass__730->SetBinError(17,0.07500666);
   VbbHcc_both_Z_mass__730->SetBinError(18,0.1503638);
   VbbHcc_both_Z_mass__730->SetBinError(19,0.08483032);
   VbbHcc_both_Z_mass__730->SetBinError(20,0.08696594);
   VbbHcc_both_Z_mass__730->SetBinError(26,0.1174079);
   VbbHcc_both_Z_mass__730->SetBinError(27,0.08310132);
   VbbHcc_both_Z_mass__730->SetBinError(28,0.1246389);
   VbbHcc_both_Z_mass__730->SetBinError(31,0.1102464);
   VbbHcc_both_Z_mass__730->SetBinError(32,0.08024226);
   VbbHcc_both_Z_mass__730->SetBinError(38,0.08802072);
   VbbHcc_both_Z_mass__730->SetBinError(41,0.4102382);
   VbbHcc_both_Z_mass__730->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_mass__730->SetFillColor(ci);
   VbbHcc_both_Z_mass__730->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__730->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__730->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__730->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__730->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__730->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__730->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__730->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__730->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__730->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__730->Draw("HIST");
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
