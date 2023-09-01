#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_both_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Fri Sep  1 13:23:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,-32.56392,340,293.0753);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__980 = new TH1D("VbbHcc_both_H_jetpt_JEC__980","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__980->SetBinContent(0,307.4796);
   VbbHcc_both_H_jetpt_JEC__980->SetBinContent(1,1.553984);
   VbbHcc_both_H_jetpt_JEC__980->SetBinContent(2,248.106);
   VbbHcc_both_H_jetpt_JEC__980->SetBinContent(3,66.2121);
   VbbHcc_both_H_jetpt_JEC__980->SetBinError(0,6.875184);
   VbbHcc_both_H_jetpt_JEC__980->SetBinError(1,0.4819405);
   VbbHcc_both_H_jetpt_JEC__980->SetBinError(2,6.380013);
   VbbHcc_both_H_jetpt_JEC__980->SetBinError(3,3.088561);
   VbbHcc_both_H_jetpt_JEC__980->SetEntries(9878);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_jetpt_JEC__980->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC__980->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC__980->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC__980->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__980->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__980->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__980->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__980->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__980->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__980->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__980->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__980->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_16->Modified();
   H_jetpt_JEC_both_16->cd();
   H_jetpt_JEC_both_16->SetSelected(H_jetpt_JEC_both_16);
}
