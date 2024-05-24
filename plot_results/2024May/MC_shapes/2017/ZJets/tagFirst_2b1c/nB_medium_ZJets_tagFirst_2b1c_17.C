#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZJets_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: nB_medium_ZJets_tagFirst_2b1c_17/nB_medium_ZJets_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:02 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZJets_tagFirst_2b1c_17 = new TCanvas("nB_medium_ZJets_tagFirst_2b1c_17", "nB_medium_ZJets_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZJets_tagFirst_2b1c_17->SetHighLightColor(2);
   nB_medium_ZJets_tagFirst_2b1c_17->Range(-2.5,-3670359,10.83333,3.303323e+07);
   nB_medium_ZJets_tagFirst_2b1c_17->SetFillColor(0);
   nB_medium_ZJets_tagFirst_2b1c_17->SetFillStyle(4000);
   nB_medium_ZJets_tagFirst_2b1c_17->SetBorderMode(0);
   nB_medium_ZJets_tagFirst_2b1c_17->SetBorderSize(2);
   nB_medium_ZJets_tagFirst_2b1c_17->SetLeftMargin(0.15);
   nB_medium_ZJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_ZJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   nB_medium_ZJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   nB_medium_ZJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6794 = new TH1D("Jets_cut_nB_medium__6794","",10,-0.5,9.5);
   Jets_cut_nB_medium__6794->SetBinContent(1,2.796464e+07);
   Jets_cut_nB_medium__6794->SetBinContent(2,6792760);
   Jets_cut_nB_medium__6794->SetBinContent(3,1070118);
   Jets_cut_nB_medium__6794->SetBinContent(4,74308.89);
   Jets_cut_nB_medium__6794->SetBinContent(5,4201.016);
   Jets_cut_nB_medium__6794->SetBinContent(6,133.1499);
   Jets_cut_nB_medium__6794->SetBinContent(7,4.949812);
   Jets_cut_nB_medium__6794->SetBinContent(8,0.5842575);
   Jets_cut_nB_medium__6794->SetBinError(1,8209.596);
   Jets_cut_nB_medium__6794->SetBinError(2,4110.957);
   Jets_cut_nB_medium__6794->SetBinError(3,1526.246);
   Jets_cut_nB_medium__6794->SetBinError(4,371.0358);
   Jets_cut_nB_medium__6794->SetBinError(5,68.26987);
   Jets_cut_nB_medium__6794->SetBinError(6,8.136707);
   Jets_cut_nB_medium__6794->SetBinError(7,1.202889);
   Jets_cut_nB_medium__6794->SetBinError(8,0.4854903);
   Jets_cut_nB_medium__6794->SetEntries(4.56354e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6794->SetLineColor(ci);
   Jets_cut_nB_medium__6794->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6794->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6794->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6794->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6794->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6794->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6794->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6794->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6794->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6794->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6794->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6794->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6794->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6794->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6794->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZJets_tagFirst_2b1c_17->Modified();
   nB_medium_ZJets_tagFirst_2b1c_17->cd();
   nB_medium_ZJets_tagFirst_2b1c_17->SetSelected(nB_medium_ZJets_tagFirst_2b1c_17);
}
