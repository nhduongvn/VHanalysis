#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_dR_cjets_truth_tags_bckg_17()
{
//=========Macro generated from canvas: eff_dR_cjets_truth_tags_bckg_17/eff_dR_cjets_truth_tags_bckg_17
//=========  (Fri Mar 10 12:51:53 2023) by ROOT version 6.26/06
   TCanvas *eff_dR_cjets_truth_tags_bckg_17 = new TCanvas("eff_dR_cjets_truth_tags_bckg_17", "eff_dR_cjets_truth_tags_bckg_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_dR_cjets_truth_tags_bckg_17->SetHighLightColor(2);
   eff_dR_cjets_truth_tags_bckg_17->Range(-1.2,-0.13125,6.8,1.18125);
   eff_dR_cjets_truth_tags_bckg_17->SetFillColor(0);
   eff_dR_cjets_truth_tags_bckg_17->SetBorderMode(0);
   eff_dR_cjets_truth_tags_bckg_17->SetBorderSize(2);
   eff_dR_cjets_truth_tags_bckg_17->SetLeftMargin(0.15);
   eff_dR_cjets_truth_tags_bckg_17->SetFrameBorderMode(0);
   eff_dR_cjets_truth_tags_bckg_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_eff_tags_dR_cjets_truth__10 = new TH1D("VbbHcc_eff_tags_dR_cjets_truth__10","",60,0,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_tags_dR_cjets_truth__10->SetLineColor(ci);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetXaxis()->SetTitle("#Delta R(c,c-jet)");
   VbbHcc_eff_tags_dR_cjets_truth__10->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_dR_cjets_truth__10->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_dR_cjets_truth__10->Draw("HIST");
   eff_dR_cjets_truth_tags_bckg_17->Modified();
   eff_dR_cjets_truth_tags_bckg_17->cd();
   eff_dR_cjets_truth_tags_bckg_17->SetSelected(eff_dR_cjets_truth_tags_bckg_17);
}
