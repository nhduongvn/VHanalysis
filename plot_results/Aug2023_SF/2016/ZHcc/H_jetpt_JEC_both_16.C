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
   H_jetpt_JEC_both_16->Range(-60,-0.004316365,340,0.03884729);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__989 = new TH1D("VbbHcc_both_H_jetpt_JEC__989","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__989->SetBinContent(0,0.03786569);
   VbbHcc_both_H_jetpt_JEC__989->SetBinContent(2,0.03288659);
   VbbHcc_both_H_jetpt_JEC__989->SetBinContent(3,0.008608756);
   VbbHcc_both_H_jetpt_JEC__989->SetBinError(0,0.009105364);
   VbbHcc_both_H_jetpt_JEC__989->SetBinError(2,0.00889807);
   VbbHcc_both_H_jetpt_JEC__989->SetBinError(3,0.004384042);
   VbbHcc_both_H_jetpt_JEC__989->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetpt_JEC__989->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC__989->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC__989->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC__989->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__989->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__989->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__989->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__989->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__989->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__989->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__989->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__989->Draw("HIST");
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
