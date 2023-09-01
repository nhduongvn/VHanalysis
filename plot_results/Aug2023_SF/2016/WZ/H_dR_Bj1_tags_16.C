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
   H_dR_Bj1_tags_16->Range(-1.2,-0.1431395,6.8,1.288255);
   H_dR_Bj1_tags_16->SetFillColor(0);
   H_dR_Bj1_tags_16->SetBorderMode(0);
   H_dR_Bj1_tags_16->SetBorderSize(2);
   H_dR_Bj1_tags_16->SetLeftMargin(0.15);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   H_dR_Bj1_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj1__175 = new TH1D("VbbHcc_tags_H_dR_Bj1__175","",30,0,6);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(1,0.4362346);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(2,1.090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(3,0.5452932);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(4,0.7634105);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(5,0.2181173);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(6,0.6543518);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(7,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(8,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(11,0.2181173);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(12,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(14,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(15,0.2181173);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(16,0.3271759);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(17,0.2181173);
   VbbHcc_tags_H_dR_Bj1__175->SetBinContent(30,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(1,0.2181173);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(2,0.3448737);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(3,0.2438625);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(4,0.288542);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(5,0.1542322);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(6,0.267138);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(7,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(8,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(11,0.1542322);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(12,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(14,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(15,0.1542322);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(16,0.1888951);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(17,0.1542322);
   VbbHcc_tags_H_dR_Bj1__175->SetBinError(30,0.1090586);
   VbbHcc_tags_H_dR_Bj1__175->SetEntries(48);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj1__175->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__175->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj1__175->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_Bj1__175->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj1__175->Draw("HIST");
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
