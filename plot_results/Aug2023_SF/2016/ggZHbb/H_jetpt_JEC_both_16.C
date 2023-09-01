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
   H_jetpt_JEC_both_16->Range(-60,-0.7814841,340,7.033356);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__988 = new TH1D("VbbHcc_both_H_jetpt_JEC__988","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__988->SetBinContent(0,7.809212);
   VbbHcc_both_H_jetpt_JEC__988->SetBinContent(1,0.03689696);
   VbbHcc_both_H_jetpt_JEC__988->SetBinContent(2,5.954164);
   VbbHcc_both_H_jetpt_JEC__988->SetBinContent(3,1.850386);
   VbbHcc_both_H_jetpt_JEC__988->SetBinError(0,0.05052567);
   VbbHcc_both_H_jetpt_JEC__988->SetBinError(1,0.003528916);
   VbbHcc_both_H_jetpt_JEC__988->SetBinError(2,0.04406534);
   VbbHcc_both_H_jetpt_JEC__988->SetBinError(3,0.02455423);
   VbbHcc_both_H_jetpt_JEC__988->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_jetpt_JEC__988->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC__988->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC__988->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC__988->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__988->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__988->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__988->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__988->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__988->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__988->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_JEC__988->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__988->Draw("HIST");
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
