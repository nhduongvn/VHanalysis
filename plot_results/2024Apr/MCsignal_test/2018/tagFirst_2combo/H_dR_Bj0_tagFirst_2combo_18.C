#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj0_tagFirst_2combo_18()
{
//=========Macro generated from canvas: H_dR_Bj0_tagFirst_2combo_18/H_dR_Bj0_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj0_tagFirst_2combo_18 = new TCanvas("H_dR_Bj0_tagFirst_2combo_18", "H_dR_Bj0_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tagFirst_2combo_18->SetHighLightColor(2);
   H_dR_Bj0_tagFirst_2combo_18->Range(-1.2,-80.26904,6.8,722.4213);
   H_dR_Bj0_tagFirst_2combo_18->SetFillColor(0);
   H_dR_Bj0_tagFirst_2combo_18->SetFillStyle(4000);
   H_dR_Bj0_tagFirst_2combo_18->SetBorderMode(0);
   H_dR_Bj0_tagFirst_2combo_18->SetBorderSize(2);
   H_dR_Bj0_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_dR_Bj0_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_dR_Bj0_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_dR_Bj0_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_dR_Bj0__107 = new TH1D("VH_tagFirst_2combo_H_dR_Bj0__107","",30,0,6);
   VH_tagFirst_2combo_H_dR_Bj0__107->SetBinContent(4,611.5736);
   VH_tagFirst_2combo_H_dR_Bj0__107->SetBinContent(7,524.1172);
   VH_tagFirst_2combo_H_dR_Bj0__107->SetBinContent(10,305.7868);
   VH_tagFirst_2combo_H_dR_Bj0__107->SetBinError(4,432.4478);
   VH_tagFirst_2combo_H_dR_Bj0__107->SetBinError(7,524.1172);
   VH_tagFirst_2combo_H_dR_Bj0__107->SetBinError(10,305.7868);
   VH_tagFirst_2combo_H_dR_Bj0__107->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_dR_Bj0__107->SetLineColor(ci);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VH_tagFirst_2combo_H_dR_Bj0__107->GetXaxis()->SetRange(1,30);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_2combo_H_dR_Bj0__107->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_dR_Bj0__107->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR_Bj0__107->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tagFirst_2combo_18->Modified();
   H_dR_Bj0_tagFirst_2combo_18->cd();
   H_dR_Bj0_tagFirst_2combo_18->SetSelected(H_dR_Bj0_tagFirst_2combo_18);
}
