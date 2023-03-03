#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_both_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_both_signal_18/eff_id_v_id_c_truth_both_signal_18
//=========  (Thu Mar  2 13:37:21 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_both_signal_18 = new TCanvas("eff_id_v_id_c_truth_both_signal_18", "eff_id_v_id_c_truth_both_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_both_signal_18->SetHighLightColor(2);
   eff_id_v_id_c_truth_both_signal_18->Range(-0.8,-0.0752575,4.533333,0.6773175);
   eff_id_v_id_c_truth_both_signal_18->SetFillColor(0);
   eff_id_v_id_c_truth_both_signal_18->SetBorderMode(0);
   eff_id_v_id_c_truth_both_signal_18->SetBorderSize(2);
   eff_id_v_id_c_truth_both_signal_18->SetLogy();
   eff_id_v_id_c_truth_both_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_both_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_both_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_both_id_v_id_c_truth = new TH2D("VbbHcc_eff_both_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(7,1.107306);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(8,3.504373);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(13,3.375159);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinContent(14,1.050766);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(7,0.05418772);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(8,0.09534662);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(13,0.08556793);
   VbbHcc_eff_both_id_v_id_c_truth->SetBinError(14,0.04994394);
   VbbHcc_eff_both_id_v_id_c_truth->SetEntries(10698);
   VbbHcc_eff_both_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(1,0.1752186);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(2,0.3504373);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(3,0.5256559);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(4,0.7008745);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(5,0.8760932);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(6,1.051312);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(7,1.22653);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(8,1.401749);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(9,1.576968);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(10,1.752186);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(11,1.927405);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(12,2.102624);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(13,2.277842);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(14,2.453061);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(15,2.628279);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(16,2.803498);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(17,2.978717);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(18,3.153935);
   VbbHcc_eff_both_id_v_id_c_truth->SetContourLevel(19,3.329154);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,1.387779e-17,4.266667,0.60206,VbbHcc_eff_both_id_v_id_c_truth);
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
   eff_id_v_id_c_truth_both_signal_18->Modified();
   eff_id_v_id_c_truth_both_signal_18->cd();
   eff_id_v_id_c_truth_both_signal_18->SetSelected(eff_id_v_id_c_truth_both_signal_18);
}
