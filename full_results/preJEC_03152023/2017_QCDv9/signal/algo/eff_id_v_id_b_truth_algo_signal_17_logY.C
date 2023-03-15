#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_17/eff_id_v_id_b_truth_algo_signal_17
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_17 = new TCanvas("eff_id_v_id_b_truth_algo_signal_17", "eff_id_v_id_b_truth_algo_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_17->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_algo_signal_17->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_17->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_17->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,117.8564);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,1513.252);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,1545.386);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,95.26333);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,11.65532);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,42.22163);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,42.60935);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,10.38976);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(2965);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,77.26932);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,154.5386);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,231.808);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,309.0773);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,386.3466);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,463.6159);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,540.8852);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,618.1546);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,695.4239);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,772.6932);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,849.9625);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,927.2319);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,1004.501);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,1081.77);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,1159.04);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,1236.309);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,1313.578);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,1390.848);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,1468.117);
   
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
   eff_id_v_id_b_truth_algo_signal_17->Modified();
   eff_id_v_id_b_truth_algo_signal_17->cd();
   eff_id_v_id_b_truth_algo_signal_17->SetSelected(eff_id_v_id_b_truth_algo_signal_17);
}
