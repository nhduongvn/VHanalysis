#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WJets_tagOnly_17()
{
//=========Macro generated from canvas: CvL_WJets_tagOnly_17/CvL_WJets_tagOnly_17
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CvL_WJets_tagOnly_17 = new TCanvas("CvL_WJets_tagOnly_17", "CvL_WJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WJets_tagOnly_17->SetHighLightColor(2);
   CvL_WJets_tagOnly_17->Range(-0.2,-1.208564e+07,1.133333,1.087707e+08);
   CvL_WJets_tagOnly_17->SetFillColor(0);
   CvL_WJets_tagOnly_17->SetFillStyle(4000);
   CvL_WJets_tagOnly_17->SetBorderMode(0);
   CvL_WJets_tagOnly_17->SetBorderSize(2);
   CvL_WJets_tagOnly_17->SetLeftMargin(0.15);
   CvL_WJets_tagOnly_17->SetFrameFillStyle(1000);
   CvL_WJets_tagOnly_17->SetFrameBorderMode(0);
   CvL_WJets_tagOnly_17->SetFrameFillStyle(1000);
   CvL_WJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5171 = new TH1D("Jets_cut_CvL__5171","",20,0,1);
   Jets_cut_CvL__5171->SetBinContent(1,8.575136e+07);
   Jets_cut_CvL__5171->SetBinContent(2,9.208104e+07);
   Jets_cut_CvL__5171->SetBinContent(3,3.042265e+07);
   Jets_cut_CvL__5171->SetBinContent(4,1.301126e+07);
   Jets_cut_CvL__5171->SetBinContent(5,6986461);
   Jets_cut_CvL__5171->SetBinContent(6,4592587);
   Jets_cut_CvL__5171->SetBinContent(7,3277997);
   Jets_cut_CvL__5171->SetBinContent(8,2484102);
   Jets_cut_CvL__5171->SetBinContent(9,2020500);
   Jets_cut_CvL__5171->SetBinContent(10,1750513);
   Jets_cut_CvL__5171->SetBinContent(11,1560505);
   Jets_cut_CvL__5171->SetBinContent(12,1388626);
   Jets_cut_CvL__5171->SetBinContent(13,1275165);
   Jets_cut_CvL__5171->SetBinContent(14,1202227);
   Jets_cut_CvL__5171->SetBinContent(15,1203324);
   Jets_cut_CvL__5171->SetBinContent(16,1247236);
   Jets_cut_CvL__5171->SetBinContent(17,1320888);
   Jets_cut_CvL__5171->SetBinContent(18,1524142);
   Jets_cut_CvL__5171->SetBinContent(19,1878226);
   Jets_cut_CvL__5171->SetBinContent(20,6898198);
   Jets_cut_CvL__5171->SetBinError(1,16814.83);
   Jets_cut_CvL__5171->SetBinError(2,17537.27);
   Jets_cut_CvL__5171->SetBinError(3,10437.1);
   Jets_cut_CvL__5171->SetBinError(4,6814.377);
   Jets_cut_CvL__5171->SetBinError(5,4983.059);
   Jets_cut_CvL__5171->SetBinError(6,4040.226);
   Jets_cut_CvL__5171->SetBinError(7,3416.415);
   Jets_cut_CvL__5171->SetBinError(8,2974.742);
   Jets_cut_CvL__5171->SetBinError(9,2681.852);
   Jets_cut_CvL__5171->SetBinError(10,2500.232);
   Jets_cut_CvL__5171->SetBinError(11,2356.719);
   Jets_cut_CvL__5171->SetBinError(12,2215.603);
   Jets_cut_CvL__5171->SetBinError(13,2115.767);
   Jets_cut_CvL__5171->SetBinError(14,2049.046);
   Jets_cut_CvL__5171->SetBinError(15,2039.329);
   Jets_cut_CvL__5171->SetBinError(16,2074.121);
   Jets_cut_CvL__5171->SetBinError(17,2121.621);
   Jets_cut_CvL__5171->SetBinError(18,2264.333);
   Jets_cut_CvL__5171->SetBinError(19,2506.301);
   Jets_cut_CvL__5171->SetBinError(20,4883.448);
   Jets_cut_CvL__5171->SetEntries(3.578415e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5171->SetLineColor(ci);
   Jets_cut_CvL__5171->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5171->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5171->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5171->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5171->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5171->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5171->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5171->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5171->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5171->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5171->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5171->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5171->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5171->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5171->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WJets_tagOnly_17->Modified();
   CvL_WJets_tagOnly_17->cd();
   CvL_WJets_tagOnly_17->SetSelected(CvL_WJets_tagOnly_17);
}
