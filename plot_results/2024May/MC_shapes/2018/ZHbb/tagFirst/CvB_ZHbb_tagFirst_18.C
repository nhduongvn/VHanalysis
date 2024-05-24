#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvB_ZHbb_tagFirst_18()
{
//=========Macro generated from canvas: CvB_ZHbb_tagFirst_18/CvB_ZHbb_tagFirst_18
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *CvB_ZHbb_tagFirst_18 = new TCanvas("CvB_ZHbb_tagFirst_18", "CvB_ZHbb_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvB_ZHbb_tagFirst_18->SetHighLightColor(2);
   CvB_ZHbb_tagFirst_18->Range(-0.2,-1598.452,1.133333,15673.11);
   CvB_ZHbb_tagFirst_18->SetFillColor(0);
   CvB_ZHbb_tagFirst_18->SetFillStyle(4000);
   CvB_ZHbb_tagFirst_18->SetBorderMode(0);
   CvB_ZHbb_tagFirst_18->SetBorderSize(2);
   CvB_ZHbb_tagFirst_18->SetLeftMargin(0.15);
   CvB_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   CvB_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   CvB_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   CvB_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvB__4416 = new TH1D("Jets_cut_CvB__4416","",20,0,1);
   Jets_cut_CvB__4416->SetBinContent(1,13287.99);
   Jets_cut_CvB__4416->SetBinContent(2,1949.464);
   Jets_cut_CvB__4416->SetBinContent(3,1245.022);
   Jets_cut_CvB__4416->SetBinContent(4,1072.242);
   Jets_cut_CvB__4416->SetBinContent(5,969.5298);
   Jets_cut_CvB__4416->SetBinContent(6,859.5562);
   Jets_cut_CvB__4416->SetBinContent(7,793.9886);
   Jets_cut_CvB__4416->SetBinContent(8,755.3366);
   Jets_cut_CvB__4416->SetBinContent(9,801.3517);
   Jets_cut_CvB__4416->SetBinContent(10,850.594);
   Jets_cut_CvB__4416->SetBinContent(11,907.961);
   Jets_cut_CvB__4416->SetBinContent(12,998.4375);
   Jets_cut_CvB__4416->SetBinContent(13,1222.89);
   Jets_cut_CvB__4416->SetBinContent(14,1505.256);
   Jets_cut_CvB__4416->SetBinContent(15,2023.07);
   Jets_cut_CvB__4416->SetBinContent(16,2850.794);
   Jets_cut_CvB__4416->SetBinContent(17,4452.076);
   Jets_cut_CvB__4416->SetBinContent(18,7644.937);
   Jets_cut_CvB__4416->SetBinContent(19,7966.248);
   Jets_cut_CvB__4416->SetBinContent(20,1342.355);
   Jets_cut_CvB__4416->SetBinError(1,6.346632);
   Jets_cut_CvB__4416->SetBinError(2,2.402051);
   Jets_cut_CvB__4416->SetBinError(3,1.924027);
   Jets_cut_CvB__4416->SetBinError(4,1.829047);
   Jets_cut_CvB__4416->SetBinError(5,1.699501);
   Jets_cut_CvB__4416->SetBinError(6,1.624783);
   Jets_cut_CvB__4416->SetBinError(7,1.549914);
   Jets_cut_CvB__4416->SetBinError(8,1.462667);
   Jets_cut_CvB__4416->SetBinError(9,1.517079);
   Jets_cut_CvB__4416->SetBinError(10,1.601091);
   Jets_cut_CvB__4416->SetBinError(11,1.650566);
   Jets_cut_CvB__4416->SetBinError(12,1.745112);
   Jets_cut_CvB__4416->SetBinError(13,1.935722);
   Jets_cut_CvB__4416->SetBinError(14,2.149759);
   Jets_cut_CvB__4416->SetBinError(15,2.514488);
   Jets_cut_CvB__4416->SetBinError(16,2.948494);
   Jets_cut_CvB__4416->SetBinError(17,3.675014);
   Jets_cut_CvB__4416->SetBinError(18,4.842365);
   Jets_cut_CvB__4416->SetBinError(19,5.014305);
   Jets_cut_CvB__4416->SetBinError(20,2.151738);
   Jets_cut_CvB__4416->SetEntries(3.494331e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvB__4416->SetLineColor(ci);
   Jets_cut_CvB__4416->GetXaxis()->SetTitle("CvB tagging score");
   Jets_cut_CvB__4416->GetXaxis()->SetRange(1,20);
   Jets_cut_CvB__4416->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvB__4416->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvB__4416->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvB__4416->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvB__4416->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvB__4416->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvB__4416->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvB__4416->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvB__4416->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvB__4416->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvB__4416->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvB__4416->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvB__4416->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvB_ZHbb_tagFirst_18->Modified();
   CvB_ZHbb_tagFirst_18->cd();
   CvB_ZHbb_tagFirst_18->SetSelected(CvB_ZHbb_tagFirst_18);
}
