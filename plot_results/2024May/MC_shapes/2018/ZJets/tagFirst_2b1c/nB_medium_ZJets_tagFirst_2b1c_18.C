#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nB_medium_ZJets_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: nB_medium_ZJets_tagFirst_2b1c_18/nB_medium_ZJets_tagFirst_2b1c_18
//=========  (Fri May 24 12:44:02 2024) by ROOT version 6.28/10
   TCanvas *nB_medium_ZJets_tagFirst_2b1c_18 = new TCanvas("nB_medium_ZJets_tagFirst_2b1c_18", "nB_medium_ZJets_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nB_medium_ZJets_tagFirst_2b1c_18->SetHighLightColor(2);
   nB_medium_ZJets_tagFirst_2b1c_18->Range(-2.5,-6640604,10.83333,5.976543e+07);
   nB_medium_ZJets_tagFirst_2b1c_18->SetFillColor(0);
   nB_medium_ZJets_tagFirst_2b1c_18->SetFillStyle(4000);
   nB_medium_ZJets_tagFirst_2b1c_18->SetBorderMode(0);
   nB_medium_ZJets_tagFirst_2b1c_18->SetBorderSize(2);
   nB_medium_ZJets_tagFirst_2b1c_18->SetLeftMargin(0.15);
   nB_medium_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   nB_medium_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   nB_medium_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nB_medium__6795 = new TH1D("Jets_cut_nB_medium__6795","",10,-0.5,9.5);
   Jets_cut_nB_medium__6795->SetBinContent(1,5.059508e+07);
   Jets_cut_nB_medium__6795->SetBinContent(2,1.19545e+07);
   Jets_cut_nB_medium__6795->SetBinContent(3,2020240);
   Jets_cut_nB_medium__6795->SetBinContent(4,147159.2);
   Jets_cut_nB_medium__6795->SetBinContent(5,8769.533);
   Jets_cut_nB_medium__6795->SetBinContent(6,286.2448);
   Jets_cut_nB_medium__6795->SetBinContent(7,14.20314);
   Jets_cut_nB_medium__6795->SetBinContent(8,0.1059464);
   Jets_cut_nB_medium__6795->SetBinError(1,14396.84);
   Jets_cut_nB_medium__6795->SetBinError(2,6900.671);
   Jets_cut_nB_medium__6795->SetBinError(3,2644.813);
   Jets_cut_nB_medium__6795->SetBinError(4,687.3346);
   Jets_cut_nB_medium__6795->SetBinError(5,138.2724);
   Jets_cut_nB_medium__6795->SetBinError(6,16.17644);
   Jets_cut_nB_medium__6795->SetBinError(7,3.448789);
   Jets_cut_nB_medium__6795->SetBinError(8,0.1059464);
   Jets_cut_nB_medium__6795->SetEntries(5.064426e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nB_medium__6795->SetLineColor(ci);
   Jets_cut_nB_medium__6795->GetXaxis()->SetTitle("b-jet multiplicity (medium WP)");
   Jets_cut_nB_medium__6795->GetXaxis()->SetRange(1,10);
   Jets_cut_nB_medium__6795->GetXaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6795->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6795->GetXaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6795->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nB_medium__6795->GetYaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6795->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nB_medium__6795->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nB_medium__6795->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nB_medium__6795->GetYaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6795->GetZaxis()->SetLabelFont(42);
   Jets_cut_nB_medium__6795->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nB_medium__6795->GetZaxis()->SetTitleFont(42);
   Jets_cut_nB_medium__6795->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nB_medium_ZJets_tagFirst_2b1c_18->Modified();
   nB_medium_ZJets_tagFirst_2b1c_18->cd();
   nB_medium_ZJets_tagFirst_2b1c_18->SetSelected(nB_medium_ZJets_tagFirst_2b1c_18);
}
