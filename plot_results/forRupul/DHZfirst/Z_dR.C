#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR()
{
//=========Macro generated from canvas: Z_dR/Z_dR
//=========  (Wed Mar 27 16:46:17 2024) by ROOT version 6.28/10
   TCanvas *Z_dR = new TCanvas("Z_dR", "Z_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR->SetHighLightColor(2);
   Z_dR->Range(-1.2,-0.01825301,6.8,0.1642771);
   Z_dR->SetFillColor(0);
   Z_dR->SetFillStyle(4000);
   Z_dR->SetBorderMode(0);
   Z_dR->SetBorderSize(2);
   Z_dR->SetLeftMargin(0.15);
   Z_dR->SetFrameFillStyle(1000);
   Z_dR->SetFrameBorderMode(0);
   Z_dR->SetFrameFillStyle(1000);
   Z_dR->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__53 = new TH1D("VH_DHZfirst_Z_dR__53","",30,0,6);
   VH_DHZfirst_Z_dR__53->SetBinContent(3,0.1341095);
   VH_DHZfirst_Z_dR__53->SetBinContent(4,0.1390705);
   VH_DHZfirst_Z_dR__53->SetBinContent(5,0.1063576);
   VH_DHZfirst_Z_dR__53->SetBinContent(6,0.0426175);
   VH_DHZfirst_Z_dR__53->SetBinContent(7,0.005585551);
   VH_DHZfirst_Z_dR__53->SetBinContent(8,0.004201174);
   VH_DHZfirst_Z_dR__53->SetBinContent(9,0.002519259);
   VH_DHZfirst_Z_dR__53->SetBinContent(12,0.001374794);
   VH_DHZfirst_Z_dR__53->SetBinContent(13,0.007731137);
   VH_DHZfirst_Z_dR__53->SetBinContent(14,0.005126152);
   VH_DHZfirst_Z_dR__53->SetBinContent(16,0.002900489);
   VH_DHZfirst_Z_dR__53->SetBinContent(18,0.002718868);
   VH_DHZfirst_Z_dR__53->SetBinContent(19,0.003379064);
   VH_DHZfirst_Z_dR__53->SetBinContent(20,0.002523228);
   VH_DHZfirst_Z_dR__53->SetBinContent(21,0.001673473);
   VH_DHZfirst_Z_dR__53->SetBinContent(22,0.003401715);
   VH_DHZfirst_Z_dR__53->SetBinContent(23,0.002287799);
   VH_DHZfirst_Z_dR__53->SetBinContent(24,0.003087417);
   VH_DHZfirst_Z_dR__53->SetBinContent(26,0.003177345);
   VH_DHZfirst_Z_dR__53->SetBinContent(27,0.005504555);
   VH_DHZfirst_Z_dR__53->SetBinContent(28,0.01454212);
   VH_DHZfirst_Z_dR__53->SetBinContent(29,0.002793086);
   VH_DHZfirst_Z_dR__53->SetBinContent(30,0.002630851);
   VH_DHZfirst_Z_dR__53->SetBinError(3,0.03132098);
   VH_DHZfirst_Z_dR__53->SetBinError(4,0.02126322);
   VH_DHZfirst_Z_dR__53->SetBinError(5,0.01893461);
   VH_DHZfirst_Z_dR__53->SetBinError(6,0.01152067);
   VH_DHZfirst_Z_dR__53->SetBinError(7,0.003416644);
   VH_DHZfirst_Z_dR__53->SetBinError(8,0.002971971);
   VH_DHZfirst_Z_dR__53->SetBinError(9,0.002519259);
   VH_DHZfirst_Z_dR__53->SetBinError(12,0.001374794);
   VH_DHZfirst_Z_dR__53->SetBinError(13,0.004562998);
   VH_DHZfirst_Z_dR__53->SetBinError(14,0.003626508);
   VH_DHZfirst_Z_dR__53->SetBinError(16,0.002900489);
   VH_DHZfirst_Z_dR__53->SetBinError(18,0.002718868);
   VH_DHZfirst_Z_dR__53->SetBinError(19,0.003379064);
   VH_DHZfirst_Z_dR__53->SetBinError(20,0.002523228);
   VH_DHZfirst_Z_dR__53->SetBinError(21,0.001673473);
   VH_DHZfirst_Z_dR__53->SetBinError(22,0.003401715);
   VH_DHZfirst_Z_dR__53->SetBinError(23,0.002287799);
   VH_DHZfirst_Z_dR__53->SetBinError(24,0.003087417);
   VH_DHZfirst_Z_dR__53->SetBinError(26,0.003177345);
   VH_DHZfirst_Z_dR__53->SetBinError(27,0.003942705);
   VH_DHZfirst_Z_dR__53->SetBinError(28,0.006529077);
   VH_DHZfirst_Z_dR__53->SetBinError(29,0.002793086);
   VH_DHZfirst_Z_dR__53->SetBinError(30,0.001932069);
   VH_DHZfirst_Z_dR__53->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__53->SetLineColor(ci);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__53->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__53->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__53->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__53->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR->Modified();
   Z_dR->cd();
   Z_dR->SetSelected(Z_dR);
}
