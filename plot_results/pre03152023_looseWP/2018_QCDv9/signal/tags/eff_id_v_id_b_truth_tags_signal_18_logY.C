#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_18/eff_id_v_id_b_truth_tags_signal_18
//=========  (Fri Mar 10 14:20:55 2023) by ROOT version 6.26/06
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
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,4884.631);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,16482.33);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,16138.74);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,4827.238);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,77.99503);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,144.6218);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,145.0969);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,77.37399);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(37653);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,824.1163);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,1648.233);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,2472.349);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,3296.465);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,4120.582);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,4944.698);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,5768.814);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,6592.931);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,7417.047);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,8241.163);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,9065.279);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,9889.396);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,10713.51);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,11537.63);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,12361.74);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,13185.86);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,14009.98);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,14834.09);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,15658.21);
   
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
