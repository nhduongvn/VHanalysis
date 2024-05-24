#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WW_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: CvL_WW_tagFirst_2b1c_16/CvL_WW_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CvL_WW_tagFirst_2b1c_16 = new TCanvas("CvL_WW_tagFirst_2b1c_16", "CvL_WW_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WW_tagFirst_2b1c_16->SetHighLightColor(2);
   CvL_WW_tagFirst_2b1c_16->Range(-0.2,-379287.1,1.133333,3413584);
   CvL_WW_tagFirst_2b1c_16->SetFillColor(0);
   CvL_WW_tagFirst_2b1c_16->SetFillStyle(4000);
   CvL_WW_tagFirst_2b1c_16->SetBorderMode(0);
   CvL_WW_tagFirst_2b1c_16->SetBorderSize(2);
   CvL_WW_tagFirst_2b1c_16->SetLeftMargin(0.15);
   CvL_WW_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CvL_WW_tagFirst_2b1c_16->SetFrameBorderMode(0);
   CvL_WW_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CvL_WW_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__6742 = new TH1D("Jets_cut_CvL__6742","",20,0,1);
   Jets_cut_CvL__6742->SetBinContent(1,2251598);
   Jets_cut_CvL__6742->SetBinContent(2,2889806);
   Jets_cut_CvL__6742->SetBinContent(3,1013305);
   Jets_cut_CvL__6742->SetBinContent(4,428475.9);
   Jets_cut_CvL__6742->SetBinContent(5,226811.5);
   Jets_cut_CvL__6742->SetBinContent(6,147115);
   Jets_cut_CvL__6742->SetBinContent(7,104034.7);
   Jets_cut_CvL__6742->SetBinContent(8,77920.36);
   Jets_cut_CvL__6742->SetBinContent(9,63360.97);
   Jets_cut_CvL__6742->SetBinContent(10,55299.27);
   Jets_cut_CvL__6742->SetBinContent(11,48346.35);
   Jets_cut_CvL__6742->SetBinContent(12,42951.96);
   Jets_cut_CvL__6742->SetBinContent(13,38643.47);
   Jets_cut_CvL__6742->SetBinContent(14,35921.24);
   Jets_cut_CvL__6742->SetBinContent(15,35783.73);
   Jets_cut_CvL__6742->SetBinContent(16,35596.21);
   Jets_cut_CvL__6742->SetBinContent(17,35715.02);
   Jets_cut_CvL__6742->SetBinContent(18,38980.14);
   Jets_cut_CvL__6742->SetBinContent(19,45690.46);
   Jets_cut_CvL__6742->SetBinContent(20,162576.2);
   Jets_cut_CvL__6742->SetBinError(1,1116.639);
   Jets_cut_CvL__6742->SetBinError(2,1259.239);
   Jets_cut_CvL__6742->SetBinError(3,756.9083);
   Jets_cut_CvL__6742->SetBinError(4,490.8191);
   Jets_cut_CvL__6742->SetBinError(5,356.4906);
   Jets_cut_CvL__6742->SetBinError(6,287.0532);
   Jets_cut_CvL__6742->SetBinError(7,241.3786);
   Jets_cut_CvL__6742->SetBinError(8,208.5987);
   Jets_cut_CvL__6742->SetBinError(9,188.1005);
   Jets_cut_CvL__6742->SetBinError(10,175.7489);
   Jets_cut_CvL__6742->SetBinError(11,164.1434);
   Jets_cut_CvL__6742->SetBinError(12,154.5656);
   Jets_cut_CvL__6742->SetBinError(13,146.3785);
   Jets_cut_CvL__6742->SetBinError(14,141.0434);
   Jets_cut_CvL__6742->SetBinError(15,140.6641);
   Jets_cut_CvL__6742->SetBinError(16,139.9443);
   Jets_cut_CvL__6742->SetBinError(17,139.6044);
   Jets_cut_CvL__6742->SetBinError(18,145.5359);
   Jets_cut_CvL__6742->SetBinError(19,157.1866);
   Jets_cut_CvL__6742->SetBinError(20,299.0061);
   Jets_cut_CvL__6742->SetEntries(2.853026e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__6742->SetLineColor(ci);
   Jets_cut_CvL__6742->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__6742->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__6742->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__6742->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__6742->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__6742->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__6742->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__6742->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__6742->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__6742->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__6742->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__6742->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__6742->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__6742->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__6742->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WW_tagFirst_2b1c_16->Modified();
   CvL_WW_tagFirst_2b1c_16->cd();
   CvL_WW_tagFirst_2b1c_16->SetSelected(CvL_WW_tagFirst_2b1c_16);
}
