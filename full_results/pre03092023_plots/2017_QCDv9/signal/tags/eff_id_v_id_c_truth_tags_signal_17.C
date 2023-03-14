#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_17()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_17/eff_id_v_id_c_truth_tags_signal_17
//=========  (Fri Mar  3 11:30:44 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,1224.955);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,3545.947);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,3491.217);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,1166.017);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,37.72807);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,64.24363);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,63.51304);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,36.60607);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(11134);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,177.2973);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,354.5947);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,531.892);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,709.1893);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,886.4866);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,1063.784);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,1241.081);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,1418.379);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,1595.676);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,1772.973);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,1950.271);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,2127.568);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,2304.865);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,2482.163);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,2659.46);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,2836.757);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,3014.055);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,3191.352);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,3368.649);
   
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
