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
   H_dR_both_16->Range(-1.2,-0.0895506,6.8,0.8059553);
   H_dR_both_16->SetFillColor(0);
   H_dR_both_16->SetBorderMode(0);
   H_dR_both_16->SetBorderSize(2);
   H_dR_both_16->SetLeftMargin(0.15);
   H_dR_both_16->SetFrameBorderMode(0);
   H_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR__805 = new TH1D("VbbHcc_both_H_dR__805","",30,0,6);
   VbbHcc_both_H_dR__805->SetBinContent(3,0.6822902);
   VbbHcc_both_H_dR__805->SetBinContent(4,0.2945433);
   VbbHcc_both_H_dR__805->SetBinContent(5,0.3550803);
   VbbHcc_both_H_dR__805->SetBinContent(6,0.1745741);
   VbbHcc_both_H_dR__805->SetBinContent(7,0.1834581);
   VbbHcc_both_H_dR__805->SetBinContent(8,0.2351195);
   VbbHcc_both_H_dR__805->SetBinContent(10,0.1567984);
   VbbHcc_both_H_dR__805->SetBinContent(11,0.3415502);
   VbbHcc_both_H_dR__805->SetBinContent(12,0.1966257);
   VbbHcc_both_H_dR__805->SetBinContent(13,0.4388393);
   VbbHcc_both_H_dR__805->SetBinContent(14,0.3369993);
   VbbHcc_both_H_dR__805->SetBinContent(15,0.282881);
   VbbHcc_both_H_dR__805->SetBinContent(16,0.585842);
   VbbHcc_both_H_dR__805->SetBinContent(17,0.2911185);
   VbbHcc_both_H_dR__805->SetBinContent(18,0.1805222);
   VbbHcc_both_H_dR__805->SetBinContent(22,0.0936126);
   VbbHcc_both_H_dR__805->SetBinContent(25,0.05989596);
   VbbHcc_both_H_dR__805->SetBinError(3,0.262555);
   VbbHcc_both_H_dR__805->SetBinError(4,0.1710703);
   VbbHcc_both_H_dR__805->SetBinError(5,0.1793921);
   VbbHcc_both_H_dR__805->SetBinError(6,0.1234434);
   VbbHcc_both_H_dR__805->SetBinError(7,0.1308068);
   VbbHcc_both_H_dR__805->SetBinError(8,0.1666136);
   VbbHcc_both_H_dR__805->SetBinError(10,0.1108977);
   VbbHcc_both_H_dR__805->SetBinError(11,0.2010105);
   VbbHcc_both_H_dR__805->SetBinError(12,0.1416336);
   VbbHcc_both_H_dR__805->SetBinError(13,0.199337);
   VbbHcc_both_H_dR__805->SetBinError(14,0.1738589);
   VbbHcc_both_H_dR__805->SetBinError(15,0.1672184);
   VbbHcc_both_H_dR__805->SetBinError(16,0.2447944);
   VbbHcc_both_H_dR__805->SetBinError(17,0.1788899);
   VbbHcc_both_H_dR__805->SetBinError(18,0.1278606);
   VbbHcc_both_H_dR__805->SetBinError(22,0.0936126);
   VbbHcc_both_H_dR__805->SetBinError(25,0.05989596);
   VbbHcc_both_H_dR__805->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR__805->SetFillColor(ci);
   VbbHcc_both_H_dR__805->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_both_H_dR__805->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR__805->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__805->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__805->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__805->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__805->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__805->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR__805->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_dR__805->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR__805->Draw("HIST");
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
