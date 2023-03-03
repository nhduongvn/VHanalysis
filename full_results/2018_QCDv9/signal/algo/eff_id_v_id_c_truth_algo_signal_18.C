#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_algo_signal_18()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_algo_signal_18/eff_id_v_id_c_truth_algo_signal_18
//=========  (Fri Mar  3 11:30:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_algo_signal_18 = new TCanvas("eff_id_v_id_c_truth_algo_signal_18", "eff_id_v_id_c_truth_algo_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_algo_signal_18->SetHighLightColor(2);
   eff_id_v_id_c_truth_algo_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_algo_signal_18->SetFillColor(0);
   eff_id_v_id_c_truth_algo_signal_18->SetBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_18->SetBorderSize(2);
   eff_id_v_id_c_truth_algo_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_algo_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_c_truth = new TH2D("VbbHcc_eff_algo_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(7,196.43);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(8,981.9934);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(13,1015.768);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(14,148.8013);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(7,17.48608);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(8,34.55454);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(13,37.22165);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(14,13.32206);
   VbbHcc_eff_algo_id_v_id_c_truth->SetEntries(2871);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(1,50.78842);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(2,101.5768);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(3,152.3652);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(4,203.1537);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(5,253.9421);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(6,304.7305);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(7,355.5189);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(8,406.3073);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(9,457.0957);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(10,507.8842);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(11,558.6726);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(12,609.461);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(13,660.2494);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(14,711.0378);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(15,761.8262);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(16,812.6146);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(17,863.4031);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(18,914.1915);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(19,964.9799);
   
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
   eff_id_v_id_c_truth_algo_signal_18->Modified();
   eff_id_v_id_c_truth_algo_signal_18->cd();
   eff_id_v_id_c_truth_algo_signal_18->SetSelected(eff_id_v_id_c_truth_algo_signal_18);
}
