#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZHcc_tagFirst_2b1c_16_logY()
{
//=========Macro generated from canvas: nJet_ZHcc_tagFirst_2b1c_16/nJet_ZHcc_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:00 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZHcc_tagFirst_2b1c_16 = new TCanvas("nJet_ZHcc_tagFirst_2b1c_16", "nJet_ZHcc_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZHcc_tagFirst_2b1c_16->SetHighLightColor(2);
   nJet_ZHcc_tagFirst_2b1c_16->Range(-3.3,-4.556768,15.36667,3.582195);
   nJet_ZHcc_tagFirst_2b1c_16->SetFillColor(0);
   nJet_ZHcc_tagFirst_2b1c_16->SetFillStyle(4000);
   nJet_ZHcc_tagFirst_2b1c_16->SetBorderMode(0);
   nJet_ZHcc_tagFirst_2b1c_16->SetBorderSize(2);
   nJet_ZHcc_tagFirst_2b1c_16->SetLogy();
   nJet_ZHcc_tagFirst_2b1c_16->SetLeftMargin(0.15);
   nJet_ZHcc_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_ZHcc_tagFirst_2b1c_16->SetFrameBorderMode(0);
   nJet_ZHcc_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_ZHcc_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__6661 = new TH1D("Jets_cut_nJet__6661","",14,-0.5,13.5);
   Jets_cut_nJet__6661->SetBinContent(1,275.0568);
   Jets_cut_nJet__6661->SetBinContent(2,309.5634);
   Jets_cut_nJet__6661->SetBinContent(3,301.3645);
   Jets_cut_nJet__6661->SetBinContent(4,129.5773);
   Jets_cut_nJet__6661->SetBinContent(5,60.47652);
   Jets_cut_nJet__6661->SetBinContent(6,19.85361);
   Jets_cut_nJet__6661->SetBinContent(7,5.56191);
   Jets_cut_nJet__6661->SetBinContent(8,1.483973);
   Jets_cut_nJet__6661->SetBinContent(9,0.2504326);
   Jets_cut_nJet__6661->SetBinContent(10,0.08282348);
   Jets_cut_nJet__6661->SetBinContent(11,0.0149001);
   Jets_cut_nJet__6661->SetBinContent(12,0.0003615414);
   Jets_cut_nJet__6661->SetBinError(1,1.79472);
   Jets_cut_nJet__6661->SetBinError(2,1.843923);
   Jets_cut_nJet__6661->SetBinError(3,1.59867);
   Jets_cut_nJet__6661->SetBinError(4,0.6399141);
   Jets_cut_nJet__6661->SetBinError(5,0.3004274);
   Jets_cut_nJet__6661->SetBinError(6,0.1687248);
   Jets_cut_nJet__6661->SetBinError(7,0.09064919);
   Jets_cut_nJet__6661->SetBinError(8,0.04891038);
   Jets_cut_nJet__6661->SetBinError(9,0.01986614);
   Jets_cut_nJet__6661->SetBinError(10,0.01273282);
   Jets_cut_nJet__6661->SetBinError(11,0.005108627);
   Jets_cut_nJet__6661->SetBinError(12,0.0003615414);
   Jets_cut_nJet__6661->SetEntries(498137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__6661->SetLineColor(ci);
   Jets_cut_nJet__6661->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__6661->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__6661->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__6661->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6661->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__6661->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__6661->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__6661->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__6661->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__6661->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__6661->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__6661->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__6661->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6661->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__6661->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZHcc_tagFirst_2b1c_16->Modified();
   nJet_ZHcc_tagFirst_2b1c_16->cd();
   nJet_ZHcc_tagFirst_2b1c_16->SetSelected(nJet_ZHcc_tagFirst_2b1c_16);
}
