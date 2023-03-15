#ifdef __CLING__
#pragma cling optimize(0)
#endif
void eff_dR_bjets_truth_algo_signal_16_logY()
{
//=========Macro generated from canvas: eff_dR_bjets_truth_algo_signal_16/eff_dR_bjets_truth_algo_signal_16
//=========  (Fri Mar 10 14:23:44 2023) by ROOT version 6.26/06
   TCanvas *eff_dR_bjets_truth_algo_signal_16 = new TCanvas("eff_dR_bjets_truth_algo_signal_16", "eff_dR_bjets_truth_algo_signal_16",0,0,600,600);
   gStyle->SetOptStat(0);
   eff_dR_bjets_truth_algo_signal_16->SetHighLightColor(2);
   eff_dR_bjets_truth_algo_signal_16->Range(-1.2,-0.8101529,6.8,4.069161);
   eff_dR_bjets_truth_algo_signal_16->SetFillColor(0);
   eff_dR_bjets_truth_algo_signal_16->SetBorderMode(0);
   eff_dR_bjets_truth_algo_signal_16->SetBorderSize(2);
   eff_dR_bjets_truth_algo_signal_16->SetLogy();
   eff_dR_bjets_truth_algo_signal_16->SetLeftMargin(0.15);
   eff_dR_bjets_truth_algo_signal_16->SetFrameBorderMode(0);
   eff_dR_bjets_truth_algo_signal_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_eff_algo_dR_bjets_truth__13 = new TH1D("VbbHcc_eff_algo_dR_bjets_truth__13","",60,0,6);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(1,2012.245);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(2,135.9002);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(3,35.59421);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(4,19.9716);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(5,8.726572);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(6,4.451467);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(7,1.051006);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(8,4.303363);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(9,3.188047);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(10,2.944808);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(11,3.044794);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(12,3.105158);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(13,3.281217);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(14,6.653891);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(15,6.795196);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(16,3.223962);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(17,5.61049);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(18,5.384011);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(19,6.516281);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(20,11.87876);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(21,7.835544);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(22,2.159297);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(23,4.358771);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(24,4.409655);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(25,3.350051);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(26,3.809624);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(27,2.521358);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(28,6.427284);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(29,4.548115);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(30,4.147039);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(31,5.99019);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinContent(37,0.9523762);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(1,46.63334);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(2,12.06517);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(3,6.217664);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(4,4.610572);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(5,3.088452);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(6,2.229042);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(7,1.051006);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(8,2.152396);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(9,1.846724);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(10,1.707476);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(11,1.762685);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(12,1.800356);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(13,1.897838);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(14,2.720561);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(15,2.777879);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(16,1.869414);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(17,2.394378);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(18,2.409097);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(19,2.663562);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(20,3.594266);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(21,2.779821);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(22,1.529484);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(23,2.181784);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(24,2.208337);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(25,1.938373);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(26,1.956958);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(27,1.554282);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(28,2.548814);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(29,2.276042);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(30,2.07433);
   VbbHcc_eff_algo_dR_bjets_truth__13->SetBinError(31,2.59087);
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
