#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_QCD_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: CvB_QCD_tagOnly_2b1c_16/CvB_QCD_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvB_QCD_tagOnly_2b1c_16 = new TCanvas("CvB_QCD_tagOnly_2b1c_16", "CvB_QCD_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_QCD_tagOnly_2b1c_16->SetHighLightColor(2);
   CvB_QCD_tagOnly_2b1c_16->Range(-0.2,-1.063948e+11,1.133333,9.57553e+11);
   CvB_QCD_tagOnly_2b1c_16->SetFillColor(0);
   CvB_QCD_tagOnly_2b1c_16->SetFillStyle(4000);
   CvB_QCD_tagOnly_2b1c_16->SetBorderMode(0);
   CvB_QCD_tagOnly_2b1c_16->SetBorderSize(2);
   CvB_QCD_tagOnly_2b1c_16->SetLeftMargin(0.15);
   CvB_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CvB_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   CvB_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CvB_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__7537 = new TH1D("Jets_cut_CvB__7537","",20,0,1);
   Jets_cut_CvB__7537->SetBinContent(1,3.180203e+10);
   Jets_cut_CvB__7537->SetBinContent(2,6.370503e+09);
   Jets_cut_CvB__7537->SetBinContent(3,4.848262e+09);
   Jets_cut_CvB__7537->SetBinContent(4,4.886373e+09);
   Jets_cut_CvB__7537->SetBinContent(5,5.558766e+09);
   Jets_cut_CvB__7537->SetBinContent(6,6.529758e+09);
   Jets_cut_CvB__7537->SetBinContent(7,7.883676e+09);
   Jets_cut_CvB__7537->SetBinContent(8,9.714285e+09);
   Jets_cut_CvB__7537->SetBinContent(9,1.286787e+10);
   Jets_cut_CvB__7537->SetBinContent(10,1.853736e+10);
   Jets_cut_CvB__7537->SetBinContent(11,2.60342e+10);
   Jets_cut_CvB__7537->SetBinContent(12,3.641411e+10);
   Jets_cut_CvB__7537->SetBinContent(13,5.437227e+10);
   Jets_cut_CvB__7537->SetBinContent(14,8.174738e+10);
   Jets_cut_CvB__7537->SetBinContent(15,1.349212e+11);
   Jets_cut_CvB__7537->SetBinContent(16,2.308196e+11);
   Jets_cut_CvB__7537->SetBinContent(17,4.310927e+11);
   Jets_cut_CvB__7537->SetBinContent(18,8.106269e+11);
   Jets_cut_CvB__7537->SetBinContent(19,5.427447e+11);
   Jets_cut_CvB__7537->SetBinContent(20,4.242819e+10);
   Jets_cut_CvB__7537->SetBinError(1,5.875427e+07);
   Jets_cut_CvB__7537->SetBinError(2,2.607953e+07);
   Jets_cut_CvB__7537->SetBinError(3,2.274105e+07);
   Jets_cut_CvB__7537->SetBinError(4,2.280199e+07);
   Jets_cut_CvB__7537->SetBinError(5,2.43356e+07);
   Jets_cut_CvB__7537->SetBinError(6,2.638122e+07);
   Jets_cut_CvB__7537->SetBinError(7,2.896788e+07);
   Jets_cut_CvB__7537->SetBinError(8,3.217319e+07);
   Jets_cut_CvB__7537->SetBinError(9,3.704786e+07);
   Jets_cut_CvB__7537->SetBinError(10,4.453063e+07);
   Jets_cut_CvB__7537->SetBinError(11,5.284144e+07);
   Jets_cut_CvB__7537->SetBinError(12,6.247825e+07);
   Jets_cut_CvB__7537->SetBinError(13,7.628981e+07);
   Jets_cut_CvB__7537->SetBinError(14,9.342034e+07);
   Jets_cut_CvB__7537->SetBinError(15,1.197117e+08);
   Jets_cut_CvB__7537->SetBinError(16,1.562916e+08);
   Jets_cut_CvB__7537->SetBinError(17,2.132966e+08);
   Jets_cut_CvB__7537->SetBinError(18,2.927379e+08);
   Jets_cut_CvB__7537->SetBinError(19,2.412157e+08);
   Jets_cut_CvB__7537->SetBinError(20,6.712469e+07);
   Jets_cut_CvB__7537->SetEntries(5.72936e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__7537->SetLineColor(ci);
   Jets_cut_CvB__7537->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__7537->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__7537->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__7537->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7537->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__7537->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__7537->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__7537->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__7537->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__7537->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__7537->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__7537->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__7537->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7537->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__7537->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_QCD_tagOnly_2b1c_16->Modified();
   CvB_QCD_tagOnly_2b1c_16->cd();
   CvB_QCD_tagOnly_2b1c_16->SetSelected(CvB_QCD_tagOnly_2b1c_16);
}
