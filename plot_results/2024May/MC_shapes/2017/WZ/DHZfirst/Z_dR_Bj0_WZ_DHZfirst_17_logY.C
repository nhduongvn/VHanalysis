#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_Bj0_WZ_DHZfirst_17_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_WZ_DHZfirst_17/Z_dR_Bj0_WZ_DHZfirst_17
//=========  (Thu May 23 20:48:50 2024) by ROOT version 6.28/10
   TCanvas *Z_dR_Bj0_WZ_DHZfirst_17 = new TCanvas("Z_dR_Bj0_WZ_DHZfirst_17", "Z_dR_Bj0_WZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_WZ_DHZfirst_17->SetHighLightColor(2);
   Z_dR_Bj0_WZ_DHZfirst_17->Range(-1.2,-1.243371,6.8,1.592598);
   Z_dR_Bj0_WZ_DHZfirst_17->SetFillColor(0);
   Z_dR_Bj0_WZ_DHZfirst_17->SetFillStyle(4000);
   Z_dR_Bj0_WZ_DHZfirst_17->SetBorderMode(0);
   Z_dR_Bj0_WZ_DHZfirst_17->SetBorderSize(2);
   Z_dR_Bj0_WZ_DHZfirst_17->SetLogy();
   Z_dR_Bj0_WZ_DHZfirst_17->SetLeftMargin(0.15);
   Z_dR_Bj0_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_WZ_DHZfirst_17->SetFrameBorderMode(0);
   Z_dR_Bj0_WZ_DHZfirst_17->SetFrameFillStyle(1000);
   Z_dR_Bj0_WZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_Z_dR_Bj0__1826 = new TH1D("VH_DHZfirst_Z_dR_Bj0__1826","",30,0,6);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(1,3.510559);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(2,10.75109);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(3,5.485248);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(4,1.09705);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(5,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(7,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(8,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(9,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(10,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(16,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(19,0.4388199);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(20,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinContent(21,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(1,0.8776398);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(2,1.53587);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(3,1.09705);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(4,0.4906155);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(5,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(7,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(8,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(9,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(10,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(16,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(19,0.3102925);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(20,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetBinError(21,0.2194099);
   VH_DHZfirst_Z_dR_Bj0__1826->SetEntries(105);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_Z_dR_Bj0__1826->SetLineColor(ci);
   VH_DHZfirst_Z_dR_Bj0__1826->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VH_DHZfirst_Z_dR_Bj0__1826->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_Z_dR_Bj0__1826->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1826->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1826->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1826->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_Z_dR_Bj0__1826->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1826->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_Z_dR_Bj0__1826->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_Z_dR_Bj0__1826->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_Z_dR_Bj0__1826->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1826->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_Z_dR_Bj0__1826->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_Z_dR_Bj0__1826->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_Z_dR_Bj0__1826->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_WZ_DHZfirst_17->Modified();
   Z_dR_Bj0_WZ_DHZfirst_17->cd();
   Z_dR_Bj0_WZ_DHZfirst_17->SetSelected(Z_dR_Bj0_WZ_DHZfirst_17);
}
