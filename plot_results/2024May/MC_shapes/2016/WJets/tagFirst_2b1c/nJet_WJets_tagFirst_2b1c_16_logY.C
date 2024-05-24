#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WJets_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: nJet_WJets_tagFirst_2b1c_16/nJet_WJets_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:00 2024) by ROOT version 6.28/10
   TCanvas *nJet_WJets_tagFirst_2b1c_16 = new TCanvas("nJet_WJets_tagFirst_2b1c_16", "nJet_WJets_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WJets_tagFirst_2b1c_16->SetHighLightColor(2);
   nJet_WJets_tagFirst_2b1c_16->Range(-3.3,-1.368624,15.36667,9.372386);
   nJet_WJets_tagFirst_2b1c_16->SetFillColor(0);
   nJet_WJets_tagFirst_2b1c_16->SetFillStyle(4000);
   nJet_WJets_tagFirst_2b1c_16->SetBorderMode(0);
   nJet_WJets_tagFirst_2b1c_16->SetBorderSize(2);
   nJet_WJets_tagFirst_2b1c_16->SetLogy();
   nJet_WJets_tagFirst_2b1c_16->SetLeftMargin(0.15);
   nJet_WJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_WJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   nJet_WJets_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_WJets_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__6670 = new TH1D("Jets_cut_nJet__6670","",14,-0.5,13.5);
   Jets_cut_nJet__6670->SetBinContent(1,4.60464e+07);
   Jets_cut_nJet__6670->SetBinContent(2,1.048905e+08);
   Jets_cut_nJet__6670->SetBinContent(3,7.438344e+07);
   Jets_cut_nJet__6670->SetBinContent(4,2.14399e+07);
   Jets_cut_nJet__6670->SetBinContent(5,5347901);
   Jets_cut_nJet__6670->SetBinContent(6,1193891);
   Jets_cut_nJet__6670->SetBinContent(7,237371.3);
   Jets_cut_nJet__6670->SetBinContent(8,45124.5);
   Jets_cut_nJet__6670->SetBinContent(9,8278.527);
   Jets_cut_nJet__6670->SetBinContent(10,1448.55);
   Jets_cut_nJet__6670->SetBinContent(11,252.6449);
   Jets_cut_nJet__6670->SetBinContent(12,42.5188);
   Jets_cut_nJet__6670->SetBinContent(13,7.75695);
   Jets_cut_nJet__6670->SetBinContent(14,1.015095);
   Jets_cut_nJet__6670->SetBinContent(15,0.14579);
   Jets_cut_nJet__6670->SetBinError(1,20614.48);
   Jets_cut_nJet__6670->SetBinError(2,30790.88);
   Jets_cut_nJet__6670->SetBinError(3,28137.8);
   Jets_cut_nJet__6670->SetBinError(4,10443.87);
   Jets_cut_nJet__6670->SetBinError(5,3398.924);
   Jets_cut_nJet__6670->SetBinError(6,1249.304);
   Jets_cut_nJet__6670->SetBinError(7,427.8422);
   Jets_cut_nJet__6670->SetBinError(8,144.1278);
   Jets_cut_nJet__6670->SetBinError(9,47.43632);
   Jets_cut_nJet__6670->SetBinError(10,14.51294);
   Jets_cut_nJet__6670->SetBinError(11,5.290094);
   Jets_cut_nJet__6670->SetBinError(12,1.892372);
   Jets_cut_nJet__6670->SetBinError(13,0.7764925);
   Jets_cut_nJet__6670->SetBinError(14,0.2663087);
   Jets_cut_nJet__6670->SetBinError(15,0.09983314);
   Jets_cut_nJet__6670->SetEntries(1.506675e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__6670->SetLineColor(ci);
   Jets_cut_nJet__6670->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__6670->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__6670->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__6670->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6670->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__6670->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__6670->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__6670->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__6670->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__6670->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__6670->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__6670->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__6670->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6670->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__6670->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WJets_tagFirst_2b1c_16->Modified();
   nJet_WJets_tagFirst_2b1c_16->cd();
   nJet_WJets_tagFirst_2b1c_16->SetSelected(nJet_WJets_tagFirst_2b1c_16);
}
