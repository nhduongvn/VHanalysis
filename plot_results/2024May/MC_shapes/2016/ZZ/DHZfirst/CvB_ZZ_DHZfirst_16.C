#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZZ_DHZfirst_16()
{
//=========Macro generated from canvas: CvB_ZZ_DHZfirst_16/CvB_ZZ_DHZfirst_16
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZZ_DHZfirst_16 = new TCanvas("CvB_ZZ_DHZfirst_16", "CvB_ZZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZZ_DHZfirst_16->SetHighLightColor(2);
   CvB_ZZ_DHZfirst_16->Range(-0.2,-39537.3,1.133333,355835.6);
   CvB_ZZ_DHZfirst_16->SetFillColor(0);
   CvB_ZZ_DHZfirst_16->SetFillStyle(4000);
   CvB_ZZ_DHZfirst_16->SetBorderMode(0);
   CvB_ZZ_DHZfirst_16->SetBorderSize(2);
   CvB_ZZ_DHZfirst_16->SetLeftMargin(0.15);
   CvB_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   CvB_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   CvB_ZZ_DHZfirst_16->SetFrameFillStyle(1000);
   CvB_ZZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5998 = new TH1D("Jets_cut_CvB__5998","",20,0,1);
   Jets_cut_CvB__5998->SetBinContent(1,83766);
   Jets_cut_CvB__5998->SetBinContent(2,15229.84);
   Jets_cut_CvB__5998->SetBinContent(3,10462.08);
   Jets_cut_CvB__5998->SetBinContent(4,9211.338);
   Jets_cut_CvB__5998->SetBinContent(5,9188.291);
   Jets_cut_CvB__5998->SetBinContent(6,9230.572);
   Jets_cut_CvB__5998->SetBinContent(7,9461.183);
   Jets_cut_CvB__5998->SetBinContent(8,9963.247);
   Jets_cut_CvB__5998->SetBinContent(9,11667.78);
   Jets_cut_CvB__5998->SetBinContent(10,14480.23);
   Jets_cut_CvB__5998->SetBinContent(11,17688.44);
   Jets_cut_CvB__5998->SetBinContent(12,21831.2);
   Jets_cut_CvB__5998->SetBinContent(13,29899.71);
   Jets_cut_CvB__5998->SetBinContent(14,41949.66);
   Jets_cut_CvB__5998->SetBinContent(15,62286.54);
   Jets_cut_CvB__5998->SetBinContent(16,93028.66);
   Jets_cut_CvB__5998->SetBinContent(17,144912.1);
   Jets_cut_CvB__5998->SetBinContent(18,247697.9);
   Jets_cut_CvB__5998->SetBinContent(19,301236.5);
   Jets_cut_CvB__5998->SetBinContent(20,43219.25);
   Jets_cut_CvB__5998->SetBinError(1,298.4802);
   Jets_cut_CvB__5998->SetBinError(2,126.9319);
   Jets_cut_CvB__5998->SetBinError(3,104.5927);
   Jets_cut_CvB__5998->SetBinError(4,97.86119);
   Jets_cut_CvB__5998->SetBinError(5,97.88193);
   Jets_cut_CvB__5998->SetBinError(6,97.86242);
   Jets_cut_CvB__5998->SetBinError(7,99.10879);
   Jets_cut_CvB__5998->SetBinError(8,99.3765);
   Jets_cut_CvB__5998->SetBinError(9,107.6971);
   Jets_cut_CvB__5998->SetBinError(10,120.2774);
   Jets_cut_CvB__5998->SetBinError(11,132.7949);
   Jets_cut_CvB__5998->SetBinError(12,147.5744);
   Jets_cut_CvB__5998->SetBinError(13,172.7565);
   Jets_cut_CvB__5998->SetBinError(14,204.438);
   Jets_cut_CvB__5998->SetBinError(15,248.6356);
   Jets_cut_CvB__5998->SetBinError(16,303.0641);
   Jets_cut_CvB__5998->SetBinError(17,375.6826);
   Jets_cut_CvB__5998->SetBinError(18,490.2972);
   Jets_cut_CvB__5998->SetBinError(19,547.6439);
   Jets_cut_CvB__5998->SetBinError(20,203.7565);
   Jets_cut_CvB__5998->SetEntries(2522099);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5998->SetLineColor(ci);
   Jets_cut_CvB__5998->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5998->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5998->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5998->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5998->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5998->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5998->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5998->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5998->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5998->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5998->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5998->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5998->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5998->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5998->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZZ_DHZfirst_16->Modified();
   CvB_ZZ_DHZfirst_16->cd();
   CvB_ZZ_DHZfirst_16->SetSelected(CvB_ZZ_DHZfirst_16);
}
