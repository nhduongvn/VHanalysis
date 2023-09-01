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
   Z_mass_both_16->Range(-80,-0.003079533,453.3333,0.0277158);
   Z_mass_both_16->SetFillColor(0);
   Z_mass_both_16->SetBorderMode(0);
   Z_mass_both_16->SetBorderSize(2);
   Z_mass_both_16->SetLeftMargin(0.15);
   Z_mass_both_16->SetFrameBorderMode(0);
   Z_mass_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_mass__734 = new TH1D("VbbHcc_both_Z_mass__734","",40,0,400);
   VbbHcc_both_Z_mass__734->SetBinContent(6,0.001929603);
   VbbHcc_both_Z_mass__734->SetBinContent(7,0.002296727);
   VbbHcc_both_Z_mass__734->SetBinContent(9,0.02346311);
   VbbHcc_both_Z_mass__734->SetBinContent(10,0.003734723);
   VbbHcc_both_Z_mass__734->SetBinContent(11,0.00231513);
   VbbHcc_both_Z_mass__734->SetBinContent(12,0.002055762);
   VbbHcc_both_Z_mass__734->SetBinContent(13,0.005131369);
   VbbHcc_both_Z_mass__734->SetBinContent(15,0.004367825);
   VbbHcc_both_Z_mass__734->SetBinContent(16,0.002821577);
   VbbHcc_both_Z_mass__734->SetBinContent(18,0.00474702);
   VbbHcc_both_Z_mass__734->SetBinContent(19,0.001871144);
   VbbHcc_both_Z_mass__734->SetBinContent(29,0.001533761);
   VbbHcc_both_Z_mass__734->SetBinContent(33,0.001775999);
   VbbHcc_both_Z_mass__734->SetBinContent(41,0.02131729);
   VbbHcc_both_Z_mass__734->SetBinError(6,0.001929603);
   VbbHcc_both_Z_mass__734->SetBinError(7,0.002296727);
   VbbHcc_both_Z_mass__734->SetBinError(9,0.007535238);
   VbbHcc_both_Z_mass__734->SetBinError(10,0.002641295);
   VbbHcc_both_Z_mass__734->SetBinError(11,0.00231513);
   VbbHcc_both_Z_mass__734->SetBinError(12,0.002055762);
   VbbHcc_both_Z_mass__734->SetBinError(13,0.003679163);
   VbbHcc_both_Z_mass__734->SetBinError(15,0.003162267);
   VbbHcc_both_Z_mass__734->SetBinError(16,0.002821577);
   VbbHcc_both_Z_mass__734->SetBinError(18,0.003387964);
   VbbHcc_both_Z_mass__734->SetBinError(19,0.001871144);
   VbbHcc_both_Z_mass__734->SetBinError(29,0.001533761);
   VbbHcc_both_Z_mass__734->SetBinError(33,0.001775999);
   VbbHcc_both_Z_mass__734->SetBinError(41,0.006854125);
   VbbHcc_both_Z_mass__734->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_mass__734->SetFillColor(ci);
   VbbHcc_both_Z_mass__734->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_both_Z_mass__734->GetXaxis()->SetRange(1,40);
   VbbHcc_both_Z_mass__734->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__734->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__734->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__734->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__734->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__734->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_mass__734->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Z_mass__734->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_mass__734->Draw("HIST");
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
