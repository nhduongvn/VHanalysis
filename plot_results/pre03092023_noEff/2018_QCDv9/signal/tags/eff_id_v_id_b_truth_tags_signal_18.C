#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_18()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_18/eff_id_v_id_b_truth_tags_signal_18
//=========  (Fri Mar  3 11:30:44 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,601.3734);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,3972.71);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,3940.571);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,564.2442);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,27.19699);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,72.07504);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,72.40933);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,25.99669);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(10434);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,198.6355);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,397.271);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,595.9065);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,794.542);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,993.1775);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,1191.813);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,1390.448);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,1589.084);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,1787.719);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,1986.355);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,2184.99);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,2383.626);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,2582.261);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,2780.897);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,2979.532);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,3178.168);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,3376.803);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,3575.439);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,3774.074);
   
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
