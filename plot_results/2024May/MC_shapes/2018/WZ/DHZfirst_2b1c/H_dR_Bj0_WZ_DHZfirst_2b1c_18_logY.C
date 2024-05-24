#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WZ_DHZfirst_2b1c_18_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_WZ_DHZfirst_2b1c_18/H_dR_Bj0_WZ_DHZfirst_2b1c_18
//=========  (Thu May 23 20:49:23 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WZ_DHZfirst_2b1c_18 = new TCanvas("H_dR_Bj0_WZ_DHZfirst_2b1c_18", "H_dR_Bj0_WZ_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetHighLightColor(2);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->Range(-1.2,-1.095388,6.8,2.340663);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetFillColor(0);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetFillStyle(4000);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetBorderMode(0);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetBorderSize(2);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetLogy();
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_H_dR_Bj0__3927 = new TH1D("VH_DHZfirst_2b1c_H_dR_Bj0__3927","",30,0,6);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(1,33.29472);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(2,52.42147);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(3,17.70996);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(4,10.62597);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(5,2.479394);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(6,5.667186);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(7,3.89619);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(8,3.187792);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(9,1.770996);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(10,2.833593);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(11,1.416796);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(12,1.416796);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(13,0.7083982);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinContent(18,0.3541991);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(1,3.434088);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(2,4.309018);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(3,2.504566);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(4,1.940028);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(5,0.9371228);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(6,1.416796);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(7,1.174746);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(8,1.062597);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(9,0.7920133);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(10,1.001826);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(11,0.7083982);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(12,0.7083982);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(13,0.5009132);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetBinError(18,0.3541991);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetEntries(389);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->SetLineColor(ci);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3927->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->Modified();
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->cd();
   H_dR_Bj0_WZ_DHZfirst_2b1c_18->SetSelected(H_dR_Bj0_WZ_DHZfirst_2b1c_18);
}
