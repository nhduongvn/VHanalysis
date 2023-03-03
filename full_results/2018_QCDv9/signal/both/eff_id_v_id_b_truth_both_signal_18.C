#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_18()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_18/eff_id_v_id_b_truth_both_signal_18
//=========  (Fri Mar  3 11:30:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_both_signal_18 = new TCanvas("eff_id_v_id_b_truth_both_signal_18", "eff_id_v_id_b_truth_both_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_both_signal_18->SetHighLightColor(2);
   eff_id_v_id_b_truth_both_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_both_signal_18->SetFillColor(0);
   eff_id_v_id_b_truth_both_signal_18->SetBorderMode(0);
   eff_id_v_id_b_truth_both_signal_18->SetBorderSize(2);
   eff_id_v_id_b_truth_both_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_both_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_both_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_b_truth = new TH2D("VbbHcc_eff_both_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,627.9144);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,4076.737);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,4015.191);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,592.0816);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,27.7629);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,72.92515);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,72.99963);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,26.61713);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(10698);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,203.8369);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,407.6737);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,611.5106);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,815.3475);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,1019.184);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,1223.021);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,1426.858);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,1630.695);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,1834.532);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,2038.369);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,2242.206);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,2446.042);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,2649.879);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,2853.716);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,3057.553);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,3261.39);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,3465.227);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,3669.064);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,3872.901);
   
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
   eff_id_v_id_b_truth_both_signal_18->Modified();
   eff_id_v_id_b_truth_both_signal_18->cd();
   eff_id_v_id_b_truth_both_signal_18->SetSelected(eff_id_v_id_b_truth_both_signal_18);
}
