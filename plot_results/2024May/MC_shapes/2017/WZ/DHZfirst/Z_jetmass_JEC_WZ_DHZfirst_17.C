#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WZ_DHZfirst_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WZ_DHZfirst_17/Z_jetmass_JEC_WZ_DHZfirst_17
//=========  (Fri May 24 12:42:36 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WZ_DHZfirst_17 = new TCanvas("Z_jetmass_JEC_WZ_DHZfirst_17", "Z_jetmass_JEC_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetHighLightColor(2);
   Z_jetmass_JEC_WZ_DHZfirst_17->Range(-60,-0.5936323,340,5.34269);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetFillColor(0);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetFillStyle(4000);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetBorderMode(0);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetBorderSize(2);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2156 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2156","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(5,0.6579204);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(6,1.985812);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(7,3.922353);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(8,3.902138);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(9,4.522912);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(10,3.659086);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(11,3.0318);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(12,1.004152);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(13,1.143597);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(14,0.4217945);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(15,0.1944696);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(16,0.3900537);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(17,0.706428);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(18,0.6836649);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(19,0.3288176);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinContent(21,0.206617);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(5,0.4093208);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(6,0.6488748);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(7,0.963536);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(8,1.137042);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(9,1.1889);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(10,1.380027);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(11,1.396474);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(12,0.5498191);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(13,0.6014066);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(14,0.2441251);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(15,0.1944696);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(16,0.3900537);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(17,0.5843023);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(18,0.4206934);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(19,0.3288176);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetBinError(21,0.206617);
   VH_DHZfirst_Z_jetmass_JEC__2156->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2156->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2156->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2156->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2156->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2156->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WZ_DHZfirst_17->Modified();
   Z_jetmass_JEC_WZ_DHZfirst_17->cd();
   Z_jetmass_JEC_WZ_DHZfirst_17->SetSelected(Z_jetmass_JEC_WZ_DHZfirst_17);
}
