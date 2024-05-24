#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_QCD_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: nB_medium_QCD_tagOnly_2b1c_18/nB_medium_QCD_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:19 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_QCD_tagOnly_2b1c_18 = new TCanvas("nB_medium_QCD_tagOnly_2b1c_18", "nB_medium_QCD_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_QCD_tagOnly_2b1c_18->SetHighLightColor(2);
   nB_medium_QCD_tagOnly_2b1c_18->Range(-2.5,-2.517086e+11,10.83333,2.265377e+12);
   nB_medium_QCD_tagOnly_2b1c_18->SetFillColor(0);
   nB_medium_QCD_tagOnly_2b1c_18->SetFillStyle(4000);
   nB_medium_QCD_tagOnly_2b1c_18->SetBorderMode(0);
   nB_medium_QCD_tagOnly_2b1c_18->SetBorderSize(2);
   nB_medium_QCD_tagOnly_2b1c_18->SetLeftMargin(0.15);
   nB_medium_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   nB_medium_QCD_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_QCD_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__7569 = new TH1D("Jets_cut_nB_medium__7569","",10,-0.5,9.5);
   Jets_cut_nB_medium__7569->SetBinContent(1,1.917779e+12);
   Jets_cut_nB_medium__7569->SetBinContent(2,5.296676e+10);
   Jets_cut_nB_medium__7569->SetBinContent(3,2.111264e+09);
   Jets_cut_nB_medium__7569->SetBinContent(4,3.003222e+07);
   Jets_cut_nB_medium__7569->SetBinContent(5,893920.8);
   Jets_cut_nB_medium__7569->SetBinContent(6,14148.63);
   Jets_cut_nB_medium__7569->SetBinContent(7,512.717);
   Jets_cut_nB_medium__7569->SetBinContent(8,0.7654715);
   Jets_cut_nB_medium__7569->SetBinError(1,2.310535e+08);
   Jets_cut_nB_medium__7569->SetBinError(2,3.874336e+07);
   Jets_cut_nB_medium__7569->SetBinError(3,6514303);
   Jets_cut_nB_medium__7569->SetBinError(4,637874);
   Jets_cut_nB_medium__7569->SetBinError(5,90100.15);
   Jets_cut_nB_medium__7569->SetBinError(6,2339.146);
   Jets_cut_nB_medium__7569->SetBinError(7,185.5536);
   Jets_cut_nB_medium__7569->SetBinError(8,0.7654715);
   Jets_cut_nB_medium__7569->SetEntries(3.401452e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__7569->SetLineColor(ci);
   Jets_cut_nB_medium__7569->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__7569->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__7569->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7569->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7569->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7569->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__7569->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7569->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__7569->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__7569->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__7569->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7569->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__7569->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__7569->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__7569->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_QCD_tagOnly_2b1c_18->Modified();
   nB_medium_QCD_tagOnly_2b1c_18->cd();
   nB_medium_QCD_tagOnly_2b1c_18->SetSelected(nB_medium_QCD_tagOnly_2b1c_18);
}
