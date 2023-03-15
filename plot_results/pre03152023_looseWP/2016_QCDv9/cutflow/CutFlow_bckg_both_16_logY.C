#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_both_16_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_both_16/CutFlow_bckg_both_16
//=========  (Fri Mar 10 12:16:35 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_both_16 = new TCanvas("CutFlow_bckg_both_16", "CutFlow_bckg_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_both_16->SetHighLightColor(2);
   CutFlow_bckg_both_16->Range(-0.8,7.55184,4.533333,12.83936);
   CutFlow_bckg_both_16->SetFillColor(0);
   CutFlow_bckg_both_16->SetBorderMode(0);
   CutFlow_bckg_both_16->SetBorderSize(2);
   CutFlow_bckg_both_16->SetLogy();
   CutFlow_bckg_both_16->SetLeftMargin(0.15);
   CutFlow_bckg_both_16->SetFrameBorderMode(0);
   CutFlow_bckg_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_CutFlow__6 = new TH1D("VbbHcc_both_CutFlow__6","",4,0,4);
   VbbHcc_both_CutFlow__6->SetBinContent(1,1.0791e+12);
   VbbHcc_both_CutFlow__6->SetBinContent(2,1.07908e+12);
   VbbHcc_both_CutFlow__6->SetBinContent(3,2.313252e+09);
   VbbHcc_both_CutFlow__6->SetBinContent(4,2.407813e+08);
   VbbHcc_both_CutFlow__6->SetBinError(1,1.439593e+08);
   VbbHcc_both_CutFlow__6->SetBinError(2,1.439586e+08);
   VbbHcc_both_CutFlow__6->SetBinError(3,1899441);
   VbbHcc_both_CutFlow__6->SetBinError(4,670153.4);
   VbbHcc_both_CutFlow__6->SetEntries(1.842713e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_both_CutFlow__6->SetLineColor(ci);
   VbbHcc_both_CutFlow__6->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_both_CutFlow__6->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow__6->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow__6->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow__6->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow__6->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow__6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__6->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__6->GetYaxis()->SetTitle("Events");
   VbbHcc_both_CutFlow__6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__6->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__6->Draw("HIST");
   CutFlow_bckg_both_16->Modified();
   CutFlow_bckg_both_16->cd();
   CutFlow_bckg_both_16->SetSelected(CutFlow_bckg_both_16);
}
