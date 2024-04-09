#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_tagFirst_18()
{
//=========Macro generated from canvas: CvL_tagFirst_18/CvL_tagFirst_18
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *CvL_tagFirst_18 = new TCanvas("CvL_tagFirst_18", "CvL_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_tagFirst_18->SetHighLightColor(2);
   CvL_tagFirst_18->Range(-0.2,-70.50414,1.133333,664.2478);
   CvL_tagFirst_18->SetFillColor(0);
   CvL_tagFirst_18->SetFillStyle(4000);
   CvL_tagFirst_18->SetBorderMode(0);
   CvL_tagFirst_18->SetBorderSize(2);
   CvL_tagFirst_18->SetLeftMargin(0.15);
   CvL_tagFirst_18->SetFrameFillStyle(1000);
   CvL_tagFirst_18->SetFrameBorderMode(0);
   CvL_tagFirst_18->SetFrameFillStyle(1000);
   CvL_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__225 = new TH1D("Jets_cut_CvL__225","",20,0,1);
   Jets_cut_CvL__225->SetBinContent(1,418.13);
   Jets_cut_CvL__225->SetBinContent(2,562.7821);
   Jets_cut_CvL__225->SetBinContent(3,242.244);
   Jets_cut_CvL__225->SetBinContent(4,122.1106);
   Jets_cut_CvL__225->SetBinContent(5,75.89664);
   Jets_cut_CvL__225->SetBinContent(6,56.74659);
   Jets_cut_CvL__225->SetBinContent(7,44.74781);
   Jets_cut_CvL__225->SetBinContent(8,37.73262);
   Jets_cut_CvL__225->SetBinContent(9,34.15402);
   Jets_cut_CvL__225->SetBinContent(10,31.81024);
   Jets_cut_CvL__225->SetBinContent(11,31.21756);
   Jets_cut_CvL__225->SetBinContent(12,29.78301);
   Jets_cut_CvL__225->SetBinContent(13,29.62873);
   Jets_cut_CvL__225->SetBinContent(14,30.5919);
   Jets_cut_CvL__225->SetBinContent(15,32.7716);
   Jets_cut_CvL__225->SetBinContent(16,36.44251);
   Jets_cut_CvL__225->SetBinContent(17,40.79993);
   Jets_cut_CvL__225->SetBinContent(18,50.29718);
   Jets_cut_CvL__225->SetBinContent(19,65.07593);
   Jets_cut_CvL__225->SetBinContent(20,224.5929);
   Jets_cut_CvL__225->SetBinError(1,1.129402);
   Jets_cut_CvL__225->SetBinError(2,1.288011);
   Jets_cut_CvL__225->SetBinError(3,0.8995125);
   Jets_cut_CvL__225->SetBinError(4,0.6186943);
   Jets_cut_CvL__225->SetBinError(5,0.4792023);
   Jets_cut_CvL__225->SetBinError(6,0.4093724);
   Jets_cut_CvL__225->SetBinError(7,0.3755054);
   Jets_cut_CvL__225->SetBinError(8,0.3230631);
   Jets_cut_CvL__225->SetBinError(9,0.3089277);
   Jets_cut_CvL__225->SetBinError(10,0.2978308);
   Jets_cut_CvL__225->SetBinError(11,0.3100628);
   Jets_cut_CvL__225->SetBinError(12,0.29124);
   Jets_cut_CvL__225->SetBinError(13,0.2934192);
   Jets_cut_CvL__225->SetBinError(14,0.2991776);
   Jets_cut_CvL__225->SetBinError(15,0.3051026);
   Jets_cut_CvL__225->SetBinError(16,0.3373217);
   Jets_cut_CvL__225->SetBinError(17,0.3469762);
   Jets_cut_CvL__225->SetBinError(18,0.3701805);
   Jets_cut_CvL__225->SetBinError(19,0.4294714);
   Jets_cut_CvL__225->SetBinError(20,0.790643);
   Jets_cut_CvL__225->SetEntries(1024254);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__225->SetLineColor(ci);
   Jets_cut_CvL__225->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__225->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__225->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__225->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__225->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__225->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__225->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__225->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__225->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__225->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__225->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__225->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__225->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__225->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__225->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_tagFirst_18->Modified();
   CvL_tagFirst_18->cd();
   CvL_tagFirst_18->SetSelected(CvL_tagFirst_18);
}
