#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_tags_16_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_tags_16/CutFlow_bckg_tags_16
//=========  (Thu Feb 16 12:44:09 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_tags_16 = new TCanvas("CutFlow_bckg_tags_16", "CutFlow_bckg_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_tags_16->SetHighLightColor(2);
   CutFlow_bckg_tags_16->Range(-1,5.738417,5.666667,13.04085);
   CutFlow_bckg_tags_16->SetFillColor(0);
   CutFlow_bckg_tags_16->SetBorderMode(0);
   CutFlow_bckg_tags_16->SetBorderSize(2);
   CutFlow_bckg_tags_16->SetLogy();
   CutFlow_bckg_tags_16->SetLeftMargin(0.15);
   CutFlow_bckg_tags_16->SetFrameBorderMode(0);
   CutFlow_bckg_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_CutFlow__2 = new TH1D("VbbHcc_tags_CutFlow__2","",5,0,5);
   VbbHcc_tags_CutFlow__2->SetBinContent(1,1.0791e+12);
   VbbHcc_tags_CutFlow__2->SetBinContent(2,1.07908e+12);
   VbbHcc_tags_CutFlow__2->SetBinContent(3,2.313338e+09);
   VbbHcc_tags_CutFlow__2->SetBinContent(4,7.004506e+07);
   VbbHcc_tags_CutFlow__2->SetBinContent(5,5884251);
   VbbHcc_tags_CutFlow__2->SetBinError(1,1.475526e+08);
   VbbHcc_tags_CutFlow__2->SetBinError(2,1.475518e+08);
   VbbHcc_tags_CutFlow__2->SetBinError(3,1996209);
   VbbHcc_tags_CutFlow__2->SetBinError(4,301956);
   VbbHcc_tags_CutFlow__2->SetBinError(5,75891.21);
   VbbHcc_tags_CutFlow__2->SetEntries(1.695838e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#009900");
   VbbHcc_tags_CutFlow__2->SetLineColor(ci);
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(4,"b-tags");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetBinLabel(5,"c-tags");
   VbbHcc_tags_CutFlow__2->GetXaxis()->SetRange(1,5);
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
