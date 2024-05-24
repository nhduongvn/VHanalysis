#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_JEC_DHZfirst_18()
{
//=========Macro generated from canvas: Z_jetmass_JEC_DHZfirst_18/Z_jetmass_JEC_DHZfirst_18
//=========  (Thu May 23 13:53:21 2024) by ROOT version 6.28/10
   TCanvas *Z_jetmass_JEC_DHZfirst_18 = new TCanvas("Z_jetmass_JEC_DHZfirst_18", "Z_jetmass_JEC_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_DHZfirst_18->SetHighLightColor(2);
   Z_jetmass_JEC_DHZfirst_18->Range(-60,-0.01545491,340,0.1390942);
   Z_jetmass_JEC_DHZfirst_18->SetFillColor(0);
   Z_jetmass_JEC_DHZfirst_18->SetFillStyle(4000);
   Z_jetmass_JEC_DHZfirst_18->SetBorderMode(0);
   Z_jetmass_JEC_DHZfirst_18->SetBorderSize(2);
   Z_jetmass_JEC_DHZfirst_18->SetLeftMargin(0.15);
   Z_jetmass_JEC_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_DHZfirst_18->SetFrameBorderMode(0);
   Z_jetmass_JEC_DHZfirst_18->SetFrameFillStyle(1000);
   Z_jetmass_JEC_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_jetmass_JEC__72 = new TH1D("VH_DHZfirst_Z_jetmass_JEC__72","",150,0,300);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(5,0.009341444);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(6,0.05833443);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(7,0.08218827);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(8,0.1177517);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(9,0.08847803);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(10,0.05511408);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(11,0.04759023);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(12,0.03536667);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(13,0.02346872);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(14,0.006761718);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(15,0.02555675);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(16,0.0124499);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(17,0.007144044);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(18,0.01207648);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(19,0.007104928);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(22,0.004902721);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(23,0.006298755);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(26,0.002378946);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(28,0.002349545);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinContent(35,0.002976971);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(5,0.005422732);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(6,0.01370753);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(7,0.01621335);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(8,0.01832363);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(9,0.01917018);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(10,0.01294283);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(11,0.01160073);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(12,0.01084983);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(13,0.008171935);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(14,0.005006355);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(15,0.008847372);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(16,0.006254999);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(17,0.004209966);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(18,0.005510949);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(19,0.004110065);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(22,0.003474403);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(23,0.004462055);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(26,0.002378946);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(28,0.002349545);
   VH_DHZfirst_Z_jetmass_JEC__72->SetBinError(35,0.002976971);
   VH_DHZfirst_Z_jetmass_JEC__72->SetEntries(219);

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
   Z_jetmass_JEC_DHZfirst_18->Modified();
   Z_jetmass_JEC_DHZfirst_18->cd();
   Z_jetmass_JEC_DHZfirst_18->SetSelected(Z_jetmass_JEC_DHZfirst_18);
}
