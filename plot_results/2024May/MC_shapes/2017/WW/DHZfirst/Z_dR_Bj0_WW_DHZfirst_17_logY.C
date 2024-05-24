#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_WW_DHZfirst_17/Z_dR_Bj0_WW_DHZfirst_17
//=========  (Thu May 23 20:48:50 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WW_DHZfirst_17 = new TCanvas("Z_dR_Bj0_WW_DHZfirst_17", "Z_dR_Bj0_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WW_DHZfirst_17->SetHighLightColor(2);
   Z_dR_Bj0_WW_DHZfirst_17->Range(-1.2,-1.015086,6.8,0.5818505);
   Z_dR_Bj0_WW_DHZfirst_17->SetFillColor(0);
   Z_dR_Bj0_WW_DHZfirst_17->SetFillStyle(4000);
   Z_dR_Bj0_WW_DHZfirst_17->SetBorderMode(0);
   Z_dR_Bj0_WW_DHZfirst_17->SetBorderSize(2);
   Z_dR_Bj0_WW_DHZfirst_17->SetLogy();
   Z_dR_Bj0_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_Bj0_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_Bj0_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1823 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1823","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinContent(1,0.5580434);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinContent(2,1.395108);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinContent(3,0.5580434);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinContent(4,0.2790217);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinContent(6,0.5580434);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinContent(9,0.2790217);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinContent(14,0.2790217);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinContent(24,0.2790217);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinError(1,0.3945962);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinError(2,0.6239115);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinError(3,0.3945962);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinError(4,0.2790217);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinError(6,0.3945962);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinError(9,0.2790217);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinError(14,0.2790217);
   VH_DHZfirst_Z_dR_Bj0__1823->SetBinError(24,0.2790217);
   VH_DHZfirst_Z_dR_Bj0__1823->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1823->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1823->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1823->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1823->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1823->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1823->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1823->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1823->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1823->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1823->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1823->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1823->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1823->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1823->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1823->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1823->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WW_DHZfirst_17->Modified();
   Z_dR_Bj0_WW_DHZfirst_17->cd();
   Z_dR_Bj0_WW_DHZfirst_17->SetSelected(Z_dR_Bj0_WW_DHZfirst_17);
}
