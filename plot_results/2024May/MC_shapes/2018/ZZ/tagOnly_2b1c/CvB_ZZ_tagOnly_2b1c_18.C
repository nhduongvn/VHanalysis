#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZZ_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: CvB_ZZ_tagOnly_2b1c_18/CvB_ZZ_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:19 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZZ_tagOnly_2b1c_18 = new TCanvas("CvB_ZZ_tagOnly_2b1c_18", "CvB_ZZ_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZZ_tagOnly_2b1c_18->SetHighLightColor(2);
   CvB_ZZ_tagOnly_2b1c_18->Range(-0.2,-37024.54,1.133333,333220.9);
   CvB_ZZ_tagOnly_2b1c_18->SetFillColor(0);
   CvB_ZZ_tagOnly_2b1c_18->SetFillStyle(4000);
   CvB_ZZ_tagOnly_2b1c_18->SetBorderMode(0);
   CvB_ZZ_tagOnly_2b1c_18->SetBorderSize(2);
   CvB_ZZ_tagOnly_2b1c_18->SetLeftMargin(0.15);
   CvB_ZZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CvB_ZZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   CvB_ZZ_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CvB_ZZ_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__7560 = new TH1D("Jets_cut_CvB__7560","",20,0,1);
   Jets_cut_CvB__7560->SetBinContent(1,78537.32);
   Jets_cut_CvB__7560->SetBinContent(2,12120.16);
   Jets_cut_CvB__7560->SetBinContent(3,8284.073);
   Jets_cut_CvB__7560->SetBinContent(4,7506.541);
   Jets_cut_CvB__7560->SetBinContent(5,7276.13);
   Jets_cut_CvB__7560->SetBinContent(6,7102.12);
   Jets_cut_CvB__7560->SetBinContent(7,7334.455);
   Jets_cut_CvB__7560->SetBinContent(8,8232.099);
   Jets_cut_CvB__7560->SetBinContent(9,9573.454);
   Jets_cut_CvB__7560->SetBinContent(10,11689.92);
   Jets_cut_CvB__7560->SetBinContent(11,14096.78);
   Jets_cut_CvB__7560->SetBinContent(12,17250.97);
   Jets_cut_CvB__7560->SetBinContent(13,23834.5);
   Jets_cut_CvB__7560->SetBinContent(14,33467.77);
   Jets_cut_CvB__7560->SetBinContent(15,49894.91);
   Jets_cut_CvB__7560->SetBinContent(16,74789.57);
   Jets_cut_CvB__7560->SetBinContent(17,122626.5);
   Jets_cut_CvB__7560->SetBinContent(18,226547);
   Jets_cut_CvB__7560->SetBinContent(19,282091.7);
   Jets_cut_CvB__7560->SetBinContent(20,48825.72);
   Jets_cut_CvB__7560->SetBinError(1,176.7789);
   Jets_cut_CvB__7560->SetBinError(2,69.93589);
   Jets_cut_CvB__7560->SetBinError(3,59.68384);
   Jets_cut_CvB__7560->SetBinError(4,56.28955);
   Jets_cut_CvB__7560->SetBinError(5,56.16314);
   Jets_cut_CvB__7560->SetBinError(6,54.16754);
   Jets_cut_CvB__7560->SetBinError(7,57.35867);
   Jets_cut_CvB__7560->SetBinError(8,63.1089);
   Jets_cut_CvB__7560->SetBinError(9,65.25976);
   Jets_cut_CvB__7560->SetBinError(10,71.09689);
   Jets_cut_CvB__7560->SetBinError(11,79.3965);
   Jets_cut_CvB__7560->SetBinError(12,97.83255);
   Jets_cut_CvB__7560->SetBinError(13,104.2257);
   Jets_cut_CvB__7560->SetBinError(14,121.6479);
   Jets_cut_CvB__7560->SetBinError(15,145.6334);
   Jets_cut_CvB__7560->SetBinError(16,182.4639);
   Jets_cut_CvB__7560->SetBinError(17,229.8056);
   Jets_cut_CvB__7560->SetBinError(18,309.5831);
   Jets_cut_CvB__7560->SetBinError(19,349.2972);
   Jets_cut_CvB__7560->SetBinError(20,152.7291);
   Jets_cut_CvB__7560->SetEntries(3672806);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__7560->SetLineColor(ci);
   Jets_cut_CvB__7560->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__7560->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__7560->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__7560->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7560->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__7560->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__7560->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__7560->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__7560->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__7560->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__7560->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__7560->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__7560->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7560->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__7560->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZZ_tagOnly_2b1c_18->Modified();
   CvB_ZZ_tagOnly_2b1c_18->cd();
   CvB_ZZ_tagOnly_2b1c_18->SetSelected(CvB_ZZ_tagOnly_2b1c_18);
}
