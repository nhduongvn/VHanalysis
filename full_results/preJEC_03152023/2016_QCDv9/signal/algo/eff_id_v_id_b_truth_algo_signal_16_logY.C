#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_16/eff_id_v_id_b_truth_algo_signal_16
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_16 = new TCanvas("eff_id_v_id_b_truth_algo_signal_16", "eff_id_v_id_b_truth_algo_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_16->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_algo_signal_16->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_16->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_16->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,33.02348);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,559.3796);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,531.204);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,43.58264);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,5.918682);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,24.55192);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,23.99204);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,6.828319);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(1110);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,27.96898);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,55.93796);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,83.90695);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,111.8759);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,139.8449);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,167.8139);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,195.7829);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,223.7519);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,251.7208);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,279.6898);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,307.6588);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,335.6278);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,363.5968);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,391.5658);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,419.5347);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,447.5037);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,475.4727);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,503.4417);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,531.4107);
   
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
   eff_id_v_id_b_truth_algo_signal_16->Modified();
   eff_id_v_id_b_truth_algo_signal_16->cd();
   eff_id_v_id_b_truth_algo_signal_16->SetSelected(eff_id_v_id_b_truth_algo_signal_16);
}
