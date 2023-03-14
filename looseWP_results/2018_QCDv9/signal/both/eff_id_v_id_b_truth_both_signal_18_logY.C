#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_18/eff_id_v_id_b_truth_both_signal_18
//=========  (Fri Mar 10 14:20:56 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,4948.295);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,16493.21);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,16121.24);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,4856.912);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,78.43756);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,144.5988);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,145.0422);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,77.7284);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(37730);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,824.6607);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,1649.321);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,2473.982);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,3298.643);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,4123.303);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,4947.964);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,5772.625);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,6597.286);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,7421.946);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,8246.607);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,9071.268);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,9895.928);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,10720.59);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,11545.25);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,12369.91);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,13194.57);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,14019.23);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,14843.89);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,15668.55);
   
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
