#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_18()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_18/eff_id_v_id_b_truth_algo_signal_18
//=========  (Fri Mar  3 11:30:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_18 = new TCanvas("eff_id_v_id_b_truth_algo_signal_18", "eff_id_v_id_b_truth_algo_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_18->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_algo_signal_18->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_18->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_18->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,86.15578);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,1149.558);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,1037.116);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,70.16286);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,10.34297);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,39.22629);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,36.44052);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,9.440175);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(2871);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,57.4779);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,114.9558);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,172.4337);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,229.9116);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,287.3895);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,344.8674);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,402.3453);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,459.8232);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,517.3011);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,574.779);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,632.2569);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,689.7348);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,747.2127);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,804.6906);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,862.1685);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,919.6464);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,977.1243);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,1034.602);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,1092.08);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_algo_id_v_id_b_truth);
   palette->SetLabelColor(1);
   palette->SetLabelFont(42);
   palette->SetLabelOffset(0.005);
   palette->SetLabelSize(0.035);
   palette->SetTitleOffset(1);
   palette->SetTitleSize(0.035);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#f9f90e");
   palette->SetFillColor(ci);
   palette->SetFillStyle(1001);
   VbbHcc_eff_algo_id_v_id_b_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_algo_id_v_id_b_truth->SetLineColor(ci);
   VbbHcc_eff_algo_id_v_id_b_truth->GetXaxis()->SetTitle("index (b_{0})");
   VbbHcc_eff_algo_id_v_id_b_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_id_v_id_b_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetYaxis()->SetTitle("index (b_{1})");
   VbbHcc_eff_algo_id_v_id_b_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_id_v_id_b_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->Draw("colz");
   eff_id_v_id_b_truth_algo_signal_18->Modified();
   eff_id_v_id_b_truth_algo_signal_18->cd();
   eff_id_v_id_b_truth_algo_signal_18->SetSelected(eff_id_v_id_b_truth_algo_signal_18);
}
