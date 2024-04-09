#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_DHZfirst_16()
{
//=========Macro generated from canvas: Z_dR_DHZfirst_16/Z_dR_DHZfirst_16
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_DHZfirst_16 = new TCanvas("Z_dR_DHZfirst_16", "Z_dR_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_DHZfirst_16->SetHighLightColor(2);
   Z_dR_DHZfirst_16->Range(-1.2,-0.009863884,6.8,0.08877495);
   Z_dR_DHZfirst_16->SetFillColor(0);
   Z_dR_DHZfirst_16->SetFillStyle(4000);
   Z_dR_DHZfirst_16->SetBorderMode(0);
   Z_dR_DHZfirst_16->SetBorderSize(2);
   Z_dR_DHZfirst_16->SetLeftMargin(0.15);
   Z_dR_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_DHZfirst_16->SetFrameBorderMode(0);
   Z_dR_DHZfirst_16->SetFrameFillStyle(1000);
   Z_dR_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR__157 = new TH1D("VH_DHZfirst_Z_dR__157","",30,0,6);
   VH_DHZfirst_Z_dR__157->SetBinContent(3,0.04499568);
   VH_DHZfirst_Z_dR__157->SetBinContent(4,0.0751534);
   VH_DHZfirst_Z_dR__157->SetBinContent(5,0.06056539);
   VH_DHZfirst_Z_dR__157->SetBinContent(6,0.04795746);
   VH_DHZfirst_Z_dR__157->SetBinContent(7,0.01938046);
   VH_DHZfirst_Z_dR__157->SetBinContent(8,0.01197396);
   VH_DHZfirst_Z_dR__157->SetBinContent(9,0.003583264);
   VH_DHZfirst_Z_dR__157->SetBinContent(10,0.0023668);
   VH_DHZfirst_Z_dR__157->SetBinContent(11,0.005038248);
   VH_DHZfirst_Z_dR__157->SetBinContent(12,0.005838143);
   VH_DHZfirst_Z_dR__157->SetBinContent(13,0.001855691);
   VH_DHZfirst_Z_dR__157->SetBinContent(14,0.002002857);
   VH_DHZfirst_Z_dR__157->SetBinContent(16,0.004206278);
   VH_DHZfirst_Z_dR__157->SetBinContent(21,0.002094921);
   VH_DHZfirst_Z_dR__157->SetBinContent(25,0.007832363);
   VH_DHZfirst_Z_dR__157->SetBinContent(26,0.003507607);
   VH_DHZfirst_Z_dR__157->SetBinContent(27,0.003073364);
   VH_DHZfirst_Z_dR__157->SetBinContent(28,0.00781414);
   VH_DHZfirst_Z_dR__157->SetBinContent(29,0.01273002);
   VH_DHZfirst_Z_dR__157->SetBinError(3,0.009741061);
   VH_DHZfirst_Z_dR__157->SetBinError(4,0.01263113);
   VH_DHZfirst_Z_dR__157->SetBinError(5,0.01065962);
   VH_DHZfirst_Z_dR__157->SetBinError(6,0.009528283);
   VH_DHZfirst_Z_dR__157->SetBinError(7,0.005858571);
   VH_DHZfirst_Z_dR__157->SetBinError(8,0.004956879);
   VH_DHZfirst_Z_dR__157->SetBinError(9,0.002535371);
   VH_DHZfirst_Z_dR__157->SetBinError(10,0.0023668);
   VH_DHZfirst_Z_dR__157->SetBinError(11,0.002952246);
   VH_DHZfirst_Z_dR__157->SetBinError(12,0.003493202);
   VH_DHZfirst_Z_dR__157->SetBinError(13,0.001855691);
   VH_DHZfirst_Z_dR__157->SetBinError(14,0.002002857);
   VH_DHZfirst_Z_dR__157->SetBinError(16,0.002997011);
   VH_DHZfirst_Z_dR__157->SetBinError(21,0.002094921);
   VH_DHZfirst_Z_dR__157->SetBinError(25,0.004039777);
   VH_DHZfirst_Z_dR__157->SetBinError(26,0.002499211);
   VH_DHZfirst_Z_dR__157->SetBinError(27,0.002184863);
   VH_DHZfirst_Z_dR__157->SetBinError(28,0.003919512);
   VH_DHZfirst_Z_dR__157->SetBinError(29,0.005221628);
   VH_DHZfirst_Z_dR__157->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR__157->SetLineColor(ci);
   VH_DHZfirst_Z_dR__157->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VH_DHZfirst_Z_dR__157->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR__157->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__157->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__157->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__157->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR__157->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__157->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR__157->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR__157->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR__157->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__157->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR__157->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR__157->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR__157->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_DHZfirst_16->Modified();
   Z_dR_DHZfirst_16->cd();
   Z_dR_DHZfirst_16->SetSelected(Z_dR_DHZfirst_16);
}
