#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_WZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj1_WZ_DHZfirst_17/Z_dR_Bj1_WZ_DHZfirst_17
//=========  (Thu May 23 20:48:51 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_WZ_DHZfirst_17 = new TCanvas("Z_dR_Bj1_WZ_DHZfirst_17", "Z_dR_Bj1_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_WZ_DHZfirst_17->SetHighLightColor(2);
   Z_dR_Bj1_WZ_DHZfirst_17->Range(-1.2,-1.230979,6.8,1.481075);
   Z_dR_Bj1_WZ_DHZfirst_17->SetFillColor(0);
   Z_dR_Bj1_WZ_DHZfirst_17->SetFillStyle(4000);
   Z_dR_Bj1_WZ_DHZfirst_17->SetBorderMode(0);
   Z_dR_Bj1_WZ_DHZfirst_17->SetBorderSize(2);
   Z_dR_Bj1_WZ_DHZfirst_17->SetLogy();
   Z_dR_Bj1_WZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_Bj1_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_WZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_Bj1_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj1_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__1856 = new TH1D("VH_DHZfirst_Z_dR_Bj1__1856","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(2,6.801708);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(3,8.556988);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(4,2.852329);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(5,1.75528);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(7,0.6582298);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(8,0.6582298);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(10,0.4388199);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(16,0.2194099);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(17,0.2194099);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(21,0.4388199);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(24,0.2194099);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinContent(25,0.2194099);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(2,1.221623);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(3,1.370215);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(4,0.7910938);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(5,0.620585);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(7,0.3800292);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(8,0.3800292);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(10,0.3102925);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(16,0.2194099);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(17,0.2194099);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(21,0.3102925);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(24,0.2194099);
   VH_DHZfirst_Z_dR_Bj1__1856->SetBinError(25,0.2194099);
   VH_DHZfirst_Z_dR_Bj1__1856->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__1856->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__1856->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__1856->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__1856->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1856->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1856->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1856->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__1856->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1856->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__1856->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__1856->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__1856->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1856->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1856->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1856->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1856->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_WZ_DHZfirst_17->Modified();
   Z_dR_Bj1_WZ_DHZfirst_17->cd();
   Z_dR_Bj1_WZ_DHZfirst_17->SetSelected(Z_dR_Bj1_WZ_DHZfirst_17);
}
