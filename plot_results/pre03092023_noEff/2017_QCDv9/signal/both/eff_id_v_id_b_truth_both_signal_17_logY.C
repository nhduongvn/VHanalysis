#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_17/eff_id_v_id_b_truth_both_signal_17
//=========  (Fri Mar  3 10:54:21 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,660.9097);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,4142.045);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,4259.313);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,642.2011);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,27.86966);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,69.27517);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,70.13699);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,27.36658);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(11439);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,212.9656);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,425.9313);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,638.8969);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,851.8625);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,1064.828);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,1277.794);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,1490.759);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,1703.725);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,1916.691);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,2129.656);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,2342.622);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,2555.588);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,2768.553);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,2981.519);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,3194.484);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,3407.45);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,3620.416);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,3833.381);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,4046.347);
   
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
