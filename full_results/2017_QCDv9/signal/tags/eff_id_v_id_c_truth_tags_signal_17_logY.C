#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_17/eff_id_v_id_c_truth_tags_signal_17
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_tags_signal_17 = new TCanvas("eff_id_v_id_c_truth_tags_signal_17", "eff_id_v_id_c_truth_tags_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_tags_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_tags_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_tags_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_tags_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_tags_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_tags_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_c_truth = new TH2D("VbbHcc_eff_tags_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,1547.294);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,4635.37);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,4624.002);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,1497.896);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,42.51999);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,73.92566);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,73.45983);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,41.48248);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(11134);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,231.7685);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,463.537);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,695.3056);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,927.0741);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,1158.843);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,1390.611);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,1622.38);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,1854.148);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,2085.917);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,2317.685);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,2549.454);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,2781.222);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,3012.991);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,3244.759);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,3476.528);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,3708.296);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,3940.065);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,4171.833);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,4403.602);
   
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
   eff_id_v_id_c_truth_tags_signal_17->Modified();
   eff_id_v_id_c_truth_tags_signal_17->cd();
   eff_id_v_id_c_truth_tags_signal_17->SetSelected(eff_id_v_id_c_truth_tags_signal_17);
}
