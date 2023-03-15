#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_bckg_18()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_bckg_18/eff_id_v_id_c_truth_tags_bckg_18
//=========  (Fri Mar 10 12:51:54 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_tags_bckg_18 = new TCanvas("eff_id_v_id_c_truth_tags_bckg_18", "eff_id_v_id_c_truth_tags_bckg_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_tags_bckg_18->SetHighLightColor(2);
   eff_id_v_id_c_truth_tags_bckg_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_tags_bckg_18->SetFillColor(0);
   eff_id_v_id_c_truth_tags_bckg_18->SetBorderMode(0);
   eff_id_v_id_c_truth_tags_bckg_18->SetBorderSize(2);
   eff_id_v_id_c_truth_tags_bckg_18->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_tags_bckg_18->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_tags_bckg_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_c_truth = new TH2D("VbbHcc_eff_tags_id_v_id_c_truth","",4,0,4,4,0,4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_tags_id_v_id_c_truth->SetLineColor(ci);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitle("index (c_{0})");
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetTitle("index (c_{1})");
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->Draw("colz");
   eff_id_v_id_c_truth_tags_bckg_18->Modified();
   eff_id_v_id_c_truth_tags_bckg_18->cd();
   eff_id_v_id_c_truth_tags_bckg_18->SetSelected(eff_id_v_id_c_truth_tags_bckg_18);
}
