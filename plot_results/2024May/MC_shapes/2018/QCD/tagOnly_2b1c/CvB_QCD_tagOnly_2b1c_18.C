#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_QCD_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: CvB_QCD_tagOnly_2b1c_18/CvB_QCD_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:18 2024) by ROOT version 6.28/10
   TCanvas *CvB_QCD_tagOnly_2b1c_18 = new TCanvas("CvB_QCD_tagOnly_2b1c_18", "CvB_QCD_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_QCD_tagOnly_2b1c_18->SetHighLightColor(2);
   CvB_QCD_tagOnly_2b1c_18->Range(-0.2,-5.418226e+10,1.133333,4.876403e+11);
   CvB_QCD_tagOnly_2b1c_18->SetFillColor(0);
   CvB_QCD_tagOnly_2b1c_18->SetFillStyle(4000);
   CvB_QCD_tagOnly_2b1c_18->SetBorderMode(0);
   CvB_QCD_tagOnly_2b1c_18->SetBorderSize(2);
   CvB_QCD_tagOnly_2b1c_18->SetLeftMargin(0.15);
   CvB_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CvB_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   CvB_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CvB_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__7539 = new TH1D("Jets_cut_CvB__7539","",20,0,1);
   Jets_cut_CvB__7539->SetBinContent(1,1.873039e+10);
   Jets_cut_CvB__7539->SetBinContent(2,3.369311e+09);
   Jets_cut_CvB__7539->SetBinContent(3,2.592897e+09);
   Jets_cut_CvB__7539->SetBinContent(4,2.710789e+09);
   Jets_cut_CvB__7539->SetBinContent(5,3.023691e+09);
   Jets_cut_CvB__7539->SetBinContent(6,3.49652e+09);
   Jets_cut_CvB__7539->SetBinContent(7,4.366198e+09);
   Jets_cut_CvB__7539->SetBinContent(8,5.632464e+09);
   Jets_cut_CvB__7539->SetBinContent(9,7.139279e+09);
   Jets_cut_CvB__7539->SetBinContent(10,9.537886e+09);
   Jets_cut_CvB__7539->SetBinContent(11,1.28269e+10);
   Jets_cut_CvB__7539->SetBinContent(12,1.772893e+10);
   Jets_cut_CvB__7539->SetBinContent(13,2.620724e+10);
   Jets_cut_CvB__7539->SetBinContent(14,3.839515e+10);
   Jets_cut_CvB__7539->SetBinContent(15,6.106967e+10);
   Jets_cut_CvB__7539->SetBinContent(16,1.024942e+11);
   Jets_cut_CvB__7539->SetBinContent(17,1.959529e+11);
   Jets_cut_CvB__7539->SetBinContent(18,4.128172e+11);
   Jets_cut_CvB__7539->SetBinContent(19,3.093854e+11);
   Jets_cut_CvB__7539->SetBinContent(20,2.672129e+10);
   Jets_cut_CvB__7539->SetBinError(1,2.11116e+07);
   Jets_cut_CvB__7539->SetBinError(2,9063440);
   Jets_cut_CvB__7539->SetBinError(3,7891782);
   Jets_cut_CvB__7539->SetBinError(4,8230847);
   Jets_cut_CvB__7539->SetBinError(5,8776034);
   Jets_cut_CvB__7539->SetBinError(6,9414092);
   Jets_cut_CvB__7539->SetBinError(7,1.129047e+07);
   Jets_cut_CvB__7539->SetBinError(8,1.386232e+07);
   Jets_cut_CvB__7539->SetBinError(9,1.538266e+07);
   Jets_cut_CvB__7539->SetBinError(10,1.742959e+07);
   Jets_cut_CvB__7539->SetBinError(11,1.952542e+07);
   Jets_cut_CvB__7539->SetBinError(12,2.293172e+07);
   Jets_cut_CvB__7539->SetBinError(13,2.748583e+07);
   Jets_cut_CvB__7539->SetBinError(14,3.241704e+07);
   Jets_cut_CvB__7539->SetBinError(15,3.982194e+07);
   Jets_cut_CvB__7539->SetBinError(16,5.079616e+07);
   Jets_cut_CvB__7539->SetBinError(17,6.857108e+07);
   Jets_cut_CvB__7539->SetBinError(18,9.93258e+07);
   Jets_cut_CvB__7539->SetBinError(19,8.942116e+07);
   Jets_cut_CvB__7539->SetBinError(20,2.692981e+07);
   Jets_cut_CvB__7539->SetEntries(7.315384e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__7539->SetLineColor(ci);
   Jets_cut_CvB__7539->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__7539->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__7539->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__7539->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7539->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__7539->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__7539->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__7539->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__7539->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__7539->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__7539->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__7539->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__7539->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__7539->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__7539->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_QCD_tagOnly_2b1c_18->Modified();
   CvB_QCD_tagOnly_2b1c_18->cd();
   CvB_QCD_tagOnly_2b1c_18->SetSelected(CvB_QCD_tagOnly_2b1c_18);
}
