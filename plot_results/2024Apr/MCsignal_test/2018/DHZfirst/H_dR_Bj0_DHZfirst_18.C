#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_DHZfirst_18()
{
//=========Macro generated from canvas: H_dR_Bj0_DHZfirst_18/H_dR_Bj0_DHZfirst_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_DHZfirst_18 = new TCanvas("H_dR_Bj0_DHZfirst_18", "H_dR_Bj0_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_DHZfirst_18->SetHighLightColor(2);
   H_dR_Bj0_DHZfirst_18->Range(-1.2,-9678.876,6.8,87109.88);
   H_dR_Bj0_DHZfirst_18->SetFillColor(0);
   H_dR_Bj0_DHZfirst_18->SetFillStyle(4000);
   H_dR_Bj0_DHZfirst_18->SetBorderMode(0);
   H_dR_Bj0_DHZfirst_18->SetBorderSize(2);
   H_dR_Bj0_DHZfirst_18->SetLeftMargin(0.15);
   H_dR_Bj0_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_DHZfirst_18->SetFrameBorderMode(0);
   H_dR_Bj0_DHZfirst_18->SetFrameFillStyle(1000);
   H_dR_Bj0_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_dR_Bj0__59 = new TH1D("VH_DHZfirst_H_dR_Bj0__59","",30,0,6);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(1,3013.829);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(2,73743.81);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(3,17765.89);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(4,15975.21);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(5,1048.234);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(6,1048.234);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(7,524.1172);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(10,524.1172);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(12,305.7868);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(13,524.1172);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(14,7310.592);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(15,524.1172);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(17,305.7868);
   VH_DHZfirst_H_dR_Bj0__59->SetBinContent(18,587.6891);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(1,1174.441);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(2,61474.44);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(3,10418.14);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(4,10369.78);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(5,741.2136);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(6,741.2136);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(7,524.1172);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(10,524.1172);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(12,305.7868);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(13,524.1172);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(14,7310.592);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(15,524.1172);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(17,305.7868);
   VH_DHZfirst_H_dR_Bj0__59->SetBinError(18,587.6891);
   VH_DHZfirst_H_dR_Bj0__59->SetEntries(46);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_dR_Bj0__59->SetLineColor(ci);
   VH_DHZfirst_H_dR_Bj0__59->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_DHZfirst_H_dR_Bj0__59->GetXaxis()->SetRange(1,30);
   VH_DHZfirst_H_dR_Bj0__59->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__59->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__59->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__59->GetYaxis()->SetTitle("Events/0.2");
   VH_DHZfirst_H_dR_Bj0__59->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__59->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_dR_Bj0__59->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_dR_Bj0__59->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_dR_Bj0__59->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__59->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_dR_Bj0__59->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_dR_Bj0__59->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_dR_Bj0__59->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_DHZfirst_18->Modified();
   H_dR_Bj0_DHZfirst_18->cd();
   H_dR_Bj0_DHZfirst_18->SetSelected(H_dR_Bj0_DHZfirst_18);
}
