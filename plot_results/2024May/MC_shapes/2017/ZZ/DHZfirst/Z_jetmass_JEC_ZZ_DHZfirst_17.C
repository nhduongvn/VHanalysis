#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_ZZ_DHZfirst_17()
{
//=========Macro generated from canvas: Z_jetmass_JEC_ZZ_DHZfirst_17/Z_jetmass_JEC_ZZ_DHZfirst_17
//=========  (Fri May 24 12:42:36 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_ZZ_DHZfirst_17 = new TCanvas("Z_jetmass_JEC_ZZ_DHZfirst_17", "Z_jetmass_JEC_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetHighLightColor(2);
   Z_jetmass_JEC_ZZ_DHZfirst_17->Range(-60,-0.5116741,340,4.605066);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetFillColor(0);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetFillStyle(4000);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetBorderMode(0);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetBorderSize(2);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2159 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2159","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(5,0.6871263);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(6,1.190255);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(7,3.139032);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(8,2.086904);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(9,3.898469);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(10,1.645461);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(11,1.165627);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(12,1.960455);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(13,1.195835);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(15,0.6217049);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(16,0.2427793);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(22,0.1714466);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinContent(37,1.071893);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(5,0.4088904);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(6,0.4587296);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(7,0.8361803);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(8,0.8064286);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(9,1.065417);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(10,0.6133282);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(11,0.4782392);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(12,0.8142797);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(13,0.5089356);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(15,0.6217049);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(16,0.2427793);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(22,0.1714466);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetBinError(37,1.071893);
   VH_DHZfirst_Z_jetmass_JEC__2159->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2159->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2159->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2159->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2159->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2159->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_ZZ_DHZfirst_17->Modified();
   Z_jetmass_JEC_ZZ_DHZfirst_17->cd();
   Z_jetmass_JEC_ZZ_DHZfirst_17->SetSelected(Z_jetmass_JEC_ZZ_DHZfirst_17);
}
