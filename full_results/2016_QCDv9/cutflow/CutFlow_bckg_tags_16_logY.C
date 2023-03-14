#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_tags_16_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_tags_16/CutFlow_bckg_tags_16
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_tags_16 = new TCanvas("CutFlow_bckg_tags_16", "CutFlow_bckg_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_tags_16->SetHighLightColor(2);
   CutFlow_bckg_tags_16->Range(-1.4,5.7402,7.933333,13.04066);
   CutFlow_bckg_tags_16->SetFillColor(0);
   CutFlow_bckg_tags_16->SetBorderMode(0);
   CutFlow_bckg_tags_16->SetBorderSize(2);
   CutFlow_bckg_tags_16->SetLogy();
   CutFlow_bckg_tags_16->SetLeftMargin(0.15);
   CutFlow_bckg_tags_16->SetFrameBorderMode(0);
   CutFlow_bckg_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__2 = new TH1D("VbbHcc_tags_CutFlow__2","",7,0,7);
   VbbHcc_tags_CutFlow__2->SetBinContent(1,1.0791e+12);
   VbbHcc_tags_CutFlow__2->SetBinContent(2,1.07908e+12);
   VbbHcc_tags_CutFlow__2->SetBinContent(3,2.313198e+09);
   VbbHcc_tags_CutFlow__2->SetBinContent(4,3.788824e+08);
   VbbHcc_tags_CutFlow__2->SetBinContent(5,7.004972e+07);
   VbbHcc_tags_CutFlow__2->SetBinContent(6,3.096894e+07);
   VbbHcc_tags_CutFlow__2->SetBinContent(7,5905755);
   VbbHcc_tags_CutFlow__2->SetBinError(1,1.436993e+08);
   VbbHcc_tags_CutFlow__2->SetBinError(2,1.436985e+08);
   VbbHcc_tags_CutFlow__2->SetBinError(3,1896854);
   VbbHcc_tags_CutFlow__2->SetBinError(4,765906.7);
   VbbHcc_tags_CutFlow__2->SetBinError(5,284364.4);
   VbbHcc_tags_CutFlow__2->SetBinError(6,187524.4);
   VbbHcc_tags_CutFlow__2->SetBinError(7,73781.98);
   VbbHcc_tags_CutFlow__2->SetEntries(1.988967e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__2->SetLineColor(ci);
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetRange(1,7);
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__2->GetYaxis()->SetTitle("Events");
   VbbHcc_tags_CutFlow__2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__2->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__2->Draw("HIST");
   CutFlow_bckg_tags_16->Modified();
   CutFlow_bckg_tags_16->cd();
   CutFlow_bckg_tags_16->SetSelected(CutFlow_bckg_tags_16);
}
