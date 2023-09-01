#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_both_16()
{
//=========Macro generated from canvas: H_dR_both_16/H_dR_both_16
//=========  (Fri Sep  1 13:23:42 2023) by ROOT version 6.28/04
   TCanvas *H_dR_both_16 = new TCanvas("H_dR_both_16", "H_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_both_16->SetHighLightColor(2);
   H_dR_both_16->Range(-1.2,-0.0007157911,6.8,0.00644212);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__810 = new TH1D("VbbHcc_both_H_dR__810","",30,0,6);
   VbbHcc_both_H_dR__810->SetBinContent(3,0.00092891);
   VbbHcc_both_H_dR__810->SetBinContent(4,0.002692942);
   VbbHcc_both_H_dR__810->SetBinContent(5,0.004464734);
   VbbHcc_both_H_dR__810->SetBinContent(6,0.002092721);
   VbbHcc_both_H_dR__810->SetBinContent(7,0.005453646);
   VbbHcc_both_H_dR__810->SetBinContent(8,0.002096779);
   VbbHcc_both_H_dR__810->SetBinContent(9,0.001453833);
   VbbHcc_both_H_dR__810->SetBinContent(10,0.001723188);
   VbbHcc_both_H_dR__810->SetBinContent(11,0.001646207);
   VbbHcc_both_H_dR__810->SetBinContent(12,0.003401979);
   VbbHcc_both_H_dR__810->SetBinContent(13,0.002064294);
   VbbHcc_both_H_dR__810->SetBinContent(14,0.003681322);
   VbbHcc_both_H_dR__810->SetBinContent(15,0.001814211);
   VbbHcc_both_H_dR__810->SetBinContent(16,0.004508586);
   VbbHcc_both_H_dR__810->SetBinContent(17,0.0007635875);
   VbbHcc_both_H_dR__810->SetBinContent(18,0.000277703);
   VbbHcc_both_H_dR__810->SetBinError(3,0.0005436292);
   VbbHcc_both_H_dR__810->SetBinError(4,0.0009237746);
   VbbHcc_both_H_dR__810->SetBinError(5,0.001160207);
   VbbHcc_both_H_dR__810->SetBinError(6,0.0007951317);
   VbbHcc_both_H_dR__810->SetBinError(7,0.001260424);
   VbbHcc_both_H_dR__810->SetBinError(8,0.0007330017);
   VbbHcc_both_H_dR__810->SetBinError(9,0.0006562091);
   VbbHcc_both_H_dR__810->SetBinError(10,0.0007077518);
   VbbHcc_both_H_dR__810->SetBinError(11,0.0006748669);
   VbbHcc_both_H_dR__810->SetBinError(12,0.0009882624);
   VbbHcc_both_H_dR__810->SetBinError(13,0.0007361039);
   VbbHcc_both_H_dR__810->SetBinError(14,0.001029642);
   VbbHcc_both_H_dR__810->SetBinError(15,0.0007515693);
   VbbHcc_both_H_dR__810->SetBinError(16,0.001178925);
   VbbHcc_both_H_dR__810->SetBinError(17,0.0004438811);
   VbbHcc_both_H_dR__810->SetBinError(18,0.000277703);
   VbbHcc_both_H_dR__810->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_dR__810->SetFillColor(ci);
   VbbHcc_both_H_dR__810->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__810->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__810->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__810->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__810->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__810->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__810->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__810->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__810->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__810->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__810->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_both_16->Modified();
   H_dR_both_16->cd();
   H_dR_both_16->SetSelected(H_dR_both_16);
}
