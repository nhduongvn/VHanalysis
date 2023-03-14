#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_id_v_id_c_truth_tags_signal_17()
{
//=========Macro generated from canvas: eff_id_v_id_c_truth_tags_signal_17/eff_id_v_id_c_truth_tags_signal_17
//=========  (Fri Mar 10 12:51:53 2023) by ROOT version 6.26/06
   TCanvas *eff_id_v_id_c_truth_tags_signal_17 = new TCanvas("eff_id_v_id_c_truth_tags_signal_17", "eff_id_v_id_c_truth_tags_signal_17",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_id_v_id_c_truth_tags_signal_17->SetHighLightColor(2);
   eff_id_v_id_c_truth_tags_signal_17->Range(-0.8,-0.5,4.533333,4.5);
   eff_id_v_id_c_truth_tags_signal_17->SetFillColor(0);
   eff_id_v_id_c_truth_tags_signal_17->SetBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_17->SetBorderSize(2);
   eff_id_v_id_c_truth_tags_signal_17->SetLeftMargin(0.15);
   eff_id_v_id_c_truth_tags_signal_17->SetFrameBorderMode(0);
   eff_id_v_id_c_truth_tags_signal_17->SetFrameBorderMode(0);
   
   TH2D *VbbHcc_eff_tags_id_v_id_c_truth = new TH2D("VbbHcc_eff_tags_id_v_id_c_truth","",4,0,4,4,0,4);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(7,7566.824);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(8,13826.31);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(13,13688.89);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinContent(14,7576.177);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(7,93.74035);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(8,127.3575);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(13,126.3574);
   VbbHcc_eff_tags_id_v_id_c_truth->SetBinError(14,93.69811);
   VbbHcc_eff_tags_id_v_id_c_truth->SetEntries(38658);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContour(20);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(0,0);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(1,691.3157);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(2,1382.631);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(3,2073.947);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(4,2765.263);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(5,3456.578);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(6,4147.894);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(7,4839.21);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(8,5530.525);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(9,6221.841);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(10,6913.157);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(11,7604.472);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(12,8295.788);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(13,8987.104);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(14,9678.419);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(15,10369.74);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(16,11061.05);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(17,11752.37);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(18,12443.68);
   VbbHcc_eff_tags_id_v_id_c_truth->SetContourLevel(19,13135);
   
   TPaletteAxis *palette = new TPaletteAxis(4.026667,0,4.266667,4,VbbHcc_eff_tags_id_v_id_c_truth);
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
