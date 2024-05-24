#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_ZZ_DHZfirst_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_ZZ_DHZfirst_17/Z_jetmass_noJEC_ZZ_DHZfirst_17
//=========  (Fri May 24 12:42:35 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_ZZ_DHZfirst_17 = new TCanvas("Z_jetmass_noJEC_ZZ_DHZfirst_17", "Z_jetmass_noJEC_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetHighLightColor(2);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->Range(-60,-0.4445339,340,4.000805);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetFillColor(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetFillStyle(4000);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetBorderMode(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetBorderSize(2);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__2129 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__2129","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(4,0.1736909);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(5,0.637775);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(6,2.354962);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(7,3.076409);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(8,1.80331);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(9,3.386925);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(10,1.599302);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(11,1.658319);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(12,1.399002);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(13,0.5354682);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(14,0.1494469);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(15,0.8644843);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(16,0.1945552);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(21,0.1714466);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinContent(39,1.071893);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(4,0.1736909);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(5,0.3871458);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(6,0.6943698);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(7,0.9439296);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(8,0.6204134);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(9,1.04019);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(10,0.5424701);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(11,0.5937573);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(12,0.7469218);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(13,0.3228047);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(14,0.1494469);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(15,0.667427);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(16,0.1945552);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(21,0.1714466);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetBinError(39,1.071893);
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__2129->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2129->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2129->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_ZZ_DHZfirst_17->Modified();
   Z_jetmass_noJEC_ZZ_DHZfirst_17->cd();
   Z_jetmass_noJEC_ZZ_DHZfirst_17->SetSelected(Z_jetmass_noJEC_ZZ_DHZfirst_17);
}
