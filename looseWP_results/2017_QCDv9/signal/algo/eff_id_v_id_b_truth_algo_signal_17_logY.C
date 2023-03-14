#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_17/eff_id_v_id_b_truth_algo_signal_17
//=========  (Fri Mar 10 14:20:55 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_17 = new TCanvas("eff_id_v_id_b_truth_algo_signal_17", "eff_id_v_id_b_truth_algo_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_17->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_algo_signal_17->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_17->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_17->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,1788.995);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,5498.818);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,5676.944);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,1805.274);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,45.47863);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,80.26676);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,81.55312);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,45.74288);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(13409);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,283.8472);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,567.6944);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,851.5415);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,1135.389);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,1419.236);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,1703.083);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,1986.93);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,2270.777);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,2554.625);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,2838.472);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,3122.319);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,3406.166);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,3690.013);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,3973.86);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,4257.708);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,4541.555);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,4825.402);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,5109.249);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,5393.096);
   
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
   eff_id_v_id_b_truth_algo_signal_17->Modified();
   eff_id_v_id_b_truth_algo_signal_17->cd();
   eff_id_v_id_b_truth_algo_signal_17->SetSelected(eff_id_v_id_b_truth_algo_signal_17);
}
