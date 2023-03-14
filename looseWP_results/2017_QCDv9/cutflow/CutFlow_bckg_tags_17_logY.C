#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_tags_17_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_tags_17/CutFlow_bckg_tags_17
//=========  (Fri Mar 10 12:16:36 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_tags_17 = new TCanvas("CutFlow_bckg_tags_17", "CutFlow_bckg_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_tags_17->SetHighLightColor(2);
   CutFlow_bckg_tags_17->Range(-1.4,7.596779,7.933333,12.90473);
   CutFlow_bckg_tags_17->SetFillColor(0);
   CutFlow_bckg_tags_17->SetBorderMode(0);
   CutFlow_bckg_tags_17->SetBorderSize(2);
   CutFlow_bckg_tags_17->SetLogy();
   CutFlow_bckg_tags_17->SetLeftMargin(0.15);
   CutFlow_bckg_tags_17->SetFrameBorderMode(0);
   CutFlow_bckg_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__8 = new TH1D("VbbHcc_tags_CutFlow__8","",7,0,7);
   VbbHcc_tags_CutFlow__8->SetBinContent(1,1.248485e+12);
   VbbHcc_tags_CutFlow__8->SetBinContent(2,1.24837e+12);
   VbbHcc_tags_CutFlow__8->SetBinContent(3,2.600511e+09);
   VbbHcc_tags_CutFlow__8->SetBinContent(4,1.285726e+09);
   VbbHcc_tags_CutFlow__8->SetBinContent(5,3.87265e+08);
   VbbHcc_tags_CutFlow__8->SetBinContent(6,3.732128e+08);
   VbbHcc_tags_CutFlow__8->SetBinContent(7,2.682897e+08);
   VbbHcc_tags_CutFlow__8->SetBinError(1,1.304214e+08);
   VbbHcc_tags_CutFlow__8->SetBinError(2,1.304163e+08);
   VbbHcc_tags_CutFlow__8->SetBinError(3,1896940);
   VbbHcc_tags_CutFlow__8->SetBinError(4,1403817);
   VbbHcc_tags_CutFlow__8->SetBinError(5,817872.2);
   VbbHcc_tags_CutFlow__8->SetBinError(6,802696);
   VbbHcc_tags_CutFlow__8->SetBinError(7,670454.9);
   VbbHcc_tags_CutFlow__8->SetEntries(2.715797e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__8->SetLineColor(ci);
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetBinLabel(4,"b-tag #1");
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetBinLabel(5,"b-tag #2");
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetBinLabel(6,"c-tag #1");
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetBinLabel(7,"c-tag #2");
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetRange(1,7);
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__8->GetYaxis()->SetTitle("Events");
   VbbHcc_tags_CutFlow__8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__8->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__8->Draw("HIST");
   CutFlow_bckg_tags_17->Modified();
   CutFlow_bckg_tags_17->cd();
   CutFlow_bckg_tags_17->SetSelected(CutFlow_bckg_tags_17);
}
