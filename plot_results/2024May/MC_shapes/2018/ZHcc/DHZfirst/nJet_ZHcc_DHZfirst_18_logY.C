#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_ZHcc_DHZfirst_18_logY()
{
//=========Macro generated from canvas: nJet_ZHcc_DHZfirst_18/nJet_ZHcc_DHZfirst_18
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *nJet_ZHcc_DHZfirst_18 = new TCanvas("nJet_ZHcc_DHZfirst_18", "nJet_ZHcc_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_ZHcc_DHZfirst_18->SetHighLightColor(2);
   nJet_ZHcc_DHZfirst_18->Range(-3.3,-4.669877,15.36667,3.59101);
   nJet_ZHcc_DHZfirst_18->SetFillColor(0);
   nJet_ZHcc_DHZfirst_18->SetFillStyle(4000);
   nJet_ZHcc_DHZfirst_18->SetBorderMode(0);
   nJet_ZHcc_DHZfirst_18->SetBorderSize(2);
   nJet_ZHcc_DHZfirst_18->SetLogy();
   nJet_ZHcc_DHZfirst_18->SetLeftMargin(0.15);
   nJet_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   nJet_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   nJet_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__5883 = new TH1D("Jets_cut_nJet__5883","",14,-0.5,13.5);
   Jets_cut_nJet__5883->SetBinContent(1,141.3599);
   Jets_cut_nJet__5883->SetBinContent(2,190.9229);
   Jets_cut_nJet__5883->SetBinContent(3,307.1654);
   Jets_cut_nJet__5883->SetBinContent(4,278.9588);
   Jets_cut_nJet__5883->SetBinContent(5,171.0984);
   Jets_cut_nJet__5883->SetBinContent(6,59.58511);
   Jets_cut_nJet__5883->SetBinContent(7,16.76944);
   Jets_cut_nJet__5883->SetBinContent(8,4.253444);
   Jets_cut_nJet__5883->SetBinContent(9,0.9966128);
   Jets_cut_nJet__5883->SetBinContent(10,0.1848004);
   Jets_cut_nJet__5883->SetBinContent(11,0.03493432);
   Jets_cut_nJet__5883->SetBinContent(12,0.0002865774);
   Jets_cut_nJet__5883->SetBinContent(13,0.006875076);
   Jets_cut_nJet__5883->SetBinContent(14,0.003244308);
   Jets_cut_nJet__5883->SetBinError(1,0.6174004);
   Jets_cut_nJet__5883->SetBinError(2,0.6865521);
   Jets_cut_nJet__5883->SetBinError(3,0.8287252);
   Jets_cut_nJet__5883->SetBinError(4,0.7994224);
   Jets_cut_nJet__5883->SetBinError(5,0.6770246);
   Jets_cut_nJet__5883->SetBinError(6,0.4102788);
   Jets_cut_nJet__5883->SetBinError(7,0.2192783);
   Jets_cut_nJet__5883->SetBinError(8,0.1169605);
   Jets_cut_nJet__5883->SetBinError(9,0.05644467);
   Jets_cut_nJet__5883->SetBinError(10,0.02434958);
   Jets_cut_nJet__5883->SetBinError(11,0.009318873);
   Jets_cut_nJet__5883->SetBinError(12,0.0002865774);
   Jets_cut_nJet__5883->SetBinError(13,0.004971806);
   Jets_cut_nJet__5883->SetBinError(14,0.003244308);
   Jets_cut_nJet__5883->SetEntries(993601);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__5883->SetLineColor(ci);
   Jets_cut_nJet__5883->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__5883->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__5883->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__5883->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5883->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__5883->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__5883->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__5883->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__5883->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__5883->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__5883->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__5883->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__5883->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__5883->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__5883->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_ZHcc_DHZfirst_18->Modified();
   nJet_ZHcc_DHZfirst_18->cd();
   nJet_ZHcc_DHZfirst_18->SetSelected(nJet_ZHcc_DHZfirst_18);
}
