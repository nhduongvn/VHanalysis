#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_Bj1_tags_16()
{
//=========Macro generated from canvas: H_dR_Bj1_tags_16/H_dR_Bj1_tags_16
//=========  (Fri Sep  1 13:23:33 2023) by ROOT version 6.28/04
   TCanvas *H_dR_Bj1_tags_16 = new TCanvas("H_dR_Bj1_tags_16", "H_dR_Bj1_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_tags_16->SetHighLightColor(2);
   H_dR_Bj1_tags_16->Range(-1.2,-0.001794849,6.8,0.01615364);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetLeftMargin(0.15);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj1__179 = new TH1D("VbbHcc_tags_H_dR_Bj1__179","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(1,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(2,0.01367504);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(3,0.01367504);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(4,0.01367504);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(5,0.005470015);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(6,0.01094003);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(7,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(8,0.005470015);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(9,0.005470015);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(13,0.008205022);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(14,0.005470015);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(15,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(16,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(18,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinContent(23,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(1,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(2,0.006115663);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(3,0.006115663);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(4,0.006115663);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(5,0.003867885);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(6,0.005470015);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(7,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(8,0.003867885);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(9,0.003867885);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(13,0.004737172);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(14,0.003867885);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(15,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(16,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(18,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetBinError(23,0.002735007);
   VbbHcc_tags_H_dR_Bj1__179->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_dR_Bj1__179->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj1__179->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_tags_H_dR_Bj1__179->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj1__179->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__179->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__179->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__179->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__179->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__179->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__179->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__179->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__179->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_tags_16->Modified();
   H_dR_Bj1_tags_16->cd();
   H_dR_Bj1_tags_16->SetSelected(H_dR_Bj1_tags_16);
}
