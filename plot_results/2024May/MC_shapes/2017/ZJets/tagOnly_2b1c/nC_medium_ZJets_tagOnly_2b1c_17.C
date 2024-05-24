#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nC_medium_ZJets_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: nC_medium_ZJets_tagOnly_2b1c_17/nC_medium_ZJets_tagOnly_2b1c_17
//=========  (Fri May 24 12:44:20 2024) by ROOT version 6.28/10
   TCanvas *nC_medium_ZJets_tagOnly_2b1c_17 = new TCanvas("nC_medium_ZJets_tagOnly_2b1c_17", "nC_medium_ZJets_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nC_medium_ZJets_tagOnly_2b1c_17->SetHighLightColor(2);
   nC_medium_ZJets_tagOnly_2b1c_17->Range(-2.5,-2453267,10.83333,2.20794e+07);
   nC_medium_ZJets_tagOnly_2b1c_17->SetFillColor(0);
   nC_medium_ZJets_tagOnly_2b1c_17->SetFillStyle(4000);
   nC_medium_ZJets_tagOnly_2b1c_17->SetBorderMode(0);
   nC_medium_ZJets_tagOnly_2b1c_17->SetBorderSize(2);
   nC_medium_ZJets_tagOnly_2b1c_17->SetLeftMargin(0.15);
   nC_medium_ZJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nC_medium_ZJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   nC_medium_ZJets_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   nC_medium_ZJets_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nC_medium__7604 = new TH1D("Jets_cut_nC_medium__7604","",10,-0.5,9.5);
   Jets_cut_nC_medium__7604->SetBinContent(1,1.869155e+07);
   Jets_cut_nC_medium__7604->SetBinContent(2,1.309983e+07);
   Jets_cut_nC_medium__7604->SetBinContent(3,3589656);
   Jets_cut_nC_medium__7604->SetBinContent(4,478206.9);
   Jets_cut_nC_medium__7604->SetBinContent(5,43247.86);
   Jets_cut_nC_medium__7604->SetBinContent(6,3401.207);
   Jets_cut_nC_medium__7604->SetBinContent(7,256.6869);
   Jets_cut_nC_medium__7604->SetBinContent(8,14.92758);
   Jets_cut_nC_medium__7604->SetBinContent(9,0.7647229);
   Jets_cut_nC_medium__7604->SetBinError(1,6846.093);
   Jets_cut_nC_medium__7604->SetBinError(2,5613.428);
   Jets_cut_nC_medium__7604->SetBinError(3,2763.762);
   Jets_cut_nC_medium__7604->SetBinError(4,846.0075);
   Jets_cut_nC_medium__7604->SetBinError(5,185.06);
   Jets_cut_nC_medium__7604->SetBinError(6,35.86709);
   Jets_cut_nC_medium__7604->SetBinError(7,6.870649);
   Jets_cut_nC_medium__7604->SetBinError(8,1.395623);
   Jets_cut_nC_medium__7604->SetBinError(9,0.2392496);
   Jets_cut_nC_medium__7604->SetEntries(4.56354e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nC_medium__7604->SetLineColor(ci);
   Jets_cut_nC_medium__7604->GetXaxis()->SetTitle("c-jet multiplicity (medium WP)");
   Jets_cut_nC_medium__7604->GetXaxis()->SetRange(1,10);
   Jets_cut_nC_medium__7604->GetXaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7604->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7604->GetXaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7604->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nC_medium__7604->GetYaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7604->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nC_medium__7604->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nC_medium__7604->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nC_medium__7604->GetYaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7604->GetZaxis()->SetLabelFont(42);
   Jets_cut_nC_medium__7604->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nC_medium__7604->GetZaxis()->SetTitleFont(42);
   Jets_cut_nC_medium__7604->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nC_medium_ZJets_tagOnly_2b1c_17->Modified();
   nC_medium_ZJets_tagOnly_2b1c_17->cd();
   nC_medium_ZJets_tagOnly_2b1c_17->SetSelected(nC_medium_ZJets_tagOnly_2b1c_17);
}
