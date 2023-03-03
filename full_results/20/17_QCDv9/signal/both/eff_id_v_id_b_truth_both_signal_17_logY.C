#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_both_signal_17_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_both_signal_17/eff_id_v_id_b_truth_both_signal_17
//=========  (Thu Mar  2 13:37:21 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_both_signal_17 = new TCanvas("eff_id_v_id_b_truth_both_signal_17", "eff_id_v_id_b_truth_both_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_both_signal_17->SetHighLightColor(2);
   eff_id_v_id_b_truth_both_signal_17->Range(-0.8,-0.0752575,4.533333,0.6773175);
   eff_id_v_id_b_truth_both_signal_17->SetFillColor(0);
   eff_id_v_id_b_truth_both_signal_17->SetBorderMode(0);
   eff_id_v_id_b_truth_both_signal_17->SetBorderSize(2);
   eff_id_v_id_b_truth_both_signal_17->SetLogy();
   eff_id_v_id_b_truth_both_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_both_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_both_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_b_truth = new TH2D("VbbHcc_eff_both_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(7,0.4842006);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(8,2.873553);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(13,2.883942);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinContent(14,0.4248977);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(7,0.02645696);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(8,0.06368178);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(13,0.06319616);
   VbbHcc_eff_both_id_v_id_b_truth->SetBinError(14,0.02397116);
   VbbHcc_eff_both_id_v_id_b_truth->SetEntries(11439);
   VbbHcc_eff_both_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(1,0.1441971);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(2,0.2883942);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(3,0.4325914);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(4,0.5767885);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(5,0.7209856);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(6,0.8651827);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(7,1.00938);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(8,1.153577);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(9,1.297774);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(10,1.441971);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(11,1.586168);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(12,1.730365);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(13,1.874563);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(14,2.01876);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(15,2.162957);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(16,2.307154);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(17,2.451351);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(18,2.595548);
   VbbHcc_eff_both_id_v_id_b_truth->SetContourLevel(19,2.739745);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,1.387779e-17,4.266667,0.60206,VbbHcc_eff_both_id_v_id_b_truth);
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
   VbbHcc_eff_both_id_v_id_b_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_both_id_v_id_b_truth->SetLineColor(ci);
   VbbHcc_eff_both_id_v_id_b_truth->GetXaxis()->SetTitle("index (b_{0})");
   VbbHcc_eff_both_id_v_id_b_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_b_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetYaxis()->SetTitle("index (b_{1})");
   VbbHcc_eff_both_id_v_id_b_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_b_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_b_truth->Draw("colz");
   eff_id_v_id_b_truth_both_signal_17->Modified();
   eff_id_v_id_b_truth_both_signal_17->cd();
   eff_id_v_id_b_truth_both_signal_17->SetSelected(eff_id_v_id_b_truth_both_signal_17);
}
