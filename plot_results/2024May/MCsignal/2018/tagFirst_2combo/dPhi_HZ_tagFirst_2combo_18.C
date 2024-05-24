#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_tagFirst_2combo_18()
{
//=========Macro generated from canvas: dPhi_HZ_tagFirst_2combo_18/dPhi_HZ_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *dPhi_HZ_tagFirst_2combo_18 = new TCanvas("dPhi_HZ_tagFirst_2combo_18", "dPhi_HZ_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tagFirst_2combo_18->SetHighLightColor(2);
   dPhi_HZ_tagFirst_2combo_18->Range(-5.6,-0.000632995,5.066667,0.005696954);
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
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(121,0.001122139);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(148,0.002124915);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(182,0.002400052);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(191,0.002412888);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(192,0.002424007);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(196,0.001909916);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(200,0.004822818);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(207,0.002105444);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(208,0.002198887);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(215,0.002351008);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(219,0.002335104);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(238,0.00208343);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(246,0.004790387);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(247,0.002319012);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(248,0.002874786);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(253,0.002901436);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(270,0.002127519);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(279,0.002387506);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(280,0.001006722);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinContent(314,0.002476757);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(121,0.001122139);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(148,0.002124915);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(182,0.002400052);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(191,0.002412888);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(192,0.002424007);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(196,0.001909916);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(200,0.004822818);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(207,0.002105444);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(208,0.002198887);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(215,0.002351008);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(219,0.002335104);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(238,0.00208343);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(246,0.004790387);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(247,0.002319012);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(248,0.002874786);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(253,0.002901436);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(270,0.002127519);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(279,0.002387506);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(280,0.001006722);
   VH_tagFirst_2combo_dPhi_HZ__105->SetBinError(314,0.002476757);
   VH_tagFirst_2combo_dPhi_HZ__105->SetEntries(20);

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
