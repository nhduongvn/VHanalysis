#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_17/eff_id_v_id_b_truth_tags_signal_17
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_tags_signal_17 = new TCanvas("eff_id_v_id_b_truth_tags_signal_17", "eff_id_v_id_b_truth_tags_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_tags_signal_17->SetHighLightColor(2);
   eff_id_v_id_b_truth_tags_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_tags_signal_17->SetFillColor(0);
   eff_id_v_id_b_truth_tags_signal_17->SetBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_17->SetBorderSize(2);
   eff_id_v_id_b_truth_tags_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_tags_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_b_truth = new TH2D("VbbHcc_eff_tags_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,844.4398);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,5284.935);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,5383.055);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,792.1316);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,31.68857);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,78.66122);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,79.20782);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,30.40501);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(11134);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,269.1528);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,538.3055);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,807.4583);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,1076.611);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,1345.764);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,1614.917);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,1884.069);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,2153.222);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,2422.375);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,2691.528);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,2960.68);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,3229.833);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,3498.986);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,3768.139);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,4037.291);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,4306.444);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,4575.597);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,4844.75);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,5113.902);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_tags_id_v_id_b_truth);
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
   VbbHcc_eff_tags_id_v_id_b_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_tags_id_v_id_b_truth->SetLineColor(ci);
   VbbHcc_eff_tags_id_v_id_b_truth->GetXaxis()->SetTitle("index (b_{0})");
   VbbHcc_eff_tags_id_v_id_b_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_b_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetYaxis()->SetTitle("index (b_{1})");
   VbbHcc_eff_tags_id_v_id_b_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_b_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->Draw("colz");
   eff_id_v_id_b_truth_tags_signal_17->Modified();
   eff_id_v_id_b_truth_tags_signal_17->cd();
   eff_id_v_id_b_truth_tags_signal_17->SetSelected(eff_id_v_id_b_truth_tags_signal_17);
}
