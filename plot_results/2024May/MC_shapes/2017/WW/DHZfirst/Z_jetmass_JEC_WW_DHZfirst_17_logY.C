#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_WW_DHZfirst_17/Z_jetmass_JEC_WW_DHZfirst_17
//=========  (Thu May 23 20:48:55 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_WW_DHZfirst_17 = new TCanvas("Z_jetmass_JEC_WW_DHZfirst_17", "Z_jetmass_JEC_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_WW_DHZfirst_17->SetHighLightColor(2);
   Z_jetmass_JEC_WW_DHZfirst_17->Range(-60,-1.636,340,0.6298829);
   Z_jetmass_JEC_WW_DHZfirst_17->SetFillColor(0);
   Z_jetmass_JEC_WW_DHZfirst_17->SetFillStyle(4000);
   Z_jetmass_JEC_WW_DHZfirst_17->SetBorderMode(0);
   Z_jetmass_JEC_WW_DHZfirst_17->SetBorderSize(2);
   Z_jetmass_JEC_WW_DHZfirst_17->SetLogy();
   Z_jetmass_JEC_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_jetmass_JEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_jetmass_JEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_jetmass_JEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__2153 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__2153","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(6,0.6904191);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(7,0.4451366);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(8,0.152338);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(9,1.335813);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(11,0.2037551);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(12,0.2028034);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(14,0.2290723);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(15,0.4893481);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(39,0.2128171);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinContent(45,0.07791458);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(6,0.5325389);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(7,0.3242553);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(8,0.152338);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(9,0.6981446);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(11,0.2037551);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(12,0.2028034);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(14,0.2290723);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(15,0.4893481);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(39,0.2128171);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetBinError(45,0.07791458);
   VH_DHZfirst_Z_jetmass_JEC__2153->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__2153->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__2153->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__2153->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__2153->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__2153->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_WW_DHZfirst_17->Modified();
   Z_jetmass_JEC_WW_DHZfirst_17->cd();
   Z_jetmass_JEC_WW_DHZfirst_17->SetSelected(Z_jetmass_JEC_WW_DHZfirst_17);
}
