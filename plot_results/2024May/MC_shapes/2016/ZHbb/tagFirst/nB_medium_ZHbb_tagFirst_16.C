#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZHbb_tagFirst_16()
{
//=========Macro generated from canvas: nB_medium_ZHbb_tagFirst_16/nB_medium_ZHbb_tagFirst_16
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZHbb_tagFirst_16 = new TCanvas("nB_medium_ZHbb_tagFirst_16", "nB_medium_ZHbb_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZHbb_tagFirst_16->SetHighLightColor(2);
   nB_medium_ZHbb_tagFirst_16->Range(-2.5,-1649.411,10.83333,14844.7);
   nB_medium_ZHbb_tagFirst_16->SetFillColor(0);
   nB_medium_ZHbb_tagFirst_16->SetFillStyle(4000);
   nB_medium_ZHbb_tagFirst_16->SetBorderMode(0);
   nB_medium_ZHbb_tagFirst_16->SetBorderSize(2);
   nB_medium_ZHbb_tagFirst_16->SetLeftMargin(0.15);
   nB_medium_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   nB_medium_ZHbb_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_ZHbb_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4444 = new TH1D("Jets_cut_nB_medium__4444","",10,-0.5,9.5);
   Jets_cut_nB_medium__4444->SetBinContent(1,12566.94);
   Jets_cut_nB_medium__4444->SetBinContent(2,9414.834);
   Jets_cut_nB_medium__4444->SetBinContent(3,2883.934);
   Jets_cut_nB_medium__4444->SetBinContent(4,370.2117);
   Jets_cut_nB_medium__4444->SetBinContent(5,54.03624);
   Jets_cut_nB_medium__4444->SetBinContent(6,1.387211);
   Jets_cut_nB_medium__4444->SetBinContent(7,0.07334272);
   Jets_cut_nB_medium__4444->SetBinContent(8,0.003501931);
   Jets_cut_nB_medium__4444->SetBinContent(9,0.001415438);
   Jets_cut_nB_medium__4444->SetBinError(1,8.420148);
   Jets_cut_nB_medium__4444->SetBinError(2,6.550404);
   Jets_cut_nB_medium__4444->SetBinError(3,3.165734);
   Jets_cut_nB_medium__4444->SetBinError(4,0.7737577);
   Jets_cut_nB_medium__4444->SetBinError(5,0.2169681);
   Jets_cut_nB_medium__4444->SetBinError(6,0.03502425);
   Jets_cut_nB_medium__4444->SetBinError(7,0.008668994);
   Jets_cut_nB_medium__4444->SetBinError(8,0.002211504);
   Jets_cut_nB_medium__4444->SetBinError(9,0.001116158);
   Jets_cut_nB_medium__4444->SetEntries(1.487403e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4444->SetLineColor(ci);
   Jets_cut_nB_medium__4444->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4444->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4444->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4444->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4444->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4444->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4444->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4444->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4444->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4444->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4444->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4444->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4444->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4444->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4444->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZHbb_tagFirst_16->Modified();
   nB_medium_ZHbb_tagFirst_16->cd();
   nB_medium_ZHbb_tagFirst_16->SetSelected(nB_medium_ZHbb_tagFirst_16);
}
