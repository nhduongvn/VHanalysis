#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZJets_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: nC_medium_ZJets_tagFirst_2b1c_18/nC_medium_ZJets_tagFirst_2b1c_18
//=========  (Fri May 24 12:44:03 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZJets_tagFirst_2b1c_18 = new TCanvas("nC_medium_ZJets_tagFirst_2b1c_18", "nC_medium_ZJets_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZJets_tagFirst_2b1c_18->SetHighLightColor(2);
   nC_medium_ZJets_tagFirst_2b1c_18->Range(-2.5,-4101746,10.83333,3.691571e+07);
   nC_medium_ZJets_tagFirst_2b1c_18->SetFillColor(0);
   nC_medium_ZJets_tagFirst_2b1c_18->SetFillStyle(4000);
   nC_medium_ZJets_tagFirst_2b1c_18->SetBorderMode(0);
   nC_medium_ZJets_tagFirst_2b1c_18->SetBorderSize(2);
   nC_medium_ZJets_tagFirst_2b1c_18->SetLeftMargin(0.15);
   nC_medium_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   nC_medium_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   nC_medium_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__6825 = new TH1D("Jets_cut_nC_medium__6825","",10,-0.5,9.5);
   Jets_cut_nC_medium__6825->SetBinContent(1,3.12514e+07);
   Jets_cut_nC_medium__6825->SetBinContent(2,2.446166e+07);
   Jets_cut_nC_medium__6825->SetBinContent(3,7669333);
   Jets_cut_nC_medium__6825->SetBinContent(4,1209741);
   Jets_cut_nC_medium__6825->SetBinContent(5,122637.3);
   Jets_cut_nC_medium__6825->SetBinContent(6,10465.44);
   Jets_cut_nC_medium__6825->SetBinContent(7,756.0486);
   Jets_cut_nC_medium__6825->SetBinContent(8,52.86016);
   Jets_cut_nC_medium__6825->SetBinContent(9,3.462629);
   Jets_cut_nC_medium__6825->SetBinContent(10,0.1622819);
   Jets_cut_nC_medium__6825->SetBinError(1,10852.98);
   Jets_cut_nC_medium__6825->SetBinError(2,10174.11);
   Jets_cut_nC_medium__6825->SetBinError(3,5893.355);
   Jets_cut_nC_medium__6825->SetBinError(4,2409.833);
   Jets_cut_nC_medium__6825->SetBinError(5,712.5117);
   Jets_cut_nC_medium__6825->SetBinError(6,167.4048);
   Jets_cut_nC_medium__6825->SetBinError(7,30.25175);
   Jets_cut_nC_medium__6825->SetBinError(8,6.497879);
   Jets_cut_nC_medium__6825->SetBinError(9,1.48073);
   Jets_cut_nC_medium__6825->SetBinError(10,0.115535);
   Jets_cut_nC_medium__6825->SetEntries(5.064426e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__6825->SetLineColor(ci);
   Jets_cut_nC_medium__6825->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__6825->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__6825->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6825->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6825->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6825->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__6825->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6825->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__6825->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__6825->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__6825->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6825->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__6825->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__6825->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__6825->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZJets_tagFirst_2b1c_18->Modified();
   nC_medium_ZJets_tagFirst_2b1c_18->cd();
   nC_medium_ZJets_tagFirst_2b1c_18->SetSelected(nC_medium_ZJets_tagFirst_2b1c_18);
}
