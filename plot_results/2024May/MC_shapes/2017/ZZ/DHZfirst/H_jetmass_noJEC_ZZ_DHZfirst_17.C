#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_ZZ_DHZfirst_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_ZZ_DHZfirst_17/H_jetmass_noJEC_ZZ_DHZfirst_17
//=========  (Fri May 24 12:42:34 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_ZZ_DHZfirst_17 = new TCanvas("H_jetmass_noJEC_ZZ_DHZfirst_17", "H_jetmass_noJEC_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetHighLightColor(2);
   H_jetmass_noJEC_ZZ_DHZfirst_17->Range(-60,-0.3662939,340,3.296645);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetFillColor(0);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetFillStyle(4000);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetBorderMode(0);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetBorderSize(2);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_noJEC__2009 = new TH1D("VH_DHZfirst_H_jetmass_noJEC__2009","",150,0,300);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(5,0.2224773);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(6,0.4003606);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(7,2.790811);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(8,1.083995);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(9,2.214831);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(10,1.887238);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(11,0.690089);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(12,1.979754);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(13,0.2185133);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(14,0.6629685);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(15,0.3905533);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(16,0.6208526);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(17,0.4735288);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(19,2.405337);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(20,0.08037427);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(22,0.9532402);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(24,1.779231);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinContent(26,0.2228338);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(5,0.2224773);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(6,0.2836468);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(7,0.7640599);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(8,0.4167535);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(9,0.7070109);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(10,0.6033367);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(11,0.3464467);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(12,0.6821803);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(13,0.2185133);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(14,0.3918565);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(15,0.2761647);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(16,0.4462452);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(17,0.340261);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(19,1.024092);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(20,0.08037427);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(22,0.7045798);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(24,1.217593);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetBinError(26,0.2228338);
   VH_DHZfirst_H_jetmass_noJEC__2009->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_noJEC__2009->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_DHZfirst_H_jetmass_noJEC__2009->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_noJEC__2009->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2009->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2009->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_ZZ_DHZfirst_17->Modified();
   H_jetmass_noJEC_ZZ_DHZfirst_17->cd();
   H_jetmass_noJEC_ZZ_DHZfirst_17->SetSelected(H_jetmass_noJEC_ZZ_DHZfirst_17);
}
