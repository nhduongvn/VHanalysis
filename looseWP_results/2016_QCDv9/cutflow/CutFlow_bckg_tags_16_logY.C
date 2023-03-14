#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_tags_16_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_tags_16/CutFlow_bckg_tags_16
//=========  (Fri Mar 10 12:16:35 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_tags_16 = new TCanvas("CutFlow_bckg_tags_16", "CutFlow_bckg_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_tags_16->SetHighLightColor(2);
   CutFlow_bckg_tags_16->Range(-1.4,7.551692,7.933333,12.83938);
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
   VbbHcc_tags_CutFlow__2->SetBinContent(3,2.313252e+09);
   VbbHcc_tags_CutFlow__2->SetBinContent(4,1.121381e+09);
   VbbHcc_tags_CutFlow__2->SetBinContent(5,3.243303e+08);
   VbbHcc_tags_CutFlow__2->SetBinContent(6,3.161023e+08);
   VbbHcc_tags_CutFlow__2->SetBinContent(7,2.407081e+08);
   VbbHcc_tags_CutFlow__2->SetBinError(1,1.439593e+08);
   VbbHcc_tags_CutFlow__2->SetBinError(2,1.439586e+08);
   VbbHcc_tags_CutFlow__2->SetBinError(3,1899441);
   VbbHcc_tags_CutFlow__2->SetBinError(4,1392378);
   VbbHcc_tags_CutFlow__2->SetBinError(5,780513.8);
   VbbHcc_tags_CutFlow__2->SetBinError(6,769680);
   VbbHcc_tags_CutFlow__2->SetBinError(7,670145);
   VbbHcc_tags_CutFlow__2->SetEntries(2.231865e+09);

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
