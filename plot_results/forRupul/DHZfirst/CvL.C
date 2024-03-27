#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL()
{
//=========Macro generated from canvas: CvL/CvL
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *CvL = new TCanvas("CvL", "CvL",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL->SetHighLightColor(2);
   CvL->Range(-0.2,-70.50414,1.133333,664.2478);
   CvL->SetFillColor(0);
   CvL->SetFillStyle(4000);
   CvL->SetBorderMode(0);
   CvL->SetBorderSize(2);
   CvL->SetLeftMargin(0.15);
   CvL->SetFrameFillStyle(1000);
   CvL->SetFrameBorderMode(0);
   CvL->SetFrameFillStyle(1000);
   CvL->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__127 = new TH1D("Jets_cut_CvL__127","",20,0,1);
   Jets_cut_CvL__127->SetBinContent(1,418.13);
   Jets_cut_CvL__127->SetBinContent(2,562.7821);
   Jets_cut_CvL__127->SetBinContent(3,242.244);
   Jets_cut_CvL__127->SetBinContent(4,122.1106);
   Jets_cut_CvL__127->SetBinContent(5,75.89664);
   Jets_cut_CvL__127->SetBinContent(6,56.74659);
   Jets_cut_CvL__127->SetBinContent(7,44.74781);
   Jets_cut_CvL__127->SetBinContent(8,37.73262);
   Jets_cut_CvL__127->SetBinContent(9,34.15402);
   Jets_cut_CvL__127->SetBinContent(10,31.81024);
   Jets_cut_CvL__127->SetBinContent(11,31.21756);
   Jets_cut_CvL__127->SetBinContent(12,29.78301);
   Jets_cut_CvL__127->SetBinContent(13,29.62873);
   Jets_cut_CvL__127->SetBinContent(14,30.5919);
   Jets_cut_CvL__127->SetBinContent(15,32.7716);
   Jets_cut_CvL__127->SetBinContent(16,36.44251);
   Jets_cut_CvL__127->SetBinContent(17,40.79993);
   Jets_cut_CvL__127->SetBinContent(18,50.29718);
   Jets_cut_CvL__127->SetBinContent(19,65.07593);
   Jets_cut_CvL__127->SetBinContent(20,224.5929);
   Jets_cut_CvL__127->SetBinError(1,1.129402);
   Jets_cut_CvL__127->SetBinError(2,1.288011);
   Jets_cut_CvL__127->SetBinError(3,0.8995125);
   Jets_cut_CvL__127->SetBinError(4,0.6186943);
   Jets_cut_CvL__127->SetBinError(5,0.4792023);
   Jets_cut_CvL__127->SetBinError(6,0.4093724);
   Jets_cut_CvL__127->SetBinError(7,0.3755054);
   Jets_cut_CvL__127->SetBinError(8,0.3230631);
   Jets_cut_CvL__127->SetBinError(9,0.3089277);
   Jets_cut_CvL__127->SetBinError(10,0.2978308);
   Jets_cut_CvL__127->SetBinError(11,0.3100628);
   Jets_cut_CvL__127->SetBinError(12,0.29124);
   Jets_cut_CvL__127->SetBinError(13,0.2934192);
   Jets_cut_CvL__127->SetBinError(14,0.2991776);
   Jets_cut_CvL__127->SetBinError(15,0.3051026);
   Jets_cut_CvL__127->SetBinError(16,0.3373217);
   Jets_cut_CvL__127->SetBinError(17,0.3469762);
   Jets_cut_CvL__127->SetBinError(18,0.3701805);
   Jets_cut_CvL__127->SetBinError(19,0.4294714);
   Jets_cut_CvL__127->SetBinError(20,0.790643);
   Jets_cut_CvL__127->SetEntries(1024254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__127->SetLineColor(ci);
   Jets_cut_CvL__127->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__127->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__127->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__127->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__127->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__127->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__127->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__127->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__127->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__127->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__127->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__127->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__127->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__127->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__127->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL->Modified();
   CvL->cd();
   CvL->SetSelected(CvL);
}
