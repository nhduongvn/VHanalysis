#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_ZZ_DHZfirst_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_ZZ_DHZfirst_17/Z_dR_Bj0_ZZ_DHZfirst_17
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_ZZ_DHZfirst_17 = new TCanvas("Z_dR_Bj0_ZZ_DHZfirst_17", "Z_dR_Bj0_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetHighLightColor(2);
   Z_dR_Bj0_ZZ_DHZfirst_17->Range(-1.2,-1.294093,6.8,11.64684);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetFillColor(0);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetFillStyle(4000);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetBorderMode(0);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetBorderSize(2);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1829 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1829","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(1,2.240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(2,9.859756);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(3,2.689024);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(4,1.120427);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(5,0.6722561);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(6,0.6722561);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(7,0.2240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(8,0.4481707);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(10,0.2240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(13,0.2240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinContent(20,0.2240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(1,0.7086201);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(2,1.486414);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(3,0.7762545);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(4,0.5010701);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(5,0.3881272);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(6,0.3881272);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(7,0.2240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(8,0.3169046);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(10,0.2240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(13,0.2240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetBinError(20,0.2240854);
   VH_DHZfirst_Z_dR_Bj0__1829->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1829->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1829->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1829->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1829->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1829->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1829->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1829->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1829->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1829->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1829->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1829->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1829->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1829->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1829->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1829->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1829->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_ZZ_DHZfirst_17->Modified();
   Z_dR_Bj0_ZZ_DHZfirst_17->cd();
   Z_dR_Bj0_ZZ_DHZfirst_17->SetSelected(Z_dR_Bj0_ZZ_DHZfirst_17);
}
