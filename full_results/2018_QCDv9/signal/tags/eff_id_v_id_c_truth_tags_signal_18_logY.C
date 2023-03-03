#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_18/eff_id_v_id_c_truth_tags_signal_18
//=========  (Fri Mar  3 10:54:20 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,1119.591);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,3400.895);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,3436.821);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,1121.592);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,37.31263);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,66.69535);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,67.68545);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,37.83655);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(10434);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,171.8411);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,343.6821);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,515.5232);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,687.3642);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,859.2053);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,1031.046);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,1202.887);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,1374.728);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,1546.569);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,1718.411);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,1890.252);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,2062.093);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,2233.934);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,2405.775);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,2577.616);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,2749.457);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,2921.298);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,3093.139);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,3264.98);
   
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
