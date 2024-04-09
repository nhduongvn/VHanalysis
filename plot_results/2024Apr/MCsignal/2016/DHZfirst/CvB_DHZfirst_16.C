#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_DHZfirst_16()
{
//=========Macro generated from canvas: CvB_DHZfirst_16/CvB_DHZfirst_16
//=========  (Mon Apr  8 11:27:55 2024) by ROOT version 6.28/10
   TCanvas *CvB_DHZfirst_16 = new TCanvas("CvB_DHZfirst_16", "CvB_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_DHZfirst_16->SetHighLightColor(2);
   CvB_DHZfirst_16->Range(-0.2,-42.45614,1.133333,382.1053);
   CvB_DHZfirst_16->SetFillColor(0);
   CvB_DHZfirst_16->SetFillStyle(4000);
   CvB_DHZfirst_16->SetBorderMode(0);
   CvB_DHZfirst_16->SetBorderSize(2);
   CvB_DHZfirst_16->SetLeftMargin(0.15);
   CvB_DHZfirst_16->SetFrameFillStyle(1000);
   CvB_DHZfirst_16->SetFrameBorderMode(0);
   CvB_DHZfirst_16->SetFrameFillStyle(1000);
   CvB_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__382 = new TH1D("Jets_cut_CvB__382","",20,0,1);
   Jets_cut_CvB__382->SetBinContent(1,54.10822);
   Jets_cut_CvB__382->SetBinContent(2,12.11166);
   Jets_cut_CvB__382->SetBinContent(3,9.443738);
   Jets_cut_CvB__382->SetBinContent(4,10.14232);
   Jets_cut_CvB__382->SetBinContent(5,11.34417);
   Jets_cut_CvB__382->SetBinContent(6,12.23718);
   Jets_cut_CvB__382->SetBinContent(7,14.46253);
   Jets_cut_CvB__382->SetBinContent(8,15.85561);
   Jets_cut_CvB__382->SetBinContent(9,19.79085);
   Jets_cut_CvB__382->SetBinContent(10,25.6751);
   Jets_cut_CvB__382->SetBinContent(11,31.12238);
   Jets_cut_CvB__382->SetBinContent(12,36.77604);
   Jets_cut_CvB__382->SetBinContent(13,50.92591);
   Jets_cut_CvB__382->SetBinContent(14,65.11598);
   Jets_cut_CvB__382->SetBinContent(15,92.50305);
   Jets_cut_CvB__382->SetBinContent(16,132.8469);
   Jets_cut_CvB__382->SetBinContent(17,193.8668);
   Jets_cut_CvB__382->SetBinContent(18,301.6081);
   Jets_cut_CvB__382->SetBinContent(19,323.4753);
   Jets_cut_CvB__382->SetBinContent(20,56.01252);
   Jets_cut_CvB__382->SetBinError(1,0.6212176);
   Jets_cut_CvB__382->SetBinError(2,0.2945488);
   Jets_cut_CvB__382->SetBinError(3,0.2579809);
   Jets_cut_CvB__382->SetBinError(4,0.2674384);
   Jets_cut_CvB__382->SetBinError(5,0.2862011);
   Jets_cut_CvB__382->SetBinError(6,0.2965309);
   Jets_cut_CvB__382->SetBinError(7,0.3288445);
   Jets_cut_CvB__382->SetBinError(8,0.3310324);
   Jets_cut_CvB__382->SetBinError(9,0.3737494);
   Jets_cut_CvB__382->SetBinError(10,0.4333719);
   Jets_cut_CvB__382->SetBinError(11,0.4740102);
   Jets_cut_CvB__382->SetBinError(12,0.5129506);
   Jets_cut_CvB__382->SetBinError(13,0.607854);
   Jets_cut_CvB__382->SetBinError(14,0.6851425);
   Jets_cut_CvB__382->SetBinError(15,0.8100345);
   Jets_cut_CvB__382->SetBinError(16,0.9735954);
   Jets_cut_CvB__382->SetBinError(17,1.154596);
   Jets_cut_CvB__382->SetBinError(18,1.428792);
   Jets_cut_CvB__382->SetBinError(19,1.499401);
   Jets_cut_CvB__382->SetBinError(20,0.5906806);
   Jets_cut_CvB__382->SetEntries(509664);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__382->SetLineColor(ci);
   Jets_cut_CvB__382->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__382->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__382->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__382->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__382->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__382->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__382->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__382->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__382->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__382->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__382->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__382->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__382->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__382->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__382->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_DHZfirst_16->Modified();
   CvB_DHZfirst_16->cd();
   CvB_DHZfirst_16->SetSelected(CvB_DHZfirst_16);
}
