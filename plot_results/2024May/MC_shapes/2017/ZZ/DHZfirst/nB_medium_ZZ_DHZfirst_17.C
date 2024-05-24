#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZZ_DHZfirst_17()
{
//=========Macro generated from canvas: nB_medium_ZZ_DHZfirst_17/nB_medium_ZZ_DHZfirst_17
//=========  (Fri May 24 12:43:46 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZZ_DHZfirst_17 = new TCanvas("nB_medium_ZZ_DHZfirst_17", "nB_medium_ZZ_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZZ_DHZfirst_17->SetHighLightColor(2);
   nB_medium_ZZ_DHZfirst_17->Range(-2.5,-70197.01,10.83333,631773);
   nB_medium_ZZ_DHZfirst_17->SetFillColor(0);
   nB_medium_ZZ_DHZfirst_17->SetFillStyle(4000);
   nB_medium_ZZ_DHZfirst_17->SetBorderMode(0);
   nB_medium_ZZ_DHZfirst_17->SetBorderSize(2);
   nB_medium_ZZ_DHZfirst_17->SetLeftMargin(0.15);
   nB_medium_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   nB_medium_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   nB_medium_ZZ_DHZfirst_17->SetFrameFillStyle(1000);
   nB_medium_ZZ_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6029 = new TH1D("Jets_cut_nB_medium__6029","",10,-0.5,9.5);
   Jets_cut_nB_medium__6029->SetBinContent(1,534834.3);
   Jets_cut_nB_medium__6029->SetBinContent(2,74193.21);
   Jets_cut_nB_medium__6029->SetBinContent(3,10902.45);
   Jets_cut_nB_medium__6029->SetBinContent(4,884.7185);
   Jets_cut_nB_medium__6029->SetBinContent(5,85.80472);
   Jets_cut_nB_medium__6029->SetBinContent(6,3.192686);
   Jets_cut_nB_medium__6029->SetBinError(1,370.7576);
   Jets_cut_nB_medium__6029->SetBinError(2,139.7892);
   Jets_cut_nB_medium__6029->SetBinError(3,54.74469);
   Jets_cut_nB_medium__6029->SetBinError(4,16.58981);
   Jets_cut_nB_medium__6029->SetBinError(5,5.96573);
   Jets_cut_nB_medium__6029->SetBinError(6,1.53688);
   Jets_cut_nB_medium__6029->SetEntries(2706000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6029->SetLineColor(ci);
   Jets_cut_nB_medium__6029->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6029->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6029->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6029->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6029->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6029->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6029->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6029->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6029->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6029->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6029->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6029->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6029->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6029->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6029->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZZ_DHZfirst_17->Modified();
   nB_medium_ZZ_DHZfirst_17->cd();
   nB_medium_ZZ_DHZfirst_17->SetSelected(nB_medium_ZZ_DHZfirst_17);
}
