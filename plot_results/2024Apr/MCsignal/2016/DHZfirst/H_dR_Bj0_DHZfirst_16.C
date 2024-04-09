#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_DHZfirst_16()
{
//=========Macro generated from canvas: H_dR_Bj0_DHZfirst_16/H_dR_Bj0_DHZfirst_16
//=========  (Mon Apr  8 11:27:52 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_DHZfirst_16 = new TCanvas("H_dR_Bj0_DHZfirst_16", "H_dR_Bj0_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_DHZfirst_16->SetHighLightColor(2);
   H_dR_Bj0_DHZfirst_16->Range(-1.2,-0.02090359,6.8,0.1881323);
   H_dR_Bj0_DHZfirst_16->SetFillColor(0);
   H_dR_Bj0_DHZfirst_16->SetFillStyle(4000);
   H_dR_Bj0_DHZfirst_16->SetBorderMode(0);
   H_dR_Bj0_DHZfirst_16->SetBorderSize(2);
   H_dR_Bj0_DHZfirst_16->SetLeftMargin(0.15);
   H_dR_Bj0_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_Bj0_DHZfirst_16->SetFrameBorderMode(0);
   H_dR_Bj0_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_Bj0_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__175 = new TH1D("VH_DHZfirst_H_dR_Bj0__175","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(1,0.03082557);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(2,0.1592655);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(3,0.08220153);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(4,0.06421994);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(5,0.03596317);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(6,0.02311918);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(7,0.007706393);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(8,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(9,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(11,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(12,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(13,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(14,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(15,0.007706393);
   VH_DHZfirst_H_dR_Bj0__175->SetBinContent(17,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(1,0.008898577);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(2,0.02022673);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(3,0.01453131);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(4,0.01284399);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(5,0.009611561);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(6,0.007706393);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(7,0.004449288);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(8,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(9,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(11,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(12,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(13,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(14,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(15,0.004449288);
   VH_DHZfirst_H_dR_Bj0__175->SetBinError(17,0.002568798);
   VH_DHZfirst_H_dR_Bj0__175->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__175->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__175->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__175->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__175->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__175->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__175->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__175->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__175->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__175->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__175->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__175->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__175->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__175->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__175->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__175->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__175->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_DHZfirst_16->Modified();
   H_dR_Bj0_DHZfirst_16->cd();
   H_dR_Bj0_DHZfirst_16->SetSelected(H_dR_Bj0_DHZfirst_16);
}
