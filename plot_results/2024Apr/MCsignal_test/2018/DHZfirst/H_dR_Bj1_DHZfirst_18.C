#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_DHZfirst_18()
{
//=========Macro generated from canvas: H_dR_Bj1_DHZfirst_18/H_dR_Bj1_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj1_DHZfirst_18 = new TCanvas("H_dR_Bj1_DHZfirst_18", "H_dR_Bj1_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_DHZfirst_18->SetHighLightColor(2);
   H_dR_Bj1_DHZfirst_18->Range(-1.2,-10202.69,6.8,91824.22);
   H_dR_Bj1_DHZfirst_18->SetFillColor(0);
   H_dR_Bj1_DHZfirst_18->SetFillStyle(4000);
   H_dR_Bj1_DHZfirst_18->SetBorderMode(0);
   H_dR_Bj1_DHZfirst_18->SetBorderSize(2);
   H_dR_Bj1_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_Bj1_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj1_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_Bj1_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj1_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj1__60 = new TH1D("VH_DHZfirst_H_dR_Bj1__60","",30,0,6);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(2,829.904);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(3,77734.79);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(4,2271.382);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(5,9470.633);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(6,7616.379);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(7,1048.234);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(8,2096.469);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(9,1048.234);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(10,8358.826);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(12,524.1172);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(13,8882.944);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(14,305.7868);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(17,611.5736);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(19,829.904);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(21,1048.234);
   VH_DHZfirst_H_dR_Bj1__60->SetBinContent(23,524.1172);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(2,606.7985);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(3,61895.71);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(4,960.9474);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(5,7390.144);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(6,7316.984);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(7,741.2136);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(8,1048.234);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(9,741.2136);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(10,7348.071);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(12,524.1172);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(13,7366.74);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(14,305.7868);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(17,432.4478);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(19,606.7985);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(21,741.2136);
   VH_DHZfirst_H_dR_Bj1__60->SetBinError(23,524.1172);
   VH_DHZfirst_H_dR_Bj1__60->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj1__60->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj1__60->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VH_DHZfirst_H_dR_Bj1__60->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj1__60->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj1__60->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj1__60->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj1__60->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj1__60->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj1__60->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj1__60->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj1__60->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj1__60->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj1__60->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj1__60->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj1__60->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj1__60->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_DHZfirst_18->Modified();
   H_dR_Bj1_DHZfirst_18->cd();
   H_dR_Bj1_DHZfirst_18->SetSelected(H_dR_Bj1_DHZfirst_18);
}
