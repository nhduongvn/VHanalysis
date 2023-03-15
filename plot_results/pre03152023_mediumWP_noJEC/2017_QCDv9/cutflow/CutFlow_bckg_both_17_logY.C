#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CutFlow_bckg_both_17_logY()
{
//=========Macro generated from canvas: CutFlow_bckg_both_17/CutFlow_bckg_both_17
//=========  (Thu Mar  9 13:36:11 2023) by ROOT version 6.26/06
   TCanvas *CutFlow_bckg_both_17 = new TCanvas("CutFlow_bckg_both_17", "CutFlow_bckg_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CutFlow_bckg_both_17->SetHighLightColor(2);
   CutFlow_bckg_both_17->Range(-0.8,5.887457,4.533333,13.09465);
   CutFlow_bckg_both_17->SetFillColor(0);
   CutFlow_bckg_both_17->SetBorderMode(0);
   CutFlow_bckg_both_17->SetBorderSize(2);
   CutFlow_bckg_both_17->SetLogy();
   CutFlow_bckg_both_17->SetLeftMargin(0.15);
   CutFlow_bckg_both_17->SetFrameBorderMode(0);
   CutFlow_bckg_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_CutFlow__12 = new TH1D("VbbHcc_both_CutFlow__12","",4,0,4);
   VbbHcc_both_CutFlow__12->SetBinContent(1,1.248485e+12);
   VbbHcc_both_CutFlow__12->SetBinContent(2,1.24837e+12);
   VbbHcc_both_CutFlow__12->SetBinContent(3,2.600182e+09);
   VbbHcc_both_CutFlow__12->SetBinContent(4,8113467);
   VbbHcc_both_CutFlow__12->SetBinError(1,1.306433e+08);
   VbbHcc_both_CutFlow__12->SetBinError(2,1.306381e+08);
   VbbHcc_both_CutFlow__12->SetBinError(3,1888921);
   VbbHcc_both_CutFlow__12->SetBinError(4,100839);
   VbbHcc_both_CutFlow__12->SetEntries(2.13844e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   VbbHcc_both_CutFlow__12->SetLineColor(ci);
   VbbHcc_both_CutFlow__12->GetXaxis()->SetTitle("CutFlow");
   VbbHcc_both_CutFlow__12->GetXaxis()->SetBinLabel(1,"Total");
   VbbHcc_both_CutFlow__12->GetXaxis()->SetBinLabel(2,"MET cut");
   VbbHcc_both_CutFlow__12->GetXaxis()->SetBinLabel(3,"jet cuts");
   VbbHcc_both_CutFlow__12->GetXaxis()->SetBinLabel(4,"tags cut");
   VbbHcc_both_CutFlow__12->GetXaxis()->SetRange(1,4);
   VbbHcc_both_CutFlow__12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__12->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__12->GetYaxis()->SetTitle("Events");
   VbbHcc_both_CutFlow__12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_CutFlow__12->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_CutFlow__12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_CutFlow__12->Draw("HIST");
   CutFlow_bckg_both_17->Modified();
   CutFlow_bckg_both_17->cd();
   CutFlow_bckg_both_17->SetSelected(CutFlow_bckg_both_17);
}
