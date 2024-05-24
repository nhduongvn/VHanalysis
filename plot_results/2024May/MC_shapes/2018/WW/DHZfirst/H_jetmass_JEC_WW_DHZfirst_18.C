#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_WW_DHZfirst_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_WW_DHZfirst_18/H_jetmass_JEC_WW_DHZfirst_18
//=========  (Fri May 24 12:42:34 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_WW_DHZfirst_18 = new TCanvas("H_jetmass_JEC_WW_DHZfirst_18", "H_jetmass_JEC_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_WW_DHZfirst_18->SetHighLightColor(2);
   H_jetmass_JEC_WW_DHZfirst_18->Range(-60,-0.1743786,340,1.569408);
   H_jetmass_JEC_WW_DHZfirst_18->SetFillColor(0);
   H_jetmass_JEC_WW_DHZfirst_18->SetFillStyle(4000);
   H_jetmass_JEC_WW_DHZfirst_18->SetBorderMode(0);
   H_jetmass_JEC_WW_DHZfirst_18->SetBorderSize(2);
   H_jetmass_JEC_WW_DHZfirst_18->SetLeftMargin(0.15);
   H_jetmass_JEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   H_jetmass_JEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_JEC__2034 = new TH1D("VH_DHZfirst_H_jetmass_JEC__2034","",150,0,300);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinContent(5,1.133768);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinContent(9,0.741126);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinContent(11,1.112441);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinContent(12,1.328599);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinContent(14,0.6140818);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinContent(43,0.5284769);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinError(5,0.8100079);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinError(9,0.741126);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinError(11,0.8044671);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinError(12,0.9522947);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinError(14,0.6140818);
   VH_DHZfirst_H_jetmass_JEC__2034->SetBinError(43,0.5284769);
   VH_DHZfirst_H_jetmass_JEC__2034->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_JEC__2034->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_JEC__2034->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_H_jetmass_JEC__2034->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_JEC__2034->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2034->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__2034->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2034->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_JEC__2034->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2034->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_JEC__2034->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_JEC__2034->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_JEC__2034->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2034->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__2034->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__2034->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__2034->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_WW_DHZfirst_18->Modified();
   H_jetmass_JEC_WW_DHZfirst_18->cd();
   H_jetmass_JEC_WW_DHZfirst_18->SetSelected(H_jetmass_JEC_WW_DHZfirst_18);
}
