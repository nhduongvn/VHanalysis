#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_tagOnly_18()
{
//=========Macro generated from canvas: CvB_tagOnly_18/CvB_tagOnly_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *CvB_tagOnly_18 = new TCanvas("CvB_tagOnly_18", "CvB_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_tagOnly_18->SetHighLightColor(2);
   CvB_tagOnly_18->Range(-0.2,-4.500727e+10,1.133333,4.050654e+11);
   CvB_tagOnly_18->SetFillColor(0);
   CvB_tagOnly_18->SetFillStyle(4000);
   CvB_tagOnly_18->SetBorderMode(0);
   CvB_tagOnly_18->SetBorderSize(2);
   CvB_tagOnly_18->SetLeftMargin(0.15);
   CvB_tagOnly_18->SetFrameFillStyle(1000);
   CvB_tagOnly_18->SetFrameBorderMode(0);
   CvB_tagOnly_18->SetFrameFillStyle(1000);
   CvB_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__102 = new TH1D("Jets_cut_CvB__102","",20,0,1);
   Jets_cut_CvB__102->SetBinContent(1,1.499594e+10);
   Jets_cut_CvB__102->SetBinContent(2,2.682558e+09);
   Jets_cut_CvB__102->SetBinContent(3,1.974116e+09);
   Jets_cut_CvB__102->SetBinContent(4,2.081228e+09);
   Jets_cut_CvB__102->SetBinContent(5,2.420076e+09);
   Jets_cut_CvB__102->SetBinContent(6,2.866151e+09);
   Jets_cut_CvB__102->SetBinContent(7,3.55946e+09);
   Jets_cut_CvB__102->SetBinContent(8,4.680108e+09);
   Jets_cut_CvB__102->SetBinContent(9,5.736858e+09);
   Jets_cut_CvB__102->SetBinContent(10,7.977196e+09);
   Jets_cut_CvB__102->SetBinContent(11,1.081275e+10);
   Jets_cut_CvB__102->SetBinContent(12,1.475038e+10);
   Jets_cut_CvB__102->SetBinContent(13,2.166373e+10);
   Jets_cut_CvB__102->SetBinContent(14,3.187927e+10);
   Jets_cut_CvB__102->SetBinContent(15,5.119051e+10);
   Jets_cut_CvB__102->SetBinContent(16,8.645149e+10);
   Jets_cut_CvB__102->SetBinContent(17,1.621471e+11);
   Jets_cut_CvB__102->SetBinContent(18,3.429125e+11);
   Jets_cut_CvB__102->SetBinContent(19,2.62337e+11);
   Jets_cut_CvB__102->SetBinContent(20,2.150269e+10);
   Jets_cut_CvB__102->SetBinError(1,2.026682e+08);
   Jets_cut_CvB__102->SetBinError(2,7.862845e+07);
   Jets_cut_CvB__102->SetBinError(3,6.608434e+07);
   Jets_cut_CvB__102->SetBinError(4,6.912198e+07);
   Jets_cut_CvB__102->SetBinError(5,7.594995e+07);
   Jets_cut_CvB__102->SetBinError(6,8.59212e+07);
   Jets_cut_CvB__102->SetBinError(7,9.953837e+07);
   Jets_cut_CvB__102->SetBinError(8,1.177857e+08);
   Jets_cut_CvB__102->SetBinError(9,1.277406e+08);
   Jets_cut_CvB__102->SetBinError(10,1.489575e+08);
   Jets_cut_CvB__102->SetBinError(11,1.75838e+08);
   Jets_cut_CvB__102->SetBinError(12,2.286339e+08);
   Jets_cut_CvB__102->SetBinError(13,2.366141e+08);
   Jets_cut_CvB__102->SetBinError(14,2.96041e+08);
   Jets_cut_CvB__102->SetBinError(15,3.625628e+08);
   Jets_cut_CvB__102->SetBinError(16,4.601908e+08);
   Jets_cut_CvB__102->SetBinError(17,6.11828e+08);
   Jets_cut_CvB__102->SetBinError(18,9.019297e+08);
   Jets_cut_CvB__102->SetBinError(19,8.086954e+08);
   Jets_cut_CvB__102->SetBinError(20,2.489386e+08);
   Jets_cut_CvB__102->SetEntries(589029);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__102->SetLineColor(ci);
   Jets_cut_CvB__102->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__102->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__102->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__102->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__102->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__102->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__102->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__102->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__102->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__102->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__102->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__102->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__102->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__102->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__102->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_tagOnly_18->Modified();
   CvB_tagOnly_18->cd();
   CvB_tagOnly_18->SetSelected(CvB_tagOnly_18);
}
