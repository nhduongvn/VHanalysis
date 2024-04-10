#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dPhi_tagFirst_18()
{
//=========Macro generated from canvas: H_dPhi_tagFirst_18/H_dPhi_tagFirst_18
//=========  (Tue Apr  9 15:53:52 2024) by ROOT version 6.28/10
   TCanvas *H_dPhi_tagFirst_18 = new TCanvas("H_dPhi_tagFirst_18", "H_dPhi_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tagFirst_18->SetHighLightColor(2);
   H_dPhi_tagFirst_18->Range(-0.8,-0.13125,4.533333,1.18125);
   H_dPhi_tagFirst_18->SetFillColor(0);
   H_dPhi_tagFirst_18->SetFillStyle(4000);
   H_dPhi_tagFirst_18->SetBorderMode(0);
   H_dPhi_tagFirst_18->SetBorderSize(2);
   H_dPhi_tagFirst_18->SetLeftMargin(0.15);
   H_dPhi_tagFirst_18->SetFrameFillStyle(1000);
   H_dPhi_tagFirst_18->SetFrameBorderMode(0);
   H_dPhi_tagFirst_18->SetFrameFillStyle(1000);
   H_dPhi_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_dPhi__8 = new TH1D("VH_tagFirst_H_dPhi__8","",120,0,4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_dPhi__8->SetLineColor(ci);
   VH_tagFirst_H_dPhi__8->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VH_tagFirst_H_dPhi__8->GetXaxis()->SetRange(1,120);
   VH_tagFirst_H_dPhi__8->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_dPhi__8->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dPhi__8->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_dPhi__8->GetYaxis()->SetTitle("Events/0.033");
   VH_tagFirst_H_dPhi__8->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_dPhi__8->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_dPhi__8->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_dPhi__8->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_dPhi__8->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_dPhi__8->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_dPhi__8->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_dPhi__8->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_dPhi__8->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tagFirst_18->Modified();
   H_dPhi_tagFirst_18->cd();
   H_dPhi_tagFirst_18->SetSelected(H_dPhi_tagFirst_18);
}
