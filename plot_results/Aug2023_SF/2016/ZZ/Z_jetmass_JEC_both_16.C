#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Fri Sep  1 13:23:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-1.231726,340,11.08553);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC__1076 = new TH1D("VbbHcc_both_Z_jetmass_JEC__1076","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(3,0.1549685);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(4,1.977677);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(5,9.181215);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(6,9.384577);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(7,5.220746);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(8,4.055351);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(9,2.501608);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(10,0.7903472);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(11,1.409562);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(12,1.348493);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(13,0.1956644);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(14,0.5719077);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(15,0.1910899);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinContent(17,0.2001095);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(3,0.1549685);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(4,0.6676328);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(5,1.43789);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(6,1.449373);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(7,1.062911);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(8,0.9574893);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(9,0.7305211);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(10,0.420172);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(11,0.5816352);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(12,0.5165448);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(13,0.1956644);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(14,0.4044222);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(15,0.1910899);
   VbbHcc_both_Z_jetmass_JEC__1076->SetBinError(17,0.2001095);
   VbbHcc_both_Z_jetmass_JEC__1076->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_Z_jetmass_JEC__1076->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC__1076->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC__1076->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC__1076->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1076->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_JEC__1076->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1076->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1076->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1076->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC__1076->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_jetmass_JEC__1076->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC__1076->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_16->Modified();
   Z_jetmass_JEC_both_16->cd();
   Z_jetmass_JEC_both_16->SetSelected(Z_jetmass_JEC_both_16);
}
