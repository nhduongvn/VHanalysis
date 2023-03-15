#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_16/eff_id_v_id_b_truth_tags_signal_16
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_tags_signal_16 = new TCanvas("eff_id_v_id_b_truth_tags_signal_16", "eff_id_v_id_b_truth_tags_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_tags_signal_16->SetHighLightColor(2);
   eff_id_v_id_b_truth_tags_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_tags_signal_16->SetFillColor(0);
   eff_id_v_id_b_truth_tags_signal_16->SetBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_16->SetBorderSize(2);
   eff_id_v_id_b_truth_tags_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_tags_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_b_truth = new TH2D("VbbHcc_eff_tags_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,317.7505);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,2038.013);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,1936.866);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,355.8665);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,18.43923);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,46.76949);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,45.62812);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,19.45891);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(4443);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,101.9007);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,203.8013);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,305.702);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,407.6026);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,509.5033);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,611.4039);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,713.3046);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,815.2052);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,917.1059);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,1019.007);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,1120.907);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,1222.808);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,1324.708);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,1426.609);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,1528.51);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,1630.41);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,1732.311);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,1834.212);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,1936.112);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_tags_id_v_id_b_truth);
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
   VbbHcc_eff_tags_id_v_id_b_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_tags_id_v_id_b_truth->SetLineColor(ci);
   VbbHcc_eff_tags_id_v_id_b_truth->GetXaxis()->SetTitle("index (b_{0})");
   VbbHcc_eff_tags_id_v_id_b_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_b_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetYaxis()->SetTitle("index (b_{1})");
   VbbHcc_eff_tags_id_v_id_b_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_tags_id_v_id_b_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_tags_id_v_id_b_truth->Draw("colz");
   eff_id_v_id_b_truth_tags_signal_16->Modified();
   eff_id_v_id_b_truth_tags_signal_16->cd();
   eff_id_v_id_b_truth_tags_signal_16->SetSelected(eff_id_v_id_b_truth_tags_signal_16);
}
