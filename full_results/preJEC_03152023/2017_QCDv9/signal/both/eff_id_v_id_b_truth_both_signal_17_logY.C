#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_17/eff_id_v_id_b_truth_both_signal_17
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,880.1885);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,5414.549);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,5522.998);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,826.4584);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,32.30502);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,79.62529);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,80.20965);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,31.08228);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(11439);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,276.1499);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,552.2998);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,828.4496);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,1104.6);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,1380.749);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,1656.899);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,1933.049);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,2209.199);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,2485.349);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,2761.499);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,3037.649);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,3313.799);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,3589.948);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,3866.098);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,4142.248);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,4418.398);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,4694.548);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,4970.698);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,5246.848);
   
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
