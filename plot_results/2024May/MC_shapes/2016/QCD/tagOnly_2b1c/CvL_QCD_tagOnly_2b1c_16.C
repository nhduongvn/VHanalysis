#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_QCD_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: CvL_QCD_tagOnly_2b1c_16/CvL_QCD_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvL_QCD_tagOnly_2b1c_16 = new TCanvas("CvL_QCD_tagOnly_2b1c_16", "CvL_QCD_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_QCD_tagOnly_2b1c_16->SetHighLightColor(2);
   CvL_QCD_tagOnly_2b1c_16->Range(-0.2,-1.318535e+11,1.133333,1.186681e+12);
   CvL_QCD_tagOnly_2b1c_16->SetFillColor(0);
   CvL_QCD_tagOnly_2b1c_16->SetFillStyle(4000);
   CvL_QCD_tagOnly_2b1c_16->SetBorderMode(0);
   CvL_QCD_tagOnly_2b1c_16->SetBorderSize(2);
   CvL_QCD_tagOnly_2b1c_16->SetLeftMargin(0.15);
   CvL_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CvL_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   CvL_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CvL_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__7507 = new TH1D("Jets_cut_CvL__7507","",20,0,1);
   Jets_cut_CvL__7507->SetBinContent(1,1.004598e+12);
   Jets_cut_CvL__7507->SetBinContent(2,9.237545e+11);
   Jets_cut_CvL__7507->SetBinContent(3,2.524316e+11);
   Jets_cut_CvL__7507->SetBinContent(4,9.488094e+10);
   Jets_cut_CvL__7507->SetBinContent(5,4.735457e+10);
   Jets_cut_CvL__7507->SetBinContent(6,2.9011e+10);
   Jets_cut_CvL__7507->SetBinContent(7,1.944048e+10);
   Jets_cut_CvL__7507->SetBinContent(8,1.393018e+10);
   Jets_cut_CvL__7507->SetBinContent(9,1.088436e+10);
   Jets_cut_CvL__7507->SetBinContent(10,9.06474e+09);
   Jets_cut_CvL__7507->SetBinContent(11,7.844998e+09);
   Jets_cut_CvL__7507->SetBinContent(12,6.888459e+09);
   Jets_cut_CvL__7507->SetBinContent(13,6.47243e+09);
   Jets_cut_CvL__7507->SetBinContent(14,6.32158e+09);
   Jets_cut_CvL__7507->SetBinContent(15,6.581882e+09);
   Jets_cut_CvL__7507->SetBinContent(16,7.083255e+09);
   Jets_cut_CvL__7507->SetBinContent(17,7.837167e+09);
   Jets_cut_CvL__7507->SetBinContent(18,9.393036e+09);
   Jets_cut_CvL__7507->SetBinContent(19,1.180001e+10);
   Jets_cut_CvL__7507->SetBinContent(20,2.462711e+10);
   Jets_cut_CvL__7507->SetBinError(1,3.263231e+08);
   Jets_cut_CvL__7507->SetBinError(2,3.11425e+08);
   Jets_cut_CvL__7507->SetBinError(3,1.662412e+08);
   Jets_cut_CvL__7507->SetBinError(4,1.017205e+08);
   Jets_cut_CvL__7507->SetBinError(5,7.178837e+07);
   Jets_cut_CvL__7507->SetBinError(6,5.613458e+07);
   Jets_cut_CvL__7507->SetBinError(7,4.590632e+07);
   Jets_cut_CvL__7507->SetBinError(8,3.881342e+07);
   Jets_cut_CvL__7507->SetBinError(9,3.426548e+07);
   Jets_cut_CvL__7507->SetBinError(10,3.121748e+07);
   Jets_cut_CvL__7507->SetBinError(11,2.899792e+07);
   Jets_cut_CvL__7507->SetBinError(12,2.71271e+07);
   Jets_cut_CvL__7507->SetBinError(13,2.627764e+07);
   Jets_cut_CvL__7507->SetBinError(14,2.594146e+07);
   Jets_cut_CvL__7507->SetBinError(15,2.646355e+07);
   Jets_cut_CvL__7507->SetBinError(16,2.746232e+07);
   Jets_cut_CvL__7507->SetBinError(17,2.887463e+07);
   Jets_cut_CvL__7507->SetBinError(18,3.160057e+07);
   Jets_cut_CvL__7507->SetBinError(19,3.537617e+07);
   Jets_cut_CvL__7507->SetBinError(20,5.068454e+07);
   Jets_cut_CvL__7507->SetEntries(5.72936e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__7507->SetLineColor(ci);
   Jets_cut_CvL__7507->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__7507->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__7507->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__7507->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__7507->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__7507->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__7507->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__7507->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__7507->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__7507->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__7507->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__7507->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__7507->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__7507->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__7507->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_QCD_tagOnly_2b1c_16->Modified();
   CvL_QCD_tagOnly_2b1c_16->cd();
   CvL_QCD_tagOnly_2b1c_16->SetSelected(CvL_QCD_tagOnly_2b1c_16);
}
