#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_16/eff_id_v_id_b_truth_tags_signal_16
//=========  (Fri Mar 10 14:20:55 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,2263.825);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,7446.327);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,7287.243);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,2403.789);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,49.33055);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,89.46829);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,88.76408);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,50.73529);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(18545);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,372.3164);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,744.6327);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,1116.949);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,1489.265);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,1861.582);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,2233.898);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,2606.214);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,2978.531);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,3350.847);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,3723.164);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,4095.48);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,4467.796);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,4840.113);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,5212.429);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,5584.745);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,5957.062);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,6329.378);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,6701.694);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,7074.011);
   
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
