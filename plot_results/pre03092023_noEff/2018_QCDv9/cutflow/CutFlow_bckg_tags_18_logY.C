#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_tags_18_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_tags_18/CutFlow_bckg_tags_18
//=========  (Thu Feb 16 12:44:09 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_tags_18 = new TCanvas("CutFlow_bckg_tags_18", "CutFlow_bckg_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_tags_18->SetHighLightColor(2);
   CutFlow_bckg_tags_18->Range(-1,5.993202,5.666667,13.25812);
   CutFlow_bckg_tags_18->SetFillColor(0);
   CutFlow_bckg_tags_18->SetBorderMode(0);
   CutFlow_bckg_tags_18->SetBorderSize(2);
   CutFlow_bckg_tags_18->SetLogy();
   CutFlow_bckg_tags_18->SetLeftMargin(0.15);
   CutFlow_bckg_tags_18->SetFrameBorderMode(0);
   CutFlow_bckg_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__14 = new TH1D("VbbHcc_tags_CutFlow__14","",5,0,5);
   VbbHcc_tags_CutFlow__14->SetBinContent(1,1.79506e+12);
   VbbHcc_tags_CutFlow__14->SetBinContent(2,1.794953e+12);
   VbbHcc_tags_CutFlow__14->SetBinContent(3,3.715602e+09);
   VbbHcc_tags_CutFlow__14->SetBinContent(4,1.310433e+08);
   VbbHcc_tags_CutFlow__14->SetBinContent(5,1.048875e+07);
   VbbHcc_tags_CutFlow__14->SetBinError(1,1.942593e+08);
   VbbHcc_tags_CutFlow__14->SetBinError(2,1.942547e+08);
   VbbHcc_tags_CutFlow__14->SetBinError(3,2811086);
   VbbHcc_tags_CutFlow__14->SetBinError(4,527824);
   VbbHcc_tags_CutFlow__14->SetBinError(5,139208);
   VbbHcc_tags_CutFlow__14->SetEntries(2.623498e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__14->SetLineColor(ci);
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetRange(1,5);
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__14->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__14->GetYaxis()->SetTitle("Events");
   VbbHcc_tags_CutFlow__14->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__14->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__14->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_CutFlow__14->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_CutFlow__14->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_CutFlow__14->Draw("HIST");
   CutFlow_bckg_tags_18->Modified();
   CutFlow_bckg_tags_18->cd();
   CutFlow_bckg_tags_18->SetSelected(CutFlow_bckg_tags_18);
}
