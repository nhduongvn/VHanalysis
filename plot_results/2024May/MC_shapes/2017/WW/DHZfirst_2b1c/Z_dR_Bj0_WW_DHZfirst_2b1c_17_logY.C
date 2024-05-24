#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WW_DHZfirst_2b1c_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_WW_DHZfirst_2b1c_17/Z_dR_Bj0_WW_DHZfirst_2b1c_17
//=========  (Thu May 23 20:49:24 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WW_DHZfirst_2b1c_17 = new TCanvas("Z_dR_Bj0_WW_DHZfirst_2b1c_17", "Z_dR_Bj0_WW_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetHighLightColor(2);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->Range(-1.2,-1.078229,6.8,1.150144);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetFillColor(0);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetFillStyle(4000);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetBorderMode(0);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetBorderSize(2);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetLogy();
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_Z_dR_Bj0__3983 = new TH1D("VH_DHZfirst_2b1c_Z_dR_Bj0__3983","",30,0,6);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(1,2.790217);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(2,4.464347);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(3,3.906304);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(4,3.069239);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(5,1.395108);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(6,1.395108);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(7,0.8370651);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(8,1.116087);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(9,0.5580434);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(10,0.2790217);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(11,0.5580434);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(12,0.5580434);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(13,0.5580434);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(14,0.5580434);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinContent(24,0.2790217);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(1,0.882344);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(2,1.116087);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(3,1.044004);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(4,0.9254102);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(5,0.6239115);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(6,0.6239115);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(7,0.4832797);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(8,0.5580434);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(9,0.3945962);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(10,0.2790217);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(11,0.3945962);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(12,0.3945962);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(13,0.3945962);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(14,0.3945962);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetBinError(24,0.2790217);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetEntries(80);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->SetLineColor(ci);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_Z_dR_Bj0__3983->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->Modified();
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->cd();
   Z_dR_Bj0_WW_DHZfirst_2b1c_17->SetSelected(Z_dR_Bj0_WW_DHZfirst_2b1c_17);
}
