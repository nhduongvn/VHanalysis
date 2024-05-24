#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_WJets_DHZfirst_16()
{
//=========Macro generated from canvas: CvL_WJets_DHZfirst_16/CvL_WJets_DHZfirst_16
//=========  (Fri May 24 12:43:45 2024) by ROOT version 6.28/10
   TCanvas *CvL_WJets_DHZfirst_16 = new TCanvas("CvL_WJets_DHZfirst_16", "CvL_WJets_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CvL_WJets_DHZfirst_16->SetHighLightColor(2);
   CvL_WJets_DHZfirst_16->Range(-0.2,-1.717982e+07,1.133333,1.546184e+08);
   CvL_WJets_DHZfirst_16->SetFillColor(0);
   CvL_WJets_DHZfirst_16->SetFillStyle(4000);
   CvL_WJets_DHZfirst_16->SetBorderMode(0);
   CvL_WJets_DHZfirst_16->SetBorderSize(2);
   CvL_WJets_DHZfirst_16->SetLeftMargin(0.15);
   CvL_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   CvL_WJets_DHZfirst_16->SetFrameBorderMode(0);
   CvL_WJets_DHZfirst_16->SetFrameFillStyle(1000);
   CvL_WJets_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CvL__5950 = new TH1D("Jets_cut_CvL__5950","",20,0,1);
   Jets_cut_CvL__5950->SetBinContent(1,1.086271e+08);
   Jets_cut_CvL__5950->SetBinContent(2,1.308939e+08);
   Jets_cut_CvL__5950->SetBinContent(3,4.424498e+07);
   Jets_cut_CvL__5950->SetBinContent(4,1.833342e+07);
   Jets_cut_CvL__5950->SetBinContent(5,9422261);
   Jets_cut_CvL__5950->SetBinContent(6,5937454);
   Jets_cut_CvL__5950->SetBinContent(7,4092869);
   Jets_cut_CvL__5950->SetBinContent(8,3008968);
   Jets_cut_CvL__5950->SetBinContent(9,2386017);
   Jets_cut_CvL__5950->SetBinContent(10,2020540);
   Jets_cut_CvL__5950->SetBinContent(11,1768074);
   Jets_cut_CvL__5950->SetBinContent(12,1537719);
   Jets_cut_CvL__5950->SetBinContent(13,1381986);
   Jets_cut_CvL__5950->SetBinContent(14,1283160);
   Jets_cut_CvL__5950->SetBinContent(15,1265701);
   Jets_cut_CvL__5950->SetBinContent(16,1270168);
   Jets_cut_CvL__5950->SetBinContent(17,1309784);
   Jets_cut_CvL__5950->SetBinContent(18,1459582);
   Jets_cut_CvL__5950->SetBinContent(19,1730805);
   Jets_cut_CvL__5950->SetBinContent(20,5186106);
   Jets_cut_CvL__5950->SetBinError(1,29773.08);
   Jets_cut_CvL__5950->SetBinError(2,32848.83);
   Jets_cut_CvL__5950->SetBinError(3,19774.69);
   Jets_cut_CvL__5950->SetBinError(4,12738.97);
   Jets_cut_CvL__5950->SetBinError(5,9091.4);
   Jets_cut_CvL__5950->SetBinError(6,7218.287);
   Jets_cut_CvL__5950->SetBinError(7,5998.413);
   Jets_cut_CvL__5950->SetBinError(8,5160.144);
   Jets_cut_CvL__5950->SetBinError(9,4597.088);
   Jets_cut_CvL__5950->SetBinError(10,4235.538);
   Jets_cut_CvL__5950->SetBinError(11,3984.892);
   Jets_cut_CvL__5950->SetBinError(12,3694.817);
   Jets_cut_CvL__5950->SetBinError(13,3500.178);
   Jets_cut_CvL__5950->SetBinError(14,3365.809);
   Jets_cut_CvL__5950->SetBinError(15,3343.31);
   Jets_cut_CvL__5950->SetBinError(16,3328.991);
   Jets_cut_CvL__5950->SetBinError(17,3372.536);
   Jets_cut_CvL__5950->SetBinError(18,3533.453);
   Jets_cut_CvL__5950->SetBinError(19,3834.223);
   Jets_cut_CvL__5950->SetBinError(20,6699.227);
   Jets_cut_CvL__5950->SetEntries(3.499471e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CvL__5950->SetLineColor(ci);
   Jets_cut_CvL__5950->GetXaxis()->SetTitle("CvL tagging score");
   Jets_cut_CvL__5950->GetXaxis()->SetRange(1,20);
   Jets_cut_CvL__5950->GetXaxis()->SetLabelFont(42);
   Jets_cut_CvL__5950->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5950->GetXaxis()->SetTitleFont(42);
   Jets_cut_CvL__5950->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CvL__5950->GetYaxis()->SetLabelFont(42);
   Jets_cut_CvL__5950->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CvL__5950->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CvL__5950->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CvL__5950->GetYaxis()->SetTitleFont(42);
   Jets_cut_CvL__5950->GetZaxis()->SetLabelFont(42);
   Jets_cut_CvL__5950->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CvL__5950->GetZaxis()->SetTitleFont(42);
   Jets_cut_CvL__5950->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_WJets_DHZfirst_16->Modified();
   CvL_WJets_DHZfirst_16->cd();
   CvL_WJets_DHZfirst_16->SetSelected(CvL_WJets_DHZfirst_16);
}
