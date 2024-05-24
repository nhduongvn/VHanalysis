#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_WZ_DHZfirst_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_WZ_DHZfirst_18/Z_jetmass_noJEC_WZ_DHZfirst_18
//=========  (Fri May 24 12:42:35 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_WZ_DHZfirst_18 = new TCanvas("Z_jetmass_noJEC_WZ_DHZfirst_18", "Z_jetmass_noJEC_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetHighLightColor(2);
   Z_jetmass_noJEC_WZ_DHZfirst_18->Range(-60,-1.579156,340,14.2124);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetFillColor(0);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetFillStyle(4000);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetBorderMode(0);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetBorderSize(2);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__2127 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__2127","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(4,0.982841);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(5,1.997788);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(6,5.33652);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(7,10.9222);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(8,7.804891);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(9,12.03167);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(10,3.632045);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(11,2.352239);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(12,1.983704);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(14,0.7847945);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(15,1.888405);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(16,1.188053);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(17,1.91227);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(18,0.3650346);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(19,0.3722888);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(20,0.8482499);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinContent(49,0.8015598);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(4,0.982841);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(5,1.032369);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(6,2.17528);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(7,2.92713);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(8,2.363069);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(9,3.732578);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(10,1.239816);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(11,0.9818834);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(12,1.09664);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(14,0.7847945);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(15,1.165924);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(16,0.9104991);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(17,1.144646);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(18,0.3650346);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(19,0.3722888);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(20,0.8482499);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetBinError(49,0.8015598);
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__2127->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2127->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2127->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_WZ_DHZfirst_18->Modified();
   Z_jetmass_noJEC_WZ_DHZfirst_18->cd();
   Z_jetmass_noJEC_WZ_DHZfirst_18->SetSelected(Z_jetmass_noJEC_WZ_DHZfirst_18);
}
