#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_DHZfirst_18()
{
//=========Macro generated from canvas: nC_medium_DHZfirst_18/nC_medium_DHZfirst_18
//=========  (Thu Apr 11 14:04:11 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_DHZfirst_18 = new TCanvas("nC_medium_DHZfirst_18", "nC_medium_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_DHZfirst_18->SetHighLightColor(2);
   nC_medium_DHZfirst_18->Range(-2.5,-2.240114e+11,10.83333,2.016102e+12);
   nC_medium_DHZfirst_18->SetFillColor(0);
   nC_medium_DHZfirst_18->SetFillStyle(4000);
   nC_medium_DHZfirst_18->SetBorderMode(0);
   nC_medium_DHZfirst_18->SetBorderSize(2);
   nC_medium_DHZfirst_18->SetLeftMargin(0.15);
   nC_medium_DHZfirst_18->SetFrameFillStyle(1000);
   nC_medium_DHZfirst_18->SetFrameBorderMode(0);
   nC_medium_DHZfirst_18->SetFrameFillStyle(1000);
   nC_medium_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__178 = new TH1D("Jets_cut_nC_medium__178","",10,-0.5,9.5);
   Jets_cut_nC_medium__178->SetBinContent(1,1.706753e+12);
   Jets_cut_nC_medium__178->SetBinContent(2,2.465832e+11);
   Jets_cut_nC_medium__178->SetBinContent(3,2.114057e+10);
   Jets_cut_nC_medium__178->SetBinContent(4,6.631008e+08);
   Jets_cut_nC_medium__178->SetBinContent(5,3.272486e+07);
   Jets_cut_nC_medium__178->SetBinContent(6,3164256);
   Jets_cut_nC_medium__178->SetBinContent(7,122134.2);
   Jets_cut_nC_medium__178->SetBinContent(8,1517.51);
   Jets_cut_nC_medium__178->SetBinError(1,1.999846e+09);
   Jets_cut_nC_medium__178->SetBinError(2,7.920139e+08);
   Jets_cut_nC_medium__178->SetBinError(3,2.299155e+08);
   Jets_cut_nC_medium__178->SetBinError(4,1.994132e+07);
   Jets_cut_nC_medium__178->SetBinError(5,2326889);
   Jets_cut_nC_medium__178->SetBinError(6,906862.7);
   Jets_cut_nC_medium__178->SetBinError(7,76961.9);
   Jets_cut_nC_medium__178->SetBinError(8,1517.51);
   Jets_cut_nC_medium__178->SetEntries(3876893);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__178->SetLineColor(ci);
   Jets_cut_nC_medium__178->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__178->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__178->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__178->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__178->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__178->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__178->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__178->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__178->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__178->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__178->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__178->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__178->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__178->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__178->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_DHZfirst_18->Modified();
   nC_medium_DHZfirst_18->cd();
   nC_medium_DHZfirst_18->SetSelected(nC_medium_DHZfirst_18);
}
