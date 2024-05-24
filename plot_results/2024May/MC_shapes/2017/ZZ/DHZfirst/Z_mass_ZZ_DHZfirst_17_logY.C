#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_ZZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_mass_ZZ_DHZfirst_17/Z_mass_ZZ_DHZfirst_17
//=========  (Thu May 23 20:48:45 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_ZZ_DHZfirst_17 = new TCanvas("Z_mass_ZZ_DHZfirst_17", "Z_mass_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_ZZ_DHZfirst_17->SetHighLightColor(2);
   Z_mass_ZZ_DHZfirst_17->Range(-60,-1.315481,340,1.226796);
   Z_mass_ZZ_DHZfirst_17->SetFillColor(0);
   Z_mass_ZZ_DHZfirst_17->SetFillStyle(4000);
   Z_mass_ZZ_DHZfirst_17->SetBorderMode(0);
   Z_mass_ZZ_DHZfirst_17->SetBorderSize(2);
   Z_mass_ZZ_DHZfirst_17->SetLogy();
   Z_mass_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_mass_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_mass_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_mass_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_mass_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__1469 = new TH1D("VH_DHZfirst_Z_mass__1469","",200,0,2000);
   VH_DHZfirst_Z_mass__1469->SetBinContent(5,0.2044635);
   VH_DHZfirst_Z_mass__1469->SetBinContent(6,0.3208907);
   VH_DHZfirst_Z_mass__1469->SetBinContent(7,0.9350178);
   VH_DHZfirst_Z_mass__1469->SetBinContent(8,2.562552);
   VH_DHZfirst_Z_mass__1469->SetBinContent(9,2.283454);
   VH_DHZfirst_Z_mass__1469->SetBinContent(10,4.954728);
   VH_DHZfirst_Z_mass__1469->SetBinContent(11,1.212221);
   VH_DHZfirst_Z_mass__1469->SetBinContent(12,0.6434174);
   VH_DHZfirst_Z_mass__1469->SetBinContent(13,0.1840155);
   VH_DHZfirst_Z_mass__1469->SetBinContent(14,0.3710894);
   VH_DHZfirst_Z_mass__1469->SetBinContent(15,0.1736909);
   VH_DHZfirst_Z_mass__1469->SetBinContent(16,0.2013183);
   VH_DHZfirst_Z_mass__1469->SetBinContent(17,0.937762);
   VH_DHZfirst_Z_mass__1469->SetBinContent(19,0.1837692);
   VH_DHZfirst_Z_mass__1469->SetBinContent(21,0.303208);
   VH_DHZfirst_Z_mass__1469->SetBinContent(22,1.071893);
   VH_DHZfirst_Z_mass__1469->SetBinContent(23,0.3275293);
   VH_DHZfirst_Z_mass__1469->SetBinContent(26,0.6249138);
   VH_DHZfirst_Z_mass__1469->SetBinContent(27,0.3077808);
   VH_DHZfirst_Z_mass__1469->SetBinContent(46,0.2056546);
   VH_DHZfirst_Z_mass__1469->SetBinContent(64,0.2867527);
   VH_DHZfirst_Z_mass__1469->SetBinContent(142,0.2107781);
   VH_DHZfirst_Z_mass__1469->SetBinContent(143,0.1417575);
   VH_DHZfirst_Z_mass__1469->SetBinContent(157,0.1792647);
   VH_DHZfirst_Z_mass__1469->SetBinContent(162,0.1254538);
   VH_DHZfirst_Z_mass__1469->SetBinContent(172,0.1236131);
   VH_DHZfirst_Z_mass__1469->SetBinError(5,0.2044635);
   VH_DHZfirst_Z_mass__1469->SetBinError(6,0.2278317);
   VH_DHZfirst_Z_mass__1469->SetBinError(7,0.4488291);
   VH_DHZfirst_Z_mass__1469->SetBinError(8,0.7056635);
   VH_DHZfirst_Z_mass__1469->SetBinError(9,0.7069913);
   VH_DHZfirst_Z_mass__1469->SetBinError(10,1.276402);
   VH_DHZfirst_Z_mass__1469->SetBinError(11,0.5119248);
   VH_DHZfirst_Z_mass__1469->SetBinError(12,0.3717941);
   VH_DHZfirst_Z_mass__1469->SetBinError(13,0.1840155);
   VH_DHZfirst_Z_mass__1469->SetBinError(14,0.262709);
   VH_DHZfirst_Z_mass__1469->SetBinError(15,0.1736909);
   VH_DHZfirst_Z_mass__1469->SetBinError(16,0.2013183);
   VH_DHZfirst_Z_mass__1469->SetBinError(17,0.6974304);
   VH_DHZfirst_Z_mass__1469->SetBinError(19,0.1837692);
   VH_DHZfirst_Z_mass__1469->SetBinError(21,0.2368859);
   VH_DHZfirst_Z_mass__1469->SetBinError(22,1.071893);
   VH_DHZfirst_Z_mass__1469->SetBinError(23,0.2330076);
   VH_DHZfirst_Z_mass__1469->SetBinError(26,0.6249138);
   VH_DHZfirst_Z_mass__1469->SetBinError(27,0.3077808);
   VH_DHZfirst_Z_mass__1469->SetBinError(46,0.2056546);
   VH_DHZfirst_Z_mass__1469->SetBinError(64,0.2867527);
   VH_DHZfirst_Z_mass__1469->SetBinError(142,0.2107781);
   VH_DHZfirst_Z_mass__1469->SetBinError(143,0.1417575);
   VH_DHZfirst_Z_mass__1469->SetBinError(157,0.1792647);
   VH_DHZfirst_Z_mass__1469->SetBinError(162,0.1254538);
   VH_DHZfirst_Z_mass__1469->SetBinError(172,0.1236131);
   VH_DHZfirst_Z_mass__1469->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__1469->SetLineColor(ci);
   VH_DHZfirst_Z_mass__1469->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_Z_mass__1469->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_mass__1469->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1469->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1469->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1469->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_Z_mass__1469->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1469->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_mass__1469->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_mass__1469->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_mass__1469->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1469->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1469->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1469->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1469->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_ZZ_DHZfirst_17->Modified();
   Z_mass_ZZ_DHZfirst_17->cd();
   Z_mass_ZZ_DHZfirst_17->SetSelected(Z_mass_ZZ_DHZfirst_17);
}
