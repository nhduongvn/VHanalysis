#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_algo_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_algo_signal_16/eff_id_v_id_c_truth_algo_signal_16
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(7,70.23653);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(8,484.6159);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(13,532.4259);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(14,79.91145);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(7,8.670514);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(8,22.96377);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(13,23.94906);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(14,9.165202);
   VbbHcc_eff_algo_id_v_id_c_truth->SetEntries(1110);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(1,26.62129);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(2,53.24259);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(3,79.86388);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(4,106.4852);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(5,133.1065);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(6,159.7278);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(7,186.3491);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(8,212.9704);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(9,239.5916);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(10,266.2129);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(11,292.8342);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(12,319.4555);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(13,346.0768);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(14,372.6981);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(15,399.3194);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(16,425.9407);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(17,452.562);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(18,479.1833);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(19,505.8046);
   
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
