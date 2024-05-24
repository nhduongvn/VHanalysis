#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dR_HZ_tagFirst_2combo_18()
{
//=========Macro generated from canvas: dR_HZ_tagFirst_2combo_18/dR_HZ_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *dR_HZ_tagFirst_2combo_18 = new TCanvas("dR_HZ_tagFirst_2combo_18", "dR_HZ_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tagFirst_2combo_18->SetHighLightColor(2);
   dR_HZ_tagFirst_2combo_18->Range(-1.22,-0.0009296317,6.913333,0.008366685);
   dR_HZ_tagFirst_2combo_18->SetFillColor(0);
   dR_HZ_tagFirst_2combo_18->SetFillStyle(4000);
   dR_HZ_tagFirst_2combo_18->SetBorderMode(0);
   dR_HZ_tagFirst_2combo_18->SetBorderSize(2);
   dR_HZ_tagFirst_2combo_18->SetLeftMargin(0.15);
   dR_HZ_tagFirst_2combo_18->SetFrameFillStyle(1000);
   dR_HZ_tagFirst_2combo_18->SetFrameBorderMode(0);
   dR_HZ_tagFirst_2combo_18->SetFrameFillStyle(1000);
   dR_HZ_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_dR_HZ__106 = new TH1D("VH_tagFirst_2combo_dR_HZ__106","",60,0,6);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(10,0.004822818);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(20,0.002105444);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(29,0.002901436);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(30,0.004326405);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(31,0.002874786);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(33,0.007082908);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(34,0.004297422);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(35,0.005215067);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(36,0.002476757);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(37,0.002335104);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(38,0.002424007);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(41,0.002400052);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(45,0.001122139);
   VH_tagFirst_2combo_dR_HZ__106->SetBinContent(53,0.004790387);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(10,0.004822818);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(20,0.002105444);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(29,0.002901436);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(30,0.003059647);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(31,0.002874786);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(33,0.004089876);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(34,0.003057444);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(35,0.003141565);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(36,0.002476757);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(37,0.002335104);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(38,0.002424007);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(41,0.002400052);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(45,0.001122139);
   VH_tagFirst_2combo_dR_HZ__106->SetBinError(53,0.004790387);
   VH_tagFirst_2combo_dR_HZ__106->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_dR_HZ__106->SetLineColor(ci);
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetRange(1,61);
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_dR_HZ__106->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetTitle("Events/0.1");
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_dR_HZ__106->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_dR_HZ__106->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_dR_HZ__106->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_dR_HZ__106->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tagFirst_2combo_18->Modified();
   dR_HZ_tagFirst_2combo_18->cd();
   dR_HZ_tagFirst_2combo_18->SetSelected(dR_HZ_tagFirst_2combo_18);
}
