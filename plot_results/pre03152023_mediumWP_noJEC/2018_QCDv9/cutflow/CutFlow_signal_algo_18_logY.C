#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_algo_18_logY()
{
//=========Macro generated from canvas: CutFlow_signal_algo_18/CutFlow_signal_algo_18
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_algo_18 = new TCanvas("CutFlow_signal_algo_18", "CutFlow_signal_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_algo_18->SetHighLightColor(2);
   CutFlow_signal_algo_18->Range(-1.4,-0.2819387,7.933333,3.766586);
   CutFlow_signal_algo_18->SetFillColor(0);
   CutFlow_signal_algo_18->SetBorderMode(0);
   CutFlow_signal_algo_18->SetBorderSize(2);
   CutFlow_signal_algo_18->SetLogy();
   CutFlow_signal_algo_18->SetLeftMargin(0.15);
   CutFlow_signal_algo_18->SetFrameBorderMode(0);
   CutFlow_signal_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_CutFlow__15 = new TH1D("VbbHcc_algo_CutFlow__15","",7,0,7);
   VbbHcc_algo_CutFlow__15->SetBinContent(1,1213.904);
   VbbHcc_algo_CutFlow__15->SetBinContent(2,1212.577);
   VbbHcc_algo_CutFlow__15->SetBinContent(3,201.2428);
   VbbHcc_algo_CutFlow__15->SetBinContent(4,30.07846);
   VbbHcc_algo_CutFlow__15->SetBinContent(5,8.717839);
   VbbHcc_algo_CutFlow__15->SetBinContent(6,4.997312);
   VbbHcc_algo_CutFlow__15->SetBinContent(7,2.654262);
   VbbHcc_algo_CutFlow__15->SetBinError(1,1.622031);
   VbbHcc_algo_CutFlow__15->SetBinError(2,1.621236);
   VbbHcc_algo_CutFlow__15->SetBinError(3,0.5950591);
   VbbHcc_algo_CutFlow__15->SetBinError(4,0.2302609);
   VbbHcc_algo_CutFlow__15->SetBinError(5,0.1242727);
   VbbHcc_algo_CutFlow__15->SetBinError(6,0.0951665);
   VbbHcc_algo_CutFlow__15->SetBinError(7,0.07000137);
   VbbHcc_algo_CutFlow__15->SetEntries(2294849);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VbbHcc_algo_CutFlow__15->SetLineColor(ci);
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetRange(1,7);
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__15->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__15->GetYaxis()->SetTitle("Events");
   VbbHcc_algo_CutFlow__15->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__15->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__15->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__15->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__15->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__15->Draw("HIST");
   CutFlow_signal_algo_18->Modified();
   CutFlow_signal_algo_18->cd();
   CutFlow_signal_algo_18->SetSelected(CutFlow_signal_algo_18);
}
