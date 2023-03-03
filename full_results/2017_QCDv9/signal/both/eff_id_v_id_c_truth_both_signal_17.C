#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_both_signal_17()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_both_signal_17/eff_id_v_id_c_truth_both_signal_17
//=========  (Fri Mar  3 11:30:45 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(7,1272.14);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(8,3627.87);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(13,3597.187);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(14,1207.272);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(7,38.43306);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(8,64.97416);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(13,64.47107);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(14,37.26437);
   VbbHcc_eff_both_id_v_id_c_truth->SetEntries(11439);
   VbbHcc_eff_both_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(1,181.3935);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(2,362.787);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(3,544.1805);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(4,725.5739);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(5,906.9674);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(6,1088.361);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(7,1269.754);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(8,1451.148);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(9,1632.541);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(10,1813.935);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(11,1995.328);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(12,2176.722);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(13,2358.115);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(14,2539.509);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(15,2720.902);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(16,2902.296);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(17,3083.689);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(18,3265.083);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(19,3446.476);
   
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
