#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WW_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: nB_medium_WW_tagOnly_2b1c_16/nB_medium_WW_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:19 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WW_tagOnly_2b1c_16 = new TCanvas("nB_medium_WW_tagOnly_2b1c_16", "nB_medium_WW_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WW_tagOnly_2b1c_16->SetHighLightColor(2);
   nB_medium_WW_tagOnly_2b1c_16->Range(-2.5,-1572256,10.83333,1.415031e+07);
   nB_medium_WW_tagOnly_2b1c_16->SetFillColor(0);
   nB_medium_WW_tagOnly_2b1c_16->SetFillStyle(4000);
   nB_medium_WW_tagOnly_2b1c_16->SetBorderMode(0);
   nB_medium_WW_tagOnly_2b1c_16->SetBorderSize(2);
   nB_medium_WW_tagOnly_2b1c_16->SetLeftMargin(0.15);
   nB_medium_WW_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_WW_tagOnly_2b1c_16->SetFrameBorderMode(0);
   nB_medium_WW_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nB_medium_WW_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__7582 = new TH1D("Jets_cut_nB_medium__7582","",10,-0.5,9.5);
   Jets_cut_nB_medium__7582->SetBinContent(1,1.197909e+07);
   Jets_cut_nB_medium__7582->SetBinContent(2,284004.6);
   Jets_cut_nB_medium__7582->SetBinContent(3,4058.316);
   Jets_cut_nB_medium__7582->SetBinContent(4,71.09268);
   Jets_cut_nB_medium__7582->SetBinContent(5,1.62244);
   Jets_cut_nB_medium__7582->SetBinError(1,2702.747);
   Jets_cut_nB_medium__7582->SetBinError(2,392.6582);
   Jets_cut_nB_medium__7582->SetBinError(3,36.84951);
   Jets_cut_nB_medium__7582->SetBinError(4,3.051767);
   Jets_cut_nB_medium__7582->SetBinError(5,0.4227021);
   Jets_cut_nB_medium__7582->SetEntries(3.168e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__7582->SetLineColor(ci);
   Jets_cut_nB_medium__7582->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__7582->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__7582->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7582->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7582->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7582->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__7582->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7582->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__7582->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__7582->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__7582->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7582->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7582->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7582->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7582->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WW_tagOnly_2b1c_16->Modified();
   nB_medium_WW_tagOnly_2b1c_16->cd();
   nB_medium_WW_tagOnly_2b1c_16->SetSelected(nB_medium_WW_tagOnly_2b1c_16);
}
