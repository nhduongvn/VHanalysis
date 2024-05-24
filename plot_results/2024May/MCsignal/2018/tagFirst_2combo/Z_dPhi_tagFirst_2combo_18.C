#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_tagFirst_2combo_18()
{
//=========Macro generated from canvas: Z_dPhi_tagFirst_2combo_18/Z_dPhi_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *Z_dPhi_tagFirst_2combo_18 = new TCanvas("Z_dPhi_tagFirst_2combo_18", "Z_dPhi_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tagFirst_2combo_18->SetHighLightColor(2);
   Z_dPhi_tagFirst_2combo_18->Range(-0.8,-0.001327169,4.533333,0.01194452);
   Z_dPhi_tagFirst_2combo_18->SetFillColor(0);
   Z_dPhi_tagFirst_2combo_18->SetFillStyle(4000);
   Z_dPhi_tagFirst_2combo_18->SetBorderMode(0);
   Z_dPhi_tagFirst_2combo_18->SetBorderSize(2);
   Z_dPhi_tagFirst_2combo_18->SetLeftMargin(0.15);
   Z_dPhi_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_dPhi_tagFirst_2combo_18->SetFrameBorderMode(0);
   Z_dPhi_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Z_dPhi_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Z_dPhi__103 = new TH1D("VH_tagFirst_2combo_Z_dPhi__103","",120,0,4);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(0,0.02224915);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(2,0.01011176);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(7,0.002351008);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(12,0.004108803);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(13,0.002476757);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(17,0.002424007);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(18,0.002319012);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(21,0.002127519);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinContent(34,0.001006722);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(0,0.007924344);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(2,0.006113762);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(7,0.002351008);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(12,0.002912539);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(13,0.002476757);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(17,0.002424007);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(18,0.002319012);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(21,0.002127519);
   VH_tagFirst_2combo_Z_dPhi__103->SetBinError(34,0.001006722);
   VH_tagFirst_2combo_Z_dPhi__103->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Z_dPhi__103->SetLineColor(ci);
   VH_tagFirst_2combo_Z_dPhi__103->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VH_tagFirst_2combo_Z_dPhi__103->GetXaxis()->SetRange(1,120);
   VH_tagFirst_2combo_Z_dPhi__103->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dPhi__103->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_dPhi__103->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dPhi__103->GetYaxis()->SetTitle("Events/0.033");
   VH_tagFirst_2combo_Z_dPhi__103->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dPhi__103->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Z_dPhi__103->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Z_dPhi__103->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Z_dPhi__103->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dPhi__103->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Z_dPhi__103->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Z_dPhi__103->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Z_dPhi__103->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_tagFirst_2combo_18->Modified();
   Z_dPhi_tagFirst_2combo_18->cd();
   Z_dPhi_tagFirst_2combo_18->SetSelected(Z_dPhi_tagFirst_2combo_18);
}
