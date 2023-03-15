#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_both_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_both_signal_17/eff_id_v_id_c_truth_both_signal_17
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_both_signal_17 = new TCanvas("eff_id_v_id_c_truth_both_signal_17", "eff_id_v_id_c_truth_both_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_both_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_both_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_both_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_both_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_both_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_both_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_both_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_both_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_c_truth = new TH2D("VbbHcc_eff_both_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(7,1609.51);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(8,4731.741);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(13,4750.01);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(14,1552.933);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(7,43.37156);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(8,74.65605);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(13,74.45287);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(14,42.25697);
   VbbHcc_eff_both_id_v_id_c_truth->SetEntries(11439);
   VbbHcc_eff_both_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(1,237.5005);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(2,475.001);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(3,712.5014);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(4,950.0019);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(5,1187.502);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(6,1425.003);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(7,1662.503);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(8,1900.004);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(9,2137.504);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(10,2375.005);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(11,2612.505);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(12,2850.006);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(13,3087.506);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(14,3325.007);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(15,3562.507);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(16,3800.008);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(17,4037.508);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(18,4275.009);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(19,4512.509);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_both_id_v_id_c_truth);
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
   VbbHcc_eff_both_id_v_id_c_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_both_id_v_id_c_truth->SetLineColor(ci);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitle("index (c_{0})");
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetTitle("index (c_{1})");
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->Draw("colz");
   eff_id_v_id_c_truth_both_signal_17->Modified();
   eff_id_v_id_c_truth_both_signal_17->cd();
   eff_id_v_id_c_truth_both_signal_17->SetSelected(eff_id_v_id_c_truth_both_signal_17);
}
