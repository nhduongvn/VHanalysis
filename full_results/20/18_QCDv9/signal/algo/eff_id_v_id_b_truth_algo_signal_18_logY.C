#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_algo_signal_18_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_algo_signal_18/eff_id_v_id_b_truth_algo_signal_18
//=========  (Thu Mar  2 13:37:21 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_algo_signal_18 = new TCanvas("eff_id_v_id_b_truth_algo_signal_18", "eff_id_v_id_b_truth_algo_signal_18",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_algo_signal_18->SetHighLightColor(2);
   eff_id_v_id_b_truth_algo_signal_18->Range(-0.8,-0.0752575,4.533333,0.6773175);
   eff_id_v_id_b_truth_algo_signal_18->SetFillColor(0);
   eff_id_v_id_b_truth_algo_signal_18->SetBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_18->SetBorderSize(2);
   eff_id_v_id_b_truth_algo_signal_18->SetLogy();
   eff_id_v_id_b_truth_algo_signal_18->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_algo_signal_18->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_algo_signal_18->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_algo_id_v_id_b_truth = new TH2D("VbbHcc_eff_algo_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(7,0.06636137);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(8,1.260379);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(13,1.293696);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinContent(14,0.08853473);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(7,0.01076158);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(8,0.05180397);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(13,0.06617629);
   VbbHcc_eff_algo_id_v_id_b_truth->SetBinError(14,0.01392983);
   VbbHcc_eff_algo_id_v_id_b_truth->SetEntries(2871);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(1,0.06468478);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(2,0.1293696);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(3,0.1940543);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(4,0.2587391);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(5,0.3234239);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(6,0.3881087);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(7,0.4527935);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(8,0.5174782);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(9,0.582163);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(10,0.6468478);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(11,0.7115326);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(12,0.7762174);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(13,0.8409021);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(14,0.9055869);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(15,0.9702717);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(16,1.034956);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(17,1.099641);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(18,1.164326);
   VbbHcc_eff_algo_id_v_id_b_truth->SetContourLevel(19,1.229011);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,1.387779e-17,4.266667,0.60206,VbbHcc_eff_algo_id_v_id_b_truth);
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
   VbbHcc_eff_algo_id_v_id_b_truth->GetListOfFunctions()->Add(palette,"br");

   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_algo_id_v_id_b_truth->SetLineColor(ci);
   VbbHcc_eff_algo_id_v_id_b_truth->GetXaxis()->SetTitle("index (b_{0})");
   VbbHcc_eff_algo_id_v_id_b_truth->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_id_v_id_b_truth->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetYaxis()->SetTitle("index (b_{1})");
   VbbHcc_eff_algo_id_v_id_b_truth->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_id_v_id_b_truth->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_id_v_id_b_truth->Draw("colz");
   eff_id_v_id_b_truth_algo_signal_18->Modified();
   eff_id_v_id_b_truth_algo_signal_18->cd();
   eff_id_v_id_b_truth_algo_signal_18->SetSelected(eff_id_v_id_b_truth_algo_signal_18);
}
