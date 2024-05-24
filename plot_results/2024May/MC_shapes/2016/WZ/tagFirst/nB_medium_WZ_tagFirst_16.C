#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_WZ_tagFirst_16()
{
//=========Macro generated from canvas: nB_medium_WZ_tagFirst_16/nB_medium_WZ_tagFirst_16
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_WZ_tagFirst_16 = new TCanvas("nB_medium_WZ_tagFirst_16", "nB_medium_WZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_WZ_tagFirst_16->SetHighLightColor(2);
   nB_medium_WZ_tagFirst_16->Range(-2.5,-559375.1,10.83333,5034376);
   nB_medium_WZ_tagFirst_16->SetFillColor(0);
   nB_medium_WZ_tagFirst_16->SetFillStyle(4000);
   nB_medium_WZ_tagFirst_16->SetBorderMode(0);
   nB_medium_WZ_tagFirst_16->SetBorderSize(2);
   nB_medium_WZ_tagFirst_16->SetLeftMargin(0.15);
   nB_medium_WZ_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_WZ_tagFirst_16->SetFrameBorderMode(0);
   nB_medium_WZ_tagFirst_16->SetFrameFillStyle(1000);
   nB_medium_WZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4465 = new TH1D("Jets_cut_nB_medium__4465","",10,-0.5,9.5);
   Jets_cut_nB_medium__4465->SetBinContent(1,4261905);
   Jets_cut_nB_medium__4465->SetBinContent(2,277867.6);
   Jets_cut_nB_medium__4465->SetBinContent(3,15916.77);
   Jets_cut_nB_medium__4465->SetBinContent(4,339.1786);
   Jets_cut_nB_medium__4465->SetBinContent(5,5.862961);
   Jets_cut_nB_medium__4465->SetBinError(1,1440.43);
   Jets_cut_nB_medium__4465->SetBinError(2,362.6377);
   Jets_cut_nB_medium__4465->SetBinError(3,75.53017);
   Jets_cut_nB_medium__4465->SetBinError(4,7.113874);
   Jets_cut_nB_medium__4465->SetBinError(5,0.7556884);
   Jets_cut_nB_medium__4465->SetEntries(1.5518e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4465->SetLineColor(ci);
   Jets_cut_nB_medium__4465->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4465->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4465->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4465->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4465->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4465->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4465->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4465->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4465->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4465->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4465->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4465->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4465->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4465->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4465->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_WZ_tagFirst_16->Modified();
   nB_medium_WZ_tagFirst_16->cd();
   nB_medium_WZ_tagFirst_16->SetSelected(nB_medium_WZ_tagFirst_16);
}
