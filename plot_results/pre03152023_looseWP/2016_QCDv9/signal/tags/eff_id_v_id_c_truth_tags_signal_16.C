#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_16()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_16/eff_id_v_id_c_truth_tags_signal_16
//=========  (Fri Mar 10 12:51:53 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_tags_signal_16 = new TCanvas("eff_id_v_id_c_truth_tags_signal_16", "eff_id_v_id_c_truth_tags_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_tags_signal_16->SetHighLightColor(2);
   eff_id_v_id_c_truth_tags_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_tags_signal_16->SetFillColor(0);
   eff_id_v_id_c_truth_tags_signal_16->SetBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_16->SetBorderSize(2);
   eff_id_v_id_c_truth_tags_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_tags_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_c_truth = new TH2D("VbbHcc_eff_tags_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,3474.222);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,6095.187);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,6347.103);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,3484.672);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,61.04959);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,81.13439);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,82.74715);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,61.10872);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(18545);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,317.3551);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,634.7103);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,952.0654);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,1269.421);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,1586.776);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,1904.131);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,2221.486);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,2538.841);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,2856.196);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,3173.551);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,3490.907);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,3808.262);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,4125.617);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,4442.972);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,4760.327);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,5077.682);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,5395.037);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,5712.393);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,6029.748);
   
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
   eff_id_v_id_c_truth_tags_signal_16->Modified();
   eff_id_v_id_c_truth_tags_signal_16->cd();
   eff_id_v_id_c_truth_tags_signal_16->SetSelected(eff_id_v_id_c_truth_tags_signal_16);
}
