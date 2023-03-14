#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_17()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_17/eff_id_v_id_b_truth_algo_signal_17
//=========  (Fri Mar  3 11:30:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_17 = new TCanvas("eff_id_v_id_b_truth_algo_signal_17", "eff_id_v_id_b_truth_algo_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_17->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_algo_signal_17->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_17->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_17->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,89.41968);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,1111.226);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,1125.943);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,68.11087);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,10.20059);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,35.91503);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,36.18182);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,8.829077);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(2965);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,56.29717);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,112.5943);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,168.8915);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,225.1887);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,281.4859);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,337.783);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,394.0802);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,450.3774);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,506.6746);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,562.9717);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,619.2689);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,675.5661);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,731.8633);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,788.1604);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,844.4576);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,900.7548);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,957.052);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,1013.349);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,1069.646);
   
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
   eff_id_v_id_b_truth_algo_signal_17->Modified();
   eff_id_v_id_b_truth_algo_signal_17->cd();
   eff_id_v_id_b_truth_algo_signal_17->SetSelected(eff_id_v_id_b_truth_algo_signal_17);
}
