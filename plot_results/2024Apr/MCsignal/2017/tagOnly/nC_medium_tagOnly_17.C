#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_tagOnly_17()
{
//=========Macro generated from canvas: nC_medium_tagOnly_17/nC_medium_tagOnly_17
//=========  (Mon Apr  8 11:27:54 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_tagOnly_17 = new TCanvas("nC_medium_tagOnly_17", "nC_medium_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_tagOnly_17->SetHighLightColor(2);
   nC_medium_tagOnly_17->Range(-2.5,-29.00717,10.83333,261.0645);
   nC_medium_tagOnly_17->SetFillColor(0);
   nC_medium_tagOnly_17->SetFillStyle(4000);
   nC_medium_tagOnly_17->SetBorderMode(0);
   nC_medium_tagOnly_17->SetBorderSize(2);
   nC_medium_tagOnly_17->SetLeftMargin(0.15);
   nC_medium_tagOnly_17->SetFrameFillStyle(1000);
   nC_medium_tagOnly_17->SetFrameBorderMode(0);
   nC_medium_tagOnly_17->SetFrameFillStyle(1000);
   nC_medium_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__311 = new TH1D("Jets_cut_nC_medium__311","",10,-0.5,9.5);
   Jets_cut_nC_medium__311->SetBinContent(1,206.7507);
   Jets_cut_nC_medium__311->SetBinContent(2,221.007);
   Jets_cut_nC_medium__311->SetBinContent(3,110.7987);
   Jets_cut_nC_medium__311->SetBinContent(4,28.51289);
   Jets_cut_nC_medium__311->SetBinContent(5,4.544034);
   Jets_cut_nC_medium__311->SetBinContent(6,0.4211497);
   Jets_cut_nC_medium__311->SetBinContent(7,0.04086396);
   Jets_cut_nC_medium__311->SetBinContent(8,0.003158744);
   Jets_cut_nC_medium__311->SetBinError(1,0.5323388);
   Jets_cut_nC_medium__311->SetBinError(2,0.534209);
   Jets_cut_nC_medium__311->SetBinError(3,0.3748599);
   Jets_cut_nC_medium__311->SetBinError(4,0.1929997);
   Jets_cut_nC_medium__311->SetBinError(5,0.0805093);
   Jets_cut_nC_medium__311->SetBinError(6,0.0258552);
   Jets_cut_nC_medium__311->SetBinError(7,0.008373364);
   Jets_cut_nC_medium__311->SetBinError(8,0.003158744);
   Jets_cut_nC_medium__311->SetEntries(499616);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__311->SetLineColor(ci);
   Jets_cut_nC_medium__311->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__311->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__311->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__311->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__311->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__311->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__311->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__311->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__311->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__311->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__311->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__311->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__311->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__311->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__311->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_tagOnly_17->Modified();
   nC_medium_tagOnly_17->cd();
   nC_medium_tagOnly_17->SetSelected(nC_medium_tagOnly_17);
}
