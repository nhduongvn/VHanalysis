#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_algo_17_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_algo_17/CutFlow_bckg_algo_17
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_algo_17 = new TCanvas("CutFlow_bckg_algo_17", "CutFlow_bckg_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_algo_17->SetHighLightColor(2);
   CutFlow_bckg_algo_17->Range(-1.4,4.943711,7.933333,13.19951);
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
   VbbHcc_algo_CutFlow__10->SetBinContent(3,2.600182e+09);
   VbbHcc_algo_CutFlow__10->SetBinContent(4,1.453191e+08);
   VbbHcc_algo_CutFlow__10->SetBinContent(5,2.114369e+07);
   VbbHcc_algo_CutFlow__10->SetBinContent(6,4872299);
   VbbHcc_algo_CutFlow__10->SetBinContent(7,1175768);
   VbbHcc_algo_CutFlow__10->SetBinError(1,1.306433e+08);
   VbbHcc_algo_CutFlow__10->SetBinError(2,1.306381e+08);
   VbbHcc_algo_CutFlow__10->SetBinError(3,1888921);
   VbbHcc_algo_CutFlow__10->SetBinError(4,454582.7);
   VbbHcc_algo_CutFlow__10->SetBinError(5,172774.7);
   VbbHcc_algo_CutFlow__10->SetBinError(6,82971.39);
   VbbHcc_algo_CutFlow__10->SetBinError(7,44441.4);
   VbbHcc_algo_CutFlow__10->SetEntries(2.20173e+09);

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
