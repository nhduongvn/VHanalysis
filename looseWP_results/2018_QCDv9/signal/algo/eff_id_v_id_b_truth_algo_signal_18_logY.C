#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_18/eff_id_v_id_b_truth_algo_signal_18
//=========  (Fri Mar 10 14:20:55 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_18 = new TCanvas("eff_id_v_id_b_truth_algo_signal_18", "eff_id_v_id_b_truth_algo_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_18->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_algo_signal_18->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_18->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_18->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,1731.087);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,5505.633);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,5464.552);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,1746.291);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,48.56023);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,83.06423);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,85.17013);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,47.20829);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(12899);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,275.2816);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,550.5633);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,825.8449);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,1101.127);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,1376.408);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,1651.69);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,1926.972);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,2202.253);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,2477.535);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,2752.816);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,3028.098);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,3303.38);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,3578.661);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,3853.943);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,4129.225);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,4404.506);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,4679.788);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,4955.07);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,5230.351);
   
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
   eff_id_v_id_b_truth_algo_signal_18->Modified();
   eff_id_v_id_b_truth_algo_signal_18->cd();
   eff_id_v_id_b_truth_algo_signal_18->SetSelected(eff_id_v_id_b_truth_algo_signal_18);
}
