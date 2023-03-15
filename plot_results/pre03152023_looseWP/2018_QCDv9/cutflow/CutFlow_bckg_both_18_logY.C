#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_both_18_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_both_18/CutFlow_bckg_both_18
//=========  (Fri Mar 10 12:16:36 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_both_18 = new TCanvas("CutFlow_bckg_both_18", "CutFlow_bckg_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_both_18->SetHighLightColor(2);
   CutFlow_bckg_both_18->Range(-0.8,7.708906,4.533333,13.06749);
   CutFlow_bckg_both_18->SetFillColor(0);
   CutFlow_bckg_both_18->SetBorderMode(0);
   CutFlow_bckg_both_18->SetBorderSize(2);
   CutFlow_bckg_both_18->SetLogy();
   CutFlow_bckg_both_18->SetLeftMargin(0.15);
   CutFlow_bckg_both_18->SetFrameBorderMode(0);
   CutFlow_bckg_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_CutFlow__18 = new TH1D("VbbHcc_both_CutFlow__18","",4,0,4);
   VbbHcc_both_CutFlow__18->SetBinContent(1,1.79506e+12);
   VbbHcc_both_CutFlow__18->SetBinContent(2,1.794953e+12);
   VbbHcc_both_CutFlow__18->SetBinContent(3,3.71557e+09);
   VbbHcc_both_CutFlow__18->SetBinContent(4,3.51394e+08);
   VbbHcc_both_CutFlow__18->SetBinError(1,1.940917e+08);
   VbbHcc_both_CutFlow__18->SetBinError(2,1.940871e+08);
   VbbHcc_both_CutFlow__18->SetBinError(3,2749258);
   VbbHcc_both_CutFlow__18->SetBinError(4,919863.2);
   VbbHcc_both_CutFlow__18->SetEntries(2.923773e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_both_CutFlow__18->SetLineColor(ci);
   VbbHcc_both_CutFlow__18->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_both_CutFlow__18->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow__18->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow__18->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow__18->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow__18->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow__18->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__18->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__18->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__18->GetYaxis()->SetTitle("Events");
   VbbHcc_both_CutFlow__18->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__18->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__18->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__18->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__18->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__18->Draw("HIST");
   CutFlow_bckg_both_18->Modified();
   CutFlow_bckg_both_18->cd();
   CutFlow_bckg_both_18->SetSelected(CutFlow_bckg_both_18);
}
