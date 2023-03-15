#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_16()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_16/eff_id_v_id_b_truth_both_signal_16
//=========  (Fri Mar 10 12:51:54 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_both_signal_16 = new TCanvas("eff_id_v_id_b_truth_both_signal_16", "eff_id_v_id_b_truth_both_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_both_signal_16->SetHighLightColor(2);
   eff_id_v_id_b_truth_both_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_both_signal_16->SetFillColor(0);
   eff_id_v_id_b_truth_both_signal_16->SetBorderMode(0);
   eff_id_v_id_b_truth_both_signal_16->SetBorderSize(2);
   eff_id_v_id_b_truth_both_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_both_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_both_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_b_truth = new TH2D("VbbHcc_eff_both_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,2294.751);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,7463.12);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,7267.768);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,2402.238);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,49.57903);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,89.57033);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,88.65873);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,50.77908);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(18570);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,373.156);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,746.312);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,1119.468);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,1492.624);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,1865.78);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,2238.936);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,2612.092);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,2985.248);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,3358.404);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,3731.56);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,4104.716);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,4477.872);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,4851.028);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,5224.184);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,5597.34);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,5970.496);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,6343.652);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,6716.808);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,7089.964);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_both_id_v_id_b_truth);
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
   VbbHcc_eff_both_id_v_id_b_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_both_id_v_id_b_truth->SetLineColor(ci);
   VbbHcc_eff_both_id_v_id_b_truth->GetXaxis()->SetTitle("index (b_{0})");
   VbbHcc_eff_both_id_v_id_b_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_b_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetYaxis()->SetTitle("index (b_{1})");
   VbbHcc_eff_both_id_v_id_b_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_b_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->Draw("colz");
   eff_id_v_id_b_truth_both_signal_16->Modified();
   eff_id_v_id_b_truth_both_signal_16->cd();
   eff_id_v_id_b_truth_both_signal_16->SetSelected(eff_id_v_id_b_truth_both_signal_16);
}
