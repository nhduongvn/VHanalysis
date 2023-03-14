#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_both_signal_18()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_both_signal_18/eff_id_v_id_c_truth_both_signal_18
//=========  (Fri Mar  3 11:30:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_both_signal_18 = new TCanvas("eff_id_v_id_c_truth_both_signal_18", "eff_id_v_id_c_truth_both_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_both_signal_18->SetHighLightColor(2);
   eff_id_v_id_c_truth_both_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_both_signal_18->SetFillColor(0);
   eff_id_v_id_c_truth_both_signal_18->SetBorderMode(0);
   eff_id_v_id_c_truth_both_signal_18->SetBorderSize(2);
   eff_id_v_id_c_truth_both_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_both_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_both_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_c_truth = new TH2D("VbbHcc_eff_both_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(7,1161.678);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(8,3490.808);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(13,3507.391);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(14,1152.047);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(7,37.98951);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(8,67.47098);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(13,68.29786);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(14,38.29019);
   VbbHcc_eff_both_id_v_id_c_truth->SetEntries(10698);
   VbbHcc_eff_both_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(1,175.3695);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(2,350.7391);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(3,526.1086);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(4,701.4782);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(5,876.8477);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(6,1052.217);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(7,1227.587);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(8,1402.956);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(9,1578.326);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(10,1753.695);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(11,1929.065);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(12,2104.435);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(13,2279.804);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(14,2455.174);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(15,2630.543);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(16,2805.913);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(17,2981.282);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(18,3156.652);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(19,3332.021);
   
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
   eff_id_v_id_c_truth_both_signal_18->Modified();
   eff_id_v_id_c_truth_both_signal_18->cd();
   eff_id_v_id_c_truth_both_signal_18->SetSelected(eff_id_v_id_c_truth_both_signal_18);
}
