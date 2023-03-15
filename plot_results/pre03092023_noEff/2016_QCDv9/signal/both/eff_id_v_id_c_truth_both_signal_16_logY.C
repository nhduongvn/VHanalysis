#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_both_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_both_signal_16/eff_id_v_id_c_truth_both_signal_16
//=========  (Fri Mar  3 10:54:21 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_both_signal_16 = new TCanvas("eff_id_v_id_c_truth_both_signal_16", "eff_id_v_id_c_truth_both_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_both_signal_16->SetHighLightColor(2);
   eff_id_v_id_c_truth_both_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_both_signal_16->SetFillColor(0);
   eff_id_v_id_c_truth_both_signal_16->SetBorderMode(0);
   eff_id_v_id_c_truth_both_signal_16->SetBorderSize(2);
   eff_id_v_id_c_truth_both_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_both_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_both_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_c_truth = new TH2D("VbbHcc_eff_both_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(7,452.1884);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(8,1320.661);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(13,1416.86);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(14,470.7592);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(7,21.85767);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(8,37.60431);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(13,38.88249);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(14,22.41117);
   VbbHcc_eff_both_id_v_id_c_truth->SetEntries(4544);
   VbbHcc_eff_both_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(1,70.84302);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(2,141.686);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(3,212.5291);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(4,283.3721);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(5,354.2151);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(6,425.0581);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(7,495.9012);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(8,566.7442);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(9,637.5872);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(10,708.4302);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(11,779.2732);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(12,850.1163);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(13,920.9593);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(14,991.8023);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(15,1062.645);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(16,1133.488);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(17,1204.331);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(18,1275.174);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(19,1346.017);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_both_id_v_id_c_truth);
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
   VbbHcc_eff_both_id_v_id_c_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_both_id_v_id_c_truth->SetLineColor(ci);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitle("index (c_{0})");
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetTitle("index (c_{1})");
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->Draw("colz");
   eff_id_v_id_c_truth_both_signal_16->Modified();
   eff_id_v_id_c_truth_both_signal_16->cd();
   eff_id_v_id_c_truth_both_signal_16->SetSelected(eff_id_v_id_c_truth_both_signal_16);
}
