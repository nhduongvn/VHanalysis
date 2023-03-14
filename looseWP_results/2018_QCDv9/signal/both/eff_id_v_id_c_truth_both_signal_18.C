#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_both_signal_18()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_both_signal_18/eff_id_v_id_c_truth_both_signal_18
//=========  (Fri Mar 10 12:51:54 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(7,7424.358);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(8,13644.18);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(13,13845.65);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(14,7505.483);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(7,96.99447);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(8,131.9428);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(13,133.5887);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(14,97.35215);
   VbbHcc_eff_both_id_v_id_c_truth->SetEntries(37730);
   VbbHcc_eff_both_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(1,692.2823);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(2,1384.565);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(3,2076.847);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(4,2769.129);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(5,3461.412);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(6,4153.694);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(7,4845.976);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(8,5538.259);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(9,6230.541);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(10,6922.823);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(11,7615.105);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(12,8307.388);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(13,8999.67);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(14,9691.952);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(15,10384.23);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(16,11076.52);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(17,11768.8);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(18,12461.08);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(19,13153.36);
   
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
