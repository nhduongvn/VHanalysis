#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_SingleTop_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: nJet_SingleTop_tagFirst_2b1c_16/nJet_SingleTop_tagFirst_2b1c_16
//=========  (Fri May 24 12:34:11 2024) by ROOT version 6.28/10
   TCanvas *nJet_SingleTop_tagFirst_2b1c_16 = new TCanvas("nJet_SingleTop_tagFirst_2b1c_16", "nJet_SingleTop_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_SingleTop_tagFirst_2b1c_16->SetHighLightColor(2);
   nJet_SingleTop_tagFirst_2b1c_16->Range(-3.3,-966254.8,15.36667,8696292);
   nJet_SingleTop_tagFirst_2b1c_16->SetFillColor(0);
   nJet_SingleTop_tagFirst_2b1c_16->SetFillStyle(4000);
   nJet_SingleTop_tagFirst_2b1c_16->SetBorderMode(0);
   nJet_SingleTop_tagFirst_2b1c_16->SetBorderSize(2);
   nJet_SingleTop_tagFirst_2b1c_16->SetLeftMargin(0.15);
   nJet_SingleTop_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_SingleTop_tagFirst_2b1c_16->SetFrameBorderMode(0);
   nJet_SingleTop_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   nJet_SingleTop_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__6679 = new TH1D("Jets_cut_nJet__6679","",14,-0.5,13.5);
   Jets_cut_nJet__6679->SetBinContent(1,5639572);
   Jets_cut_nJet__6679->SetBinContent(2,7361940);
   Jets_cut_nJet__6679->SetBinContent(3,4495959);
   Jets_cut_nJet__6679->SetBinContent(4,1350025);
   Jets_cut_nJet__6679->SetBinContent(5,491157.9);
   Jets_cut_nJet__6679->SetBinContent(6,163376.9);
   Jets_cut_nJet__6679->SetBinContent(7,46316.59);
   Jets_cut_nJet__6679->SetBinContent(8,11582.17);
   Jets_cut_nJet__6679->SetBinContent(9,2613.501);
   Jets_cut_nJet__6679->SetBinContent(10,553.1822);
   Jets_cut_nJet__6679->SetBinContent(11,110.0082);
   Jets_cut_nJet__6679->SetBinContent(12,18.72373);
   Jets_cut_nJet__6679->SetBinContent(13,4.195387);
   Jets_cut_nJet__6679->SetBinContent(14,0.6334805);
   Jets_cut_nJet__6679->SetBinContent(15,0.1695587);
   Jets_cut_nJet__6679->SetBinError(1,1369.116);
   Jets_cut_nJet__6679->SetBinError(2,1580.724);
   Jets_cut_nJet__6679->SetBinError(3,1111.961);
   Jets_cut_nJet__6679->SetBinError(4,423.3024);
   Jets_cut_nJet__6679->SetBinError(5,242.5802);
   Jets_cut_nJet__6679->SetBinError(6,155.4452);
   Jets_cut_nJet__6679->SetBinError(7,87.59877);
   Jets_cut_nJet__6679->SetBinError(8,45.13042);
   Jets_cut_nJet__6679->SetBinError(9,21.74606);
   Jets_cut_nJet__6679->SetBinError(10,10.08826);
   Jets_cut_nJet__6679->SetBinError(11,4.411377);
   Jets_cut_nJet__6679->SetBinError(12,1.779175);
   Jets_cut_nJet__6679->SetBinError(13,0.9157412);
   Jets_cut_nJet__6679->SetBinError(14,0.3099066);
   Jets_cut_nJet__6679->SetBinError(15,0.08852703);
   Jets_cut_nJet__6679->SetEntries(1.89034e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__6679->SetLineColor(ci);
   Jets_cut_nJet__6679->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__6679->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__6679->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__6679->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6679->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__6679->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__6679->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__6679->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__6679->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__6679->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__6679->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__6679->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__6679->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__6679->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__6679->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_SingleTop_tagFirst_2b1c_16->Modified();
   nJet_SingleTop_tagFirst_2b1c_16->cd();
   nJet_SingleTop_tagFirst_2b1c_16->SetSelected(nJet_SingleTop_tagFirst_2b1c_16);
}
