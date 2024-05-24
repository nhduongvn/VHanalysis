#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WW_tagFirst_18()
{
//=========Macro generated from canvas: nC_medium_WW_tagFirst_18/nC_medium_WW_tagFirst_18
//=========  (Fri May 24 12:43:15 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WW_tagFirst_18 = new TCanvas("nC_medium_WW_tagFirst_18", "nC_medium_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WW_tagFirst_18->SetHighLightColor(2);
   nC_medium_WW_tagFirst_18->Range(-2.5,-725430.1,10.83333,6528871);
   nC_medium_WW_tagFirst_18->SetFillColor(0);
   nC_medium_WW_tagFirst_18->SetFillStyle(4000);
   nC_medium_WW_tagFirst_18->SetBorderMode(0);
   nC_medium_WW_tagFirst_18->SetBorderSize(2);
   nC_medium_WW_tagFirst_18->SetLeftMargin(0.15);
   nC_medium_WW_tagFirst_18->SetFrameFillStyle(1000);
   nC_medium_WW_tagFirst_18->SetFrameBorderMode(0);
   nC_medium_WW_tagFirst_18->SetFrameFillStyle(1000);
   nC_medium_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__4494 = new TH1D("Jets_cut_nC_medium__4494","",10,-0.5,9.5);
   Jets_cut_nC_medium__4494->SetBinContent(1,5527086);
   Jets_cut_nC_medium__4494->SetBinContent(2,1529182);
   Jets_cut_nC_medium__4494->SetBinContent(3,311129.3);
   Jets_cut_nC_medium__4494->SetBinContent(4,44481.49);
   Jets_cut_nC_medium__4494->SetBinContent(5,5207.109);
   Jets_cut_nC_medium__4494->SetBinContent(6,389.018);
   Jets_cut_nC_medium__4494->SetBinContent(7,5.634106);
   Jets_cut_nC_medium__4494->SetBinContent(8,4.825554);
   Jets_cut_nC_medium__4494->SetBinError(1,1883.018);
   Jets_cut_nC_medium__4494->SetBinError(2,1042.69);
   Jets_cut_nC_medium__4494->SetBinError(3,520.6366);
   Jets_cut_nC_medium__4494->SetBinError(4,226.1877);
   Jets_cut_nC_medium__4494->SetBinError(5,108.4636);
   Jets_cut_nC_medium__4494->SetBinError(6,35.28712);
   Jets_cut_nC_medium__4494->SetBinError(7,2.865487);
   Jets_cut_nC_medium__4494->SetBinError(8,4.825554);
   Jets_cut_nC_medium__4494->SetEntries(1.5484e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__4494->SetLineColor(ci);
   Jets_cut_nC_medium__4494->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__4494->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__4494->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4494->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4494->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4494->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__4494->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4494->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__4494->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__4494->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__4494->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4494->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__4494->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__4494->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__4494->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WW_tagFirst_18->Modified();
   nC_medium_WW_tagFirst_18->cd();
   nC_medium_WW_tagFirst_18->SetSelected(nC_medium_WW_tagFirst_18);
}
