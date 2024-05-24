#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_WZ_DHZfirst_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_WZ_DHZfirst_17/Z_jetmass_noJEC_WZ_DHZfirst_17
//=========  (Fri May 24 12:42:35 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_WZ_DHZfirst_17 = new TCanvas("Z_jetmass_noJEC_WZ_DHZfirst_17", "Z_jetmass_noJEC_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetHighLightColor(2);
   Z_jetmass_noJEC_WZ_DHZfirst_17->Range(-60,-0.6179835,340,5.561851);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetFillColor(0);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetFillStyle(4000);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetBorderMode(0);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetBorderSize(2);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__2126 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__2126","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(5,0.3172264);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(6,4.416427);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(7,2.926526);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(8,4.708445);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(9,3.903919);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(10,2.768428);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(11,3.151925);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(12,1.198348);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(13,0.7057385);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(14,0.739106);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(16,0.3306174);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(17,0.5675605);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(18,0.491915);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinContent(20,0.5354345);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(5,0.2268726);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(6,1.074852);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(7,0.8902734);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(8,1.128143);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(9,1.233812);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(10,1.217849);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(11,1.373994);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(12,0.6198783);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(13,0.4775006);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(14,0.4624458);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(16,0.2367535);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(17,0.5675605);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(18,0.3744528);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetBinError(20,0.3883446);
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__2126->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2126->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2126->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_WZ_DHZfirst_17->Modified();
   Z_jetmass_noJEC_WZ_DHZfirst_17->cd();
   Z_jetmass_noJEC_WZ_DHZfirst_17->SetSelected(Z_jetmass_noJEC_WZ_DHZfirst_17);
}
