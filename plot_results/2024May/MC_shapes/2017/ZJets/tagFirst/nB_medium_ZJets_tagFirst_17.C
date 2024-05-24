#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZJets_tagFirst_17()
{
//=========Macro generated from canvas: nB_medium_ZJets_tagFirst_17/nB_medium_ZJets_tagFirst_17
//=========  (Fri May 24 12:43:14 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZJets_tagFirst_17 = new TCanvas("nB_medium_ZJets_tagFirst_17", "nB_medium_ZJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZJets_tagFirst_17->SetHighLightColor(2);
   nB_medium_ZJets_tagFirst_17->Range(-2.5,-3670359,10.83333,3.303323e+07);
   nB_medium_ZJets_tagFirst_17->SetFillColor(0);
   nB_medium_ZJets_tagFirst_17->SetFillStyle(4000);
   nB_medium_ZJets_tagFirst_17->SetBorderMode(0);
   nB_medium_ZJets_tagFirst_17->SetBorderSize(2);
   nB_medium_ZJets_tagFirst_17->SetLeftMargin(0.15);
   nB_medium_ZJets_tagFirst_17->SetFrameFillStyle(1000);
   nB_medium_ZJets_tagFirst_17->SetFrameBorderMode(0);
   nB_medium_ZJets_tagFirst_17->SetFrameFillStyle(1000);
   nB_medium_ZJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__4454 = new TH1D("Jets_cut_nB_medium__4454","",10,-0.5,9.5);
   Jets_cut_nB_medium__4454->SetBinContent(1,2.796464e+07);
   Jets_cut_nB_medium__4454->SetBinContent(2,6792760);
   Jets_cut_nB_medium__4454->SetBinContent(3,1070118);
   Jets_cut_nB_medium__4454->SetBinContent(4,74308.89);
   Jets_cut_nB_medium__4454->SetBinContent(5,4201.016);
   Jets_cut_nB_medium__4454->SetBinContent(6,133.1499);
   Jets_cut_nB_medium__4454->SetBinContent(7,4.949812);
   Jets_cut_nB_medium__4454->SetBinContent(8,0.5842575);
   Jets_cut_nB_medium__4454->SetBinError(1,8209.596);
   Jets_cut_nB_medium__4454->SetBinError(2,4110.957);
   Jets_cut_nB_medium__4454->SetBinError(3,1526.246);
   Jets_cut_nB_medium__4454->SetBinError(4,371.0358);
   Jets_cut_nB_medium__4454->SetBinError(5,68.26987);
   Jets_cut_nB_medium__4454->SetBinError(6,8.136707);
   Jets_cut_nB_medium__4454->SetBinError(7,1.202889);
   Jets_cut_nB_medium__4454->SetBinError(8,0.4854903);
   Jets_cut_nB_medium__4454->SetEntries(4.56354e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__4454->SetLineColor(ci);
   Jets_cut_nB_medium__4454->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__4454->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__4454->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4454->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4454->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4454->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__4454->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4454->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__4454->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__4454->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__4454->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4454->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__4454->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__4454->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__4454->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZJets_tagFirst_17->Modified();
   nB_medium_ZJets_tagFirst_17->cd();
   nB_medium_ZJets_tagFirst_17->SetSelected(nB_medium_ZJets_tagFirst_17);
}
