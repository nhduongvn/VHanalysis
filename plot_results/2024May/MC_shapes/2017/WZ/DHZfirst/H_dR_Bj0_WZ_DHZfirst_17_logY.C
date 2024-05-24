#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_WZ_DHZfirst_17/H_dR_Bj0_WZ_DHZfirst_17
//=========  (Thu May 23 20:48:49 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WZ_DHZfirst_17 = new TCanvas("H_dR_Bj0_WZ_DHZfirst_17", "H_dR_Bj0_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WZ_DHZfirst_17->SetHighLightColor(2);
   H_dR_Bj0_WZ_DHZfirst_17->Range(-1.2,-1.241108,6.8,1.572238);
   H_dR_Bj0_WZ_DHZfirst_17->SetFillColor(0);
   H_dR_Bj0_WZ_DHZfirst_17->SetFillStyle(4000);
   H_dR_Bj0_WZ_DHZfirst_17->SetBorderMode(0);
   H_dR_Bj0_WZ_DHZfirst_17->SetBorderSize(2);
   H_dR_Bj0_WZ_DHZfirst_17->SetLogy();
   H_dR_Bj0_WZ_DHZfirst_17->SetLeftMargin(0.15);
   H_dR_Bj0_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj0_WZ_DHZfirst_17->SetFrameBorderMode(0);
   H_dR_Bj0_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   H_dR_Bj0_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1766 = new TH1D("VH_DHZfirst_H_dR_Bj0__1766","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(1,5.046429);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(2,10.31227);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(3,3.510559);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(4,1.31646);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(5,0.6582298);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(6,0.2194099);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(7,0.8776398);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(8,0.4388199);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(10,0.2194099);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(13,0.2194099);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinContent(21,0.2194099);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(1,1.052253);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(2,1.504199);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(3,0.8776398);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(4,0.5374424);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(5,0.3800292);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(6,0.2194099);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(7,0.4388199);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(8,0.3102925);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(10,0.2194099);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(13,0.2194099);
   VH_DHZfirst_H_dR_Bj0__1766->SetBinError(21,0.2194099);
   VH_DHZfirst_H_dR_Bj0__1766->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1766->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1766->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1766->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1766->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1766->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1766->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1766->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1766->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1766->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1766->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1766->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1766->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1766->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1766->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1766->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1766->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WZ_DHZfirst_17->Modified();
   H_dR_Bj0_WZ_DHZfirst_17->cd();
   H_dR_Bj0_WZ_DHZfirst_17->SetSelected(H_dR_Bj0_WZ_DHZfirst_17);
}
