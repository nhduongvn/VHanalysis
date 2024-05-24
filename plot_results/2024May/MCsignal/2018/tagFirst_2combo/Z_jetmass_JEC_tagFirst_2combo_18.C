#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_tagFirst_2combo_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_tagFirst_2combo_18/Z_jetmass_JEC_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_tagFirst_2combo_18 = new TCanvas("Z_jetmass_JEC_tagFirst_2combo_18", "Z_jetmass_JEC_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_tagFirst_2combo_18->SetHighLightColor(2);
   Z_jetmass_JEC_tagFirst_2combo_18->Range(-60,-0.001344136,340,0.01209722);
   Z_jetmass_JEC_tagFirst_2combo_18->SetFillColor(0);
   Z_jetmass_JEC_tagFirst_2combo_18->SetFillStyle(4000);
   Z_jetmass_JEC_tagFirst_2combo_18->SetBorderMode(0);
   Z_jetmass_JEC_tagFirst_2combo_18->SetBorderSize(2);
   Z_jetmass_JEC_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_jetmass_JEC__120 = new TH1D("VH_tagFirst_2combo_Z_jetmass_JEC__120","",150,0,300);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(6,0.002400052);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(7,0.00472261);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(9,0.004604276);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(10,0.01024104);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(11,0.004622893);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(12,0.002351008);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(13,0.005287674);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(17,0.001122139);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(22,0.004822818);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(23,0.001909916);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(24,0.002901436);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(25,0.00208343);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinContent(30,0.002105444);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(6,0.002400052);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(7,0.003339595);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(9,0.003265067);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(10,0.005818452);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(11,0.003272753);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(12,0.002351008);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(13,0.003753189);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(17,0.001122139);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(22,0.004822818);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(23,0.001909916);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(24,0.002901436);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(25,0.00208343);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetBinError(30,0.002105444);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_jetmass_JEC__120->SetLineColor(ci);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetXaxis()->SetRange(1,150);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_jetmass_JEC__120->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_tagFirst_2combo_18->Modified();
   Z_jetmass_JEC_tagFirst_2combo_18->cd();
   Z_jetmass_JEC_tagFirst_2combo_18->SetSelected(Z_jetmass_JEC_tagFirst_2combo_18);
}
