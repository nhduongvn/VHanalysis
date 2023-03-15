#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_18/eff_id_v_id_b_truth_algo_signal_18
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,103.9362);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,1551.224);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,1468.169);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,99.76899);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,11.29086);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,45.05765);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,46.37302);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,11.18202);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(2871);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,77.5612);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,155.1224);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,232.6836);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,310.2448);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,387.806);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,465.3672);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,542.9284);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,620.4896);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,698.0508);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,775.612);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,853.1732);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,930.7344);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,1008.296);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,1085.857);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,1163.418);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,1240.979);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,1318.54);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,1396.102);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,1473.663);
   
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
