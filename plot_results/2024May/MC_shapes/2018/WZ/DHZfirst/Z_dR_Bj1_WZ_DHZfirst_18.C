#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj1_WZ_DHZfirst_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_WZ_DHZfirst_18/Z_dR_Bj1_WZ_DHZfirst_18
//=========  (Fri May 24 12:42:31 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj1_WZ_DHZfirst_18 = new TCanvas("Z_dR_Bj1_WZ_DHZfirst_18", "Z_dR_Bj1_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_WZ_DHZfirst_18->SetHighLightColor(2);
   Z_dR_Bj1_WZ_DHZfirst_18->Range(-1.2,-1.441148,6.8,12.97033);
   Z_dR_Bj1_WZ_DHZfirst_18->SetFillColor(0);
   Z_dR_Bj1_WZ_DHZfirst_18->SetFillStyle(4000);
   Z_dR_Bj1_WZ_DHZfirst_18->SetBorderMode(0);
   Z_dR_Bj1_WZ_DHZfirst_18->SetBorderSize(2);
   Z_dR_Bj1_WZ_DHZfirst_18->SetLeftMargin(0.15);
   Z_dR_Bj1_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_WZ_DHZfirst_18->SetFrameBorderMode(0);
   Z_dR_Bj1_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   Z_dR_Bj1_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj1__1857 = new TH1D("VH_DHZfirst_Z_dR_Bj1__1857","",30,0,6);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(1,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(2,8.14658);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(3,10.98017);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(4,4.604589);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(5,2.479394);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(6,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(7,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(8,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(10,0.7083982);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(11,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(13,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(15,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(19,0.7083982);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(21,1.062597);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(24,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinContent(27,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(1,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(2,1.698679);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(3,1.972097);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(4,1.277083);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(5,0.9371228);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(6,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(7,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(8,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(10,0.5009132);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(11,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(13,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(15,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(19,0.5009132);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(21,0.6134909);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(24,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetBinError(27,0.3541991);
   VH_DHZfirst_Z_dR_Bj1__1857->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj1__1857->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj1__1857->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VH_DHZfirst_Z_dR_Bj1__1857->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj1__1857->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1857->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1857->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1857->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj1__1857->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1857->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj1__1857->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj1__1857->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj1__1857->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1857->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj1__1857->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj1__1857->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj1__1857->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_WZ_DHZfirst_18->Modified();
   Z_dR_Bj1_WZ_DHZfirst_18->cd();
   Z_dR_Bj1_WZ_DHZfirst_18->SetSelected(Z_dR_Bj1_WZ_DHZfirst_18);
}
