#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Fri Sep  1 13:23:34 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-0.002062111,340,0.01855899);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC__284 = new TH1D("VbbHcc_tags_H_jetmass_noJEC__284","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(3,0.001929603);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(5,0.01447973);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(6,0.01571132);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(7,0.01169271);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(8,0.006870965);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(9,0.006385895);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(10,0.007430916);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(12,0.002472895);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(13,0.004719769);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(14,0.004845656);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinContent(39,0.002821577);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(3,0.001929603);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(5,0.005561122);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(6,0.005624444);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(7,0.005333233);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(8,0.004099999);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(9,0.003699165);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(10,0.004349611);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(12,0.002472895);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(13,0.00336498);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(14,0.00342978);
   VbbHcc_tags_H_jetmass_noJEC__284->SetBinError(39,0.002821577);
   VbbHcc_tags_H_jetmass_noJEC__284->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_noJEC__284->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__284->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_noJEC__284->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC__284->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_16->Modified();
   H_jetmass_noJEC_tags_16->cd();
   H_jetmass_noJEC_tags_16->SetSelected(H_jetmass_noJEC_tags_16);
}
