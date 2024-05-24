#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_TT_tagFirst_16()
{
//=========Macro generated from canvas: nB_medium_TT_tagFirst_16/nB_medium_TT_tagFirst_16
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_TT_tagFirst_16 = new TCanvas("nB_medium_TT_tagFirst_16", "nB_medium_TT_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_TT_tagFirst_16->SetHighLightColor(2);
   nB_medium_TT_tagFirst_16->Range(-2.5,-1620880,10.83333,1.458792e+07);
   nB_medium_TT_tagFirst_16->SetFillColor(0);
   nB_medium_TT_tagFirst_16->SetFillStyle(4000);
   nB_medium_TT_tagFirst_16->SetBorderMode(0);
   nB_medium_TT_tagFirst_16->SetBorderSize(2);
   nB_medium_TT_tagFirst_16->SetLeftMargin(0.15);
   nB_medium_TT_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_TT_tagFirst_16->SetFrameBorderMode(0);
   nB_medium_TT_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_TT_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4456 = new TH1D("Jets_cut_nB_medium__4456","",10,-0.5,9.5);
   Jets_cut_nB_medium__4456->SetBinContent(1,9400436);
   Jets_cut_nB_medium__4456->SetBinContent(2,1.234956e+07);
   Jets_cut_nB_medium__4456->SetBinContent(3,5236230);
   Jets_cut_nB_medium__4456->SetBinContent(4,353604.3);
   Jets_cut_nB_medium__4456->SetBinContent(5,14673.67);
   Jets_cut_nB_medium__4456->SetBinContent(6,560.2223);
   Jets_cut_nB_medium__4456->SetBinContent(7,22.52226);
   Jets_cut_nB_medium__4456->SetBinContent(8,0.9474844);
   Jets_cut_nB_medium__4456->SetBinError(1,1129.263);
   Jets_cut_nB_medium__4456->SetBinError(2,1039.771);
   Jets_cut_nB_medium__4456->SetBinError(3,567.4998);
   Jets_cut_nB_medium__4456->SetBinError(4,142.428);
   Jets_cut_nB_medium__4456->SetBinError(5,30.23832);
   Jets_cut_nB_medium__4456->SetBinError(6,6.166469);
   Jets_cut_nB_medium__4456->SetBinError(7,1.3013);
   Jets_cut_nB_medium__4456->SetBinError(8,0.2678317);
   Jets_cut_nB_medium__4456->SetEntries(5.10768e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4456->SetLineColor(ci);
   Jets_cut_nB_medium__4456->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4456->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4456->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4456->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4456->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4456->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4456->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4456->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4456->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4456->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4456->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4456->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4456->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4456->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4456->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_TT_tagFirst_16->Modified();
   nB_medium_TT_tagFirst_16->cd();
   nB_medium_TT_tagFirst_16->SetSelected(nB_medium_TT_tagFirst_16);
}
