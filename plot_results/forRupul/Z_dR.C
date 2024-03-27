#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR()
{
//=========Macro generated from canvas: Z_dR/Z_dR
//=========  (Wed Mar 27 12:51:56 2024) by ROOT version 6.28/10
   TCanvas *Z_dR = new TCanvas("Z_dR", "Z_dR",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR->SetHighLightColor(2);
   Z_dR->Range(-1.2,-24.98556,6.8,224.87);
   Z_dR->SetFillColor(0);
   Z_dR->SetFillStyle(4000);
   Z_dR->SetBorderMode(0);
   Z_dR->SetBorderSize(2);
   Z_dR->SetLeftMargin(0.15);
   Z_dR->SetFrameFillStyle(1000);
   Z_dR->SetFrameBorderMode(0);
   Z_dR->SetFrameFillStyle(1000);
   Z_dR->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Z_dR__5 = new TH1D("VH_tagFirst_Z_dR__5","",30,0,6);
   VH_tagFirst_Z_dR__5->SetBinContent(3,139.7111);
   VH_tagFirst_Z_dR__5->SetBinContent(4,187.7864);
   VH_tagFirst_Z_dR__5->SetBinContent(5,190.3661);
   VH_tagFirst_Z_dR__5->SetBinContent(6,131.1979);
   VH_tagFirst_Z_dR__5->SetBinContent(7,95.1386);
   VH_tagFirst_Z_dR__5->SetBinContent(8,36.68298);
   VH_tagFirst_Z_dR__5->SetBinContent(9,32.0208);
   VH_tagFirst_Z_dR__5->SetBinContent(10,43.02978);
   VH_tagFirst_Z_dR__5->SetBinContent(11,32.98388);
   VH_tagFirst_Z_dR__5->SetBinContent(12,34.41436);
   VH_tagFirst_Z_dR__5->SetBinContent(13,32.6569);
   VH_tagFirst_Z_dR__5->SetBinContent(14,27.29856);
   VH_tagFirst_Z_dR__5->SetBinContent(15,29.8139);
   VH_tagFirst_Z_dR__5->SetBinContent(16,41.79755);
   VH_tagFirst_Z_dR__5->SetBinContent(17,21.83198);
   VH_tagFirst_Z_dR__5->SetBinContent(18,33.18125);
   VH_tagFirst_Z_dR__5->SetBinContent(19,21.62712);
   VH_tagFirst_Z_dR__5->SetBinContent(20,23.65892);
   VH_tagFirst_Z_dR__5->SetBinContent(21,25.67915);
   VH_tagFirst_Z_dR__5->SetBinContent(22,10.34471);
   VH_tagFirst_Z_dR__5->SetBinContent(23,10.06804);
   VH_tagFirst_Z_dR__5->SetBinContent(24,13.1662);
   VH_tagFirst_Z_dR__5->SetBinContent(25,15.98812);
   VH_tagFirst_Z_dR__5->SetBinContent(26,7.699321);
   VH_tagFirst_Z_dR__5->SetBinContent(27,31.3588);
   VH_tagFirst_Z_dR__5->SetBinContent(28,17.30045);
   VH_tagFirst_Z_dR__5->SetBinContent(29,13.72559);
   VH_tagFirst_Z_dR__5->SetBinContent(30,9.366951);
   VH_tagFirst_Z_dR__5->SetBinContent(31,11.39316);
   VH_tagFirst_Z_dR__5->SetBinError(3,18.50827);
   VH_tagFirst_Z_dR__5->SetBinError(4,17.1396);
   VH_tagFirst_Z_dR__5->SetBinError(5,19.96502);
   VH_tagFirst_Z_dR__5->SetBinError(6,13.89459);
   VH_tagFirst_Z_dR__5->SetBinError(7,12.33737);
   VH_tagFirst_Z_dR__5->SetBinError(8,7.323215);
   VH_tagFirst_Z_dR__5->SetBinError(9,7.191552);
   VH_tagFirst_Z_dR__5->SetBinError(10,12.85696);
   VH_tagFirst_Z_dR__5->SetBinError(11,7.605788);
   VH_tagFirst_Z_dR__5->SetBinError(12,7.295964);
   VH_tagFirst_Z_dR__5->SetBinError(13,6.932787);
   VH_tagFirst_Z_dR__5->SetBinError(14,6.597966);
   VH_tagFirst_Z_dR__5->SetBinError(15,6.426991);
   VH_tagFirst_Z_dR__5->SetBinError(16,8.648449);
   VH_tagFirst_Z_dR__5->SetBinError(17,5.541243);
   VH_tagFirst_Z_dR__5->SetBinError(18,6.846509);
   VH_tagFirst_Z_dR__5->SetBinError(19,5.568246);
   VH_tagFirst_Z_dR__5->SetBinError(20,6.403425);
   VH_tagFirst_Z_dR__5->SetBinError(21,7.219687);
   VH_tagFirst_Z_dR__5->SetBinError(22,4.090333);
   VH_tagFirst_Z_dR__5->SetBinError(23,3.966872);
   VH_tagFirst_Z_dR__5->SetBinError(24,4.498903);
   VH_tagFirst_Z_dR__5->SetBinError(25,5.458736);
   VH_tagFirst_Z_dR__5->SetBinError(26,3.33129);
   VH_tagFirst_Z_dR__5->SetBinError(27,10.95078);
   VH_tagFirst_Z_dR__5->SetBinError(28,4.853901);
   VH_tagFirst_Z_dR__5->SetBinError(29,4.492401);
   VH_tagFirst_Z_dR__5->SetBinError(30,3.374244);
   VH_tagFirst_Z_dR__5->SetBinError(31,5.013706);
   VH_tagFirst_Z_dR__5->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Z_dR__5->SetLineColor(ci);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_tagFirst_Z_dR__5->GetXaxis()->SetRange(1,30);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__5->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_Z_dR__5->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Z_dR__5->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Z_dR__5->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Z_dR__5->Draw("hist");
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
