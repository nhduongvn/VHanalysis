#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WZ_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_WZ_DHZfirst_18/H_dR_Bj0_WZ_DHZfirst_18
//=========  (Thu May 23 20:48:50 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WZ_DHZfirst_18 = new TCanvas("H_dR_Bj0_WZ_DHZfirst_18", "H_dR_Bj0_WZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WZ_DHZfirst_18->SetHighLightColor(2);
   H_dR_Bj0_WZ_DHZfirst_18->Range(-1.2,-1.012249,6.8,1.592412);
   H_dR_Bj0_WZ_DHZfirst_18->SetFillColor(0);
   H_dR_Bj0_WZ_DHZfirst_18->SetFillStyle(4000);
   H_dR_Bj0_WZ_DHZfirst_18->SetBorderMode(0);
   H_dR_Bj0_WZ_DHZfirst_18->SetBorderSize(2);
   H_dR_Bj0_WZ_DHZfirst_18->SetLogy();
   H_dR_Bj0_WZ_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_Bj0_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_WZ_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_Bj0_WZ_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_WZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1767 = new TH1D("VH_DHZfirst_H_dR_Bj0__1767","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinContent(1,8.500779);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinContent(2,11.33437);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinContent(3,4.958788);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinContent(4,3.541991);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinContent(5,0.7083982);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinContent(6,1.062597);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinContent(7,0.3541991);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinContent(9,1.416796);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinError(1,1.735214);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinError(2,2.003653);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinError(3,1.325292);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinError(4,1.120076);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinError(5,0.5009132);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinError(6,0.6134909);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinError(7,0.3541991);
   VH_DHZfirst_H_dR_Bj0__1767->SetBinError(9,0.7083982);
   VH_DHZfirst_H_dR_Bj0__1767->SetEntries(90);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1767->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1767->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1767->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1767->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1767->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1767->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1767->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1767->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1767->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1767->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1767->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1767->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1767->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1767->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1767->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1767->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WZ_DHZfirst_18->Modified();
   H_dR_Bj0_WZ_DHZfirst_18->cd();
   H_dR_Bj0_WZ_DHZfirst_18->SetSelected(H_dR_Bj0_WZ_DHZfirst_18);
}
