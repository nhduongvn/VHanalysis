#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_algo_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_algo_signal_16/eff_id_v_id_c_truth_algo_signal_16
//=========  (Fri Mar 10 14:20:55 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_algo_signal_16 = new TCanvas("eff_id_v_id_c_truth_algo_signal_16", "eff_id_v_id_c_truth_algo_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_algo_signal_16->SetHighLightColor(2);
   eff_id_v_id_c_truth_algo_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_algo_signal_16->SetFillColor(0);
   eff_id_v_id_c_truth_algo_signal_16->SetBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_16->SetBorderSize(2);
   eff_id_v_id_c_truth_algo_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_algo_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_c_truth = new TH2D("VbbHcc_eff_algo_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(7,1029.511);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(8,2197.174);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(13,2249.428);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(14,1052.652);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(7,33.29133);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(8,48.97291);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(13,49.49361);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(14,33.51356);
   VbbHcc_eff_algo_id_v_id_c_truth->SetEntries(6256);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(1,112.4714);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(2,224.9428);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(3,337.4142);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(4,449.8856);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(5,562.357);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(6,674.8284);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(7,787.2998);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(8,899.7712);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(9,1012.243);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(10,1124.714);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(11,1237.185);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(12,1349.657);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(13,1462.128);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(14,1574.6);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(15,1687.071);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(16,1799.542);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(17,1912.014);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(18,2024.485);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(19,2136.957);
   
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
   eff_id_v_id_c_truth_algo_signal_16->Modified();
   eff_id_v_id_c_truth_algo_signal_16->cd();
   eff_id_v_id_c_truth_algo_signal_16->SetSelected(eff_id_v_id_c_truth_algo_signal_16);
}
