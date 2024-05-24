#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_TT_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: nC_medium_TT_tagOnly_2b1c_18/nC_medium_TT_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_TT_tagOnly_2b1c_18 = new TCanvas("nC_medium_TT_tagOnly_2b1c_18", "nC_medium_TT_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_TT_tagOnly_2b1c_18->SetHighLightColor(2);
   nC_medium_TT_tagOnly_2b1c_18->Range(-2.5,-3006828,10.83333,2.706145e+07);
   nC_medium_TT_tagOnly_2b1c_18->SetFillColor(0);
   nC_medium_TT_tagOnly_2b1c_18->SetFillStyle(4000);
   nC_medium_TT_tagOnly_2b1c_18->SetBorderMode(0);
   nC_medium_TT_tagOnly_2b1c_18->SetBorderSize(2);
   nC_medium_TT_tagOnly_2b1c_18->SetLeftMargin(0.15);
   nC_medium_TT_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_TT_tagOnly_2b1c_18->SetFrameBorderMode(0);
   nC_medium_TT_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_TT_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7608 = new TH1D("Jets_cut_nC_medium__7608","",10,-0.5,9.5);
   Jets_cut_nC_medium__7608->SetBinContent(1,2.132806e+07);
   Jets_cut_nC_medium__7608->SetBinContent(2,2.290917e+07);
   Jets_cut_nC_medium__7608->SetBinContent(3,1.106389e+07);
   Jets_cut_nC_medium__7608->SetBinContent(4,3120027);
   Jets_cut_nC_medium__7608->SetBinContent(5,585969.8);
   Jets_cut_nC_medium__7608->SetBinContent(6,80645.42);
   Jets_cut_nC_medium__7608->SetBinContent(7,8997.271);
   Jets_cut_nC_medium__7608->SetBinContent(8,875.5498);
   Jets_cut_nC_medium__7608->SetBinContent(9,91.35378);
   Jets_cut_nC_medium__7608->SetBinContent(10,3.587558);
   Jets_cut_nC_medium__7608->SetBinContent(11,0.7991602);
   Jets_cut_nC_medium__7608->SetBinError(1,1349.33);
   Jets_cut_nC_medium__7608->SetBinError(2,1575.484);
   Jets_cut_nC_medium__7608->SetBinError(3,1241.649);
   Jets_cut_nC_medium__7608->SetBinError(4,752.871);
   Jets_cut_nC_medium__7608->SetBinError(5,378.1192);
   Jets_cut_nC_medium__7608->SetBinError(6,161.0123);
   Jets_cut_nC_medium__7608->SetBinError(7,63.46706);
   Jets_cut_nC_medium__7608->SetBinError(8,21.79375);
   Jets_cut_nC_medium__7608->SetBinError(9,8.945128);
   Jets_cut_nC_medium__7608->SetBinError(10,1.187635);
   Jets_cut_nC_medium__7608->SetBinError(11,0.7991602);
   Jets_cut_nC_medium__7608->SetEntries(8.5595e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7608->SetLineColor(ci);
   Jets_cut_nC_medium__7608->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7608->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7608->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7608->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7608->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7608->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7608->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7608->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7608->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7608->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7608->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7608->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7608->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7608->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7608->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_TT_tagOnly_2b1c_18->Modified();
   nC_medium_TT_tagOnly_2b1c_18->cd();
   nC_medium_TT_tagOnly_2b1c_18->SetSelected(nC_medium_TT_tagOnly_2b1c_18);
}
