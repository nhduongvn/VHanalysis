#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_TT_tagOnly_18()
{
//=========Macro generated from canvas: nB_medium_TT_tagOnly_18/nB_medium_TT_tagOnly_18
//=========  (Fri May 24 12:43:30 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_TT_tagOnly_18 = new TCanvas("nB_medium_TT_tagOnly_18", "nB_medium_TT_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_TT_tagOnly_18->SetHighLightColor(2);
   nB_medium_TT_tagOnly_18->Range(-2.5,-3646767,10.83333,3.28209e+07);
   nB_medium_TT_tagOnly_18->SetFillColor(0);
   nB_medium_TT_tagOnly_18->SetFillStyle(4000);
   nB_medium_TT_tagOnly_18->SetBorderMode(0);
   nB_medium_TT_tagOnly_18->SetBorderSize(2);
   nB_medium_TT_tagOnly_18->SetLeftMargin(0.15);
   nB_medium_TT_tagOnly_18->SetFrameFillStyle(1000);
   nB_medium_TT_tagOnly_18->SetFrameBorderMode(0);
   nB_medium_TT_tagOnly_18->SetFrameFillStyle(1000);
   nB_medium_TT_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__5238 = new TH1D("Jets_cut_nB_medium__5238","",10,-0.5,9.5);
   Jets_cut_nB_medium__5238->SetBinContent(1,1.359093e+07);
   Jets_cut_nB_medium__5238->SetBinContent(2,2.778489e+07);
   Jets_cut_nB_medium__5238->SetBinContent(3,1.621192e+07);
   Jets_cut_nB_medium__5238->SetBinContent(4,1435186);
   Jets_cut_nB_medium__5238->SetBinContent(5,71429.76);
   Jets_cut_nB_medium__5238->SetBinContent(6,3209.667);
   Jets_cut_nB_medium__5238->SetBinContent(7,155.1843);
   Jets_cut_nB_medium__5238->SetBinContent(8,12.01609);
   Jets_cut_nB_medium__5238->SetBinContent(9,0.0544529);
   Jets_cut_nB_medium__5238->SetBinError(1,1161.316);
   Jets_cut_nB_medium__5238->SetBinError(2,1744.941);
   Jets_cut_nB_medium__5238->SetBinError(3,1398.877);
   Jets_cut_nB_medium__5238->SetBinError(4,467.9805);
   Jets_cut_nB_medium__5238->SetBinError(5,120.2028);
   Jets_cut_nB_medium__5238->SetBinError(6,30.88821);
   Jets_cut_nB_medium__5238->SetBinError(7,9.223831);
   Jets_cut_nB_medium__5238->SetBinError(8,2.889484);
   Jets_cut_nB_medium__5238->SetBinError(9,0.0544529);
   Jets_cut_nB_medium__5238->SetEntries(8.5595e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__5238->SetLineColor(ci);
   Jets_cut_nB_medium__5238->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__5238->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__5238->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5238->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__5238->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5238->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__5238->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5238->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__5238->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__5238->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__5238->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5238->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__5238->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__5238->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__5238->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_TT_tagOnly_18->Modified();
   nB_medium_TT_tagOnly_18->cd();
   nB_medium_TT_tagOnly_18->SetSelected(nB_medium_TT_tagOnly_18);
}
