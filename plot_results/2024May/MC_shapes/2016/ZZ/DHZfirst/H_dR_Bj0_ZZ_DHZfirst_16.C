#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_ZZ_DHZfirst_16()
{
//=========Macro generated from canvas: H_dR_Bj0_ZZ_DHZfirst_16/H_dR_Bj0_ZZ_DHZfirst_16
//=========  (Fri May 24 12:42:30 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_ZZ_DHZfirst_16 = new TCanvas("H_dR_Bj0_ZZ_DHZfirst_16", "H_dR_Bj0_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_ZZ_DHZfirst_16->SetHighLightColor(2);
   H_dR_Bj0_ZZ_DHZfirst_16->Range(-1.2,-1.883336,6.8,16.95002);
   H_dR_Bj0_ZZ_DHZfirst_16->SetFillColor(0);
   H_dR_Bj0_ZZ_DHZfirst_16->SetFillStyle(4000);
   H_dR_Bj0_ZZ_DHZfirst_16->SetBorderMode(0);
   H_dR_Bj0_ZZ_DHZfirst_16->SetBorderSize(2);
   H_dR_Bj0_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   H_dR_Bj0_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_Bj0_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   H_dR_Bj0_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   H_dR_Bj0_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1768 = new TH1D("VH_DHZfirst_H_dR_Bj0__1768","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(1,8.998665);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(2,14.34922);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(3,5.350557);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(4,3.161693);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(5,0.7296215);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(6,2.188864);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(7,0.4864143);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(8,1.459243);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(9,0.2432072);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(10,0.4864143);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinContent(19,0.2432072);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(1,1.479371);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(2,1.86811);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(3,1.140743);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(4,0.8768959);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(5,0.4212471);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(6,0.7296215);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(7,0.3439469);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(8,0.5957334);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(9,0.2432072);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(10,0.3439469);
   VH_DHZfirst_H_dR_Bj0__1768->SetBinError(19,0.2432072);
   VH_DHZfirst_H_dR_Bj0__1768->SetEntries(155);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1768->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1768->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1768->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1768->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1768->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1768->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1768->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1768->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1768->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1768->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1768->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1768->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1768->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1768->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1768->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1768->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_ZZ_DHZfirst_16->Modified();
   H_dR_Bj0_ZZ_DHZfirst_16->cd();
   H_dR_Bj0_ZZ_DHZfirst_16->SetSelected(H_dR_Bj0_ZZ_DHZfirst_16);
}
