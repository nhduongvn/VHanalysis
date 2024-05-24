#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_TT_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: CvB_TT_tagFirst_2b1c_18/CvB_TT_tagFirst_2b1c_18
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CvB_TT_tagFirst_2b1c_18 = new TCanvas("CvB_TT_tagFirst_2b1c_18", "CvB_TT_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_TT_tagFirst_2b1c_18->SetHighLightColor(2);
   CvB_TT_tagFirst_2b1c_18->Range(-0.2,-4137614,1.133333,4.288524e+07);
   CvB_TT_tagFirst_2b1c_18->SetFillColor(0);
   CvB_TT_tagFirst_2b1c_18->SetFillStyle(4000);
   CvB_TT_tagFirst_2b1c_18->SetBorderMode(0);
   CvB_TT_tagFirst_2b1c_18->SetBorderSize(2);
   CvB_TT_tagFirst_2b1c_18->SetLeftMargin(0.15);
   CvB_TT_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   CvB_TT_tagFirst_2b1c_18->SetFrameBorderMode(0);
   CvB_TT_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   CvB_TT_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__6768 = new TH1D("Jets_cut_CvB__6768","",20,0,1);
   Jets_cut_CvB__6768->SetBinContent(1,3.63916e+07);
   Jets_cut_CvB__6768->SetBinContent(2,5153171);
   Jets_cut_CvB__6768->SetBinContent(3,3336538);
   Jets_cut_CvB__6768->SetBinContent(4,2919094);
   Jets_cut_CvB__6768->SetBinContent(5,2663097);
   Jets_cut_CvB__6768->SetBinContent(6,2406512);
   Jets_cut_CvB__6768->SetBinContent(7,2284745);
   Jets_cut_CvB__6768->SetBinContent(8,2270716);
   Jets_cut_CvB__6768->SetBinContent(9,2494502);
   Jets_cut_CvB__6768->SetBinContent(10,2740780);
   Jets_cut_CvB__6768->SetBinContent(11,3028388);
   Jets_cut_CvB__6768->SetBinContent(12,3499624);
   Jets_cut_CvB__6768->SetBinContent(13,4491567);
   Jets_cut_CvB__6768->SetBinContent(14,5773139);
   Jets_cut_CvB__6768->SetBinContent(15,8018708);
   Jets_cut_CvB__6768->SetBinContent(16,1.147019e+07);
   Jets_cut_CvB__6768->SetBinContent(17,1.841872e+07);
   Jets_cut_CvB__6768->SetBinContent(18,3.203822e+07);
   Jets_cut_CvB__6768->SetBinContent(19,3.295371e+07);
   Jets_cut_CvB__6768->SetBinContent(20,5982301);
   Jets_cut_CvB__6768->SetBinError(1,2076.303);
   Jets_cut_CvB__6768->SetBinError(2,777.0453);
   Jets_cut_CvB__6768->SetBinError(3,626.7775);
   Jets_cut_CvB__6768->SetBinError(4,589.1715);
   Jets_cut_CvB__6768->SetBinError(5,561.2743);
   Jets_cut_CvB__6768->SetBinError(6,537.054);
   Jets_cut_CvB__6768->SetBinError(7,521.9907);
   Jets_cut_CvB__6768->SetBinError(8,523.734);
   Jets_cut_CvB__6768->SetBinError(9,551.9171);
   Jets_cut_CvB__6768->SetBinError(10,583.3471);
   Jets_cut_CvB__6768->SetBinError(11,618.6002);
   Jets_cut_CvB__6768->SetBinError(12,670.1758);
   Jets_cut_CvB__6768->SetBinError(13,765.5648);
   Jets_cut_CvB__6768->SetBinError(14,870.0463);
   Jets_cut_CvB__6768->SetBinError(15,1025.457);
   Jets_cut_CvB__6768->SetBinError(16,1218.294);
   Jets_cut_CvB__6768->SetBinError(17,1532.071);
   Jets_cut_CvB__6768->SetBinError(18,2023.227);
   Jets_cut_CvB__6768->SetBinError(19,2086.193);
   Jets_cut_CvB__6768->SetBinError(20,910.7752);
   Jets_cut_CvB__6768->SetEntries(2.381475e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__6768->SetLineColor(ci);
   Jets_cut_CvB__6768->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__6768->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__6768->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__6768->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6768->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__6768->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__6768->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__6768->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__6768->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__6768->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__6768->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__6768->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__6768->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6768->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__6768->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_TT_tagFirst_2b1c_18->Modified();
   CvB_TT_tagFirst_2b1c_18->cd();
   CvB_TT_tagFirst_2b1c_18->SetSelected(CvB_TT_tagFirst_2b1c_18);
}
