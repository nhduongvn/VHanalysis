#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_WJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: nC_medium_WJets_DHZfirst_2b1c_18/nC_medium_WJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:37 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_WJets_DHZfirst_2b1c_18 = new TCanvas("nC_medium_WJets_DHZfirst_2b1c_18", "nC_medium_WJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_WJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   nC_medium_WJets_DHZfirst_2b1c_18->Range(-2.5,-1.852284e+07,10.83333,1.667056e+08);
   nC_medium_WJets_DHZfirst_2b1c_18->SetFillColor(0);
   nC_medium_WJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   nC_medium_WJets_DHZfirst_2b1c_18->SetBorderMode(0);
   nC_medium_WJets_DHZfirst_2b1c_18->SetBorderSize(2);
   nC_medium_WJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   nC_medium_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   nC_medium_WJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_WJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__8382 = new TH1D("Jets_cut_nC_medium__8382","",10,-0.5,9.5);
   Jets_cut_nC_medium__8382->SetBinContent(1,1.411264e+08);
   Jets_cut_nC_medium__8382->SetBinContent(2,9.540144e+07);
   Jets_cut_nC_medium__8382->SetBinContent(3,2.674288e+07);
   Jets_cut_nC_medium__8382->SetBinContent(4,3876556);
   Jets_cut_nC_medium__8382->SetBinContent(5,369458.1);
   Jets_cut_nC_medium__8382->SetBinContent(6,27371.21);
   Jets_cut_nC_medium__8382->SetBinContent(7,1939.513);
   Jets_cut_nC_medium__8382->SetBinContent(8,124.1873);
   Jets_cut_nC_medium__8382->SetBinContent(9,16.55925);
   Jets_cut_nC_medium__8382->SetBinContent(10,0.012999);
   Jets_cut_nC_medium__8382->SetBinError(1,29308.48);
   Jets_cut_nC_medium__8382->SetBinError(2,28098.7);
   Jets_cut_nC_medium__8382->SetBinError(3,17104.08);
   Jets_cut_nC_medium__8382->SetBinError(4,7119.412);
   Jets_cut_nC_medium__8382->SetBinError(5,2136.427);
   Jets_cut_nC_medium__8382->SetBinError(6,532.6775);
   Jets_cut_nC_medium__8382->SetBinError(7,115.2141);
   Jets_cut_nC_medium__8382->SetBinError(8,15.68797);
   Jets_cut_nC_medium__8382->SetBinError(9,7.064711);
   Jets_cut_nC_medium__8382->SetBinError(10,0.01185199);
   Jets_cut_nC_medium__8382->SetEntries(1.903233e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__8382->SetLineColor(ci);
   Jets_cut_nC_medium__8382->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__8382->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__8382->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__8382->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__8382->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__8382->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__8382->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__8382->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__8382->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__8382->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__8382->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__8382->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__8382->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__8382->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__8382->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_WJets_DHZfirst_2b1c_18->Modified();
   nC_medium_WJets_DHZfirst_2b1c_18->cd();
   nC_medium_WJets_DHZfirst_2b1c_18->SetSelected(nC_medium_WJets_DHZfirst_2b1c_18);
}
