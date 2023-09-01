#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tags_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_tags_16/H_jetpt_JEC_tags_16
//=========  (Fri Sep  1 13:23:34 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_tags_16 = new TCanvas("H_jetpt_JEC_tags_16", "H_jetpt_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_tags_16->SetHighLightColor(2);
   H_jetpt_JEC_tags_16->Range(-60,-0.0292544,340,0.2632896);
   H_jetpt_JEC_tags_16->SetFillColor(0);
   H_jetpt_JEC_tags_16->SetBorderMode(0);
   H_jetpt_JEC_tags_16->SetBorderSize(2);
   H_jetpt_JEC_tags_16->SetLeftMargin(0.15);
   H_jetpt_JEC_tags_16->SetFrameBorderMode(0);
   H_jetpt_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_JEC__264 = new TH1D("VbbHcc_tags_H_jetpt_JEC__264","",150,0,300);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(29,0.09694687);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(41,0.1336153);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(44,0.1158269);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(55,0.1005479);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(57,0.2228906);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(58,0.1336795);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(65,0.1080661);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(71,0.1002972);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(78,0.103617);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(151,0.1407098);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(29,0.09694687);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(41,0.1336153);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(44,0.1158269);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(55,0.1005479);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(57,0.1576755);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(58,0.1336795);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(65,0.1080661);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(71,0.1002972);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(78,0.103617);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(151,0.1407098);
   VbbHcc_tags_H_jetpt_JEC__264->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_jetpt_JEC__264->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_JEC__264->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetpt_JEC__264->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetpt_JEC__264->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC__264->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_JEC__264->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC__264->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC__264->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC__264->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC__264->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_JEC__264->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC__264->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_tags_16->Modified();
   H_jetpt_JEC_tags_16->cd();
   H_jetpt_JEC_tags_16->SetSelected(H_jetpt_JEC_tags_16);
}
