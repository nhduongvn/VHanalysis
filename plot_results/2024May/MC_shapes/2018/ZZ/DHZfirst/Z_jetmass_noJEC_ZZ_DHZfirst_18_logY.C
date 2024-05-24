#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_ZZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_ZZ_DHZfirst_18/Z_jetmass_noJEC_ZZ_DHZfirst_18
//=========  (Thu May 23 20:48:55 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_ZZ_DHZfirst_18 = new TCanvas("Z_jetmass_noJEC_ZZ_DHZfirst_18", "Z_jetmass_noJEC_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetHighLightColor(2);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->Range(-60,-0.919139,340,1.298903);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetFillColor(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetFillStyle(4000);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetBorderMode(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetBorderSize(2);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetLogy();
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__2130 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__2130","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(5,1.967358);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(6,3.769128);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(7,5.363126);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(8,3.512084);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(9,6.303036);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(10,4.649272);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(11,3.509754);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(12,2.11056);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(13,1.459806);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(14,1.081251);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(15,1.629333);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(18,0.8481652);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(32,0.5031122);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinContent(45,0.4015089);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(5,0.8369442);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(6,1.648927);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(7,1.627242);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(8,1.223901);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(9,1.615542);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(10,1.372166);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(11,1.306457);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(12,0.88858);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(13,0.9537833);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(14,0.6286005);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(15,1.01234);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(18,0.6178028);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(32,0.5031122);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetBinError(45,0.4015089);
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetEntries(93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__2130->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2130->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2130->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_ZZ_DHZfirst_18->Modified();
   Z_jetmass_noJEC_ZZ_DHZfirst_18->cd();
   Z_jetmass_noJEC_ZZ_DHZfirst_18->SetSelected(Z_jetmass_noJEC_ZZ_DHZfirst_18);
}
