#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_16/eff_id_v_id_b_truth_algo_signal_16
//=========  (Fri Mar 10 14:20:55 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,779.5019);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,2479.589);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,2458.163);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,811.5118);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,28.85315);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,51.82499);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,51.86024);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,29.52315);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(6256);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,123.9794);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,247.9589);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,371.9383);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,495.9177);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,619.8971);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,743.8766);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,867.856);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,991.8354);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,1115.815);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,1239.794);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,1363.774);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,1487.753);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,1611.733);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,1735.712);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,1859.691);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,1983.671);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,2107.65);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,2231.63);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,2355.609);
   
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
