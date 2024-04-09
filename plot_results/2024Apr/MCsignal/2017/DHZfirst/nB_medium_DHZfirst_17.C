#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_DHZfirst_17()
{
//=========Macro generated from canvas: nB_medium_DHZfirst_17/nB_medium_DHZfirst_17
//=========  (Mon Apr  8 11:27:55 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_DHZfirst_17 = new TCanvas("nB_medium_DHZfirst_17", "nB_medium_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_DHZfirst_17->SetHighLightColor(2);
   nB_medium_DHZfirst_17->Range(-2.5,-55.15328,10.83333,496.3795);
   nB_medium_DHZfirst_17->SetFillColor(0);
   nB_medium_DHZfirst_17->SetFillStyle(4000);
   nB_medium_DHZfirst_17->SetBorderMode(0);
   nB_medium_DHZfirst_17->SetBorderSize(2);
   nB_medium_DHZfirst_17->SetLeftMargin(0.15);
   nB_medium_DHZfirst_17->SetFrameFillStyle(1000);
   nB_medium_DHZfirst_17->SetFrameBorderMode(0);
   nB_medium_DHZfirst_17->SetFrameFillStyle(1000);
   nB_medium_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__386 = new TH1D("Jets_cut_nB_medium__386","",10,-0.5,9.5);
   Jets_cut_nB_medium__386->SetBinContent(1,420.2154);
   Jets_cut_nB_medium__386->SetBinContent(2,124.6986);
   Jets_cut_nB_medium__386->SetBinContent(3,24.16568);
   Jets_cut_nB_medium__386->SetBinContent(4,2.794261);
   Jets_cut_nB_medium__386->SetBinContent(5,0.1901804);
   Jets_cut_nB_medium__386->SetBinContent(6,0.01438543);
   Jets_cut_nB_medium__386->SetBinError(1,0.7479774);
   Jets_cut_nB_medium__386->SetBinError(2,0.3990713);
   Jets_cut_nB_medium__386->SetBinError(3,0.1762212);
   Jets_cut_nB_medium__386->SetBinError(4,0.06027544);
   Jets_cut_nB_medium__386->SetBinError(5,0.01723854);
   Jets_cut_nB_medium__386->SetBinError(6,0.007125728);
   Jets_cut_nB_medium__386->SetEntries(499616);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__386->SetLineColor(ci);
   Jets_cut_nB_medium__386->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__386->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__386->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__386->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__386->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__386->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__386->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__386->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__386->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__386->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__386->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__386->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__386->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__386->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__386->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_DHZfirst_17->Modified();
   nB_medium_DHZfirst_17->cd();
   nB_medium_DHZfirst_17->SetSelected(nB_medium_DHZfirst_17);
}
