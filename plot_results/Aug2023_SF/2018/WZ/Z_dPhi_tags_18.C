#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dPhi_tags_18()
{
//=========Macro generated from canvas: Z_dPhi_tags_18/Z_dPhi_tags_18
//=========  (Fri Sep  1 13:34:42 2023) by ROOT version 6.28/04
   TCanvas *Z_dPhi_tags_18 = new TCanvas("Z_dPhi_tags_18", "Z_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_18->SetHighLightColor(2);
   Z_dPhi_tags_18->Range(-0.8,-0.2903683,4.533333,2.613315);
   Z_dPhi_tags_18->SetFillColor(0);
   Z_dPhi_tags_18->SetBorderMode(0);
   Z_dPhi_tags_18->SetBorderSize(2);
   Z_dPhi_tags_18->SetLeftMargin(0.15);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi__100 = new TH1D("VbbHcc_tags_Z_dPhi__100","",120,0,4);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(0,8.953835);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(1,0.4220562);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(2,0.4748496);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(5,1.610355);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(6,0.6214135);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(13,0.1162559);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(14,0.5511003);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(16,1.066253);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(20,0.5183212);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(23,0.7371838);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(24,1.508123);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(28,0.6794818);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(30,0.5616047);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(49,0.3908613);
   VbbHcc_tags_Z_dPhi__100->SetBinContent(55,2.21233);
   VbbHcc_tags_Z_dPhi__100->SetBinError(0,2.912145);
   VbbHcc_tags_Z_dPhi__100->SetBinError(1,0.4220562);
   VbbHcc_tags_Z_dPhi__100->SetBinError(2,0.4748496);
   VbbHcc_tags_Z_dPhi__100->SetBinError(5,1.610355);
   VbbHcc_tags_Z_dPhi__100->SetBinError(6,0.6214135);
   VbbHcc_tags_Z_dPhi__100->SetBinError(13,0.1162559);
   VbbHcc_tags_Z_dPhi__100->SetBinError(14,0.5511003);
   VbbHcc_tags_Z_dPhi__100->SetBinError(16,1.066253);
   VbbHcc_tags_Z_dPhi__100->SetBinError(20,0.5183212);
   VbbHcc_tags_Z_dPhi__100->SetBinError(23,0.7371838);
   VbbHcc_tags_Z_dPhi__100->SetBinError(24,1.067784);
   VbbHcc_tags_Z_dPhi__100->SetBinError(28,0.6794818);
   VbbHcc_tags_Z_dPhi__100->SetBinError(30,0.5616047);
   VbbHcc_tags_Z_dPhi__100->SetBinError(49,0.3908613);
   VbbHcc_tags_Z_dPhi__100->SetBinError(55,2.21233);
   VbbHcc_tags_Z_dPhi__100->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dPhi__100->SetFillColor(ci);
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dPhi__100->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__100->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__100->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__100->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi__100->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_dPhi__100->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi__100->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_tags_18->Modified();
   Z_dPhi_tags_18->cd();
   Z_dPhi_tags_18->SetSelected(Z_dPhi_tags_18);
}
