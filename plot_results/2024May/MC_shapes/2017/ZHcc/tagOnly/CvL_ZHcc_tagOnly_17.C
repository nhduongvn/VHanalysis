#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZHcc_tagOnly_17()
{
//=========Macro generated from canvas: CvL_ZHcc_tagOnly_17/CvL_ZHcc_tagOnly_17
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZHcc_tagOnly_17 = new TCanvas("CvL_ZHcc_tagOnly_17", "CvL_ZHcc_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZHcc_tagOnly_17->SetHighLightColor(2);
   CvL_ZHcc_tagOnly_17->Range(-0.2,-44.08337,1.133333,423.413);
   CvL_ZHcc_tagOnly_17->SetFillColor(0);
   CvL_ZHcc_tagOnly_17->SetFillStyle(4000);
   CvL_ZHcc_tagOnly_17->SetBorderMode(0);
   CvL_ZHcc_tagOnly_17->SetBorderSize(2);
   CvL_ZHcc_tagOnly_17->SetLeftMargin(0.15);
   CvL_ZHcc_tagOnly_17->SetFrameFillStyle(1000);
   CvL_ZHcc_tagOnly_17->SetFrameBorderMode(0);
   CvL_ZHcc_tagOnly_17->SetFrameFillStyle(1000);
   CvL_ZHcc_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5162 = new TH1D("Jets_cut_CvL__5162","",20,0,1);
   Jets_cut_CvL__5162->SetBinContent(1,263.7465);
   Jets_cut_CvL__5162->SetBinContent(2,358.854);
   Jets_cut_CvL__5162->SetBinContent(3,145.7404);
   Jets_cut_CvL__5162->SetBinContent(4,75.03178);
   Jets_cut_CvL__5162->SetBinContent(5,47.53764);
   Jets_cut_CvL__5162->SetBinContent(6,35.94957);
   Jets_cut_CvL__5162->SetBinContent(7,28.94652);
   Jets_cut_CvL__5162->SetBinContent(8,24.5244);
   Jets_cut_CvL__5162->SetBinContent(9,22.03);
   Jets_cut_CvL__5162->SetBinContent(10,20.84646);
   Jets_cut_CvL__5162->SetBinContent(11,20.20172);
   Jets_cut_CvL__5162->SetBinContent(12,19.73675);
   Jets_cut_CvL__5162->SetBinContent(13,19.6276);
   Jets_cut_CvL__5162->SetBinContent(14,20.06245);
   Jets_cut_CvL__5162->SetBinContent(15,21.30457);
   Jets_cut_CvL__5162->SetBinContent(16,23.91631);
   Jets_cut_CvL__5162->SetBinContent(17,27.18628);
   Jets_cut_CvL__5162->SetBinContent(18,33.39741);
   Jets_cut_CvL__5162->SetBinContent(19,43.62068);
   Jets_cut_CvL__5162->SetBinContent(20,152.1433);
   Jets_cut_CvL__5162->SetBinError(1,0.525425);
   Jets_cut_CvL__5162->SetBinError(2,0.6218876);
   Jets_cut_CvL__5162->SetBinError(3,0.4024322);
   Jets_cut_CvL__5162->SetBinError(4,0.2895678);
   Jets_cut_CvL__5162->SetBinError(5,0.2307605);
   Jets_cut_CvL__5162->SetBinError(6,0.2003253);
   Jets_cut_CvL__5162->SetBinError(7,0.1796868);
   Jets_cut_CvL__5162->SetBinError(8,0.1655649);
   Jets_cut_CvL__5162->SetBinError(9,0.1567917);
   Jets_cut_CvL__5162->SetBinError(10,0.1520467);
   Jets_cut_CvL__5162->SetBinError(11,0.1492081);
   Jets_cut_CvL__5162->SetBinError(12,0.1473852);
   Jets_cut_CvL__5162->SetBinError(13,0.1467811);
   Jets_cut_CvL__5162->SetBinError(14,0.1482275);
   Jets_cut_CvL__5162->SetBinError(15,0.1523516);
   Jets_cut_CvL__5162->SetBinError(16,0.1609829);
   Jets_cut_CvL__5162->SetBinError(17,0.1718712);
   Jets_cut_CvL__5162->SetBinError(18,0.1912752);
   Jets_cut_CvL__5162->SetBinError(19,0.2188594);
   Jets_cut_CvL__5162->SetBinError(20,0.4054797);
   Jets_cut_CvL__5162->SetEntries(2592716);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5162->SetLineColor(ci);
   Jets_cut_CvL__5162->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5162->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5162->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5162->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5162->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5162->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5162->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5162->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5162->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5162->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5162->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5162->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5162->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5162->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5162->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZHcc_tagOnly_17->Modified();
   CvL_ZHcc_tagOnly_17->cd();
   CvL_ZHcc_tagOnly_17->SetSelected(CvL_ZHcc_tagOnly_17);
}
