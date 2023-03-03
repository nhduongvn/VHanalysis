#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_algo_signal_17()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_algo_signal_17/eff_id_v_id_c_truth_algo_signal_17
//=========  (Fri Mar  3 11:30:45 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_algo_signal_17 = new TCanvas("eff_id_v_id_c_truth_algo_signal_17", "eff_id_v_id_c_truth_algo_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_algo_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_algo_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_algo_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_algo_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_algo_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_algo_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_algo_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_c_truth = new TH2D("VbbHcc_eff_algo_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(7,173.8757);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(8,1026.132);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(13,1031.975);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinContent(14,162.7179);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(7,14.17629);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(8,34.58685);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(13,34.60706);
   VbbHcc_eff_algo_id_v_id_c_truth->SetBinError(14,13.64376);
   VbbHcc_eff_algo_id_v_id_c_truth->SetEntries(2965);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(1,51.59873);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(2,103.1975);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(3,154.7962);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(4,206.3949);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(5,257.9937);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(6,309.5924);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(7,361.1911);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(8,412.7898);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(9,464.3886);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(10,515.9873);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(11,567.586);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(12,619.1848);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(13,670.7835);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(14,722.3822);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(15,773.981);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(16,825.5797);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(17,877.1784);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(18,928.7772);
   VbbHcc_eff_algo_id_v_id_c_truth->SetContourLevel(19,980.3759);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_algo_id_v_id_c_truth);
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
   VbbHcc_eff_algo_id_v_id_c_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_algo_id_v_id_c_truth->SetLineColor(ci);
   VbbHcc_eff_algo_id_v_id_c_truth->GetXaxis()->SetTitle("index (c_{0})");
   VbbHcc_eff_algo_id_v_id_c_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_id_v_id_c_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetYaxis()->SetTitle("index (c_{1})");
   VbbHcc_eff_algo_id_v_id_c_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_id_v_id_c_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_c_truth->Draw("colz");
   eff_id_v_id_c_truth_algo_signal_17->Modified();
   eff_id_v_id_c_truth_algo_signal_17->cd();
   eff_id_v_id_c_truth_algo_signal_17->SetSelected(eff_id_v_id_c_truth_algo_signal_17);
}
