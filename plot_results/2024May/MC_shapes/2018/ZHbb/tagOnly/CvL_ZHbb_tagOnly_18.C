#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_ZHbb_tagOnly_18()
{
//=========Macro generated from canvas: CvL_ZHbb_tagOnly_18/CvL_ZHbb_tagOnly_18
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CvL_ZHbb_tagOnly_18 = new TCanvas("CvL_ZHbb_tagOnly_18", "CvL_ZHbb_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_ZHbb_tagOnly_18->SetHighLightColor(2);
   CvL_ZHbb_tagOnly_18->Range(-0.2,-1058.633,1.133333,12372.5);
   CvL_ZHbb_tagOnly_18->SetFillColor(0);
   CvL_ZHbb_tagOnly_18->SetFillStyle(4000);
   CvL_ZHbb_tagOnly_18->SetBorderMode(0);
   CvL_ZHbb_tagOnly_18->SetBorderSize(2);
   CvL_ZHbb_tagOnly_18->SetLeftMargin(0.15);
   CvL_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   CvL_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   CvL_ZHbb_tagOnly_18->SetFrameFillStyle(1000);
   CvL_ZHbb_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5166 = new TH1D("Jets_cut_CvL__5166","",20,0,1);
   Jets_cut_CvL__5166->SetBinContent(1,8377.459);
   Jets_cut_CvL__5166->SetBinContent(2,10517.72);
   Jets_cut_CvL__5166->SetBinContent(3,4414.609);
   Jets_cut_CvL__5166->SetBinContent(4,2196.742);
   Jets_cut_CvL__5166->SetBinContent(5,1401.6);
   Jets_cut_CvL__5166->SetBinContent(6,1091.143);
   Jets_cut_CvL__5166->SetBinContent(7,925.2339);
   Jets_cut_CvL__5166->SetBinContent(8,820.2397);
   Jets_cut_CvL__5166->SetBinContent(9,772.2522);
   Jets_cut_CvL__5166->SetBinContent(10,771.7768);
   Jets_cut_CvL__5166->SetBinContent(11,797.9298);
   Jets_cut_CvL__5166->SetBinContent(12,843.6992);
   Jets_cut_CvL__5166->SetBinContent(13,940.0924);
   Jets_cut_CvL__5166->SetBinContent(14,1072.668);
   Jets_cut_CvL__5166->SetBinContent(15,1278.725);
   Jets_cut_CvL__5166->SetBinContent(16,1574.149);
   Jets_cut_CvL__5166->SetBinContent(17,1978.743);
   Jets_cut_CvL__5166->SetBinContent(18,2655.607);
   Jets_cut_CvL__5166->SetBinContent(19,3699.561);
   Jets_cut_CvL__5166->SetBinContent(20,7369.148);
   Jets_cut_CvL__5166->SetBinError(1,4.979712);
   Jets_cut_CvL__5166->SetBinError(2,5.519671);
   Jets_cut_CvL__5166->SetBinError(3,3.963908);
   Jets_cut_CvL__5166->SetBinError(4,2.783931);
   Jets_cut_CvL__5166->SetBinError(5,2.156767);
   Jets_cut_CvL__5166->SetBinError(6,1.867896);
   Jets_cut_CvL__5166->SetBinError(7,1.744132);
   Jets_cut_CvL__5166->SetBinError(8,1.611199);
   Jets_cut_CvL__5166->SetBinError(9,1.535166);
   Jets_cut_CvL__5166->SetBinError(10,1.507661);
   Jets_cut_CvL__5166->SetBinError(11,1.539103);
   Jets_cut_CvL__5166->SetBinError(12,1.584434);
   Jets_cut_CvL__5166->SetBinError(13,1.652982);
   Jets_cut_CvL__5166->SetBinError(14,1.764083);
   Jets_cut_CvL__5166->SetBinError(15,1.937994);
   Jets_cut_CvL__5166->SetBinError(16,2.177024);
   Jets_cut_CvL__5166->SetBinError(17,2.422346);
   Jets_cut_CvL__5166->SetBinError(18,2.789084);
   Jets_cut_CvL__5166->SetBinError(19,3.342234);
   Jets_cut_CvL__5166->SetBinError(20,4.768863);
   Jets_cut_CvL__5166->SetEntries(3.494331e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5166->SetLineColor(ci);
   Jets_cut_CvL__5166->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5166->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5166->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5166->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5166->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5166->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5166->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5166->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5166->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5166->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5166->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5166->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5166->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5166->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5166->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_ZHbb_tagOnly_18->Modified();
   CvL_ZHbb_tagOnly_18->cd();
   CvL_ZHbb_tagOnly_18->SetSelected(CvL_ZHbb_tagOnly_18);
}
