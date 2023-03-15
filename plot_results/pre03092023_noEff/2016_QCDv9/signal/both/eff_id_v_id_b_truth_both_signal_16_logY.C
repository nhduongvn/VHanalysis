#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_16/eff_id_v_id_b_truth_both_signal_16
//=========  (Fri Mar  3 10:54:21 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_both_signal_16 = new TCanvas("eff_id_v_id_b_truth_both_signal_16", "eff_id_v_id_b_truth_both_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_both_signal_16->SetHighLightColor(2);
   eff_id_v_id_b_truth_both_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_both_signal_16->SetFillColor(0);
   eff_id_v_id_b_truth_both_signal_16->SetBorderMode(0);
   eff_id_v_id_b_truth_both_signal_16->SetBorderSize(2);
   eff_id_v_id_b_truth_both_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_both_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_both_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_b_truth = new TH2D("VbbHcc_eff_both_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,252.6075);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,1576.837);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,1541.918);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,289.1066);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,16.37588);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,41.00781);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,40.6324);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,17.46849);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(4544);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,78.84185);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,157.6837);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,236.5256);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,315.3674);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,394.2093);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,473.0511);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,551.893);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,630.7348);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,709.5767);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,788.4185);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,867.2604);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,946.1023);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,1024.944);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,1103.786);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,1182.628);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,1261.47);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,1340.312);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,1419.153);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,1497.995);
   
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
   eff_id_v_id_b_truth_both_signal_16->Modified();
   eff_id_v_id_b_truth_both_signal_16->cd();
   eff_id_v_id_b_truth_both_signal_16->SetSelected(eff_id_v_id_b_truth_both_signal_16);
}
