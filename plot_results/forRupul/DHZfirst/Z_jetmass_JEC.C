#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC()
{
//=========Macro generated from canvas: Z_jetmass_JEC/Z_jetmass_JEC
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC = new TCanvas("Z_jetmass_JEC", "Z_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC->SetHighLightColor(2);
   Z_jetmass_JEC->Range(-60,-0.01148526,340,0.1033674);
   Z_jetmass_JEC->SetFillColor(0);
   Z_jetmass_JEC->SetFillStyle(4000);
   Z_jetmass_JEC->SetBorderMode(0);
   Z_jetmass_JEC->SetBorderSize(2);
   Z_jetmass_JEC->SetLeftMargin(0.15);
   Z_jetmass_JEC->SetFrameFillStyle(1000);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   Z_jetmass_JEC->SetFrameFillStyle(1000);
   Z_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__72 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__72","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(6,0.03135554);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(7,0.04009668);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(8,0.0677309);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(9,0.05327431);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(10,0.07476317);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(11,0.08750676);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(12,0.03126823);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(13,0.01635877);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(14,0.01343374);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(15,0.0155733);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(16,0.008062342);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(17,0.0118617);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(18,0.009813601);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(19,0.01609673);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(21,0.003039891);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(22,0.01200512);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(23,0.001909916);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(31,0.002643217);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(48,0.002519259);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(6,0.01040196);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(7,0.01211042);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(8,0.01380625);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(9,0.01357267);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(10,0.01579373);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(11,0.02873891);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(12,0.008752885);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(13,0.006636684);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(14,0.006376182);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(15,0.00677726);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(16,0.004715069);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(17,0.006117986);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(18,0.00502493);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(19,0.006729145);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(21,0.003039891);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(22,0.007803871);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(23,0.001909916);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(31,0.002643217);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(48,0.002519259);
   VH_DHZfirst_Z_jetmass_JEC__72->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_jetmass_JEC__72->SetLineColor(ci);
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__72->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_jetmass_JEC__72->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_jetmass_JEC__72->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_jetmass_JEC__72->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC->Modified();
   Z_jetmass_JEC->cd();
   Z_jetmass_JEC->SetSelected(Z_jetmass_JEC);
}
