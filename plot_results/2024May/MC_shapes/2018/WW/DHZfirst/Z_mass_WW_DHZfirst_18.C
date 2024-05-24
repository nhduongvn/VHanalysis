#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_WW_DHZfirst_18()
{
//=========Macro generated from canvas: Z_mass_WW_DHZfirst_18/Z_mass_WW_DHZfirst_18
//=========  (Fri May 24 12:42:26 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_WW_DHZfirst_18 = new TCanvas("Z_mass_WW_DHZfirst_18", "Z_mass_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_WW_DHZfirst_18->SetHighLightColor(2);
   Z_mass_WW_DHZfirst_18->Range(-60,-0.1016499,340,0.9148493);
   Z_mass_WW_DHZfirst_18->SetFillColor(0);
   Z_mass_WW_DHZfirst_18->SetFillStyle(4000);
   Z_mass_WW_DHZfirst_18->SetBorderMode(0);
   Z_mass_WW_DHZfirst_18->SetBorderSize(2);
   Z_mass_WW_DHZfirst_18->SetLeftMargin(0.15);
   Z_mass_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_mass_WW_DHZfirst_18->SetFrameBorderMode(0);
   Z_mass_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_mass_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__1464 = new TH1D("VH_DHZfirst_Z_mass__1464","",200,0,2000);
   VH_DHZfirst_Z_mass__1464->SetBinContent(9,0.4850375);
   VH_DHZfirst_Z_mass__1464->SetBinContent(12,0.6753953);
   VH_DHZfirst_Z_mass__1464->SetBinContent(15,0.7744756);
   VH_DHZfirst_Z_mass__1464->SetBinContent(16,0.6487306);
   VH_DHZfirst_Z_mass__1464->SetBinContent(20,0.6140818);
   VH_DHZfirst_Z_mass__1464->SetBinContent(47,0.5541235);
   VH_DHZfirst_Z_mass__1464->SetBinContent(50,0.4370453);
   VH_DHZfirst_Z_mass__1464->SetBinContent(81,0.741126);
   VH_DHZfirst_Z_mass__1464->SetBinContent(114,0.5284769);
   VH_DHZfirst_Z_mass__1464->SetBinError(9,0.4850375);
   VH_DHZfirst_Z_mass__1464->SetBinError(12,0.6753953);
   VH_DHZfirst_Z_mass__1464->SetBinError(15,0.7744756);
   VH_DHZfirst_Z_mass__1464->SetBinError(16,0.6487306);
   VH_DHZfirst_Z_mass__1464->SetBinError(20,0.6140818);
   VH_DHZfirst_Z_mass__1464->SetBinError(47,0.5541235);
   VH_DHZfirst_Z_mass__1464->SetBinError(50,0.4370453);
   VH_DHZfirst_Z_mass__1464->SetBinError(81,0.741126);
   VH_DHZfirst_Z_mass__1464->SetBinError(114,0.5284769);
   VH_DHZfirst_Z_mass__1464->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__1464->SetLineColor(ci);
   VH_DHZfirst_Z_mass__1464->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_Z_mass__1464->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_mass__1464->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1464->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1464->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1464->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_Z_mass__1464->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1464->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_mass__1464->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_mass__1464->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_mass__1464->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1464->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1464->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1464->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1464->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_WW_DHZfirst_18->Modified();
   Z_mass_WW_DHZfirst_18->cd();
   Z_mass_WW_DHZfirst_18->SetSelected(Z_mass_WW_DHZfirst_18);
}
