#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_16/eff_id_v_id_b_truth_algo_signal_16
//=========  (Thu Mar  2 13:37:21 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_16 = new TCanvas("eff_id_v_id_b_truth_algo_signal_16", "eff_id_v_id_b_truth_algo_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_16->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_16->Range(-0.8,-0.0752575,4.533333,0.6773175);
   eff_id_v_id_b_truth_algo_signal_16->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_16->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_16->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_16->SetLogy();
   eff_id_v_id_b_truth_algo_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,0.02771683);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,0.5936715);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,0.5107536);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,0.05148672);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,0.007427805);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,0.03739545);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,0.03414102);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,0.01125251);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(1110);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,0.02968358);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,0.05936715);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,0.08905073);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,0.1187343);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,0.1484179);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,0.1781015);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,0.207785);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,0.2374686);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,0.2671522);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,0.2968358);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,0.3265193);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,0.3562029);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,0.3858865);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,0.4155701);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,0.4452537);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,0.4749372);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,0.5046208);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,0.5343044);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,0.563988);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,1.387779e-17,4.266667,0.60206,VbbHcc_eff_algo_id_v_id_b_truth);
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
