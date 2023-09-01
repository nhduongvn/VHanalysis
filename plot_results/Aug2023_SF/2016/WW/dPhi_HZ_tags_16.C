#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_tags_16()
{
//=========Macro generated from canvas: dPhi_HZ_tags_16/dPhi_HZ_tags_16
//=========  (Fri Sep  1 13:23:32 2023) by ROOT version 6.28/04
   TCanvas *dPhi_HZ_tags_16 = new TCanvas("dPhi_HZ_tags_16", "dPhi_HZ_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tags_16->SetHighLightColor(2);
   dPhi_HZ_tags_16->Range(-5.6,-0.01846816,5.066667,0.1662135);
   dPhi_HZ_tags_16->SetFillColor(0);
   dPhi_HZ_tags_16->SetBorderMode(0);
   dPhi_HZ_tags_16->SetBorderSize(2);
   dPhi_HZ_tags_16->SetLeftMargin(0.15);
   dPhi_HZ_tags_16->SetFrameBorderMode(0);
   dPhi_HZ_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dPhi_HZ__129 = new TH1D("VbbHcc_tags_dPhi_HZ__129","",480,-4,4);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(84,0.1407098);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(148,0.1336153);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(179,0.1080661);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(186,0.1081721);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(251,0.1336795);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(272,0.1002972);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(290,0.1005479);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(294,0.09694687);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(303,0.1147185);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(392,0.103617);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(407,0.1158269);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(84,0.1407098);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(148,0.1336153);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(179,0.1080661);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(186,0.1081721);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(251,0.1336795);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(272,0.1002972);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(290,0.1005479);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(294,0.09694687);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(303,0.1147185);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(392,0.103617);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(407,0.1158269);
   VbbHcc_tags_dPhi_HZ__129->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_dPhi_HZ__129->SetFillColor(ci);
   VbbHcc_tags_dPhi_HZ__129->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VbbHcc_tags_dPhi_HZ__129->GetXaxis()->SetRange(1,480);
   VbbHcc_tags_dPhi_HZ__129->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ__129->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_dPhi_HZ__129->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ__129->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ__129->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ__129->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ__129->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_dPhi_HZ__129->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ__129->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tags_16->Modified();
   dPhi_HZ_tags_16->cd();
   dPhi_HZ_tags_16->SetSelected(dPhi_HZ_tags_16);
}
