#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_16/eff_id_v_id_b_truth_tags_signal_16
//=========  (Fri Mar  3 10:54:20 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_tags_signal_16 = new TCanvas("eff_id_v_id_b_truth_tags_signal_16", "eff_id_v_id_b_truth_tags_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_tags_signal_16->SetHighLightColor(2);
   eff_id_v_id_b_truth_tags_signal_16->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_b_truth_tags_signal_16->SetFillColor(0);
   eff_id_v_id_b_truth_tags_signal_16->SetBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_16->SetBorderSize(2);
   eff_id_v_id_b_truth_tags_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_tags_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_b_truth = new TH2D("VbbHcc_eff_tags_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,248.897);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,1551.834);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,1502.363);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,273.244);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,16.24059);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,40.6855);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,40.11931);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,16.97993);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(4443);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,77.59171);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,155.1834);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,232.7751);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,310.3668);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,387.9586);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,465.5503);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,543.142);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,620.7337);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,698.3254);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,775.9171);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,853.5088);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,931.1005);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,1008.692);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,1086.284);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,1163.876);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,1241.467);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,1319.059);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,1396.651);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,1474.242);
   
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
   eff_id_v_id_b_truth_tags_signal_16->Modified();
   eff_id_v_id_b_truth_tags_signal_16->cd();
   eff_id_v_id_b_truth_tags_signal_16->SetSelected(eff_id_v_id_b_truth_tags_signal_16);
}
