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
   H_jetpt_JEC_both_16->Range(-60,-0.002350562,340,0.02115506);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__990 = new TH1D("VbbHcc_both_H_jetpt_JEC__990","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__990->SetBinContent(0,0.01691459);
   VbbHcc_both_H_jetpt_JEC__990->SetBinContent(2,0.01790904);
   VbbHcc_both_H_jetpt_JEC__990->SetBinContent(3,0.00424101);
   VbbHcc_both_H_jetpt_JEC__990->SetBinError(0,0.002252596);
   VbbHcc_both_H_jetpt_JEC__990->SetBinError(2,0.00226801);
   VbbHcc_both_H_jetpt_JEC__990->SetBinError(3,0.001108883);
   VbbHcc_both_H_jetpt_JEC__990->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetpt_JEC__990->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC__990->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC__990->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC__990->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__990->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__990->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__990->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__990->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__990->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__990->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__990->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__990->Draw("HIST");
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
