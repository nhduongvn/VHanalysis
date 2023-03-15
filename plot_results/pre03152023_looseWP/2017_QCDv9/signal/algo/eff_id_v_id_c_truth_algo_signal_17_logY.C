#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_algo_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_algo_signal_17/eff_id_v_id_c_truth_algo_signal_17
//=========  (Fri Mar 10 14:20:55 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_algo_signal_17 = new TCanvas("eff_id_v_id_c_truth_algo_signal_17", "eff_id_v_id_c_truth_algo_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_algo_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_algo_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_algo_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_algo_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_algo_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_algo_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_c_truth = new TH2D("VbbHcc_eff_algo_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(7,2385.487);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(8,4924.43);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(13,5076.806);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(14,2383.307);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(7,52.41365);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(8,76.16024);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(13,77.10356);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(14,52.55331);
   VbbHcc_eff_algo_id_v_id_c_truth->SetEntries(13409);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(1,253.8403);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(2,507.6806);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(3,761.5209);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(4,1015.361);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(5,1269.201);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(6,1523.042);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(7,1776.882);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(8,2030.722);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(9,2284.563);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(10,2538.403);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(11,2792.243);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(12,3046.083);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(13,3299.924);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(14,3553.764);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(15,3807.604);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(16,4061.445);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(17,4315.285);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(18,4569.125);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(19,4822.966);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_algo_id_v_id_c_truth);
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
   VbbHcc_eff_algo_id_v_id_c_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_algo_id_v_id_c_truth->SetLineColor(ci);
   VbbHcc_eff_algo_id_v_id_c_truth->GetXaxis()->SetTitle("index (c_{0})");
   VbbHcc_eff_algo_id_v_id_c_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_id_v_id_c_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetYaxis()->SetTitle("index (c_{1})");
   VbbHcc_eff_algo_id_v_id_c_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_id_v_id_c_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->Draw("colz");
   eff_id_v_id_c_truth_algo_signal_17->Modified();
   eff_id_v_id_c_truth_algo_signal_17->cd();
   eff_id_v_id_c_truth_algo_signal_17->SetSelected(eff_id_v_id_c_truth_algo_signal_17);
}
