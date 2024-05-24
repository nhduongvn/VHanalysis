#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_TT_DHZfirst_16()
{
//=========Macro generated from canvas: nC_medium_TT_DHZfirst_16/nC_medium_TT_DHZfirst_16
//=========  (Fri May 24 12:43:47 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_TT_DHZfirst_16 = new TCanvas("nC_medium_TT_DHZfirst_16", "nC_medium_TT_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_TT_DHZfirst_16->SetHighLightColor(2);
   nC_medium_TT_DHZfirst_16->Range(-2.5,-1628075,10.83333,1.465267e+07);
   nC_medium_TT_DHZfirst_16->SetFillColor(0);
   nC_medium_TT_DHZfirst_16->SetFillStyle(4000);
   nC_medium_TT_DHZfirst_16->SetBorderMode(0);
   nC_medium_TT_DHZfirst_16->SetBorderSize(2);
   nC_medium_TT_DHZfirst_16->SetLeftMargin(0.15);
   nC_medium_TT_DHZfirst_16->SetFrameFillStyle(1000);
   nC_medium_TT_DHZfirst_16->SetFrameBorderMode(0);
   nC_medium_TT_DHZfirst_16->SetFrameFillStyle(1000);
   nC_medium_TT_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__6046 = new TH1D("Jets_cut_nC_medium__6046","",10,-0.5,9.5);
   Jets_cut_nC_medium__6046->SetBinContent(1,1.240438e+07);
   Jets_cut_nC_medium__6046->SetBinContent(2,9769387);
   Jets_cut_nC_medium__6046->SetBinContent(3,3958928);
   Jets_cut_nC_medium__6046->SetBinContent(4,1016277);
   Jets_cut_nC_medium__6046->SetBinContent(5,179845.6);
   Jets_cut_nC_medium__6046->SetBinContent(6,23566.99);
   Jets_cut_nC_medium__6046->SetBinContent(7,2468.054);
   Jets_cut_nC_medium__6046->SetBinContent(8,218.2394);
   Jets_cut_nC_medium__6046->SetBinContent(9,18.25552);
   Jets_cut_nC_medium__6046->SetBinContent(10,1.747968);
   Jets_cut_nC_medium__6046->SetBinContent(11,0.1645276);
   Jets_cut_nC_medium__6046->SetBinError(1,1248.577);
   Jets_cut_nC_medium__6046->SetBinError(2,901.4033);
   Jets_cut_nC_medium__6046->SetBinError(3,501.3348);
   Jets_cut_nC_medium__6046->SetBinError(4,250.6158);
   Jets_cut_nC_medium__6046->SetBinError(5,109.9897);
   Jets_cut_nC_medium__6046->SetBinError(6,41.54638);
   Jets_cut_nC_medium__6046->SetBinError(7,13.95457);
   Jets_cut_nC_medium__6046->SetBinError(8,4.295411);
   Jets_cut_nC_medium__6046->SetBinError(9,1.305712);
   Jets_cut_nC_medium__6046->SetBinError(10,0.4222588);
   Jets_cut_nC_medium__6046->SetBinError(11,0.1207945);
   Jets_cut_nC_medium__6046->SetEntries(5.10768e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__6046->SetLineColor(ci);
   Jets_cut_nC_medium__6046->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__6046->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__6046->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6046->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6046->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6046->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__6046->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6046->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__6046->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__6046->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__6046->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6046->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6046->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6046->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6046->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_TT_DHZfirst_16->Modified();
   nC_medium_TT_DHZfirst_16->cd();
   nC_medium_TT_DHZfirst_16->SetSelected(nC_medium_TT_DHZfirst_16);
}
