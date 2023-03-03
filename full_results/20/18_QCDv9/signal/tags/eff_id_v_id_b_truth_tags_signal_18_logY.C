#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_18/eff_id_v_id_b_truth_tags_signal_18
//=========  (Thu Mar  2 13:37:20 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_tags_signal_18 = new TCanvas("eff_id_v_id_b_truth_tags_signal_18", "eff_id_v_id_b_truth_tags_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_tags_signal_18->SetHighLightColor(2);
   eff_id_v_id_b_truth_tags_signal_18->Range(-0.8,-0.0752575,4.533333,0.6773175);
   eff_id_v_id_b_truth_tags_signal_18->SetFillColor(0);
   eff_id_v_id_b_truth_tags_signal_18->SetBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_18->SetBorderSize(2);
   eff_id_v_id_b_truth_tags_signal_18->SetLogy();
   eff_id_v_id_b_truth_tags_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_tags_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_b_truth = new TH2D("VbbHcc_eff_tags_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,0.5738493);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,3.770943);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,3.876174);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,0.6024203);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,0.03530077);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,0.09112657);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,0.1030833);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,0.03539771);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(10434);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,0.1938087);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,0.3876174);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,0.581426);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,0.7752347);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,0.9690434);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,1.162852);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,1.356661);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,1.550469);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,1.744278);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,1.938087);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,2.131895);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,2.325704);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,2.519513);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,2.713321);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,2.90713);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,3.100939);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,3.294748);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,3.488556);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,3.682365);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,1.387779e-17,4.266667,0.60206,VbbHcc_eff_tags_id_v_id_b_truth);
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
