#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Fri Sep  1 13:23:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-0.001931373,340,0.01738236);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC__1004 = new TH1D("VbbHcc_both_H_jetmass_noJEC__1004","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(3,0.001929603);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(4,0.003845833);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(5,0.007659926);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(6,0.01471522);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(7,0.01154144);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(8,0.006870965);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(9,0.006385895);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(10,0.007430916);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(11,0.002178175);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(12,0.002472895);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(13,0.004719769);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(14,0.004845656);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(39,0.002821577);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinContent(42,0.001943164);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(3,0.001929603);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(4,0.002719422);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(5,0.00388896);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(6,0.005664013);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(7,0.005280454);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(8,0.004099999);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(9,0.003699165);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(10,0.004349611);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(11,0.002178175);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(12,0.002472895);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(13,0.00336498);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(14,0.00342978);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(39,0.002821577);
   VbbHcc_both_H_jetmass_noJEC__1004->SetBinError(42,0.001943164);
   VbbHcc_both_H_jetmass_noJEC__1004->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetmass_noJEC__1004->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC__1004->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC__1004->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC__1004->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1004->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__1004->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1004->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1004->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1004->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1004->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__1004->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1004->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_16->Modified();
   H_jetmass_noJEC_both_16->cd();
   H_jetmass_noJEC_both_16->SetSelected(H_jetmass_noJEC_both_16);
}
