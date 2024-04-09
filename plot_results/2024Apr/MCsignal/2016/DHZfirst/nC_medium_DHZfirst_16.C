#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_DHZfirst_16()
{
//=========Macro generated from canvas: nC_medium_DHZfirst_16/nC_medium_DHZfirst_16
//=========  (Mon Apr  8 11:27:55 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_DHZfirst_16 = new TCanvas("nC_medium_DHZfirst_16", "nC_medium_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_DHZfirst_16->SetHighLightColor(2);
   nC_medium_DHZfirst_16->Range(-2.5,-67.32897,10.83333,605.9607);
   nC_medium_DHZfirst_16->SetFillColor(0);
   nC_medium_DHZfirst_16->SetFillStyle(4000);
   nC_medium_DHZfirst_16->SetBorderMode(0);
   nC_medium_DHZfirst_16->SetBorderSize(2);
   nC_medium_DHZfirst_16->SetLeftMargin(0.15);
   nC_medium_DHZfirst_16->SetFrameFillStyle(1000);
   nC_medium_DHZfirst_16->SetFrameBorderMode(0);
   nC_medium_DHZfirst_16->SetFrameFillStyle(1000);
   nC_medium_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__388 = new TH1D("Jets_cut_nC_medium__388","",10,-0.5,9.5);
   Jets_cut_nC_medium__388->SetBinContent(1,512.9826);
   Jets_cut_nC_medium__388->SetBinContent(2,364.0591);
   Jets_cut_nC_medium__388->SetBinContent(3,124.659);
   Jets_cut_nC_medium__388->SetBinContent(4,22.27597);
   Jets_cut_nC_medium__388->SetBinContent(5,3.242679);
   Jets_cut_nC_medium__388->SetBinContent(6,0.2919637);
   Jets_cut_nC_medium__388->SetBinContent(7,0.01871635);
   Jets_cut_nC_medium__388->SetBinError(1,2.367538);
   Jets_cut_nC_medium__388->SetBinError(2,1.797069);
   Jets_cut_nC_medium__388->SetBinError(3,0.8765808);
   Jets_cut_nC_medium__388->SetBinError(4,0.2502821);
   Jets_cut_nC_medium__388->SetBinError(5,0.08147191);
   Jets_cut_nC_medium__388->SetBinError(6,0.02625249);
   Jets_cut_nC_medium__388->SetBinError(7,0.006815454);
   Jets_cut_nC_medium__388->SetEntries(249197);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__388->SetLineColor(ci);
   Jets_cut_nC_medium__388->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__388->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__388->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__388->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__388->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__388->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__388->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__388->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__388->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__388->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__388->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__388->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__388->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__388->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__388->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_DHZfirst_16->Modified();
   nC_medium_DHZfirst_16->cd();
   nC_medium_DHZfirst_16->SetSelected(nC_medium_DHZfirst_16);
}
