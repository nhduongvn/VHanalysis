#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_TT_tagOnly_18()
{
//=========Macro generated from canvas: CvL_TT_tagOnly_18/CvL_TT_tagOnly_18
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CvL_TT_tagOnly_18 = new TCanvas("CvL_TT_tagOnly_18", "CvL_TT_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_TT_tagOnly_18->SetHighLightColor(2);
   CvL_TT_tagOnly_18->Range(-0.2,-5075785,1.133333,4.962887e+07);
   CvL_TT_tagOnly_18->SetFillColor(0);
   CvL_TT_tagOnly_18->SetFillStyle(4000);
   CvL_TT_tagOnly_18->SetBorderMode(0);
   CvL_TT_tagOnly_18->SetBorderSize(2);
   CvL_TT_tagOnly_18->SetLeftMargin(0.15);
   CvL_TT_tagOnly_18->SetFrameFillStyle(1000);
   CvL_TT_tagOnly_18->SetFrameBorderMode(0);
   CvL_TT_tagOnly_18->SetFrameFillStyle(1000);
   CvL_TT_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5178 = new TH1D("Jets_cut_CvL__5178","",20,0,1);
   Jets_cut_CvL__5178->SetBinContent(1,3.57186e+07);
   Jets_cut_CvL__5178->SetBinContent(2,4.207442e+07);
   Jets_cut_CvL__5178->SetBinContent(3,1.693607e+07);
   Jets_cut_CvL__5178->SetBinContent(4,8052316);
   Jets_cut_CvL__5178->SetBinContent(5,4934927);
   Jets_cut_CvL__5178->SetBinContent(6,3709531);
   Jets_cut_CvL__5178->SetBinContent(7,3038457);
   Jets_cut_CvL__5178->SetBinContent(8,2620066);
   Jets_cut_CvL__5178->SetBinContent(9,2427064);
   Jets_cut_CvL__5178->SetBinContent(10,2379431);
   Jets_cut_CvL__5178->SetBinContent(11,2424738);
   Jets_cut_CvL__5178->SetBinContent(12,2526110);
   Jets_cut_CvL__5178->SetBinContent(13,2769702);
   Jets_cut_CvL__5178->SetBinContent(14,3121985);
   Jets_cut_CvL__5178->SetBinContent(15,3675667);
   Jets_cut_CvL__5178->SetBinContent(16,4506090);
   Jets_cut_CvL__5178->SetBinContent(17,5647095);
   Jets_cut_CvL__5178->SetBinContent(18,7584444);
   Jets_cut_CvL__5178->SetBinContent(19,1.069927e+07);
   Jets_cut_CvL__5178->SetBinContent(20,2.348934e+07);
   Jets_cut_CvL__5178->SetBinError(1,2096.737);
   Jets_cut_CvL__5178->SetBinError(2,2257.405);
   Jets_cut_CvL__5178->SetBinError(3,1614.102);
   Jets_cut_CvL__5178->SetBinError(4,1093.476);
   Jets_cut_CvL__5178->SetBinError(5,840.9924);
   Jets_cut_CvL__5178->SetBinError(6,715.8352);
   Jets_cut_CvL__5178->SetBinError(7,640.1975);
   Jets_cut_CvL__5178->SetBinError(8,588.3238);
   Jets_cut_CvL__5178->SetBinError(9,561.1958);
   Jets_cut_CvL__5178->SetBinError(10,548.1507);
   Jets_cut_CvL__5178->SetBinError(11,548.9584);
   Jets_cut_CvL__5178->SetBinError(12,556.0006);
   Jets_cut_CvL__5178->SetBinError(13,579.1172);
   Jets_cut_CvL__5178->SetBinError(14,612.081);
   Jets_cut_CvL__5178->SetBinError(15,660.6704);
   Jets_cut_CvL__5178->SetBinError(16,730.2975);
   Jets_cut_CvL__5178->SetBinError(17,815.6628);
   Jets_cut_CvL__5178->SetBinError(18,943.2341);
   Jets_cut_CvL__5178->SetBinError(19,1124.615);
   Jets_cut_CvL__5178->SetBinError(20,1669.927);
   Jets_cut_CvL__5178->SetEntries(2.381475e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5178->SetLineColor(ci);
   Jets_cut_CvL__5178->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5178->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5178->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5178->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5178->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5178->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5178->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5178->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5178->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5178->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5178->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5178->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5178->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5178->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5178->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_TT_tagOnly_18->Modified();
   CvL_TT_tagOnly_18->cd();
   CvL_TT_tagOnly_18->SetSelected(CvL_TT_tagOnly_18);
}
