#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_ZZ_DHZfirst_16()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_ZZ_DHZfirst_16/Z_jetmass_noJEC_ZZ_DHZfirst_16
//=========  (Fri May 24 12:42:35 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_ZZ_DHZfirst_16 = new TCanvas("Z_jetmass_noJEC_ZZ_DHZfirst_16", "Z_jetmass_noJEC_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetHighLightColor(2);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->Range(-60,-0.5281372,340,4.753235);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetFillColor(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetFillStyle(4000);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetBorderMode(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetBorderSize(2);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__2128 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__2128","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(3,0.1756935);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(4,0.8087854);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(5,4.023902);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(6,3.895691);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(7,4.013582);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(8,3.147425);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(9,3.66151);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(10,2.331399);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(11,1.905824);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(12,1.292092);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(13,2.186395);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(14,1.044189);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(15,0.648588);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(16,0.1822026);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(17,0.3673033);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(23,0.1800422);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinContent(50,0.3214725);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(3,0.1756935);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(4,0.4093964);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(5,0.8745705);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(6,0.8448549);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(7,0.867557);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(8,0.8158784);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(9,0.9079123);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(10,0.7148715);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(11,0.6400773);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(12,0.5459117);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(13,0.7001954);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(14,0.4358449);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(15,0.3283813);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(16,0.1822026);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(17,0.2598741);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(23,0.1800422);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetBinError(50,0.3214725);
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__2128->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2128->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2128->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_ZZ_DHZfirst_16->Modified();
   Z_jetmass_noJEC_ZZ_DHZfirst_16->cd();
   Z_jetmass_noJEC_ZZ_DHZfirst_16->SetSelected(Z_jetmass_noJEC_ZZ_DHZfirst_16);
}
