#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_algo_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_algo_signal_18/eff_id_v_id_c_truth_algo_signal_18
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_algo_signal_18 = new TCanvas("eff_id_v_id_c_truth_algo_signal_18", "eff_id_v_id_c_truth_algo_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_algo_signal_18->SetHighLightColor(2);
   eff_id_v_id_c_truth_algo_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_algo_signal_18->SetFillColor(0);
   eff_id_v_id_c_truth_algo_signal_18->SetBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_18->SetBorderSize(2);
   eff_id_v_id_c_truth_algo_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_algo_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_c_truth = new TH2D("VbbHcc_eff_algo_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(7,248.0157);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(8,1380.833);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(13,1402.468);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(14,191.7819);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(7,19.16022);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(8,44.35356);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(13,43.27476);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(14,15.03707);
   VbbHcc_eff_algo_id_v_id_c_truth->SetEntries(2871);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(1,70.1234);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(2,140.2468);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(3,210.3702);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(4,280.4936);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(5,350.617);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(6,420.7404);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(7,490.8638);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(8,560.9872);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(9,631.1106);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(10,701.234);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(11,771.3574);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(12,841.4808);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(13,911.6042);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(14,981.7276);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(15,1051.851);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(16,1121.974);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(17,1192.098);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(18,1262.221);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(19,1332.345);
   
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
   eff_id_v_id_c_truth_algo_signal_18->Modified();
   eff_id_v_id_c_truth_algo_signal_18->cd();
   eff_id_v_id_c_truth_algo_signal_18->SetSelected(eff_id_v_id_c_truth_algo_signal_18);
}
