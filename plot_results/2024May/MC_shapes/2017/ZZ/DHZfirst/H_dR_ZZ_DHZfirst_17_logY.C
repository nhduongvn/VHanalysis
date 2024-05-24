#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_ZZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_dR_ZZ_DHZfirst_17/H_dR_ZZ_DHZfirst_17
//=========  (Thu May 23 20:48:47 2024) by ROOT version 6.28/10
   TCanvas *H_dR_ZZ_DHZfirst_17 = new TCanvas("H_dR_ZZ_DHZfirst_17", "H_dR_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_ZZ_DHZfirst_17->SetHighLightColor(2);
   H_dR_ZZ_DHZfirst_17->Range(-1.24,-1.389062,7.026667,1.065094);
   H_dR_ZZ_DHZfirst_17->SetFillColor(0);
   H_dR_ZZ_DHZfirst_17->SetFillStyle(4000);
   H_dR_ZZ_DHZfirst_17->SetBorderMode(0);
   H_dR_ZZ_DHZfirst_17->SetBorderSize(2);
   H_dR_ZZ_DHZfirst_17->SetLogy();
   H_dR_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR__1619 = new TH1D("VH_DHZfirst_H_dR__1619","",30,0,6);
   VH_DHZfirst_H_dR__1619->SetBinContent(3,1.16864);
   VH_DHZfirst_H_dR__1619->SetBinContent(4,3.374443);
   VH_DHZfirst_H_dR__1619->SetBinContent(5,3.484414);
   VH_DHZfirst_H_dR__1619->SetBinContent(6,1.763439);
   VH_DHZfirst_H_dR__1619->SetBinContent(7,0.2228338);
   VH_DHZfirst_H_dR__1619->SetBinContent(9,0.1436757);
   VH_DHZfirst_H_dR__1619->SetBinContent(10,0.576744);
   VH_DHZfirst_H_dR__1619->SetBinContent(12,0.9480516);
   VH_DHZfirst_H_dR__1619->SetBinContent(13,0.7351614);
   VH_DHZfirst_H_dR__1619->SetBinContent(14,0.1877062);
   VH_DHZfirst_H_dR__1619->SetBinContent(17,0.2538322);
   VH_DHZfirst_H_dR__1619->SetBinContent(18,0.3537323);
   VH_DHZfirst_H_dR__1619->SetBinContent(19,0.1939696);
   VH_DHZfirst_H_dR__1619->SetBinContent(20,0.8447328);
   VH_DHZfirst_H_dR__1619->SetBinContent(21,0.8306416);
   VH_DHZfirst_H_dR__1619->SetBinContent(22,0.1456703);
   VH_DHZfirst_H_dR__1619->SetBinContent(23,1.371268);
   VH_DHZfirst_H_dR__1619->SetBinContent(24,0.2024638);
   VH_DHZfirst_H_dR__1619->SetBinContent(25,0.2795592);
   VH_DHZfirst_H_dR__1619->SetBinContent(27,0.3125863);
   VH_DHZfirst_H_dR__1619->SetBinContent(28,0.2003803);
   VH_DHZfirst_H_dR__1619->SetBinContent(29,1.240265);
   VH_DHZfirst_H_dR__1619->SetBinContent(30,0.2427793);
   VH_DHZfirst_H_dR__1619->SetBinError(3,0.4574936);
   VH_DHZfirst_H_dR__1619->SetBinError(4,1.320788);
   VH_DHZfirst_H_dR__1619->SetBinError(5,0.8120712);
   VH_DHZfirst_H_dR__1619->SetBinError(6,0.5690941);
   VH_DHZfirst_H_dR__1619->SetBinError(7,0.2228338);
   VH_DHZfirst_H_dR__1619->SetBinError(9,0.1436757);
   VH_DHZfirst_H_dR__1619->SetBinError(10,0.3336313);
   VH_DHZfirst_H_dR__1619->SetBinError(12,0.6655976);
   VH_DHZfirst_H_dR__1619->SetBinError(13,0.585378);
   VH_DHZfirst_H_dR__1619->SetBinError(14,0.1877062);
   VH_DHZfirst_H_dR__1619->SetBinError(17,0.2538322);
   VH_DHZfirst_H_dR__1619->SetBinError(18,0.3537323);
   VH_DHZfirst_H_dR__1619->SetBinError(19,0.1939696);
   VH_DHZfirst_H_dR__1619->SetBinError(20,0.6273507);
   VH_DHZfirst_H_dR__1619->SetBinError(21,0.4885157);
   VH_DHZfirst_H_dR__1619->SetBinError(22,0.1456703);
   VH_DHZfirst_H_dR__1619->SetBinError(23,0.7702848);
   VH_DHZfirst_H_dR__1619->SetBinError(24,0.2024638);
   VH_DHZfirst_H_dR__1619->SetBinError(25,0.2795592);
   VH_DHZfirst_H_dR__1619->SetBinError(27,0.2244214);
   VH_DHZfirst_H_dR__1619->SetBinError(28,0.2003803);
   VH_DHZfirst_H_dR__1619->SetBinError(29,0.5751713);
   VH_DHZfirst_H_dR__1619->SetBinError(30,0.2427793);
   VH_DHZfirst_H_dR__1619->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR__1619->SetLineColor(ci);
   VH_DHZfirst_H_dR__1619->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VH_DHZfirst_H_dR__1619->GetXaxis()->SetRange(1,31);
   VH_DHZfirst_H_dR__1619->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1619->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1619->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1619->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR__1619->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1619->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR__1619->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR__1619->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR__1619->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1619->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR__1619->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR__1619->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR__1619->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_ZZ_DHZfirst_17->Modified();
   H_dR_ZZ_DHZfirst_17->cd();
   H_dR_ZZ_DHZfirst_17->SetSelected(H_dR_ZZ_DHZfirst_17);
}
