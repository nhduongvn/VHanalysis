#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_WW_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_WW_DHZfirst_17/Z_dR_Bj1_WW_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_WW_DHZfirst_17 = new TCanvas("Z_dR_Bj1_WW_DHZfirst_17", "Z_dR_Bj1_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_WW_DHZfirst_17->SetHighLightColor(2);
   Z_dR_Bj1_WW_DHZfirst_17->Range(-1.2,-0.9873546,6.8,0.3322706);
   Z_dR_Bj1_WW_DHZfirst_17->SetFillColor(0);
   Z_dR_Bj1_WW_DHZfirst_17->SetFillStyle(4000);
   Z_dR_Bj1_WW_DHZfirst_17->SetBorderMode(0);
   Z_dR_Bj1_WW_DHZfirst_17->SetBorderSize(2);
   Z_dR_Bj1_WW_DHZfirst_17->SetLogy();
   Z_dR_Bj1_WW_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_Bj1_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_WW_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_Bj1_WW_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__1853 = new TH1D("VH_DHZfirst_Z_dR_Bj1__1853","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(2,0.5580434);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(3,0.5580434);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(5,0.5580434);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(6,0.8370651);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(7,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(10,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(11,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(14,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(18,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinContent(26,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(2,0.3945962);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(3,0.3945962);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(5,0.3945962);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(6,0.4832797);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(7,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(10,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(11,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(14,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(18,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetBinError(26,0.2790217);
   VH_DHZfirst_Z_dR_Bj1__1853->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__1853->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__1853->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__1853->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__1853->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1853->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1853->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1853->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__1853->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1853->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__1853->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__1853->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__1853->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1853->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1853->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1853->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1853->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_WW_DHZfirst_17->Modified();
   Z_dR_Bj1_WW_DHZfirst_17->cd();
   Z_dR_Bj1_WW_DHZfirst_17->SetSelected(Z_dR_Bj1_WW_DHZfirst_17);
}
