#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_both_signal_17()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_both_signal_17/eff_id_v_id_c_truth_both_signal_17
//=========  (Fri Mar 10 12:51:54 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_both_signal_17 = new TCanvas("eff_id_v_id_c_truth_both_signal_17", "eff_id_v_id_c_truth_both_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_both_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_both_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_both_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_both_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_both_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_both_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_both_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_both_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_c_truth = new TH2D("VbbHcc_eff_both_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(7,7530.701);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(8,13907.63);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(13,13797.9);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(14,7502.56);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(7,93.4809);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(8,127.7156);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(13,126.9136);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(14,93.21867);
   VbbHcc_eff_both_id_v_id_c_truth->SetEntries(38731);
   VbbHcc_eff_both_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(1,695.3815);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(2,1390.763);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(3,2086.144);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(4,2781.526);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(5,3476.907);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(6,4172.289);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(7,4867.67);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(8,5563.052);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(9,6258.433);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(10,6953.815);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(11,7649.196);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(12,8344.578);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(13,9039.959);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(14,9735.341);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(15,10430.72);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(16,11126.1);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(17,11821.49);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(18,12516.87);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(19,13212.25);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_both_id_v_id_c_truth);
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
   VbbHcc_eff_both_id_v_id_c_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_both_id_v_id_c_truth->SetLineColor(ci);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitle("index (c_{0})");
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_c_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetTitle("index (c_{1})");
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_id_v_id_c_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_both_id_v_id_c_truth->Draw("colz");
   eff_id_v_id_c_truth_both_signal_17->Modified();
   eff_id_v_id_c_truth_both_signal_17->cd();
   eff_id_v_id_c_truth_both_signal_17->SetSelected(eff_id_v_id_c_truth_both_signal_17);
}
