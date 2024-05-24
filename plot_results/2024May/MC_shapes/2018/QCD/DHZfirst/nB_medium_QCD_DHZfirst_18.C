#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_QCD_DHZfirst_18()
{
//=========Macro generated from canvas: nB_medium_QCD_DHZfirst_18/nB_medium_QCD_DHZfirst_18
//=========  (Fri May 24 12:43:46 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_QCD_DHZfirst_18 = new TCanvas("nB_medium_QCD_DHZfirst_18", "nB_medium_QCD_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_QCD_DHZfirst_18->SetHighLightColor(2);
   nB_medium_QCD_DHZfirst_18->Range(-2.5,-2.517086e+11,10.83333,2.265377e+12);
   nB_medium_QCD_DHZfirst_18->SetFillColor(0);
   nB_medium_QCD_DHZfirst_18->SetFillStyle(4000);
   nB_medium_QCD_DHZfirst_18->SetBorderMode(0);
   nB_medium_QCD_DHZfirst_18->SetBorderSize(2);
   nB_medium_QCD_DHZfirst_18->SetLeftMargin(0.15);
   nB_medium_QCD_DHZfirst_18->SetFrameFillStyle(1000);
   nB_medium_QCD_DHZfirst_18->SetFrameBorderMode(0);
   nB_medium_QCD_DHZfirst_18->SetFrameFillStyle(1000);
   nB_medium_QCD_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6009 = new TH1D("Jets_cut_nB_medium__6009","",10,-0.5,9.5);
   Jets_cut_nB_medium__6009->SetBinContent(1,1.917779e+12);
   Jets_cut_nB_medium__6009->SetBinContent(2,5.296676e+10);
   Jets_cut_nB_medium__6009->SetBinContent(3,2.111264e+09);
   Jets_cut_nB_medium__6009->SetBinContent(4,3.003222e+07);
   Jets_cut_nB_medium__6009->SetBinContent(5,893920.8);
   Jets_cut_nB_medium__6009->SetBinContent(6,14148.63);
   Jets_cut_nB_medium__6009->SetBinContent(7,512.717);
   Jets_cut_nB_medium__6009->SetBinContent(8,0.7654715);
   Jets_cut_nB_medium__6009->SetBinError(1,2.310535e+08);
   Jets_cut_nB_medium__6009->SetBinError(2,3.874336e+07);
   Jets_cut_nB_medium__6009->SetBinError(3,6514303);
   Jets_cut_nB_medium__6009->SetBinError(4,637874);
   Jets_cut_nB_medium__6009->SetBinError(5,90100.15);
   Jets_cut_nB_medium__6009->SetBinError(6,2339.146);
   Jets_cut_nB_medium__6009->SetBinError(7,185.5536);
   Jets_cut_nB_medium__6009->SetBinError(8,0.7654715);
   Jets_cut_nB_medium__6009->SetEntries(3.401452e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6009->SetLineColor(ci);
   Jets_cut_nB_medium__6009->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6009->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6009->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6009->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6009->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6009->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6009->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6009->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6009->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6009->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6009->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6009->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6009->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6009->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6009->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_QCD_DHZfirst_18->Modified();
   nB_medium_QCD_DHZfirst_18->cd();
   nB_medium_QCD_DHZfirst_18->SetSelected(nB_medium_QCD_DHZfirst_18);
}
