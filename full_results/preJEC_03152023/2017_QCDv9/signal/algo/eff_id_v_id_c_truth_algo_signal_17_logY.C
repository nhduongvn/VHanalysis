#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_algo_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_algo_signal_17/eff_id_v_id_c_truth_algo_signal_17
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_algo_signal_17 = new TCanvas("eff_id_v_id_c_truth_algo_signal_17", "eff_id_v_id_c_truth_algo_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_algo_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_algo_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_algo_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_algo_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_algo_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_algo_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_c_truth = new TH2D("VbbHcc_eff_algo_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(7,226.1179);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(8,1398.661);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(13,1435.7);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(14,211.2788);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(7,16.10669);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(8,40.7594);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(13,40.99939);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(14,15.50202);
   VbbHcc_eff_algo_id_v_id_c_truth->SetEntries(2965);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(1,71.78501);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(2,143.57);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(3,215.355);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(4,287.14);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(5,358.925);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(6,430.71);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(7,502.4951);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(8,574.2801);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(9,646.0651);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(10,717.8501);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(11,789.6351);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(12,861.4201);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(13,933.2051);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(14,1004.99);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(15,1076.775);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(16,1148.56);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(17,1220.345);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(18,1292.13);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(19,1363.915);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_algo_id_v_id_c_truth);
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
