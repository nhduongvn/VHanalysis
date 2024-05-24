#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_QCD_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: nC_medium_QCD_tagOnly_2b1c_16/nC_medium_QCD_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_QCD_tagOnly_2b1c_16 = new TCanvas("nC_medium_QCD_tagOnly_2b1c_16", "nC_medium_QCD_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_QCD_tagOnly_2b1c_16->SetHighLightColor(2);
   nC_medium_QCD_tagOnly_2b1c_16->Range(-2.5,-4.454328e+11,10.83333,4.008895e+12);
   nC_medium_QCD_tagOnly_2b1c_16->SetFillColor(0);
   nC_medium_QCD_tagOnly_2b1c_16->SetFillStyle(4000);
   nC_medium_QCD_tagOnly_2b1c_16->SetBorderMode(0);
   nC_medium_QCD_tagOnly_2b1c_16->SetBorderSize(2);
   nC_medium_QCD_tagOnly_2b1c_16->SetLeftMargin(0.15);
   nC_medium_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nC_medium_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   nC_medium_QCD_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   nC_medium_QCD_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7597 = new TH1D("Jets_cut_nC_medium__7597","",10,-0.5,9.5);
   Jets_cut_nC_medium__7597->SetBinContent(1,3.393773e+12);
   Jets_cut_nC_medium__7597->SetBinContent(2,4.575502e+11);
   Jets_cut_nC_medium__7597->SetBinContent(3,2.902317e+10);
   Jets_cut_nC_medium__7597->SetBinContent(4,2.432575e+08);
   Jets_cut_nC_medium__7597->SetBinContent(5,8397048);
   Jets_cut_nC_medium__7597->SetBinContent(6,383031.3);
   Jets_cut_nC_medium__7597->SetBinContent(7,35436.32);
   Jets_cut_nC_medium__7597->SetBinContent(8,901.9081);
   Jets_cut_nC_medium__7597->SetBinContent(9,41.90494);
   Jets_cut_nC_medium__7597->SetBinContent(10,0.9877986);
   Jets_cut_nC_medium__7597->SetBinError(1,6.000014e+08);
   Jets_cut_nC_medium__7597->SetBinError(2,2.235896e+08);
   Jets_cut_nC_medium__7597->SetBinError(3,5.538015e+07);
   Jets_cut_nC_medium__7597->SetBinError(4,2511145);
   Jets_cut_nC_medium__7597->SetBinError(5,104975.2);
   Jets_cut_nC_medium__7597->SetBinError(6,20825.66);
   Jets_cut_nC_medium__7597->SetBinError(7,19129.61);
   Jets_cut_nC_medium__7597->SetBinError(8,94.66723);
   Jets_cut_nC_medium__7597->SetBinError(9,12.38553);
   Jets_cut_nC_medium__7597->SetBinError(10,0.9877986);
   Jets_cut_nC_medium__7597->SetEntries(2.468814e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7597->SetLineColor(ci);
   Jets_cut_nC_medium__7597->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7597->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7597->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7597->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7597->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7597->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7597->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7597->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7597->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7597->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7597->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7597->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7597->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7597->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7597->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_QCD_tagOnly_2b1c_16->Modified();
   nC_medium_QCD_tagOnly_2b1c_16->cd();
   nC_medium_QCD_tagOnly_2b1c_16->SetSelected(nC_medium_QCD_tagOnly_2b1c_16);
}
