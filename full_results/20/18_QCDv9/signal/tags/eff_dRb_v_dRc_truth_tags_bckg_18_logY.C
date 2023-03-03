#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_dRb_v_dRc_truth_tags_bckg_18_logY()
{
//=========Macro generated from canvas: eff_dRb_v_dRc_truth_tags_bckg_18/eff_dRb_v_dRc_truth_tags_bckg_18
//=========  (Thu Mar  2 13:34:30 2023) by ROOT version 6.26/06
   TCanvas *eff_dRb_v_dRc_truth_tags_bckg_18 = new TCanvas("eff_dRb_v_dRc_truth_tags_bckg_18", "eff_dRb_v_dRc_truth_tags_bckg_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_dRb_v_dRc_truth_tags_bckg_18->SetHighLightColor(2);
   eff_dRb_v_dRc_truth_tags_bckg_18->Range(-1.2,-1.222269,6.8,1.00042);
   eff_dRb_v_dRc_truth_tags_bckg_18->SetFillColor(0);
   eff_dRb_v_dRc_truth_tags_bckg_18->SetBorderMode(0);
   eff_dRb_v_dRc_truth_tags_bckg_18->SetBorderSize(2);
   eff_dRb_v_dRc_truth_tags_bckg_18->SetLogy();
   eff_dRb_v_dRc_truth_tags_bckg_18->SetLeftMargin(0.15);
   eff_dRb_v_dRc_truth_tags_bckg_18->SetFrameBorderMode(0);
   eff_dRb_v_dRc_truth_tags_bckg_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_dRb_v_dRc_truth = new TH2D("VbbHcc_eff_tags_dRb_v_dRc_truth","",60,0,6,60,0,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_tags_dRb_v_dRc_truth->SetLineColor(ci);
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetXaxis()->SetTitle("#Delta R(b_{0}b_{1})");
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetYaxis()->SetTitle("#Delta R(c_{0}c_{1})");
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_dRb_v_dRc_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_dRb_v_dRc_truth->Draw("colz");
   eff_dRb_v_dRc_truth_tags_bckg_18->Modified();
   eff_dRb_v_dRc_truth_tags_bckg_18->cd();
   eff_dRb_v_dRc_truth_tags_bckg_18->SetSelected(eff_dRb_v_dRc_truth_tags_bckg_18);
}
