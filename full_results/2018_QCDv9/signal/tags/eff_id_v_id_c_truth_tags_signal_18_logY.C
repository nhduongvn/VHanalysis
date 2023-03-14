#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_18/eff_id_v_id_c_truth_tags_signal_18
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_tags_signal_18 = new TCanvas("eff_id_v_id_c_truth_tags_signal_18", "eff_id_v_id_c_truth_tags_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_tags_signal_18->SetHighLightColor(2);
   eff_id_v_id_c_truth_tags_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_tags_signal_18->SetFillColor(0);
   eff_id_v_id_c_truth_tags_signal_18->SetBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_18->SetBorderSize(2);
   eff_id_v_id_c_truth_tags_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_tags_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_c_truth = new TH2D("VbbHcc_eff_tags_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,1436.865);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,4462.012);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,4435.989);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,1420.398);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,43.7839);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,78.11544);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,76.75446);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,43.30432);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(10434);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,223.1006);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,446.2012);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,669.3018);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,892.4024);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,1115.503);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,1338.604);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,1561.704);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,1784.805);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,2007.905);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,2231.006);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,2454.107);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,2677.207);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,2900.308);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,3123.408);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,3346.509);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,3569.61);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,3792.71);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,4015.811);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,4238.911);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_tags_id_v_id_c_truth);
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
   VbbHcc_eff_tags_id_v_id_c_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_tags_id_v_id_c_truth->SetLineColor(ci);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitle("index (c_{0})");
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_c_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetTitle("index (c_{1})");
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_c_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_c_truth->Draw("colz");
   eff_id_v_id_c_truth_tags_signal_18->Modified();
   eff_id_v_id_c_truth_tags_signal_18->cd();
   eff_id_v_id_c_truth_tags_signal_18->SetSelected(eff_id_v_id_c_truth_tags_signal_18);
}
