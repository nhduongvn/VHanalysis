#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_b_truth_tags_signal_16_logY()
{
//=========Macro generated from canvas: eff_id_v_id_b_truth_tags_signal_16/eff_id_v_id_b_truth_tags_signal_16
//=========  (Thu Mar  2 13:37:20 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_b_truth_tags_signal_16 = new TCanvas("eff_id_v_id_b_truth_tags_signal_16", "eff_id_v_id_b_truth_tags_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_b_truth_tags_signal_16->SetHighLightColor(2);
   eff_id_v_id_b_truth_tags_signal_16->Range(-0.8,-0.0752575,4.533333,0.6773175);
   eff_id_v_id_b_truth_tags_signal_16->SetFillColor(0);
   eff_id_v_id_b_truth_tags_signal_16->SetBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_16->SetBorderSize(2);
   eff_id_v_id_b_truth_tags_signal_16->SetLogy();
   eff_id_v_id_b_truth_tags_signal_16->SetLeftMargin(0.15);
   eff_id_v_id_b_truth_tags_signal_16->SetFrameBorderMode(0);
   eff_id_v_id_b_truth_tags_signal_16->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_b_truth = new TH2D("VbbHcc_eff_tags_id_v_id_b_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(7,0.2776864);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(8,1.887291);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(13,1.727947);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinContent(14,0.3241327);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(7,0.02457699);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(8,0.06474083);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(13,0.0611465);
   VbbHcc_eff_tags_id_v_id_b_truth->SetBinError(14,0.02669282);
   VbbHcc_eff_tags_id_v_id_b_truth->SetEntries(4443);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(1,0.09436453);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(2,0.1887291);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(3,0.2830936);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(4,0.3774581);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(5,0.4718226);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(6,0.5661872);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(7,0.6605517);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(8,0.7549162);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(9,0.8492807);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(10,0.9436453);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(11,1.03801);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(12,1.132374);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(13,1.226739);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(14,1.321103);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(15,1.415468);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(16,1.509832);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(17,1.604197);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(18,1.698561);
   VbbHcc_eff_tags_id_v_id_b_truth->SetContourLevel(19,1.792926);
   
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
   eff_id_v_id_b_truth_tags_signal_16->Modified();
   eff_id_v_id_b_truth_tags_signal_16->cd();
   eff_id_v_id_b_truth_tags_signal_16->SetSelected(eff_id_v_id_b_truth_tags_signal_16);
}
