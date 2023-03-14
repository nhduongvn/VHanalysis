#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_dR_bjets_truth_both_signal_16()
{
//=========Macro generated from canvas: eff_dR_bjets_truth_both_signal_16/eff_dR_bjets_truth_both_signal_16
//=========  (Fri Mar  3 11:30:44 2023) by ROOT version 6.26/06
   TCanvas *eff_dR_bjets_truth_both_signal_16 = new TCanvas("eff_dR_bjets_truth_both_signal_16", "eff_dR_bjets_truth_both_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_dR_bjets_truth_both_signal_16->SetHighLightColor(2);
   eff_dR_bjets_truth_both_signal_16->Range(-1.2,-745.3339,6.8,6708.005);
   eff_dR_bjets_truth_both_signal_16->SetFillColor(0);
   eff_dR_bjets_truth_both_signal_16->SetBorderMode(0);
   eff_dR_bjets_truth_both_signal_16->SetBorderSize(2);
   eff_dR_bjets_truth_both_signal_16->SetLeftMargin(0.15);
   eff_dR_bjets_truth_both_signal_16->SetFrameBorderMode(0);
   eff_dR_bjets_truth_both_signal_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_eff_both_dR_bjets_truth__25 = new TH1D("VbbHcc_eff_both_dR_bjets_truth__25","",60,0,6);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(1,5678.734);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(2,366.752);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(3,116.5186);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(4,51.98513);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(5,28.32926);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(6,18.0204);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(7,19.46008);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(8,18.30659);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(9,13.69623);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(10,20.99993);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(11,16.94459);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(12,11.46236);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(13,13.43354);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(14,31.70468);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(15,33.89789);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(16,35.41504);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(17,30.90066);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(18,33.37497);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(19,31.85261);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(20,73.33611);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(21,39.66013);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(22,56.94454);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(23,55.27871);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(24,71.69527);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(25,77.82844);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(26,73.30118);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(27,61.69717);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(28,54.57574);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(29,55.01818);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(30,40.46048);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(31,31.50313);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(32,8.590692);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(33,16.6637);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(34,10.99197);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(35,7.554075);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(36,1.190564);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(37,4.158749);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(38,0.002694382);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(39,2.280147);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(40,0.5068711);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(41,1.84645);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(42,0.9924714);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(43,2.025151);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinContent(49,1.046709);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(1,77.89195);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(2,19.78504);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(3,11.15665);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(4,7.367762);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(5,5.410279);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(6,4.431744);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(7,4.481629);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(8,4.445246);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(9,3.798797);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(10,4.710914);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(11,4.177528);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(12,3.470615);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(13,3.726256);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(14,5.763522);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(15,5.963559);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(16,6.121698);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(17,5.773675);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(18,5.913222);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(19,5.840833);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(20,8.775018);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(21,6.387156);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(22,7.816488);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(23,7.721551);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(24,8.747039);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(25,9.134411);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(26,8.834208);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(27,8.174036);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(28,7.603302);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(29,7.72448);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(30,6.535271);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(31,5.835799);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(32,2.942019);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(33,4.176619);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(34,3.368934);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(35,2.759863);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(36,1.190564);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(37,2.083473);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(38,0.002694382);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(39,1.612408);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(40,0.5040689);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(41,1.31597);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(42,0.9924714);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(43,1.433107);
   VbbHcc_eff_both_dR_bjets_truth__25->SetBinError(49,1.044018);
   VbbHcc_eff_both_dR_bjets_truth__25->SetEntries(9088);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_both_dR_bjets_truth__25->SetLineColor(ci);
   VbbHcc_eff_both_dR_bjets_truth__25->GetXaxis()->SetTitle("#Delta R(b,b-jet)");
   VbbHcc_eff_both_dR_bjets_truth__25->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_both_dR_bjets_truth__25->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_bjets_truth__25->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_bjets_truth__25->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_bjets_truth__25->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_bjets_truth__25->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_bjets_truth__25->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_both_dR_bjets_truth__25->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_both_dR_bjets_truth__25->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_both_dR_bjets_truth__25->Draw("HIST");
   eff_dR_bjets_truth_both_signal_16->Modified();
   eff_dR_bjets_truth_both_signal_16->cd();
   eff_dR_bjets_truth_both_signal_16->SetSelected(eff_dR_bjets_truth_both_signal_16);
}
