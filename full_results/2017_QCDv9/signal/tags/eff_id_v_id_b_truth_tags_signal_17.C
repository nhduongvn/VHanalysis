#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_17()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_17/eff_id_v_id_b_truth_tags_signal_17
//=========  (Fri Mar  3 11:30:44 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,632.9589);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,4037.642);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,4140.918);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,616.617);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,27.29815);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,68.38102);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,69.17122);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,26.80953);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(11134);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,207.0459);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,414.0918);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,621.1377);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,828.1836);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,1035.229);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,1242.275);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,1449.321);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,1656.367);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,1863.413);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,2070.459);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,2277.505);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,2484.551);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,2691.597);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,2898.642);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,3105.688);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,3312.734);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,3519.78);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,3726.826);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,3933.872);
   
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
