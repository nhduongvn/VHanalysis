#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_DHZfirst_18()
{
//=========Macro generated from canvas: nC_medium_DHZfirst_18/nC_medium_DHZfirst_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_DHZfirst_18 = new TCanvas("nC_medium_DHZfirst_18", "nC_medium_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_DHZfirst_18->SetHighLightColor(2);
   nC_medium_DHZfirst_18->Range(-2.5,-2.154346e+11,10.83333,1.938912e+12);
   nC_medium_DHZfirst_18->SetFillColor(0);
   nC_medium_DHZfirst_18->SetFillStyle(4000);
   nC_medium_DHZfirst_18->SetBorderMode(0);
   nC_medium_DHZfirst_18->SetBorderSize(2);
   nC_medium_DHZfirst_18->SetLeftMargin(0.15);
   nC_medium_DHZfirst_18->SetFrameFillStyle(1000);
   nC_medium_DHZfirst_18->SetFrameBorderMode(0);
   nC_medium_DHZfirst_18->SetFrameFillStyle(1000);
   nC_medium_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__130 = new TH1D("Jets_cut_nC_medium__130","",10,-0.5,9.5);
   Jets_cut_nC_medium__130->SetBinContent(1,1.641407e+12);
   Jets_cut_nC_medium__130->SetBinContent(2,2.120928e+11);
   Jets_cut_nC_medium__130->SetBinContent(3,1.462383e+10);
   Jets_cut_nC_medium__130->SetBinContent(4,1.07167e+08);
   Jets_cut_nC_medium__130->SetBinContent(5,689694.1);
   Jets_cut_nC_medium__130->SetBinError(1,1.998531e+09);
   Jets_cut_nC_medium__130->SetBinError(2,7.898276e+08);
   Jets_cut_nC_medium__130->SetBinError(3,2.280566e+08);
   Jets_cut_nC_medium__130->SetBinError(4,1.773094e+07);
   Jets_cut_nC_medium__130->SetBinError(5,689694.1);
   Jets_cut_nC_medium__130->SetEntries(1009181);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__130->SetLineColor(ci);
   Jets_cut_nC_medium__130->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__130->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__130->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__130->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__130->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__130->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__130->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__130->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__130->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__130->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__130->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__130->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__130->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__130->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__130->Draw("hist");
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
