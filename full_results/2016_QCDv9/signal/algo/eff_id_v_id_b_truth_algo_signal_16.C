#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_16()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_16/eff_id_v_id_b_truth_algo_signal_16
//=========  (Fri Mar  3 11:30:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_16 = new TCanvas("eff_id_v_id_b_truth_algo_signal_16", "eff_id_v_id_b_truth_algo_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_16->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_algo_signal_16->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_16->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_16->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,26.34692);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,394.2031);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,396.5827);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,28.51881);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,5.304265);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,20.56864);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,20.66596);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,5.496776);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(1110);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,19.82914);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,39.65827);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,59.48741);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,79.31655);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,99.14568);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,118.9748);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,138.804);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,158.6331);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,178.4622);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,198.2914);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,218.1205);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,237.9496);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,257.7788);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,277.6079);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,297.4371);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,317.2662);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,337.0953);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,356.9245);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,376.7536);
   
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
   eff_id_v_id_b_truth_algo_signal_16->Modified();
   eff_id_v_id_b_truth_algo_signal_16->cd();
   eff_id_v_id_b_truth_algo_signal_16->SetSelected(eff_id_v_id_b_truth_algo_signal_16);
}
