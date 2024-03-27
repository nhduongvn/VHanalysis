#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC()
{
//=========Macro generated from canvas: H_jetmass_noJEC/H_jetmass_noJEC
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC = new TCanvas("H_jetmass_noJEC", "H_jetmass_noJEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC->SetHighLightColor(2);
   H_jetmass_noJEC->Range(-60,-0.01202639,340,0.1082375);
   H_jetmass_noJEC->SetFillColor(0);
   H_jetmass_noJEC->SetFillStyle(4000);
   H_jetmass_noJEC->SetBorderMode(0);
   H_jetmass_noJEC->SetBorderSize(2);
   H_jetmass_noJEC->SetLeftMargin(0.15);
   H_jetmass_noJEC->SetFrameFillStyle(1000);
   H_jetmass_noJEC->SetFrameBorderMode(0);
   H_jetmass_noJEC->SetFrameFillStyle(1000);
   H_jetmass_noJEC->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_noJEC__67 = new TH1D("VH_DHZfirst_H_jetmass_noJEC__67","",150,0,300);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(4,0.008838846);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(5,0.01182296);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(6,0.04621491);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(7,0.05708943);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(8,0.09162962);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(9,0.04874866);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(10,0.0635213);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(11,0.06388691);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(12,0.02663594);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(13,0.01201578);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(14,0.01606882);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(15,0.01199028);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(16,0.01620014);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(18,0.00825598);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(19,0.004545222);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(22,0.002356188);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(24,0.001016603);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(25,0.003879109);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinContent(28,0.004596462);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(4,0.005119806);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(5,0.005403269);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(6,0.01268879);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(7,0.01416971);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(8,0.01599678);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(9,0.01306264);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(10,0.01512808);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(11,0.02731357);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(12,0.008758572);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(13,0.005856668);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(14,0.00669653);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(15,0.005450988);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(16,0.007034301);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(18,0.004779773);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(19,0.003217037);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(22,0.002356188);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(24,0.001016603);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(25,0.003879109);
   VH_DHZfirst_H_jetmass_noJEC__67->SetBinError(28,0.004596462);
   VH_DHZfirst_H_jetmass_noJEC__67->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_noJEC__67->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__67->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_noJEC__67->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__67->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__67->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC->Modified();
   H_jetmass_noJEC->cd();
   H_jetmass_noJEC->SetSelected(H_jetmass_noJEC);
}
