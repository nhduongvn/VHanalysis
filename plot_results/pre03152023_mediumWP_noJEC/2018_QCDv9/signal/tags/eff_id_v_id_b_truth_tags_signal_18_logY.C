#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_18/eff_id_v_id_b_truth_tags_signal_18
//=========  (Fri Mar 10 14:23:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_tags_signal_18 = new TCanvas("eff_id_v_id_b_truth_tags_signal_18", "eff_id_v_id_b_truth_tags_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_tags_signal_18->SetHighLightColor(2);
   eff_id_v_id_b_truth_tags_signal_18->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_tags_signal_18->SetFillColor(0);
   eff_id_v_id_b_truth_tags_signal_18->SetBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_18->SetBorderSize(2);
   eff_id_v_id_b_truth_tags_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_tags_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_b_truth = new TH2D("VbbHcc_eff_tags_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,774.0037);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,5104.372);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,5122.605);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,754.2835);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,31.10404);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,81.90309);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,84.87604);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,30.10055);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(10434);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,256.1302);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,512.2605);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,768.3907);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,1024.521);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,1280.651);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,1536.781);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,1792.912);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,2049.042);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,2305.172);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,2561.302);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,2817.433);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,3073.563);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,3329.693);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,3585.823);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,3841.954);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,4098.084);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,4354.214);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,4610.344);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,4866.475);
   
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
   eff_id_v_id_b_truth_tags_signal_18->Modified();
   eff_id_v_id_b_truth_tags_signal_18->cd();
   eff_id_v_id_b_truth_tags_signal_18->SetSelected(eff_id_v_id_b_truth_tags_signal_18);
}
