#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_WW_DHZfirst_18/Z_dR_Bj0_WW_DHZfirst_18
//=========  (Thu May 23 20:48:50 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WW_DHZfirst_18 = new TCanvas("Z_dR_Bj0_WW_DHZfirst_18", "Z_dR_Bj0_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WW_DHZfirst_18->SetHighLightColor(2);
   Z_dR_Bj0_WW_DHZfirst_18->Range(-1.2,-0.7503665,6.8,0.3491446);
   Z_dR_Bj0_WW_DHZfirst_18->SetFillColor(0);
   Z_dR_Bj0_WW_DHZfirst_18->SetFillStyle(4000);
   Z_dR_Bj0_WW_DHZfirst_18->SetBorderMode(0);
   Z_dR_Bj0_WW_DHZfirst_18->SetBorderSize(2);
   Z_dR_Bj0_WW_DHZfirst_18->SetLogy();
   Z_dR_Bj0_WW_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_Bj0_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_Bj0_WW_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1824 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1824","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinContent(1,0.9154711);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinContent(2,0.9154711);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinContent(4,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinContent(5,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinContent(6,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinContent(11,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinContent(15,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinError(1,0.6473358);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinError(2,0.6473358);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinError(4,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinError(5,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinError(6,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinError(11,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetBinError(15,0.4577355);
   VH_DHZfirst_Z_dR_Bj0__1824->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1824->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1824->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1824->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1824->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1824->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1824->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1824->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1824->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1824->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1824->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1824->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1824->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1824->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1824->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1824->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1824->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WW_DHZfirst_18->Modified();
   Z_dR_Bj0_WW_DHZfirst_18->cd();
   Z_dR_Bj0_WW_DHZfirst_18->SetSelected(Z_dR_Bj0_WW_DHZfirst_18);
}
