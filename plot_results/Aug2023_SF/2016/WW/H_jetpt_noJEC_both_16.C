#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetpt_noJEC_both_16/H_jetpt_noJEC_both_16
//=========  (Fri Sep  1 13:23:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_noJEC_both_16 = new TCanvas("H_jetpt_noJEC_both_16", "H_jetpt_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_noJEC_both_16->SetHighLightColor(2);
   H_jetpt_noJEC_both_16->Range(-60,-0.03026972,340,0.2724275);
   H_jetpt_noJEC_both_16->SetFillColor(0);
   H_jetpt_noJEC_both_16->SetBorderMode(0);
   H_jetpt_noJEC_both_16->SetBorderSize(2);
   H_jetpt_noJEC_both_16->SetLeftMargin(0.15);
   H_jetpt_noJEC_both_16->SetFrameBorderMode(0);
   H_jetpt_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_noJEC__969 = new TH1D("VbbHcc_both_H_jetpt_noJEC__969","",150,0,300);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(31,0.2306264);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(44,0.1158269);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(47,0.1336153);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(53,0.1005479);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(56,0.1147185);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(63,0.1081721);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(66,0.1080661);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(74,0.1002972);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(78,0.103617);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinContent(143,0.1407098);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(31,0.165133);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(44,0.1158269);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(47,0.1336153);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(53,0.1005479);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(56,0.1147185);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(63,0.1081721);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(66,0.1080661);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(74,0.1002972);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(78,0.103617);
   VbbHcc_both_H_jetpt_noJEC__969->SetBinError(143,0.1407098);
   VbbHcc_both_H_jetpt_noJEC__969->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_jetpt_noJEC__969->SetFillColor(ci);
   VbbHcc_both_H_jetpt_noJEC__969->GetXaxis()->SetTitle("c-jet p_{T} [GeV]");
   VbbHcc_both_H_jetpt_noJEC__969->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_noJEC__969->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_noJEC__969->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_noJEC__969->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_noJEC__969->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_noJEC__969->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_noJEC__969->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_noJEC__969->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_H_jetpt_noJEC__969->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_noJEC__969->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_noJEC_both_16->Modified();
   H_jetpt_noJEC_both_16->cd();
   H_jetpt_noJEC_both_16->SetSelected(H_jetpt_noJEC_both_16);
}
