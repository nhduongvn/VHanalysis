#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_dR_v_dR_b_truth_both_bckg_17_logY()
{
//=========Macro generated from canvas: eff_dR_v_dR_b_truth_both_bckg_17/eff_dR_v_dR_b_truth_both_bckg_17
//=========  (Thu Mar  2 13:37:21 2023) by ROOT version 6.26/06
   TCanvas *eff_dR_v_dR_b_truth_both_bckg_17 = new TCanvas("eff_dR_v_dR_b_truth_both_bckg_17", "eff_dR_v_dR_b_truth_both_bckg_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_dR_v_dR_b_truth_both_bckg_17->SetHighLightColor(2);
   eff_dR_v_dR_b_truth_both_bckg_17->Range(-1.2,-1.222269,6.8,1.00042);
   eff_dR_v_dR_b_truth_both_bckg_17->SetFillColor(0);
   eff_dR_v_dR_b_truth_both_bckg_17->SetBorderMode(0);
   eff_dR_v_dR_b_truth_both_bckg_17->SetBorderSize(2);
   eff_dR_v_dR_b_truth_both_bckg_17->SetLogy();
   eff_dR_v_dR_b_truth_both_bckg_17->SetLeftMargin(0.15);
   eff_dR_v_dR_b_truth_both_bckg_17->SetFrameBorderMode(0);
   eff_dR_v_dR_b_truth_both_bckg_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_dR_v_dR_b_truth = new TH2D("VbbHcc_eff_both_dR_v_dR_b_truth","",60,0,6,60,0,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_both_dR_v_dR_b_truth->SetLineColor(ci);
   VbbHcc_eff_both_dR_v_dR_b_truth->GetXaxis()->SetTitle("#Delta R(b_{0}, b_{0}^{jet})");
   VbbHcc_eff_both_dR_v_dR_b_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_v_dR_b_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_v_dR_b_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_v_dR_b_truth->GetYaxis()->SetTitle("#Delta R(b_{1}, b_{1}^{jet})");
   VbbHcc_eff_both_dR_v_dR_b_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_v_dR_b_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_v_dR_b_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_v_dR_b_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_v_dR_b_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_v_dR_b_truth->Draw("colz");
   eff_dR_v_dR_b_truth_both_bckg_17->Modified();
   eff_dR_v_dR_b_truth_both_bckg_17->cd();
   eff_dR_v_dR_b_truth_both_bckg_17->SetSelected(eff_dR_v_dR_b_truth_both_bckg_17);
}
