#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_algo_16_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_algo_16/CutFlow_bckg_algo_16
//=========  (Thu Feb 16 12:44:09 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_algo_16 = new TCanvas("CutFlow_bckg_algo_16", "CutFlow_bckg_algo_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_algo_16->SetHighLightColor(2);
   CutFlow_bckg_algo_16->Range(-1,4.800025,5.666667,13.14512);
   CutFlow_bckg_algo_16->SetFillColor(0);
   CutFlow_bckg_algo_16->SetBorderMode(0);
   CutFlow_bckg_algo_16->SetBorderSize(2);
   CutFlow_bckg_algo_16->SetLogy();
   CutFlow_bckg_algo_16->SetLeftMargin(0.15);
   CutFlow_bckg_algo_16->SetFrameBorderMode(0);
   CutFlow_bckg_algo_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_CutFlow__4 = new TH1D("VbbHcc_algo_CutFlow__4","",5,0,5);
   VbbHcc_algo_CutFlow__4->SetBinContent(1,1.0791e+12);
   VbbHcc_algo_CutFlow__4->SetBinContent(2,1.07908e+12);
   VbbHcc_algo_CutFlow__4->SetBinContent(3,2.313338e+09);
   VbbHcc_algo_CutFlow__4->SetBinContent(4,1.528653e+07);
   VbbHcc_algo_CutFlow__4->SetBinContent(5,862113.4);
   VbbHcc_algo_CutFlow__4->SetBinError(1,1.475526e+08);
   VbbHcc_algo_CutFlow__4->SetBinError(2,1.475518e+08);
   VbbHcc_algo_CutFlow__4->SetBinError(3,1996209);
   VbbHcc_algo_CutFlow__4->SetBinError(4,135055.4);
   VbbHcc_algo_CutFlow__4->SetBinError(5,37729.15);
   VbbHcc_algo_CutFlow__4->SetEntries(1.634391e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   VbbHcc_algo_CutFlow__4->SetLineColor(ci);
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetRange(1,5);
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__4->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__4->GetYaxis()->SetTitle("Events");
   VbbHcc_algo_CutFlow__4->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__4->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__4->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_CutFlow__4->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_CutFlow__4->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_CutFlow__4->Draw("HIST");
   CutFlow_bckg_algo_16->Modified();
   CutFlow_bckg_algo_16->cd();
   CutFlow_bckg_algo_16->SetSelected(CutFlow_bckg_algo_16);
}
