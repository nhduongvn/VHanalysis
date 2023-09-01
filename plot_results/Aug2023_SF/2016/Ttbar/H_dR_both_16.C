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
   H_dR_both_16->Range(-1.2,-152.8479,6.8,1375.631);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__801 = new TH1D("VbbHcc_both_H_dR__801","",30,0,6);
   VbbHcc_both_H_dR__801->SetBinContent(2,0.3898383);
   VbbHcc_both_H_dR__801->SetBinContent(3,312.5118);
   VbbHcc_both_H_dR__801->SetBinContent(4,487.8831);
   VbbHcc_both_H_dR__801->SetBinContent(5,551.1193);
   VbbHcc_both_H_dR__801->SetBinContent(6,605.0864);
   VbbHcc_both_H_dR__801->SetBinContent(7,650.3916);
   VbbHcc_both_H_dR__801->SetBinContent(8,671.1828);
   VbbHcc_both_H_dR__801->SetBinContent(9,692.7245);
   VbbHcc_both_H_dR__801->SetBinContent(10,738.1807);
   VbbHcc_both_H_dR__801->SetBinContent(11,798.3115);
   VbbHcc_both_H_dR__801->SetBinContent(12,886.9951);
   VbbHcc_both_H_dR__801->SetBinContent(13,990.524);
   VbbHcc_both_H_dR__801->SetBinContent(14,1068.389);
   VbbHcc_both_H_dR__801->SetBinContent(15,1164.555);
   VbbHcc_both_H_dR__801->SetBinContent(16,1134.003);
   VbbHcc_both_H_dR__801->SetBinContent(17,656.3888);
   VbbHcc_both_H_dR__801->SetBinContent(18,408.8475);
   VbbHcc_both_H_dR__801->SetBinContent(19,269.1684);
   VbbHcc_both_H_dR__801->SetBinContent(20,173.0117);
   VbbHcc_both_H_dR__801->SetBinContent(21,109.2012);
   VbbHcc_both_H_dR__801->SetBinContent(22,62.01732);
   VbbHcc_both_H_dR__801->SetBinContent(23,37.67214);
   VbbHcc_both_H_dR__801->SetBinContent(24,17.46366);
   VbbHcc_both_H_dR__801->SetBinContent(25,10.36267);
   VbbHcc_both_H_dR__801->SetBinContent(26,3.611498);
   VbbHcc_both_H_dR__801->SetBinContent(27,1.704659);
   VbbHcc_both_H_dR__801->SetBinContent(28,0.3785266);
   VbbHcc_both_H_dR__801->SetBinError(2,0.1329539);
   VbbHcc_both_H_dR__801->SetBinError(3,4.32228);
   VbbHcc_both_H_dR__801->SetBinError(4,5.327197);
   VbbHcc_both_H_dR__801->SetBinError(5,5.596549);
   VbbHcc_both_H_dR__801->SetBinError(6,5.836127);
   VbbHcc_both_H_dR__801->SetBinError(7,6.020974);
   VbbHcc_both_H_dR__801->SetBinError(8,6.095552);
   VbbHcc_both_H_dR__801->SetBinError(9,6.176074);
   VbbHcc_both_H_dR__801->SetBinError(10,6.379448);
   VbbHcc_both_H_dR__801->SetBinError(11,6.636826);
   VbbHcc_both_H_dR__801->SetBinError(12,7.010551);
   VbbHcc_both_H_dR__801->SetBinError(13,7.448545);
   VbbHcc_both_H_dR__801->SetBinError(14,7.754718);
   VbbHcc_both_H_dR__801->SetBinError(15,8.094628);
   VbbHcc_both_H_dR__801->SetBinError(16,8.030199);
   VbbHcc_both_H_dR__801->SetBinError(17,6.091742);
   VbbHcc_both_H_dR__801->SetBinError(18,4.78905);
   VbbHcc_both_H_dR__801->SetBinError(19,3.880301);
   VbbHcc_both_H_dR__801->SetBinError(20,3.117275);
   VbbHcc_both_H_dR__801->SetBinError(21,2.474324);
   VbbHcc_both_H_dR__801->SetBinError(22,1.862166);
   VbbHcc_both_H_dR__801->SetBinError(23,1.436295);
   VbbHcc_both_H_dR__801->SetBinError(24,0.9746087);
   VbbHcc_both_H_dR__801->SetBinError(25,0.7445779);
   VbbHcc_both_H_dR__801->SetBinError(26,0.4440913);
   VbbHcc_both_H_dR__801->SetBinError(27,0.3221456);
   VbbHcc_both_H_dR__801->SetBinError(28,0.140705);
   VbbHcc_both_H_dR__801->SetEntries(244052);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_dR__801->SetFillColor(ci);
   VbbHcc_both_H_dR__801->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__801->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__801->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__801->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__801->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__801->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__801->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__801->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__801->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__801->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__801->Draw("HIST");
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
