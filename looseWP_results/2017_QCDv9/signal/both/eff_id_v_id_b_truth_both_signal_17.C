#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_17()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_17/eff_id_v_id_b_truth_both_signal_17
//=========  (Fri Mar 10 12:51:54 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_both_signal_17 = new TCanvas("eff_id_v_id_b_truth_both_signal_17", "eff_id_v_id_b_truth_both_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_both_signal_17->SetHighLightColor(2);
   eff_id_v_id_b_truth_both_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_both_signal_17->SetFillColor(0);
   eff_id_v_id_b_truth_both_signal_17->SetBorderMode(0);
   eff_id_v_id_b_truth_both_signal_17->SetBorderSize(2);
   eff_id_v_id_b_truth_both_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_both_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_both_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_b_truth = new TH2D("VbbHcc_eff_both_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,5001.625);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,16399.81);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,16450.24);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,4887.119);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,76.22867);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,138.5059);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,138.4467);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,75.39579);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(38731);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,822.5118);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,1645.024);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,2467.535);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,3290.047);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,4112.559);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,4935.071);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,5757.582);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,6580.094);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,7402.606);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,8225.118);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,9047.629);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,9870.141);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,10692.65);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,11515.16);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,12337.68);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,13160.19);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,13982.7);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,14805.21);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,15627.72);
   
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
   eff_id_v_id_b_truth_both_signal_17->Modified();
   eff_id_v_id_b_truth_both_signal_17->cd();
   eff_id_v_id_b_truth_both_signal_17->SetSelected(eff_id_v_id_b_truth_both_signal_17);
}
