#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_ZZ_DHZfirst_18()
{
//=========Macro generated from canvas: H_dR_Bj0_ZZ_DHZfirst_18/H_dR_Bj0_ZZ_DHZfirst_18
//=========  (Fri May 24 12:42:30 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_ZZ_DHZfirst_18 = new TCanvas("H_dR_Bj0_ZZ_DHZfirst_18", "H_dR_Bj0_ZZ_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_ZZ_DHZfirst_18->SetHighLightColor(2);
   H_dR_Bj0_ZZ_DHZfirst_18->Range(-1.2,-1.576945,6.8,14.1925);
   H_dR_Bj0_ZZ_DHZfirst_18->SetFillColor(0);
   H_dR_Bj0_ZZ_DHZfirst_18->SetFillStyle(4000);
   H_dR_Bj0_ZZ_DHZfirst_18->SetBorderMode(0);
   H_dR_Bj0_ZZ_DHZfirst_18->SetBorderSize(2);
   H_dR_Bj0_ZZ_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_Bj0_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_Bj0_ZZ_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_ZZ_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__1770 = new TH1D("VH_DHZfirst_H_dR_Bj0__1770","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(1,5.867701);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(2,12.01482);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(3,2.794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(4,0.8382431);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(5,0.8382431);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(6,1.117657);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(7,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(8,0.5588287);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(9,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(10,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(11,0.5588287);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(12,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinContent(16,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(1,1.280437);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(2,1.832242);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(3,0.8835858);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(4,0.4839599);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(5,0.4839599);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(6,0.5588287);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(7,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(8,0.3951516);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(9,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(10,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(11,0.3951516);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(12,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetBinError(16,0.2794144);
   VH_DHZfirst_H_dR_Bj0__1770->SetEntries(93);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__1770->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__1770->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__1770->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__1770->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1770->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1770->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1770->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__1770->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1770->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__1770->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__1770->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__1770->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1770->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__1770->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__1770->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__1770->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_ZZ_DHZfirst_18->Modified();
   H_dR_Bj0_ZZ_DHZfirst_18->cd();
   H_dR_Bj0_ZZ_DHZfirst_18->SetSelected(H_dR_Bj0_ZZ_DHZfirst_18);
}
