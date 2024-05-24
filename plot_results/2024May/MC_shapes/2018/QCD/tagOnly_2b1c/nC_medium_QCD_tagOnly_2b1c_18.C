#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_QCD_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: nC_medium_QCD_tagOnly_2b1c_18/nC_medium_QCD_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_QCD_tagOnly_2b1c_18 = new TCanvas("nC_medium_QCD_tagOnly_2b1c_18", "nC_medium_QCD_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_QCD_tagOnly_2b1c_18->SetHighLightColor(2);
   nC_medium_QCD_tagOnly_2b1c_18->Range(-2.5,-2.235807e+11,10.83333,2.012227e+12);
   nC_medium_QCD_tagOnly_2b1c_18->SetFillColor(0);
   nC_medium_QCD_tagOnly_2b1c_18->SetFillStyle(4000);
   nC_medium_QCD_tagOnly_2b1c_18->SetBorderMode(0);
   nC_medium_QCD_tagOnly_2b1c_18->SetBorderSize(2);
   nC_medium_QCD_tagOnly_2b1c_18->SetLeftMargin(0.15);
   nC_medium_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   nC_medium_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7599 = new TH1D("Jets_cut_nC_medium__7599","",10,-0.5,9.5);
   Jets_cut_nC_medium__7599->SetBinContent(1,1.703472e+12);
   Jets_cut_nC_medium__7599->SetBinContent(2,2.473421e+11);
   Jets_cut_nC_medium__7599->SetBinContent(3,2.139385e+10);
   Jets_cut_nC_medium__7599->SetBinContent(4,6.418868e+08);
   Jets_cut_nC_medium__7599->SetBinContent(5,3.643607e+07);
   Jets_cut_nC_medium__7599->SetBinContent(6,1834046);
   Jets_cut_nC_medium__7599->SetBinContent(7,72890.41);
   Jets_cut_nC_medium__7599->SetBinContent(8,3117.463);
   Jets_cut_nC_medium__7599->SetBinContent(9,686.6902);
   Jets_cut_nC_medium__7599->SetBinContent(10,33.7724);
   Jets_cut_nC_medium__7599->SetBinContent(11,0.3675403);
   Jets_cut_nC_medium__7599->SetBinError(1,2.158096e+08);
   Jets_cut_nC_medium__7599->SetBinError(2,8.718972e+07);
   Jets_cut_nC_medium__7599->SetBinError(3,2.7333e+07);
   Jets_cut_nC_medium__7599->SetBinError(4,2423354);
   Jets_cut_nC_medium__7599->SetBinError(5,888975.8);
   Jets_cut_nC_medium__7599->SetBinError(6,114703.3);
   Jets_cut_nC_medium__7599->SetBinError(7,3570.033);
   Jets_cut_nC_medium__7599->SetBinError(8,391.2445);
   Jets_cut_nC_medium__7599->SetBinError(9,299.7941);
   Jets_cut_nC_medium__7599->SetBinError(10,21.21392);
   Jets_cut_nC_medium__7599->SetBinError(11,0.3675403);
   Jets_cut_nC_medium__7599->SetEntries(3.401452e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7599->SetLineColor(ci);
   Jets_cut_nC_medium__7599->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7599->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7599->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7599->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7599->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7599->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7599->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7599->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7599->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7599->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7599->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7599->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7599->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7599->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7599->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_QCD_tagOnly_2b1c_18->Modified();
   nC_medium_QCD_tagOnly_2b1c_18->cd();
   nC_medium_QCD_tagOnly_2b1c_18->SetSelected(nC_medium_QCD_tagOnly_2b1c_18);
}
