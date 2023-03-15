#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_signal_algo_16_logY()
{
//=========Macro generated from canvas: CutFlow_signal_algo_16/CutFlow_signal_algo_16
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_signal_algo_16 = new TCanvas("CutFlow_signal_algo_16", "CutFlow_signal_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_signal_algo_16->SetHighLightColor(2);
   CutFlow_signal_algo_16->Range(-1.4,-0.6314158,7.933333,3.559403);
   CutFlow_signal_algo_16->SetFillColor(0);
   CutFlow_signal_algo_16->SetBorderMode(0);
   CutFlow_signal_algo_16->SetBorderSize(2);
   CutFlow_signal_algo_16->SetLogy();
   CutFlow_signal_algo_16->SetLeftMargin(0.15);
   CutFlow_signal_algo_16->SetFrameBorderMode(0);
   CutFlow_signal_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_CutFlow__3 = new TH1D("VbbHcc_algo_CutFlow__3","",7,0,7);
   VbbHcc_algo_CutFlow__3->SetBinContent(1,729.0745);
   VbbHcc_algo_CutFlow__3->SetBinContent(2,728.4357);
   VbbHcc_algo_CutFlow__3->SetBinContent(3,120.2642);
   VbbHcc_algo_CutFlow__3->SetBinContent(4,16.58263);
   VbbHcc_algo_CutFlow__3->SetBinContent(5,4.505459);
   VbbHcc_algo_CutFlow__3->SetBinContent(6,2.486732);
   VbbHcc_algo_CutFlow__3->SetBinContent(7,1.22658);
   VbbHcc_algo_CutFlow__3->SetBinError(1,1.376893);
   VbbHcc_algo_CutFlow__3->SetBinError(2,1.376354);
   VbbHcc_algo_CutFlow__3->SetBinError(3,0.504486);
   VbbHcc_algo_CutFlow__3->SetBinError(4,0.1876681);
   VbbHcc_algo_CutFlow__3->SetBinError(5,0.09850324);
   VbbHcc_algo_CutFlow__3->SetBinError(6,0.07350913);
   VbbHcc_algo_CutFlow__3->SetBinError(7,0.05146497);
   VbbHcc_algo_CutFlow__3->SetEntries(1147861);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VbbHcc_algo_CutFlow__3->SetLineColor(ci);
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetRange(1,7);
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__3->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__3->GetYaxis()->SetTitle("Events");
   VbbHcc_algo_CutFlow__3->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__3->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__3->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__3->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__3->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__3->Draw("HIST");
   CutFlow_signal_algo_16->Modified();
   CutFlow_signal_algo_16->cd();
   CutFlow_signal_algo_16->SetSelected(CutFlow_signal_algo_16);
}
