#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WW_DHZfirst_18()
{
//=========Macro generated from canvas: CvB_WW_DHZfirst_18/CvB_WW_DHZfirst_18
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvB_WW_DHZfirst_18 = new TCanvas("CvB_WW_DHZfirst_18", "CvB_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WW_DHZfirst_18->SetHighLightColor(2);
   CvB_WW_DHZfirst_18->Range(-0.2,-263674.8,1.133333,2373073);
   CvB_WW_DHZfirst_18->SetFillColor(0);
   CvB_WW_DHZfirst_18->SetFillStyle(4000);
   CvB_WW_DHZfirst_18->SetBorderMode(0);
   CvB_WW_DHZfirst_18->SetBorderSize(2);
   CvB_WW_DHZfirst_18->SetLeftMargin(0.15);
   CvB_WW_DHZfirst_18->SetFrameFillStyle(1000);
   CvB_WW_DHZfirst_18->SetFrameBorderMode(0);
   CvB_WW_DHZfirst_18->SetFrameFillStyle(1000);
   CvB_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__5994 = new TH1D("Jets_cut_CvB__5994","",20,0,1);
   Jets_cut_CvB__5994->SetBinContent(1,26079.95);
   Jets_cut_CvB__5994->SetBinContent(2,11356.75);
   Jets_cut_CvB__5994->SetBinContent(3,11731.88);
   Jets_cut_CvB__5994->SetBinContent(4,14454.97);
   Jets_cut_CvB__5994->SetBinContent(5,17958.49);
   Jets_cut_CvB__5994->SetBinContent(6,22014.49);
   Jets_cut_CvB__5994->SetBinContent(7,28026.26);
   Jets_cut_CvB__5994->SetBinContent(8,36708.09);
   Jets_cut_CvB__5994->SetBinContent(9,48185.94);
   Jets_cut_CvB__5994->SetBinContent(10,63766.1);
   Jets_cut_CvB__5994->SetBinContent(11,82549.47);
   Jets_cut_CvB__5994->SetBinContent(12,107833.1);
   Jets_cut_CvB__5994->SetBinContent(13,155662.6);
   Jets_cut_CvB__5994->SetBinContent(14,227097.5);
   Jets_cut_CvB__5994->SetBinContent(15,348273.2);
   Jets_cut_CvB__5994->SetBinContent(16,527326.6);
   Jets_cut_CvB__5994->SetBinContent(17,862907.2);
   Jets_cut_CvB__5994->SetBinContent(18,1603957);
   Jets_cut_CvB__5994->SetBinContent(19,2008951);
   Jets_cut_CvB__5994->SetBinContent(20,349287.8);
   Jets_cut_CvB__5994->SetBinError(1,138.0899);
   Jets_cut_CvB__5994->SetBinError(2,93.7283);
   Jets_cut_CvB__5994->SetBinError(3,91.86232);
   Jets_cut_CvB__5994->SetBinError(4,100.3109);
   Jets_cut_CvB__5994->SetBinError(5,110.9022);
   Jets_cut_CvB__5994->SetBinError(6,125.6436);
   Jets_cut_CvB__5994->SetBinError(7,151.1779);
   Jets_cut_CvB__5994->SetBinError(8,189.2649);
   Jets_cut_CvB__5994->SetBinError(9,201.1137);
   Jets_cut_CvB__5994->SetBinError(10,222.7437);
   Jets_cut_CvB__5994->SetBinError(11,249.9676);
   Jets_cut_CvB__5994->SetBinError(12,280.6959);
   Jets_cut_CvB__5994->SetBinError(13,339.6);
   Jets_cut_CvB__5994->SetBinError(14,406.709);
   Jets_cut_CvB__5994->SetBinError(15,498.5941);
   Jets_cut_CvB__5994->SetBinError(16,601.6625);
   Jets_cut_CvB__5994->SetBinError(17,768.5795);
   Jets_cut_CvB__5994->SetBinError(18,1039.992);
   Jets_cut_CvB__5994->SetBinError(19,1174.022);
   Jets_cut_CvB__5994->SetBinError(20,503.8117);
   Jets_cut_CvB__5994->SetEntries(1.401267e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__5994->SetLineColor(ci);
   Jets_cut_CvB__5994->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__5994->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__5994->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__5994->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5994->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__5994->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__5994->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__5994->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__5994->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__5994->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__5994->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__5994->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__5994->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__5994->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__5994->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WW_DHZfirst_18->Modified();
   CvB_WW_DHZfirst_18->cd();
   CvB_WW_DHZfirst_18->SetSelected(CvB_WW_DHZfirst_18);
}
