#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_dR_bjets_truth_algo_signal_16_logY()
{
//=========Macro generated from canvas: eff_dR_bjets_truth_algo_signal_16/eff_dR_bjets_truth_algo_signal_16
//=========  (Fri Mar  3 10:54:19 2023) by ROOT version 6.26/06
   TCanvas *eff_dR_bjets_truth_algo_signal_16 = new TCanvas("eff_dR_bjets_truth_algo_signal_16", "eff_dR_bjets_truth_algo_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_dR_bjets_truth_algo_signal_16->SetHighLightColor(2);
   eff_dR_bjets_truth_algo_signal_16->Range(-1.2,-3.099024,6.8,4.171337);
   eff_dR_bjets_truth_algo_signal_16->SetFillColor(0);
   eff_dR_bjets_truth_algo_signal_16->SetBorderMode(0);
   eff_dR_bjets_truth_algo_signal_16->SetBorderSize(2);
   eff_dR_bjets_truth_algo_signal_16->SetLogy();
   eff_dR_bjets_truth_algo_signal_16->SetLeftMargin(0.15);
   eff_dR_bjets_truth_algo_signal_16->SetFrameBorderMode(0);
   eff_dR_bjets_truth_algo_signal_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_eff_algo_dR_bjets_truth__13 = new TH1D("VbbHcc_eff_algo_dR_bjets_truth__13","",60,0,6);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(1,1468.088);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(2,96.82343);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(3,23.28296);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(4,13.45611);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(5,5.386647);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(6,1.13505);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(7,1.051006);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(8,3.211548);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(9,2.20395);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(10,2.944808);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(11,0.9169394);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(12,0.008492631);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(13,2.228685);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(14,2.125487);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(15,4.509538);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(16,2.292894);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(17,3.290979);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(18,4.360989);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(19,5.342893);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(20,10.77284);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(21,5.880729);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(22,2.159297);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(23,2.105105);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(24,3.303734);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(25,3.350051);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(26,3.809624);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(27,2.521358);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(28,2.384279);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(29,4.548115);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(30,2.04522);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(31,4.810457);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(37,0.9523762);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(1,39.73454);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(2,10.17171);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(3,4.97599);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(4,3.759252);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(5,2.406614);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(6,1.125967);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(7,1.051006);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(8,1.853162);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(9,1.560971);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(10,1.707476);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(11,0.9111131);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(12,0.004923988);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(13,1.577304);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(14,1.494378);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(15,2.25498);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(16,1.619589);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(17,1.89763);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(18,2.179778);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(19,2.389597);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(20,3.418915);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(21,2.407645);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(22,1.529484);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(23,1.484172);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(24,1.909708);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(25,1.938373);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(26,1.956958);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(27,1.554282);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(28,1.542361);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(29,2.276042);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(30,1.442882);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(31,2.305039);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(37,0.9523762);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetEntries(2220);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_eff_algo_dR_bjets_truth__13->SetLineColor(ci);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetXaxis()->SetTitle("#Delta R(b,b-jet)");
   VbbHcc_eff_algo_dR_bjets_truth__13->GetXaxis()->SetRange(1,60);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetXaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetXaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetXaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetYaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetYaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetZaxis()->SetLabelFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetZaxis()->SetTitleOffset(1);
   VbbHcc_eff_algo_dR_bjets_truth__13->GetZaxis()->SetTitleFont(42);
   VbbHcc_eff_algo_dR_bjets_truth__13->Draw("HIST");
   eff_dR_bjets_truth_algo_signal_16->Modified();
   eff_dR_bjets_truth_algo_signal_16->cd();
   eff_dR_bjets_truth_algo_signal_16->SetSelected(eff_dR_bjets_truth_algo_signal_16);
}
