#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WZ_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_WZ_DHZfirst_18/Z_dR_Bj0_WZ_DHZfirst_18
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WZ_DHZfirst_18 = new TCanvas("Z_dR_Bj0_WZ_DHZfirst_18", "Z_dR_Bj0_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WZ_DHZfirst_18->SetHighLightColor(2);
   Z_dR_Bj0_WZ_DHZfirst_18->Range(-1.2,-1.906034,6.8,17.15431);
   Z_dR_Bj0_WZ_DHZfirst_18->SetFillColor(0);
   Z_dR_Bj0_WZ_DHZfirst_18->SetFillStyle(4000);
   Z_dR_Bj0_WZ_DHZfirst_18->SetBorderMode(0);
   Z_dR_Bj0_WZ_DHZfirst_18->SetBorderSize(2);
   Z_dR_Bj0_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_Bj0_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_Bj0_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj0_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1827 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1827","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(1,5.667186);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(2,14.52216);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(3,5.312987);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(4,1.770996);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(5,1.416796);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(6,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(7,0.7083982);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(8,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(10,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(11,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(13,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(15,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinContent(19,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(1,1.416796);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(2,2.267981);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(3,1.371807);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(4,0.7920133);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(5,0.7083982);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(6,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(7,0.5009132);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(8,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(10,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(11,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(13,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(15,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetBinError(19,0.3541991);
   VH_DHZfirst_Z_dR_Bj0__1827->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1827->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1827->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1827->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1827->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1827->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1827->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1827->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1827->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1827->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1827->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1827->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1827->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1827->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1827->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1827->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1827->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WZ_DHZfirst_18->Modified();
   Z_dR_Bj0_WZ_DHZfirst_18->cd();
   Z_dR_Bj0_WZ_DHZfirst_18->SetSelected(Z_dR_Bj0_WZ_DHZfirst_18);
}
