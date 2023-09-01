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
   H_jetmass_noJEC_both_16->Range(-60,-0.0008481026,340,0.007632923);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC__1005 = new TH1D("VbbHcc_both_H_jetmass_noJEC__1005","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(3,0.001557882);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(4,0.003454954);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(5,0.006448059);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(6,0.006461734);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(7,0.005419798);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(8,0.00147763);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(9,0.00385163);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(10,0.001746783);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(11,0.001858613);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(12,0.001069005);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(13,0.002053015);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(14,0.0009563529);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(16,0.000459941);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(18,0.0006662174);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(20,0.0003487364);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(21,0.0003336279);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(26,0.0002789308);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(28,0.0003315104);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinContent(33,0.0002902258);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(3,0.0006388512);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(4,0.0009755178);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(5,0.001359029);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(6,0.001343686);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(7,0.001260507);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(8,0.0006713299);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(9,0.001071912);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(10,0.0007149726);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(11,0.0007634396);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(12,0.0005373566);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(13,0.0008487209);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(14,0.0005561494);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(16,0.0003275341);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(18,0.0004715556);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(20,0.0003487364);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(21,0.0003336279);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(26,0.0002789308);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(28,0.0003315104);
   VbbHcc_both_H_jetmass_noJEC__1005->SetBinError(33,0.0002902258);
   VbbHcc_both_H_jetmass_noJEC__1005->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetmass_noJEC__1005->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC__1005->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC__1005->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC__1005->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1005->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__1005->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1005->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1005->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1005->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC__1005->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetmass_noJEC__1005->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC__1005->Draw("HIST");
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
