#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZJets_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: CvB_ZJets_DHZfirst_2b1c_16/CvB_ZJets_DHZfirst_2b1c_16
//=========  (Fri May 24 12:44:35 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZJets_DHZfirst_2b1c_16 = new TCanvas("CvB_ZJets_DHZfirst_2b1c_16", "CvB_ZJets_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZJets_DHZfirst_2b1c_16->SetHighLightColor(2);
   CvB_ZJets_DHZfirst_2b1c_16->Range(-0.2,-2650021,1.133333,2.385019e+07);
   CvB_ZJets_DHZfirst_2b1c_16->SetFillColor(0);
   CvB_ZJets_DHZfirst_2b1c_16->SetFillStyle(4000);
   CvB_ZJets_DHZfirst_2b1c_16->SetBorderMode(0);
   CvB_ZJets_DHZfirst_2b1c_16->SetBorderSize(2);
   CvB_ZJets_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   CvB_ZJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   CvB_ZJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   CvB_ZJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   CvB_ZJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__8323 = new TH1D("Jets_cut_CvB__8323","",20,0,1);
   Jets_cut_CvB__8323->SetBinContent(1,4384004);
   Jets_cut_CvB__8323->SetBinContent(2,827586.5);
   Jets_cut_CvB__8323->SetBinContent(3,565621);
   Jets_cut_CvB__8323->SetBinContent(4,514174.3);
   Jets_cut_CvB__8323->SetBinContent(5,519025.2);
   Jets_cut_CvB__8323->SetBinContent(6,521817);
   Jets_cut_CvB__8323->SetBinContent(7,537083.1);
   Jets_cut_CvB__8323->SetBinContent(8,575643.2);
   Jets_cut_CvB__8323->SetBinContent(9,685360.9);
   Jets_cut_CvB__8323->SetBinContent(10,868283.8);
   Jets_cut_CvB__8323->SetBinContent(11,1093978);
   Jets_cut_CvB__8323->SetBinContent(12,1369731);
   Jets_cut_CvB__8323->SetBinContent(13,1900532);
   Jets_cut_CvB__8323->SetBinContent(14,2716454);
   Jets_cut_CvB__8323->SetBinContent(15,4212749);
   Jets_cut_CvB__8323->SetBinContent(16,6583377);
   Jets_cut_CvB__8323->SetBinContent(17,1.106685e+07);
   Jets_cut_CvB__8323->SetBinContent(18,1.960172e+07);
   Jets_cut_CvB__8323->SetBinContent(19,2.019064e+07);
   Jets_cut_CvB__8323->SetBinContent(20,3330103);
   Jets_cut_CvB__8323->SetBinError(1,5523.436);
   Jets_cut_CvB__8323->SetBinError(2,2431.532);
   Jets_cut_CvB__8323->SetBinError(3,1993.411);
   Jets_cut_CvB__8323->SetBinError(4,1892.864);
   Jets_cut_CvB__8323->SetBinError(5,1890.747);
   Jets_cut_CvB__8323->SetBinError(6,1872.343);
   Jets_cut_CvB__8323->SetBinError(7,1881.778);
   Jets_cut_CvB__8323->SetBinError(8,1878.859);
   Jets_cut_CvB__8323->SetBinError(9,2041.257);
   Jets_cut_CvB__8323->SetBinError(10,2292.726);
   Jets_cut_CvB__8323->SetBinError(11,2557.863);
   Jets_cut_CvB__8323->SetBinError(12,2844.472);
   Jets_cut_CvB__8323->SetBinError(13,3322.31);
   Jets_cut_CvB__8323->SetBinError(14,3942.252);
   Jets_cut_CvB__8323->SetBinError(15,4852.936);
   Jets_cut_CvB__8323->SetBinError(16,6000.963);
   Jets_cut_CvB__8323->SetBinError(17,7646.418);
   Jets_cut_CvB__8323->SetBinError(18,10092.83);
   Jets_cut_CvB__8323->SetBinError(19,10497.01);
   Jets_cut_CvB__8323->SetBinError(20,4172.018);
   Jets_cut_CvB__8323->SetEntries(1.414727e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__8323->SetLineColor(ci);
   Jets_cut_CvB__8323->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__8323->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__8323->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__8323->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__8323->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__8323->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__8323->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__8323->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__8323->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__8323->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__8323->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__8323->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__8323->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__8323->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__8323->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZJets_DHZfirst_2b1c_16->Modified();
   CvB_ZJets_DHZfirst_2b1c_16->cd();
   CvB_ZJets_DHZfirst_2b1c_16->SetSelected(CvB_ZJets_DHZfirst_2b1c_16);
}
