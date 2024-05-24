#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WW_DHZfirst_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WW_DHZfirst_18/Z_jetmass_JEC_WW_DHZfirst_18
//=========  (Fri May 24 12:42:36 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WW_DHZfirst_18 = new TCanvas("Z_jetmass_JEC_WW_DHZfirst_18", "Z_jetmass_JEC_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WW_DHZfirst_18->SetHighLightColor(2);
   Z_jetmass_JEC_WW_DHZfirst_18->Range(-60,-0.1363899,340,1.227509);
   Z_jetmass_JEC_WW_DHZfirst_18->SetFillColor(0);
   Z_jetmass_JEC_WW_DHZfirst_18->SetFillStyle(4000);
   Z_jetmass_JEC_WW_DHZfirst_18->SetBorderMode(0);
   Z_jetmass_JEC_WW_DHZfirst_18->SetBorderSize(2);
   Z_jetmass_JEC_WW_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2154 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2154","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinContent(7,0.7744756);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinContent(8,1.039161);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinContent(9,0.6487306);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinContent(10,0.4370453);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinContent(12,0.5284769);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinContent(16,0.6753953);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinContent(17,0.741126);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinContent(20,0.6140818);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinError(7,0.7744756);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinError(8,0.7364199);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinError(9,0.6487306);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinError(10,0.4370453);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinError(12,0.5284769);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinError(16,0.6753953);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinError(17,0.741126);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetBinError(20,0.6140818);
   VH_DHZfirst_Z_jetmass_JEC__2154->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2154->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2154->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2154->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2154->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2154->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WW_DHZfirst_18->Modified();
   Z_jetmass_JEC_WW_DHZfirst_18->cd();
   Z_jetmass_JEC_WW_DHZfirst_18->SetSelected(Z_jetmass_JEC_WW_DHZfirst_18);
}
