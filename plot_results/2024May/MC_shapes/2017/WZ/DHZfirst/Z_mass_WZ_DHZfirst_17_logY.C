#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_mass_WZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_mass_WZ_DHZfirst_17/Z_mass_WZ_DHZfirst_17
//=========  (Thu May 23 20:48:45 2024) by ROOT version 6.28/10
   TCanvas *Z_mass_WZ_DHZfirst_17 = new TCanvas("Z_mass_WZ_DHZfirst_17", "Z_mass_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_WZ_DHZfirst_17->SetHighLightColor(2);
   Z_mass_WZ_DHZfirst_17->Range(-60,-2.060919,340,1.51798);
   Z_mass_WZ_DHZfirst_17->SetFillColor(0);
   Z_mass_WZ_DHZfirst_17->SetFillStyle(4000);
   Z_mass_WZ_DHZfirst_17->SetBorderMode(0);
   Z_mass_WZ_DHZfirst_17->SetBorderSize(2);
   Z_mass_WZ_DHZfirst_17->SetLogy();
   Z_mass_WZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_mass_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_mass_WZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_mass_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_mass_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_mass__1466 = new TH1D("VH_DHZfirst_Z_mass__1466","",200,0,2000);
   VH_DHZfirst_Z_mass__1466->SetBinContent(6,0.03962785);
   VH_DHZfirst_Z_mass__1466->SetBinContent(7,1.670255);
   VH_DHZfirst_Z_mass__1466->SetBinContent(8,2.284349);
   VH_DHZfirst_Z_mass__1466->SetBinContent(9,5.099207);
   VH_DHZfirst_Z_mass__1466->SetBinContent(10,7.630287);
   VH_DHZfirst_Z_mass__1466->SetBinContent(11,2.604489);
   VH_DHZfirst_Z_mass__1466->SetBinContent(12,0.270921);
   VH_DHZfirst_Z_mass__1466->SetBinContent(13,1.447234);
   VH_DHZfirst_Z_mass__1466->SetBinContent(14,0.3743408);
   VH_DHZfirst_Z_mass__1466->SetBinContent(15,0.3209861);
   VH_DHZfirst_Z_mass__1466->SetBinContent(16,0.3089841);
   VH_DHZfirst_Z_mass__1466->SetBinContent(17,0.1176237);
   VH_DHZfirst_Z_mass__1466->SetBinContent(22,0.3367613);
   VH_DHZfirst_Z_mass__1466->SetBinContent(23,0.4361942);
   VH_DHZfirst_Z_mass__1466->SetBinContent(25,0.1338911);
   VH_DHZfirst_Z_mass__1466->SetBinContent(26,0.2434371);
   VH_DHZfirst_Z_mass__1466->SetBinContent(40,0.02121172);
   VH_DHZfirst_Z_mass__1466->SetBinContent(100,0.4900953);
   VH_DHZfirst_Z_mass__1466->SetBinContent(101,0.2001953);
   VH_DHZfirst_Z_mass__1466->SetBinContent(103,0.1345834);
   VH_DHZfirst_Z_mass__1466->SetBinContent(117,0.275312);
   VH_DHZfirst_Z_mass__1466->SetBinContent(146,1.169511);
   VH_DHZfirst_Z_mass__1466->SetBinContent(150,0.2870248);
   VH_DHZfirst_Z_mass__1466->SetBinContent(176,0.1756069);
   VH_DHZfirst_Z_mass__1466->SetBinContent(201,0.6894863);
   VH_DHZfirst_Z_mass__1466->SetBinError(6,0.03962785);
   VH_DHZfirst_Z_mass__1466->SetBinError(7,0.7270287);
   VH_DHZfirst_Z_mass__1466->SetBinError(8,0.7774576);
   VH_DHZfirst_Z_mass__1466->SetBinError(9,1.255079);
   VH_DHZfirst_Z_mass__1466->SetBinError(10,1.749473);
   VH_DHZfirst_Z_mass__1466->SetBinError(11,0.7390712);
   VH_DHZfirst_Z_mass__1466->SetBinError(12,0.191594);
   VH_DHZfirst_Z_mass__1466->SetBinError(13,0.7466611);
   VH_DHZfirst_Z_mass__1466->SetBinError(14,0.2653951);
   VH_DHZfirst_Z_mass__1466->SetBinError(15,0.3209861);
   VH_DHZfirst_Z_mass__1466->SetBinError(16,0.2195993);
   VH_DHZfirst_Z_mass__1466->SetBinError(17,0.1176237);
   VH_DHZfirst_Z_mass__1466->SetBinError(22,0.3367613);
   VH_DHZfirst_Z_mass__1466->SetBinError(23,0.4361942);
   VH_DHZfirst_Z_mass__1466->SetBinError(25,0.1338911);
   VH_DHZfirst_Z_mass__1466->SetBinError(26,0.2434371);
   VH_DHZfirst_Z_mass__1466->SetBinError(40,0.02121172);
   VH_DHZfirst_Z_mass__1466->SetBinError(100,0.4900953);
   VH_DHZfirst_Z_mass__1466->SetBinError(101,0.2001953);
   VH_DHZfirst_Z_mass__1466->SetBinError(103,0.1345834);
   VH_DHZfirst_Z_mass__1466->SetBinError(117,0.275312);
   VH_DHZfirst_Z_mass__1466->SetBinError(146,1.169511);
   VH_DHZfirst_Z_mass__1466->SetBinError(150,0.2870248);
   VH_DHZfirst_Z_mass__1466->SetBinError(176,0.1756069);
   VH_DHZfirst_Z_mass__1466->SetBinError(201,0.5270698);
   VH_DHZfirst_Z_mass__1466->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_mass__1466->SetLineColor(ci);
   VH_DHZfirst_Z_mass__1466->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VH_DHZfirst_Z_mass__1466->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_mass__1466->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1466->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1466->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1466->GetYaxis()->SetTitle("Events/10.0 GeV");
   VH_DHZfirst_Z_mass__1466->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1466->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_mass__1466->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_mass__1466->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_mass__1466->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1466->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_mass__1466->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_mass__1466->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_mass__1466->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_WZ_DHZfirst_17->Modified();
   Z_mass_WZ_DHZfirst_17->cd();
   Z_mass_WZ_DHZfirst_17->SetSelected(Z_mass_WZ_DHZfirst_17);
}
