#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_16/eff_id_v_id_c_truth_tags_signal_16
//=========  (Fri Mar  3 10:54:20 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,445.9974);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,1281.804);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,1382.539);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,465.9973);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,21.72348);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,37.03989);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,38.41095);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,22.30873);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(4443);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,69.12695);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,138.2539);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,207.3809);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,276.5078);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,345.6348);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,414.7617);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,483.8887);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,553.0156);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,622.1426);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,691.2695);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,760.3965);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,829.5234);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,898.6504);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,967.7773);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,1036.904);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,1106.031);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,1175.158);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,1244.285);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,1313.412);
   
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
