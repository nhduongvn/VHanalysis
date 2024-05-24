#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WW_tagOnly_16()
{
//=========Macro generated from canvas: nC_medium_WW_tagOnly_16/nC_medium_WW_tagOnly_16
//=========  (Fri May 24 12:43:31 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WW_tagOnly_16 = new TCanvas("nC_medium_WW_tagOnly_16", "nC_medium_WW_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WW_tagOnly_16->SetHighLightColor(2);
   nC_medium_WW_tagOnly_16->Range(-2.5,-1307361,10.83333,1.176625e+07);
   nC_medium_WW_tagOnly_16->SetFillColor(0);
   nC_medium_WW_tagOnly_16->SetFillStyle(4000);
   nC_medium_WW_tagOnly_16->SetBorderMode(0);
   nC_medium_WW_tagOnly_16->SetBorderSize(2);
   nC_medium_WW_tagOnly_16->SetLeftMargin(0.15);
   nC_medium_WW_tagOnly_16->SetFrameFillStyle(1000);
   nC_medium_WW_tagOnly_16->SetFrameBorderMode(0);
   nC_medium_WW_tagOnly_16->SetFrameFillStyle(1000);
   nC_medium_WW_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__5272 = new TH1D("Jets_cut_nC_medium__5272","",10,-0.5,9.5);
   Jets_cut_nC_medium__5272->SetBinContent(1,9960847);
   Jets_cut_nC_medium__5272->SetBinContent(2,2071746);
   Jets_cut_nC_medium__5272->SetBinContent(3,218690.9);
   Jets_cut_nC_medium__5272->SetBinContent(4,14608.53);
   Jets_cut_nC_medium__5272->SetBinContent(5,1236.162);
   Jets_cut_nC_medium__5272->SetBinContent(6,95.11804);
   Jets_cut_nC_medium__5272->SetBinContent(7,5.363005);
   Jets_cut_nC_medium__5272->SetBinContent(9,0.2029559);
   Jets_cut_nC_medium__5272->SetBinError(1,2475.497);
   Jets_cut_nC_medium__5272->SetBinError(2,1108.626);
   Jets_cut_nC_medium__5272->SetBinError(3,317.0443);
   Jets_cut_nC_medium__5272->SetBinError(4,50.71012);
   Jets_cut_nC_medium__5272->SetBinError(5,12.17806);
   Jets_cut_nC_medium__5272->SetBinError(6,3.564394);
   Jets_cut_nC_medium__5272->SetBinError(7,0.8783939);
   Jets_cut_nC_medium__5272->SetBinError(9,0.2029559);
   Jets_cut_nC_medium__5272->SetEntries(3.168e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__5272->SetLineColor(ci);
   Jets_cut_nC_medium__5272->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__5272->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__5272->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5272->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__5272->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5272->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__5272->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5272->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__5272->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__5272->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__5272->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5272->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__5272->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__5272->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__5272->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WW_tagOnly_16->Modified();
   nC_medium_WW_tagOnly_16->cd();
   nC_medium_WW_tagOnly_16->SetSelected(nC_medium_WW_tagOnly_16);
}
