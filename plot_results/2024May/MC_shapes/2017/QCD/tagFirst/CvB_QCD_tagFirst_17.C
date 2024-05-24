#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_QCD_tagFirst_17()
{
//=========Macro generated from canvas: CvB_QCD_tagFirst_17/CvB_QCD_tagFirst_17
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *CvB_QCD_tagFirst_17 = new TCanvas("CvB_QCD_tagFirst_17", "CvB_QCD_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_QCD_tagFirst_17->SetHighLightColor(2);
   CvB_QCD_tagFirst_17->Range(-0.2,-3.382944e+10,1.133333,3.044649e+11);
   CvB_QCD_tagFirst_17->SetFillColor(0);
   CvB_QCD_tagFirst_17->SetFillStyle(4000);
   CvB_QCD_tagFirst_17->SetBorderMode(0);
   CvB_QCD_tagFirst_17->SetBorderSize(2);
   CvB_QCD_tagFirst_17->SetLeftMargin(0.15);
   CvB_QCD_tagFirst_17->SetFrameFillStyle(1000);
   CvB_QCD_tagFirst_17->SetFrameBorderMode(0);
   CvB_QCD_tagFirst_17->SetFrameFillStyle(1000);
   CvB_QCD_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__4418 = new TH1D("Jets_cut_CvB__4418","",20,0,1);
   Jets_cut_CvB__4418->SetBinContent(1,1.195657e+10);
   Jets_cut_CvB__4418->SetBinContent(2,2.146284e+09);
   Jets_cut_CvB__4418->SetBinContent(3,1.652048e+09);
   Jets_cut_CvB__4418->SetBinContent(4,1.716626e+09);
   Jets_cut_CvB__4418->SetBinContent(5,1.910339e+09);
   Jets_cut_CvB__4418->SetBinContent(6,2.205795e+09);
   Jets_cut_CvB__4418->SetBinContent(7,2.587403e+09);
   Jets_cut_CvB__4418->SetBinContent(8,3.187005e+09);
   Jets_cut_CvB__4418->SetBinContent(9,4.125477e+09);
   Jets_cut_CvB__4418->SetBinContent(10,5.654642e+09);
   Jets_cut_CvB__4418->SetBinContent(11,7.684173e+09);
   Jets_cut_CvB__4418->SetBinContent(12,1.077807e+10);
   Jets_cut_CvB__4418->SetBinContent(13,1.598131e+10);
   Jets_cut_CvB__4418->SetBinContent(14,2.366198e+10);
   Jets_cut_CvB__4418->SetBinContent(15,3.821527e+10);
   Jets_cut_CvB__4418->SetBinContent(16,6.46676e+10);
   Jets_cut_CvB__4418->SetBinContent(17,1.239914e+11);
   Jets_cut_CvB__4418->SetBinContent(18,2.577481e+11);
   Jets_cut_CvB__4418->SetBinContent(19,1.869348e+11);
   Jets_cut_CvB__4418->SetBinContent(20,1.542578e+10);
   Jets_cut_CvB__4418->SetBinError(1,1.303639e+07);
   Jets_cut_CvB__4418->SetBinError(2,5476579);
   Jets_cut_CvB__4418->SetBinError(3,4812696);
   Jets_cut_CvB__4418->SetBinError(4,4932306);
   Jets_cut_CvB__4418->SetBinError(5,5237457);
   Jets_cut_CvB__4418->SetBinError(6,5659552);
   Jets_cut_CvB__4418->SetBinError(7,6137672);
   Jets_cut_CvB__4418->SetBinError(8,6882257);
   Jets_cut_CvB__4418->SetBinError(9,7771377);
   Jets_cut_CvB__4418->SetBinError(10,9050633);
   Jets_cut_CvB__4418->SetBinError(11,1.052601e+07);
   Jets_cut_CvB__4418->SetBinError(12,1.245191e+07);
   Jets_cut_CvB__4418->SetBinError(13,1.51497e+07);
   Jets_cut_CvB__4418->SetBinError(14,1.841176e+07);
   Jets_cut_CvB__4418->SetBinError(15,2.328743e+07);
   Jets_cut_CvB__4418->SetBinError(16,3.008699e+07);
   Jets_cut_CvB__4418->SetBinError(17,4.13129e+07);
   Jets_cut_CvB__4418->SetBinError(18,5.936888e+07);
   Jets_cut_CvB__4418->SetBinError(19,5.124179e+07);
   Jets_cut_CvB__4418->SetBinError(20,1.452045e+07);
   Jets_cut_CvB__4418->SetEntries(6.773086e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__4418->SetLineColor(ci);
   Jets_cut_CvB__4418->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__4418->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__4418->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__4418->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__4418->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__4418->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__4418->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__4418->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__4418->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__4418->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__4418->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__4418->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__4418->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__4418->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__4418->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_QCD_tagFirst_17->Modified();
   CvB_QCD_tagFirst_17->cd();
   CvB_QCD_tagFirst_17->SetSelected(CvB_QCD_tagFirst_17);
}
