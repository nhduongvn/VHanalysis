#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Fri Sep  1 13:23:34 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-0.1532626,340,1.379363);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__295 = new TH1D("VbbHcc_tags_H_jetmass_JEC__295","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(3,0.1425487);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(4,0.1948813);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(5,1.167715);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(6,0.4170259);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(7,0.5676209);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(8,0.3593833);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(9,0.2600085);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(10,0.3136279);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(11,0.250699);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(12,0.09650676);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(13,0.1698691);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(14,0.103603);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(16,0.4360181);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinContent(17,0.1159892);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(3,0.1014212);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(4,0.1384551);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(5,0.3293981);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(6,0.2138209);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(7,0.2357476);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(8,0.2103991);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(9,0.1505349);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(10,0.1839118);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(11,0.1452691);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(12,0.09650676);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(13,0.1252263);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(14,0.103603);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(16,0.2211599);
   VbbHcc_tags_H_jetmass_JEC__295->SetBinError(17,0.1159892);
   VbbHcc_tags_H_jetmass_JEC__295->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetmass_JEC__295->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__295->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__295->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__295->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_16->Modified();
   H_jetmass_JEC_tags_16->cd();
   H_jetmass_JEC_tags_16->SetSelected(H_jetmass_JEC_tags_16);
}
