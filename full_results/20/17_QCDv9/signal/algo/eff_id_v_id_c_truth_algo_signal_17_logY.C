#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_algo_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_algo_signal_17/eff_id_v_id_c_truth_algo_signal_17
//=========  (Thu Mar  2 13:37:21 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_algo_signal_17 = new TCanvas("eff_id_v_id_c_truth_algo_signal_17", "eff_id_v_id_c_truth_algo_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_algo_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_algo_signal_17->Range(-0.8,-0.0752575,4.533333,0.6773175);
   eff_id_v_id_c_truth_algo_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_algo_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_algo_signal_17->SetLogy();
   eff_id_v_id_c_truth_algo_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_algo_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_c_truth = new TH2D("VbbHcc_eff_algo_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(7,0.1187668);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(8,0.8025297);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(13,0.8531086);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(14,0.110625);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(7,0.0124356);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(8,0.03482745);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(13,0.0354756);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(14,0.01196964);
   VbbHcc_eff_algo_id_v_id_c_truth->SetEntries(2965);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(1,0.04265543);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(2,0.08531086);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(3,0.1279663);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(4,0.1706217);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(5,0.2132772);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(6,0.2559326);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(7,0.298588);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(8,0.3412434);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(9,0.3838989);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(10,0.4265543);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(11,0.4692097);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(12,0.5118652);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(13,0.5545206);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(14,0.597176);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(15,0.6398315);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(16,0.6824869);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(17,0.7251423);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(18,0.7677977);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(19,0.8104532);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,1.387779e-17,4.266667,0.60206,VbbHcc_eff_algo_id_v_id_c_truth);
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
   eff_id_v_id_c_truth_algo_signal_17->Modified();
   eff_id_v_id_c_truth_algo_signal_17->cd();
   eff_id_v_id_c_truth_algo_signal_17->SetSelected(eff_id_v_id_c_truth_algo_signal_17);
}
