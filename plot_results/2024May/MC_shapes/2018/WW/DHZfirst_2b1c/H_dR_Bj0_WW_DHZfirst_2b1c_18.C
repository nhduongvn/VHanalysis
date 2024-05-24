#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_WW_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: H_dR_Bj0_WW_DHZfirst_2b1c_18/H_dR_Bj0_WW_DHZfirst_2b1c_18
//=========  (Fri May 24 12:43:05 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_WW_DHZfirst_2b1c_18 = new TCanvas("H_dR_Bj0_WW_DHZfirst_2b1c_18", "H_dR_Bj0_WW_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetHighLightColor(2);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->Range(-1.2,-0.6608557,6.8,5.947701);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetFillColor(0);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetFillStyle(4000);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetBorderSize(2);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_2b1c_H_dR_Bj0__3924 = new TH1D("VH_DHZfirst_2b1c_H_dR_Bj0__3924","",30,0,6);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(1,5.035091);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(2,4.577355);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(3,1.830942);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(4,2.288678);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(5,1.830942);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(6,1.373207);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(7,0.9154711);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(10,0.9154711);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(11,1.373207);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(13,0.4577355);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinContent(15,0.4577355);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(1,1.518137);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(2,1.447487);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(3,0.9154711);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(4,1.023528);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(5,0.9154711);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(6,0.7928212);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(7,0.6473358);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(10,0.6473358);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(11,0.7928212);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(13,0.4577355);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetBinError(15,0.4577355);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->SetLineColor(ci);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_2b1c_H_dR_Bj0__3924->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_WW_DHZfirst_2b1c_18->Modified();
   H_dR_Bj0_WW_DHZfirst_2b1c_18->cd();
   H_dR_Bj0_WW_DHZfirst_2b1c_18->SetSelected(H_dR_Bj0_WW_DHZfirst_2b1c_18);
}
