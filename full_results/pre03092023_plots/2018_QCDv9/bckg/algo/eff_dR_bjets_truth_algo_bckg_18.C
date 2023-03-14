#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_dR_bjets_truth_algo_bckg_18()
{
//=========Macro generated from canvas: eff_dR_bjets_truth_algo_bckg_18/eff_dR_bjets_truth_algo_bckg_18
//=========  (Fri Mar  3 11:30:44 2023) by ROOT version 6.26/06
   TCanvas *eff_dR_bjets_truth_algo_bckg_18 = new TCanvas("eff_dR_bjets_truth_algo_bckg_18", "eff_dR_bjets_truth_algo_bckg_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_dR_bjets_truth_algo_bckg_18->SetHighLightColor(2);
   eff_dR_bjets_truth_algo_bckg_18->Range(-1.2,-0.13125,6.8,1.18125);
   eff_dR_bjets_truth_algo_bckg_18->SetFillColor(0);
   eff_dR_bjets_truth_algo_bckg_18->SetBorderMode(0);
   eff_dR_bjets_truth_algo_bckg_18->SetBorderSize(2);
   eff_dR_bjets_truth_algo_bckg_18->SetLeftMargin(0.15);
   eff_dR_bjets_truth_algo_bckg_18->SetFrameBorderMode(0);
   eff_dR_bjets_truth_algo_bckg_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_eff_algo_dR_bjets_truth__18 = new TH1D("VbbHcc_eff_algo_dR_bjets_truth__18","",60,0,6);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_algo_dR_bjets_truth__18->SetLineColor(ci);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetXaxis()->SetTitle("#Delta R(b,b-jet)");
   VbbHcc_eff_algo_dR_bjets_truth__18->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_dR_bjets_truth__18->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__18->Draw("HIST");
   eff_dR_bjets_truth_algo_bckg_18->Modified();
   eff_dR_bjets_truth_algo_bckg_18->cd();
   eff_dR_bjets_truth_algo_bckg_18->SetSelected(eff_dR_bjets_truth_algo_bckg_18);
}
