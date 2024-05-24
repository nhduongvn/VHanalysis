#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZJets_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: nJet_ZJets_tagFirst_2b1c_17/nJet_ZJets_tagFirst_2b1c_17
//=========  (Fri May 24 12:34:11 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZJets_tagFirst_2b1c_17 = new TCanvas("nJet_ZJets_tagFirst_2b1c_17", "nJet_ZJets_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZJets_tagFirst_2b1c_17->SetHighLightColor(2);
   nJet_ZJets_tagFirst_2b1c_17->Range(-3.3,-2033301,15.36667,1.829971e+07);
   nJet_ZJets_tagFirst_2b1c_17->SetFillColor(0);
   nJet_ZJets_tagFirst_2b1c_17->SetFillStyle(4000);
   nJet_ZJets_tagFirst_2b1c_17->SetBorderMode(0);
   nJet_ZJets_tagFirst_2b1c_17->SetBorderSize(2);
   nJet_ZJets_tagFirst_2b1c_17->SetLeftMargin(0.15);
   nJet_ZJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   nJet_ZJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   nJet_ZJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   nJet_ZJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__6674 = new TH1D("Jets_cut_nJet__6674","",14,-0.5,13.5);
   Jets_cut_nJet__6674->SetBinContent(1,2197883);
   Jets_cut_nJet__6674->SetBinContent(2,7118004);
   Jets_cut_nJet__6674->SetBinContent(3,1.549182e+07);
   Jets_cut_nJet__6674->SetBinContent(4,8038082);
   Jets_cut_nJet__6674->SetBinContent(5,2310440);
   Jets_cut_nJet__6674->SetBinContent(6,582021.3);
   Jets_cut_nJet__6674->SetBinContent(7,134157.4);
   Jets_cut_nJet__6674->SetBinContent(8,27272.71);
   Jets_cut_nJet__6674->SetBinContent(9,5290.676);
   Jets_cut_nJet__6674->SetBinContent(10,987.6529);
   Jets_cut_nJet__6674->SetBinContent(11,174.4789);
   Jets_cut_nJet__6674->SetBinContent(12,32.07985);
   Jets_cut_nJet__6674->SetBinContent(13,3.85597);
   Jets_cut_nJet__6674->SetBinContent(14,0.6431957);
   Jets_cut_nJet__6674->SetBinError(1,2507.81);
   Jets_cut_nJet__6674->SetBinError(2,4450.578);
   Jets_cut_nJet__6674->SetBinError(3,6415.536);
   Jets_cut_nJet__6674->SetBinError(4,4035.198);
   Jets_cut_nJet__6674->SetBinError(5,1677.904);
   Jets_cut_nJet__6674->SetBinError(6,604.1481);
   Jets_cut_nJet__6674->SetBinError(7,209.2684);
   Jets_cut_nJet__6674->SetBinError(8,74.04715);
   Jets_cut_nJet__6674->SetBinError(9,27.83955);
   Jets_cut_nJet__6674->SetBinError(10,11.75568);
   Jets_cut_nJet__6674->SetBinError(11,4.536254);
   Jets_cut_nJet__6674->SetBinError(12,2.031694);
   Jets_cut_nJet__6674->SetBinError(13,0.6966527);
   Jets_cut_nJet__6674->SetBinError(14,0.2774771);
   Jets_cut_nJet__6674->SetEntries(4.56354e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__6674->SetLineColor(ci);
   Jets_cut_nJet__6674->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__6674->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__6674->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__6674->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6674->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__6674->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__6674->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__6674->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__6674->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__6674->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__6674->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__6674->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__6674->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6674->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__6674->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZJets_tagFirst_2b1c_17->Modified();
   nJet_ZJets_tagFirst_2b1c_17->cd();
   nJet_ZJets_tagFirst_2b1c_17->SetSelected(nJet_ZJets_tagFirst_2b1c_17);
}
