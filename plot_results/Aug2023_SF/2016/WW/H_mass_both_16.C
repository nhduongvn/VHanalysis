#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_mass_both_16()
{
//=========Macro generated from canvas: H_mass_both_16/H_mass_both_16
//=========  (Fri Sep  1 13:23:41 2023) by ROOT version 6.28/04
   TCanvas *H_mass_both_16 = new TCanvas("H_mass_both_16", "H_mass_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_mass_both_16->SetHighLightColor(2);
   H_mass_both_16->Range(-80,-0.01846816,453.3333,0.1662135);
   H_mass_both_16->SetFillColor(0);
   H_mass_both_16->SetBorderMode(0);
   H_mass_both_16->SetBorderSize(2);
   H_mass_both_16->SetLeftMargin(0.15);
   H_mass_both_16->SetFrameBorderMode(0);
   H_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_mass__744 = new TH1D("VbbHcc_both_H_mass__744","",40,0,400);
   VbbHcc_both_H_mass__744->SetBinContent(11,0.09694687);
   VbbHcc_both_H_mass__744->SetBinContent(14,0.1002972);
   VbbHcc_both_H_mass__744->SetBinContent(17,0.1158269);
   VbbHcc_both_H_mass__744->SetBinContent(19,0.1336795);
   VbbHcc_both_H_mass__744->SetBinContent(24,0.1336153);
   VbbHcc_both_H_mass__744->SetBinContent(27,0.1147185);
   VbbHcc_both_H_mass__744->SetBinContent(28,0.1407098);
   VbbHcc_both_H_mass__744->SetBinContent(31,0.1005479);
   VbbHcc_both_H_mass__744->SetBinContent(32,0.103617);
   VbbHcc_both_H_mass__744->SetBinContent(41,0.2162382);
   VbbHcc_both_H_mass__744->SetBinError(11,0.09694687);
   VbbHcc_both_H_mass__744->SetBinError(14,0.1002972);
   VbbHcc_both_H_mass__744->SetBinError(17,0.1158269);
   VbbHcc_both_H_mass__744->SetBinError(19,0.1336795);
   VbbHcc_both_H_mass__744->SetBinError(24,0.1336153);
   VbbHcc_both_H_mass__744->SetBinError(27,0.1147185);
   VbbHcc_both_H_mass__744->SetBinError(28,0.1407098);
   VbbHcc_both_H_mass__744->SetBinError(31,0.1005479);
   VbbHcc_both_H_mass__744->SetBinError(32,0.103617);
   VbbHcc_both_H_mass__744->SetBinError(41,0.1529035);
   VbbHcc_both_H_mass__744->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_mass__744->SetFillColor(ci);
   VbbHcc_both_H_mass__744->GetXaxis()->SetTitle("M_{H} [GeV]");
   VbbHcc_both_H_mass__744->GetXaxis()->SetRange(1,40);
   VbbHcc_both_H_mass__744->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__744->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__744->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__744->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__744->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__744->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_mass__744->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_mass__744->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_mass__744->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_mass_both_16->Modified();
   H_mass_both_16->cd();
   H_mass_both_16->SetSelected(H_mass_both_16);
}
