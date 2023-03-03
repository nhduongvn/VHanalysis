#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_dR_cjets_truth_both_bckg_16()
{
//=========Macro generated from canvas: eff_dR_cjets_truth_both_bckg_16/eff_dR_cjets_truth_both_bckg_16
//=========  (Fri Mar  3 11:30:44 2023) by ROOT version 6.26/06
   TCanvas *eff_dR_cjets_truth_both_bckg_16 = new TCanvas("eff_dR_cjets_truth_both_bckg_16", "eff_dR_cjets_truth_both_bckg_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_dR_cjets_truth_both_bckg_16->SetHighLightColor(2);
   eff_dR_cjets_truth_both_bckg_16->Range(-1.2,-0.13125,6.8,1.18125);
   eff_dR_cjets_truth_both_bckg_16->SetFillColor(0);
   eff_dR_cjets_truth_both_bckg_16->SetBorderMode(0);
   eff_dR_cjets_truth_both_bckg_16->SetBorderSize(2);
   eff_dR_cjets_truth_both_bckg_16->SetLeftMargin(0.15);
   eff_dR_cjets_truth_both_bckg_16->SetFrameBorderMode(0);
   eff_dR_cjets_truth_both_bckg_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_eff_both_dR_cjets_truth__32 = new TH1D("VbbHcc_eff_both_dR_cjets_truth__32","",60,0,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_both_dR_cjets_truth__32->SetLineColor(ci);
   VbbHcc_eff_both_dR_cjets_truth__32->GetXaxis()->SetTitle("#Delta R(c,c-jet)");
   VbbHcc_eff_both_dR_cjets_truth__32->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_both_dR_cjets_truth__32->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth__32->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_cjets_truth__32->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_cjets_truth__32->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth__32->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_cjets_truth__32->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_cjets_truth__32->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_cjets_truth__32->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_cjets_truth__32->Draw("HIST");
   eff_dR_cjets_truth_both_bckg_16->Modified();
   eff_dR_cjets_truth_both_bckg_16->cd();
   eff_dR_cjets_truth_both_bckg_16->SetSelected(eff_dR_cjets_truth_both_bckg_16);
}
