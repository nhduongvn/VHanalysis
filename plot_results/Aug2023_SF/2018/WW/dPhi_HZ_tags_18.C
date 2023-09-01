#ifdef __CLING__
#pragma cling optimize(0)
#endif
void dPhi_HZ_tags_18()
{
//=========Macro generated from canvas: dPhi_HZ_tags_18/dPhi_HZ_tags_18
//=========  (Fri Sep  1 13:34:44 2023) by ROOT version 6.28/04
   TCanvas *dPhi_HZ_tags_18 = new TCanvas("dPhi_HZ_tags_18", "dPhi_HZ_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tags_18->SetHighLightColor(2);
   dPhi_HZ_tags_18->Range(-5.6,-0.2726925,5.066667,2.454233);
   dPhi_HZ_tags_18->SetFillColor(0);
   dPhi_HZ_tags_18->SetBorderMode(0);
   dPhi_HZ_tags_18->SetBorderSize(2);
   dPhi_HZ_tags_18->SetLeftMargin(0.15);
   dPhi_HZ_tags_18->SetFrameBorderMode(0);
   dPhi_HZ_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dPhi_HZ__129 = new TH1D("VbbHcc_tags_dPhi_HZ__129","",480,-4,4);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(104,0.3810571);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(208,0.524235);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(225,2.077657);
   VbbHcc_tags_dPhi_HZ__129->SetBinContent(381,0.6909771);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(104,0.3810571);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(208,0.524235);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(225,2.077657);
   VbbHcc_tags_dPhi_HZ__129->SetBinError(381,0.6909771);
   VbbHcc_tags_dPhi_HZ__129->SetEntries(4);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tags_18->Modified();
   dPhi_HZ_tags_18->cd();
   dPhi_HZ_tags_18->SetSelected(dPhi_HZ_tags_18);
}
