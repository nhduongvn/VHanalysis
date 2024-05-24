#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WZ_DHZfirst_16()
{
//=========Macro generated from canvas: nC_medium_WZ_DHZfirst_16/nC_medium_WZ_DHZfirst_16
//=========  (Fri May 24 12:43:47 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WZ_DHZfirst_16 = new TCanvas("nC_medium_WZ_DHZfirst_16", "nC_medium_WZ_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WZ_DHZfirst_16->SetHighLightColor(2);
   nC_medium_WZ_DHZfirst_16->Range(-2.5,-478739.9,10.83333,4308659);
   nC_medium_WZ_DHZfirst_16->SetFillColor(0);
   nC_medium_WZ_DHZfirst_16->SetFillStyle(4000);
   nC_medium_WZ_DHZfirst_16->SetBorderMode(0);
   nC_medium_WZ_DHZfirst_16->SetBorderSize(2);
   nC_medium_WZ_DHZfirst_16->SetLeftMargin(0.15);
   nC_medium_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   nC_medium_WZ_DHZfirst_16->SetFrameBorderMode(0);
   nC_medium_WZ_DHZfirst_16->SetFrameFillStyle(1000);
   nC_medium_WZ_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__6055 = new TH1D("Jets_cut_nC_medium__6055","",10,-0.5,9.5);
   Jets_cut_nC_medium__6055->SetBinContent(1,3647542);
   Jets_cut_nC_medium__6055->SetBinContent(2,810879);
   Jets_cut_nC_medium__6055->SetBinContent(3,89984);
   Jets_cut_nC_medium__6055->SetBinContent(4,6959.901);
   Jets_cut_nC_medium__6055->SetBinContent(5,626.9276);
   Jets_cut_nC_medium__6055->SetBinContent(6,41.01442);
   Jets_cut_nC_medium__6055->SetBinContent(7,1.720114);
   Jets_cut_nC_medium__6055->SetBinError(1,1340.256);
   Jets_cut_nC_medium__6055->SetBinError(2,618.7532);
   Jets_cut_nC_medium__6055->SetBinError(3,178.6583);
   Jets_cut_nC_medium__6055->SetBinError(4,31.27359);
   Jets_cut_nC_medium__6055->SetBinError(5,7.730482);
   Jets_cut_nC_medium__6055->SetBinError(6,2.08337);
   Jets_cut_nC_medium__6055->SetBinError(7,0.4152281);
   Jets_cut_nC_medium__6055->SetEntries(1.5518e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__6055->SetLineColor(ci);
   Jets_cut_nC_medium__6055->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__6055->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__6055->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6055->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6055->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6055->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__6055->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6055->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__6055->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__6055->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__6055->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6055->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6055->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6055->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6055->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WZ_DHZfirst_16->Modified();
   nC_medium_WZ_DHZfirst_16->cd();
   nC_medium_WZ_DHZfirst_16->SetSelected(nC_medium_WZ_DHZfirst_16);
}
