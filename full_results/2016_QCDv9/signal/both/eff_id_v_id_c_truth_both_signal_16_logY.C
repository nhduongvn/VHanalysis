#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_both_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_both_signal_16/eff_id_v_id_c_truth_both_signal_16
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_both_signal_16 = new TCanvas("eff_id_v_id_c_truth_both_signal_16", "eff_id_v_id_c_truth_both_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_both_signal_16->SetHighLightColor(2);
   eff_id_v_id_c_truth_both_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_both_signal_16->SetFillColor(0);
   eff_id_v_id_c_truth_both_signal_16->SetBorderMode(0);
   eff_id_v_id_c_truth_both_signal_16->SetBorderSize(2);
   eff_id_v_id_c_truth_both_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_both_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_both_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_c_truth = new TH2D("VbbHcc_eff_both_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(7,592.3226);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(8,1736.9);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(13,1831.962);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(14,593.1138);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(7,25.10674);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(8,43.28795);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(13,44.30003);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(14,25.18294);
   VbbHcc_eff_both_id_v_id_c_truth->SetEntries(4544);
   VbbHcc_eff_both_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(1,91.59809);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(2,183.1962);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(3,274.7943);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(4,366.3924);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(5,457.9905);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(6,549.5886);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(7,641.1867);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(8,732.7848);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(9,824.3828);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(10,915.9809);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(11,1007.579);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(12,1099.177);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(13,1190.775);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(14,1282.373);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(15,1373.971);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(16,1465.57);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(17,1557.168);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(18,1648.766);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(19,1740.364);
   
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
   eff_id_v_id_c_truth_both_signal_16->Modified();
   eff_id_v_id_c_truth_both_signal_16->cd();
   eff_id_v_id_c_truth_both_signal_16->SetSelected(eff_id_v_id_c_truth_both_signal_16);
}
