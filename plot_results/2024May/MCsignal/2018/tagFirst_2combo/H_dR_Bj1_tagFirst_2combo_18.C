#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tagFirst_2combo_18()
{
//=========Macro generated from canvas: H_dR_Bj1_tagFirst_2combo_18/H_dR_Bj1_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *H_dR_Bj1_tagFirst_2combo_18 = new TCanvas("H_dR_Bj1_tagFirst_2combo_18", "H_dR_Bj1_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tagFirst_2combo_18->SetHighLightColor(2);
   H_dR_Bj1_tagFirst_2combo_18->Range(-1.2,-0.001960674,6.8,0.01764607);
   H_dR_Bj1_tagFirst_2combo_18->SetFillColor(0);
   H_dR_Bj1_tagFirst_2combo_18->SetFillStyle(4000);
   H_dR_Bj1_tagFirst_2combo_18->SetBorderMode(0);
   H_dR_Bj1_tagFirst_2combo_18->SetBorderSize(2);
   H_dR_Bj1_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_dR_Bj1_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_dR_Bj1_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_dR_Bj1_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_dR_Bj1__108 = new TH1D("VH_tagFirst_2combo_H_dR_Bj1__108","",30,0,6);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinContent(2,0.01493847);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinContent(3,0.008536268);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinContent(4,0.006402201);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinContent(5,0.002134067);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinContent(7,0.002134067);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinContent(9,0.004268134);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinContent(12,0.002134067);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinContent(23,0.002134067);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinError(2,0.005646211);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinError(3,0.004268134);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinError(4,0.003696313);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinError(5,0.002134067);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinError(7,0.002134067);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinError(9,0.003018027);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinError(12,0.002134067);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetBinError(23,0.002134067);
   VH_tagFirst_2combo_H_dR_Bj1__108->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_dR_Bj1__108->SetLineColor(ci);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VH_tagFirst_2combo_H_dR_Bj1__108->GetXaxis()->SetRange(1,30);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetYaxis()->SetTitle("Events/0.2");
   VH_tagFirst_2combo_H_dR_Bj1__108->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_dR_Bj1__108->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_dR_Bj1__108->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tagFirst_2combo_18->Modified();
   H_dR_Bj1_tagFirst_2combo_18->cd();
   H_dR_Bj1_tagFirst_2combo_18->SetSelected(H_dR_Bj1_tagFirst_2combo_18);
}
