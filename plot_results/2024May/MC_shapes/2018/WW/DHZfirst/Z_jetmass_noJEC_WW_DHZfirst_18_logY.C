#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_WW_DHZfirst_18/Z_jetmass_noJEC_WW_DHZfirst_18
//=========  (Thu May 23 20:48:55 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_noJEC_WW_DHZfirst_18 = new TCanvas("Z_jetmass_noJEC_WW_DHZfirst_18", "Z_jetmass_noJEC_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetHighLightColor(2);
   Z_jetmass_noJEC_WW_DHZfirst_18->Range(-60,-0.8061782,340,0.6505681);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetFillColor(0);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetFillStyle(4000);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetBorderMode(0);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetBorderSize(2);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetLogy();
   Z_jetmass_noJEC_WW_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_noJEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_noJEC__2124 = new TH1D("VH_DHZfirst_Z_jetmass_noJEC__2124","",150,0,300);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinContent(7,0.7744756);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinContent(8,1.687892);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinContent(10,0.4370453);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinContent(12,0.5284769);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinContent(15,0.6753953);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinContent(18,0.741126);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinContent(20,0.6140818);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinError(7,0.7744756);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinError(8,0.98141);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinError(10,0.4370453);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinError(12,0.5284769);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinError(15,0.6753953);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinError(18,0.741126);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetBinError(20,0.6140818);
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_noJEC__2124->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_noJEC__2124->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_noJEC__2124->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_WW_DHZfirst_18->Modified();
   Z_jetmass_noJEC_WW_DHZfirst_18->cd();
   Z_jetmass_noJEC_WW_DHZfirst_18->SetSelected(Z_jetmass_noJEC_WW_DHZfirst_18);
}
