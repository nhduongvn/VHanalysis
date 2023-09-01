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
   Z_mass_both_16->Range(-80,-0.01753701,453.3333,0.1578331);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__729 = new TH1D("VbbHcc_both_Z_mass__729","",40,0,400);
   VbbHcc_both_Z_mass__729->SetBinContent(7,0.1080661);
   VbbHcc_both_Z_mass__729->SetBinContent(14,0.1336153);
   VbbHcc_both_Z_mass__729->SetBinContent(18,0.09694687);
   VbbHcc_both_Z_mass__729->SetBinContent(20,0.1005479);
   VbbHcc_both_Z_mass__729->SetBinContent(21,0.1002972);
   VbbHcc_both_Z_mass__729->SetBinContent(24,0.1081721);
   VbbHcc_both_Z_mass__729->SetBinContent(27,0.1158269);
   VbbHcc_both_Z_mass__729->SetBinContent(41,0.4927249);
   VbbHcc_both_Z_mass__729->SetBinError(7,0.1080661);
   VbbHcc_both_Z_mass__729->SetBinError(14,0.1336153);
   VbbHcc_both_Z_mass__729->SetBinError(18,0.09694687);
   VbbHcc_both_Z_mass__729->SetBinError(20,0.1005479);
   VbbHcc_both_Z_mass__729->SetBinError(21,0.1002972);
   VbbHcc_both_Z_mass__729->SetBinError(24,0.1081721);
   VbbHcc_both_Z_mass__729->SetBinError(27,0.1158269);
   VbbHcc_both_Z_mass__729->SetBinError(41,0.2481256);
   VbbHcc_both_Z_mass__729->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_mass__729->SetFillColor(ci);
   VbbHcc_both_Z_mass__729->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__729->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__729->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__729->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__729->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__729->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__729->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__729->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__729->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__729->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__729->Draw("HIST");
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
