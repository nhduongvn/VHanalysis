#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_16/eff_id_v_id_c_truth_tags_signal_16
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_tags_signal_16 = new TCanvas("eff_id_v_id_c_truth_tags_signal_16", "eff_id_v_id_c_truth_tags_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_tags_signal_16->SetHighLightColor(2);
   eff_id_v_id_c_truth_tags_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_tags_signal_16->SetFillColor(0);
   eff_id_v_id_c_truth_tags_signal_16->SetBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_16->SetBorderSize(2);
   eff_id_v_id_c_truth_tags_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_tags_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_c_truth = new TH2D("VbbHcc_eff_tags_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,581.2355);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,1693.542);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,1788.658);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,585.0607);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,24.89053);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,42.73884);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,43.77053);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,25.01917);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(4443);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,89.43291);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,178.8658);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,268.2987);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,357.7316);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,447.1645);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,536.5975);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,626.0304);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,715.4633);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,804.8962);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,894.3291);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,983.762);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,1073.195);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,1162.628);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,1252.061);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,1341.494);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,1430.927);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,1520.359);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,1609.792);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,1699.225);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_tags_id_v_id_c_truth);
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
   VbbHcc_eff_tags_id_v_id_c_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_tags_id_v_id_c_truth->SetLineColor(ci);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitle("index (c_{0})");
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetTitle("index (c_{1})");
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->Draw("colz");
   eff_id_v_id_c_truth_tags_signal_16->Modified();
   eff_id_v_id_c_truth_tags_signal_16->cd();
   eff_id_v_id_c_truth_tags_signal_16->SetSelected(eff_id_v_id_c_truth_tags_signal_16);
}
