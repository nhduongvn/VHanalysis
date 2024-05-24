#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZHcc_DHZfirst_17()
{
//=========Macro generated from canvas: nC_medium_ZHcc_DHZfirst_17/nC_medium_ZHcc_DHZfirst_17
//=========  (Fri May 24 12:43:46 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZHcc_DHZfirst_17 = new TCanvas("nC_medium_ZHcc_DHZfirst_17", "nC_medium_ZHcc_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZHcc_DHZfirst_17->SetHighLightColor(2);
   nC_medium_ZHcc_DHZfirst_17->Range(-2.5,-32.97352,10.83333,296.7616);
   nC_medium_ZHcc_DHZfirst_17->SetFillColor(0);
   nC_medium_ZHcc_DHZfirst_17->SetFillStyle(4000);
   nC_medium_ZHcc_DHZfirst_17->SetBorderMode(0);
   nC_medium_ZHcc_DHZfirst_17->SetBorderSize(2);
   nC_medium_ZHcc_DHZfirst_17->SetLeftMargin(0.15);
   nC_medium_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   nC_medium_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   nC_medium_ZHcc_DHZfirst_17->SetFrameFillStyle(1000);
   nC_medium_ZHcc_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__6032 = new TH1D("Jets_cut_nC_medium__6032","",10,-0.5,9.5);
   Jets_cut_nC_medium__6032->SetBinContent(1,219.8506);
   Jets_cut_nC_medium__6032->SetBinContent(2,251.2268);
   Jets_cut_nC_medium__6032->SetBinContent(3,134.7009);
   Jets_cut_nC_medium__6032->SetBinContent(4,37.708);
   Jets_cut_nC_medium__6032->SetBinContent(5,6.544353);
   Jets_cut_nC_medium__6032->SetBinContent(6,0.6469758);
   Jets_cut_nC_medium__6032->SetBinContent(7,0.06068672);
   Jets_cut_nC_medium__6032->SetBinContent(8,0.004284707);
   Jets_cut_nC_medium__6032->SetBinError(1,0.5344986);
   Jets_cut_nC_medium__6032->SetBinError(2,0.5390927);
   Jets_cut_nC_medium__6032->SetBinError(3,0.3805373);
   Jets_cut_nC_medium__6032->SetBinError(4,0.1974872);
   Jets_cut_nC_medium__6032->SetBinError(5,0.08301219);
   Jets_cut_nC_medium__6032->SetBinError(6,0.0268577);
   Jets_cut_nC_medium__6032->SetBinError(7,0.008674986);
   Jets_cut_nC_medium__6032->SetBinError(8,0.003196854);
   Jets_cut_nC_medium__6032->SetEntries(995710);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__6032->SetLineColor(ci);
   Jets_cut_nC_medium__6032->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__6032->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__6032->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6032->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6032->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6032->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__6032->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6032->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__6032->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__6032->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__6032->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6032->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6032->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6032->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6032->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZHcc_DHZfirst_17->Modified();
   nC_medium_ZHcc_DHZfirst_17->cd();
   nC_medium_ZHcc_DHZfirst_17->SetSelected(nC_medium_ZHcc_DHZfirst_17);
}
