#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_ZZ_DHZfirst_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_ZZ_DHZfirst_16/Z_jetmass_JEC_ZZ_DHZfirst_16
//=========  (Fri May 24 12:42:36 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_ZZ_DHZfirst_16 = new TCanvas("Z_jetmass_JEC_ZZ_DHZfirst_16", "Z_jetmass_JEC_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetHighLightColor(2);
   Z_jetmass_JEC_ZZ_DHZfirst_16->Range(-60,-0.5679638,340,5.111674);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetFillColor(0);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetFillStyle(4000);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetBorderMode(0);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetBorderSize(2);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2158 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2158","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(3,0.1756935);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(4,0.5701007);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(5,3.7567);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(6,3.426964);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(7,4.327343);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(8,2.77922);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(9,3.775789);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(10,2.885503);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(11,3.058403);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(12,0.888179);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(13,1.555787);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(14,1.11706);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(15,0.8776845);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(16,0.3127774);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(17,0.1773787);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(20,0.1800422);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinContent(52,0.3214725);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(3,0.1756935);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(4,0.3308025);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(5,0.857439);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(6,0.7827255);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(7,0.9032736);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(8,0.7575332);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(9,0.9048427);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(10,0.815499);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(11,0.8289989);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(12,0.4062162);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(13,0.593073);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(14,0.4730847);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(15,0.3939343);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(16,0.226195);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(17,0.1773787);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(20,0.1800422);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetBinError(52,0.3214725);
   VH_DHZfirst_Z_jetmass_JEC__2158->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2158->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2158->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2158->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2158->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2158->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_ZZ_DHZfirst_16->Modified();
   Z_jetmass_JEC_ZZ_DHZfirst_16->cd();
   Z_jetmass_JEC_ZZ_DHZfirst_16->SetSelected(Z_jetmass_JEC_ZZ_DHZfirst_16);
}
