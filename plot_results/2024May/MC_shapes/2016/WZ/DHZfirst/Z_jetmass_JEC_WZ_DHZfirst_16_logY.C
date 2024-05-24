#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WZ_DHZfirst_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WZ_DHZfirst_16/Z_jetmass_JEC_WZ_DHZfirst_16
//=========  (Thu May 23 20:48:55 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WZ_DHZfirst_16 = new TCanvas("Z_jetmass_JEC_WZ_DHZfirst_16", "Z_jetmass_JEC_WZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetHighLightColor(2);
   Z_jetmass_JEC_WZ_DHZfirst_16->Range(-60,-1.948913,340,1.494302);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetFillColor(0);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetFillStyle(4000);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetBorderMode(0);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetBorderSize(2);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetLogy();
   Z_jetmass_JEC_WZ_DHZfirst_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2155 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2155","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(4,0.8277353);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(5,2.439385);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(6,6.048003);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(7,6.706895);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(8,7.45472);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(9,4.270165);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(10,3.056649);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(11,2.544157);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(12,2.53551);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(13,0.9022476);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(14,2.095407);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(15,0.6189069);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(16,0.3841659);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(17,0.5168481);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(18,0.5171111);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(19,0.21126);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(20,0.1880876);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(21,0.2894985);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(22,0.1766932);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(25,0.1142668);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(26,0.1069853);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(27,0.09120662);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(29,0.08952076);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(30,0.09131494);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(37,0.08792136);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(38,0.04970937);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinContent(47,0.1343377);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(4,0.2666341);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(5,0.4672589);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(6,0.7335223);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(7,0.7821754);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(8,0.8212763);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(9,0.6502472);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(10,0.5266394);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(11,0.5059131);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(12,0.5092835);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(13,0.2920026);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(14,0.4626834);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(15,0.2542525);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(16,0.1933585);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(17,0.2325848);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(18,0.2358078);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(19,0.1494309);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(20,0.1355326);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(21,0.1723414);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(22,0.1250314);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(25,0.1142668);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(26,0.1069853);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(27,0.09120662);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(29,0.08952076);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(30,0.09131494);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(37,0.08792136);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(38,0.04970937);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetBinError(47,0.1343377);
   VH_DHZfirst_Z_jetmass_JEC__2155->SetEntries(469);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2155->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2155->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2155->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2155->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2155->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WZ_DHZfirst_16->Modified();
   Z_jetmass_JEC_WZ_DHZfirst_16->cd();
   Z_jetmass_JEC_WZ_DHZfirst_16->SetSelected(Z_jetmass_JEC_WZ_DHZfirst_16);
}
