#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium()
{
//=========Macro generated from canvas: nC_medium/nC_medium
//=========  (Fri Mar 29 15:50:01 2024) by ROOT version 6.28/10
   TCanvas *nC_medium = new TCanvas("nC_medium", "nC_medium",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium->SetHighLightColor(2);
   nC_medium->Range(-2.5,-49.97747,10.83333,449.7972);
   nC_medium->SetFillColor(0);
   nC_medium->SetFillStyle(4000);
   nC_medium->SetBorderMode(0);
   nC_medium->SetBorderSize(2);
   nC_medium->SetLeftMargin(0.15);
   nC_medium->SetFrameFillStyle(1000);
   nC_medium->SetFrameBorderMode(0);
   nC_medium->SetFrameFillStyle(1000);
   nC_medium->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__30 = new TH1D("Jets_cut_nC_medium__30","",10,-0.5,9.5);
   Jets_cut_nC_medium__30->SetBinContent(1,335.1423);
   Jets_cut_nC_medium__30->SetBinContent(2,380.7807);
   Jets_cut_nC_medium__30->SetBinContent(3,212.1663);
   Jets_cut_nC_medium__30->SetBinContent(4,61.8564);
   Jets_cut_nC_medium__30->SetBinContent(5,11.11261);
   Jets_cut_nC_medium__30->SetBinContent(6,1.225573);
   Jets_cut_nC_medium__30->SetBinContent(7,0.1359386);
   Jets_cut_nC_medium__30->SetBinContent(8,0.02956283);
   Jets_cut_nC_medium__30->SetBinError(1,0.9498314);
   Jets_cut_nC_medium__30->SetBinError(2,0.9919647);
   Jets_cut_nC_medium__30->SetBinError(3,0.7925942);
   Jets_cut_nC_medium__30->SetBinError(4,0.4642529);
   Jets_cut_nC_medium__30->SetBinError(5,0.2367077);
   Jets_cut_nC_medium__30->SetBinError(6,0.08358384);
   Jets_cut_nC_medium__30->SetBinError(7,0.03142549);
   Jets_cut_nC_medium__30->SetBinError(8,0.01594786);
   Jets_cut_nC_medium__30->SetEntries(499433);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__30->SetLineColor(ci);
   Jets_cut_nC_medium__30->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__30->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__30->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__30->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__30->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__30->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__30->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__30->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__30->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__30->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__30->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__30->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__30->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__30->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__30->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium->Modified();
   nC_medium->cd();
   nC_medium->SetSelected(nC_medium);
}
