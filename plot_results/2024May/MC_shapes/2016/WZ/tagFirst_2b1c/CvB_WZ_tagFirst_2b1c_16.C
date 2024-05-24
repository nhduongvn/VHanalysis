#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_WZ_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: CvB_WZ_tagFirst_2b1c_16/CvB_WZ_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:02 2024) by ROOT version 6.28/10
   TCanvas *CvB_WZ_tagFirst_2b1c_16 = new TCanvas("CvB_WZ_tagFirst_2b1c_16", "CvB_WZ_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_WZ_tagFirst_2b1c_16->SetHighLightColor(2);
   CvB_WZ_tagFirst_2b1c_16->Range(-0.2,-115481.9,1.133333,1039337);
   CvB_WZ_tagFirst_2b1c_16->SetFillColor(0);
   CvB_WZ_tagFirst_2b1c_16->SetFillStyle(4000);
   CvB_WZ_tagFirst_2b1c_16->SetBorderMode(0);
   CvB_WZ_tagFirst_2b1c_16->SetBorderSize(2);
   CvB_WZ_tagFirst_2b1c_16->SetLeftMargin(0.15);
   CvB_WZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CvB_WZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   CvB_WZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CvB_WZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__6775 = new TH1D("Jets_cut_CvB__6775","",20,0,1);
   Jets_cut_CvB__6775->SetBinContent(1,121845.3);
   Jets_cut_CvB__6775->SetBinContent(2,23218.62);
   Jets_cut_CvB__6775->SetBinContent(3,16537.7);
   Jets_cut_CvB__6775->SetBinContent(4,15530.55);
   Jets_cut_CvB__6775->SetBinContent(5,16508.29);
   Jets_cut_CvB__6775->SetBinContent(6,17501.1);
   Jets_cut_CvB__6775->SetBinContent(7,18936.66);
   Jets_cut_CvB__6775->SetBinContent(8,21332.61);
   Jets_cut_CvB__6775->SetBinContent(9,26599.57);
   Jets_cut_CvB__6775->SetBinContent(10,35106.76);
   Jets_cut_CvB__6775->SetBinContent(11,45041.05);
   Jets_cut_CvB__6775->SetBinContent(12,57510.39);
   Jets_cut_CvB__6775->SetBinContent(13,80475.95);
   Jets_cut_CvB__6775->SetBinContent(14,115227.4);
   Jets_cut_CvB__6775->SetBinContent(15,175731.3);
   Jets_cut_CvB__6775->SetBinContent(16,264895);
   Jets_cut_CvB__6775->SetBinContent(17,416117.6);
   Jets_cut_CvB__6775->SetBinContent(18,717647.1);
   Jets_cut_CvB__6775->SetBinContent(19,879862.2);
   Jets_cut_CvB__6775->SetBinContent(20,126230.3);
   Jets_cut_CvB__6775->SetBinError(1,241.4675);
   Jets_cut_CvB__6775->SetBinError(2,104.4473);
   Jets_cut_CvB__6775->SetBinError(3,87.80808);
   Jets_cut_CvB__6775->SetBinError(4,84.62565);
   Jets_cut_CvB__6775->SetBinError(5,87.05743);
   Jets_cut_CvB__6775->SetBinError(6,89.32056);
   Jets_cut_CvB__6775->SetBinError(7,92.70436);
   Jets_cut_CvB__6775->SetBinError(8,96.71337);
   Jets_cut_CvB__6775->SetBinError(9,108.1497);
   Jets_cut_CvB__6775->SetBinError(10,124.5273);
   Jets_cut_CvB__6775->SetBinError(11,141.2008);
   Jets_cut_CvB__6775->SetBinError(12,159.515);
   Jets_cut_CvB__6775->SetBinError(13,188.6014);
   Jets_cut_CvB__6775->SetBinError(14,225.4509);
   Jets_cut_CvB__6775->SetBinError(15,277.8674);
   Jets_cut_CvB__6775->SetBinError(16,340.18);
   Jets_cut_CvB__6775->SetBinError(17,423.6932);
   Jets_cut_CvB__6775->SetBinError(18,555.6337);
   Jets_cut_CvB__6775->SetBinError(19,625.1737);
   Jets_cut_CvB__6775->SetBinError(20,232.7607);
   Jets_cut_CvB__6775->SetEntries(1.532076e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__6775->SetLineColor(ci);
   Jets_cut_CvB__6775->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__6775->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__6775->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__6775->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6775->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__6775->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__6775->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__6775->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__6775->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__6775->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__6775->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__6775->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__6775->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__6775->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__6775->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_WZ_tagFirst_2b1c_16->Modified();
   CvB_WZ_tagFirst_2b1c_16->cd();
   CvB_WZ_tagFirst_2b1c_16->SetSelected(CvB_WZ_tagFirst_2b1c_16);
}
