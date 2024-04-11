#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_tagFirst_2combo_18()
{
//=========Macro generated from canvas: dPhi_HZ_tagFirst_2combo_18/dPhi_HZ_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:09 2024) by ROOT version 6.28/10
   TCanvas *dPhi_HZ_tagFirst_2combo_18 = new TCanvas("dPhi_HZ_tagFirst_2combo_18", "dPhi_HZ_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tagFirst_2combo_18->SetHighLightColor(2);
   dPhi_HZ_tagFirst_2combo_18->Range(-5.6,-108.4768,5.066667,976.2907);
   dPhi_HZ_tagFirst_2combo_18->SetFillColor(0);
   dPhi_HZ_tagFirst_2combo_18->SetFillStyle(4000);
   dPhi_HZ_tagFirst_2combo_18->SetBorderMode(0);
   dPhi_HZ_tagFirst_2combo_18->SetBorderSize(2);
   dPhi_HZ_tagFirst_2combo_18->SetLeftMargin(0.15);
   dPhi_HZ_tagFirst_2combo_18->SetFrameFillStyle(1000);
   dPhi_HZ_tagFirst_2combo_18->SetFrameBorderMode(0);
   dPhi_HZ_tagFirst_2combo_18->SetFrameFillStyle(1000);
   dPhi_HZ_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_dPhi_HZ__105 = new TH1D("VH_tagFirst_2combo_dPhi_HZ__105","",480,-4,4);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(55,826.4895);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(94,690.8691);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(197,249.8734);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(342,428.6841);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(55,826.4895);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(94,690.8691);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(197,249.8734);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(342,428.6841);
   VH_tagFirst_2combo_dPhi_HZ__105->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_dPhi_HZ__105->SetLineColor(ci);
   VH_tagFirst_2combo_dPhi_HZ__105->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VH_tagFirst_2combo_dPhi_HZ__105->GetXaxis()->SetRange(1,480);
   VH_tagFirst_2combo_dPhi_HZ__105->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dPhi_HZ__105->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_dPhi_HZ__105->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dPhi_HZ__105->GetYaxis()->SetTitle("Events/0.017");
   VH_tagFirst_2combo_dPhi_HZ__105->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dPhi_HZ__105->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_dPhi_HZ__105->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_dPhi_HZ__105->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_dPhi_HZ__105->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dPhi_HZ__105->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dPhi_HZ__105->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_dPhi_HZ__105->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dPhi_HZ__105->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tagFirst_2combo_18->Modified();
   dPhi_HZ_tagFirst_2combo_18->cd();
   dPhi_HZ_tagFirst_2combo_18->SetSelected(dPhi_HZ_tagFirst_2combo_18);
}
