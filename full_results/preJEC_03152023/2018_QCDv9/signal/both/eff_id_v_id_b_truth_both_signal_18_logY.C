#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_18/eff_id_v_id_b_truth_both_signal_18
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_both_signal_18 = new TCanvas("eff_id_v_id_b_truth_both_signal_18", "eff_id_v_id_b_truth_both_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_both_signal_18->SetHighLightColor(2);
   eff_id_v_id_b_truth_both_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_both_signal_18->SetFillColor(0);
   eff_id_v_id_b_truth_both_signal_18->SetBorderMode(0);
   eff_id_v_id_b_truth_both_signal_18->SetBorderSize(2);
   eff_id_v_id_b_truth_both_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_both_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_both_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_b_truth = new TH2D("VbbHcc_eff_both_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,811.0327);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,5228.084);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,5220.591);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,791.9027);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,31.7777);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,82.79892);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,85.55423);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,30.80001);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(10698);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,261.4042);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,522.8084);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,784.2126);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,1045.617);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,1307.021);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,1568.425);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,1829.829);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,2091.234);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,2352.638);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,2614.042);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,2875.446);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,3136.85);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,3398.255);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,3659.659);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,3921.063);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,4182.467);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,4443.871);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,4705.276);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,4966.68);
   
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
   eff_id_v_id_b_truth_both_signal_18->Modified();
   eff_id_v_id_b_truth_both_signal_18->cd();
   eff_id_v_id_b_truth_both_signal_18->SetSelected(eff_id_v_id_b_truth_both_signal_18);
}
