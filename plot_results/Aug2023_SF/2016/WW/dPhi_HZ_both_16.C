#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_both_16()
{
//=========Macro generated from canvas: dPhi_HZ_both_16/dPhi_HZ_both_16
//=========  (Fri Sep  1 13:23:43 2023) by ROOT version 6.28/04
   TCanvas *dPhi_HZ_both_16 = new TCanvas("dPhi_HZ_both_16", "dPhi_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_both_16->SetHighLightColor(2);
   dPhi_HZ_both_16->Range(-5.6,-0.01846816,5.066667,0.1662135);
   dPhi_HZ_both_16->SetFillColor(0);
   dPhi_HZ_both_16->SetBorderMode(0);
   dPhi_HZ_both_16->SetBorderSize(2);
   dPhi_HZ_both_16->SetLeftMargin(0.15);
   dPhi_HZ_both_16->SetFrameBorderMode(0);
   dPhi_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dPhi_HZ__849 = new TH1D("VbbHcc_both_dPhi_HZ__849","",480,-4,4);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(66,0.1158269);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(125,0.09694687);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(184,0.1336795);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(203,0.1081721);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(235,0.1407098);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(281,0.1005479);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(290,0.103617);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(339,0.1002972);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(342,0.1080661);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(355,0.1336153);
   VbbHcc_both_dPhi_HZ__849->SetBinContent(399,0.1147185);
   VbbHcc_both_dPhi_HZ__849->SetBinError(66,0.1158269);
   VbbHcc_both_dPhi_HZ__849->SetBinError(125,0.09694687);
   VbbHcc_both_dPhi_HZ__849->SetBinError(184,0.1336795);
   VbbHcc_both_dPhi_HZ__849->SetBinError(203,0.1081721);
   VbbHcc_both_dPhi_HZ__849->SetBinError(235,0.1407098);
   VbbHcc_both_dPhi_HZ__849->SetBinError(281,0.1005479);
   VbbHcc_both_dPhi_HZ__849->SetBinError(290,0.103617);
   VbbHcc_both_dPhi_HZ__849->SetBinError(339,0.1002972);
   VbbHcc_both_dPhi_HZ__849->SetBinError(342,0.1080661);
   VbbHcc_both_dPhi_HZ__849->SetBinError(355,0.1336153);
   VbbHcc_both_dPhi_HZ__849->SetBinError(399,0.1147185);
   VbbHcc_both_dPhi_HZ__849->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_dPhi_HZ__849->SetFillColor(ci);
   VbbHcc_both_dPhi_HZ__849->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VbbHcc_both_dPhi_HZ__849->GetXaxis()->SetRange(1,480);
   VbbHcc_both_dPhi_HZ__849->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ__849->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_dPhi_HZ__849->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ__849->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ__849->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ__849->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ__849->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_dPhi_HZ__849->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ__849->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_both_16->Modified();
   dPhi_HZ_both_16->cd();
   dPhi_HZ_both_16->SetSelected(dPhi_HZ_both_16);
}
