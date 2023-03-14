#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_algo_17_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_algo_17/CutFlow_bckg_algo_17
//=========  (Fri Mar 10 12:16:36 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_algo_17 = new TCanvas("CutFlow_bckg_algo_17", "CutFlow_bckg_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_algo_17->SetHighLightColor(2);
   CutFlow_bckg_algo_17->Range(-1.4,6.832876,7.933333,12.98961);
   CutFlow_bckg_algo_17->SetFillColor(0);
   CutFlow_bckg_algo_17->SetBorderMode(0);
   CutFlow_bckg_algo_17->SetBorderSize(2);
   CutFlow_bckg_algo_17->SetLogy();
   CutFlow_bckg_algo_17->SetLeftMargin(0.15);
   CutFlow_bckg_algo_17->SetFrameBorderMode(0);
   CutFlow_bckg_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_CutFlow__10 = new TH1D("VbbHcc_algo_CutFlow__10","",7,0,7);
   VbbHcc_algo_CutFlow__10->SetBinContent(1,1.248485e+12);
   VbbHcc_algo_CutFlow__10->SetBinContent(2,1.24837e+12);
   VbbHcc_algo_CutFlow__10->SetBinContent(3,2.600511e+09);
   VbbHcc_algo_CutFlow__10->SetBinContent(4,4.231892e+08);
   VbbHcc_algo_CutFlow__10->SetBinContent(5,8.881257e+07);
   VbbHcc_algo_CutFlow__10->SetBinContent(6,7.073273e+07);
   VbbHcc_algo_CutFlow__10->SetBinContent(7,5.617963e+07);
   VbbHcc_algo_CutFlow__10->SetBinError(1,1.304214e+08);
   VbbHcc_algo_CutFlow__10->SetBinError(2,1.304163e+08);
   VbbHcc_algo_CutFlow__10->SetBinError(3,1896940);
   VbbHcc_algo_CutFlow__10->SetBinError(4,814808.5);
   VbbHcc_algo_CutFlow__10->SetBinError(5,398154.9);
   VbbHcc_algo_CutFlow__10->SetBinError(6,353579.7);
   VbbHcc_algo_CutFlow__10->SetBinError(7,318515.1);
   VbbHcc_algo_CutFlow__10->SetEntries(2.298143e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VbbHcc_algo_CutFlow__10->SetLineColor(ci);
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetRange(1,7);
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__10->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__10->GetYaxis()->SetTitle("Events");
   VbbHcc_algo_CutFlow__10->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__10->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__10->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__10->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__10->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__10->Draw("HIST");
   CutFlow_bckg_algo_17->Modified();
   CutFlow_bckg_algo_17->cd();
   CutFlow_bckg_algo_17->SetSelected(CutFlow_bckg_algo_17);
}
