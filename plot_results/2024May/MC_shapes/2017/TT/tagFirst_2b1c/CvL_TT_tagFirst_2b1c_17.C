#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_TT_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: CvL_TT_tagFirst_2b1c_17/CvL_TT_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CvL_TT_tagFirst_2b1c_17 = new TCanvas("CvL_TT_tagFirst_2b1c_17", "CvL_TT_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_TT_tagFirst_2b1c_17->SetHighLightColor(2);
   CvL_TT_tagFirst_2b1c_17->Range(-0.2,-2395541,1.133333,2.316428e+07);
   CvL_TT_tagFirst_2b1c_17->SetFillColor(0);
   CvL_TT_tagFirst_2b1c_17->SetFillStyle(4000);
   CvL_TT_tagFirst_2b1c_17->SetBorderMode(0);
   CvL_TT_tagFirst_2b1c_17->SetBorderSize(2);
   CvL_TT_tagFirst_2b1c_17->SetLeftMargin(0.15);
   CvL_TT_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CvL_TT_tagFirst_2b1c_17->SetFrameBorderMode(0);
   CvL_TT_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CvL_TT_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__6737 = new TH1D("Jets_cut_CvL__6737","",20,0,1);
   Jets_cut_CvL__6737->SetBinContent(1,1.615595e+07);
   Jets_cut_CvL__6737->SetBinContent(2,1.963459e+07);
   Jets_cut_CvL__6737->SetBinContent(3,7298365);
   Jets_cut_CvL__6737->SetBinContent(4,3573395);
   Jets_cut_CvL__6737->SetBinContent(5,2237030);
   Jets_cut_CvL__6737->SetBinContent(6,1701690);
   Jets_cut_CvL__6737->SetBinContent(7,1399880);
   Jets_cut_CvL__6737->SetBinContent(8,1206076);
   Jets_cut_CvL__6737->SetBinContent(9,1113588);
   Jets_cut_CvL__6737->SetBinContent(10,1087782);
   Jets_cut_CvL__6737->SetBinContent(11,1106362);
   Jets_cut_CvL__6737->SetBinContent(12,1150062);
   Jets_cut_CvL__6737->SetBinContent(13,1256722);
   Jets_cut_CvL__6737->SetBinContent(14,1413554);
   Jets_cut_CvL__6737->SetBinContent(15,1662320);
   Jets_cut_CvL__6737->SetBinContent(16,2037994);
   Jets_cut_CvL__6737->SetBinContent(17,2554979);
   Jets_cut_CvL__6737->SetBinContent(18,3440896);
   Jets_cut_CvL__6737->SetBinContent(19,4883547);
   Jets_cut_CvL__6737->SetBinContent(20,1.098516e+07);
   Jets_cut_CvL__6737->SetBinError(1,1063.193);
   Jets_cut_CvL__6737->SetBinError(2,1194.409);
   Jets_cut_CvL__6737->SetBinError(3,750.5004);
   Jets_cut_CvL__6737->SetBinError(4,522.5803);
   Jets_cut_CvL__6737->SetBinError(5,409.8455);
   Jets_cut_CvL__6737->SetBinError(6,354.1993);
   Jets_cut_CvL__6737->SetBinError(7,318.3072);
   Jets_cut_CvL__6737->SetBinError(8,292.5036);
   Jets_cut_CvL__6737->SetBinError(9,278.6406);
   Jets_cut_CvL__6737->SetBinError(10,272.9359);
   Jets_cut_CvL__6737->SetBinError(11,273.2895);
   Jets_cut_CvL__6737->SetBinError(12,276.8579);
   Jets_cut_CvL__6737->SetBinError(13,287.5257);
   Jets_cut_CvL__6737->SetBinError(14,303.5418);
   Jets_cut_CvL__6737->SetBinError(15,328.075);
   Jets_cut_CvL__6737->SetBinError(16,362.4735);
   Jets_cut_CvL__6737->SetBinError(17,405.1586);
   Jets_cut_CvL__6737->SetBinError(18,469.8524);
   Jets_cut_CvL__6737->SetBinError(19,559.4931);
   Jets_cut_CvL__6737->SetBinError(20,839.9535);
   Jets_cut_CvL__6737->SetEntries(1.690701e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__6737->SetLineColor(ci);
   Jets_cut_CvL__6737->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__6737->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__6737->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__6737->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__6737->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__6737->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__6737->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__6737->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__6737->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__6737->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__6737->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__6737->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__6737->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__6737->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__6737->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_TT_tagFirst_2b1c_17->Modified();
   CvL_TT_tagFirst_2b1c_17->cd();
   CvL_TT_tagFirst_2b1c_17->SetSelected(CvL_TT_tagFirst_2b1c_17);
}
