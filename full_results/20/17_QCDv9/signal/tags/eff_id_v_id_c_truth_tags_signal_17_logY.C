#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_17/eff_id_v_id_c_truth_tags_signal_17
//=========  (Thu Mar  2 13:37:21 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_tags_signal_17 = new TCanvas("eff_id_v_id_c_truth_tags_signal_17", "eff_id_v_id_c_truth_tags_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_tags_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_tags_signal_17->Range(-0.8,-0.0752575,4.533333,0.6773175);
   eff_id_v_id_c_truth_tags_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_tags_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_tags_signal_17->SetLogy();
   eff_id_v_id_c_truth_tags_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_tags_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_c_truth = new TH2D("VbbHcc_eff_tags_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,0.7643845);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,2.460089);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,2.517342);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,0.7672444);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,0.0319629);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,0.05931728);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,0.05980091);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,0.03175953);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(11134);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,0.1258671);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,0.2517342);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,0.3776013);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,0.5034685);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,0.6293356);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,0.7552027);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,0.8810698);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,1.006937);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,1.132804);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,1.258671);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,1.384538);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,1.510405);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,1.636273);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,1.76214);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,1.888007);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,2.013874);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,2.139741);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,2.265608);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,2.391475);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,1.387779e-17,4.266667,0.60206,VbbHcc_eff_tags_id_v_id_c_truth);
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
