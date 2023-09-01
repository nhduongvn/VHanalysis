#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_JEC_tags_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_tags_18/H_jetpt_JEC_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_JEC_tags_18 = new TCanvas("H_jetpt_JEC_tags_18", "H_jetpt_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_tags_18->SetHighLightColor(2);
   H_jetpt_JEC_tags_18->Range(-60,-0.2903683,340,2.613315);
   H_jetpt_JEC_tags_18->SetFillColor(0);
   H_jetpt_JEC_tags_18->SetBorderMode(0);
   H_jetpt_JEC_tags_18->SetBorderSize(2);
   H_jetpt_JEC_tags_18->SetLeftMargin(0.15);
   H_jetpt_JEC_tags_18->SetFrameBorderMode(0);
   H_jetpt_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_JEC__265 = new TH1D("VbbHcc_tags_H_jetpt_JEC__265","",150,0,300);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(23,0.5814054);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(26,2.21233);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(27,0.5511003);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(30,0.4220562);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(31,1.610355);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(38,0.9532567);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(41,0.8770956);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(42,0.5616047);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(58,0.7156926);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(60,0.1162559);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(64,0.3908613);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(65,0.6869376);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(73,1.290473);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(74,2.069249);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(80,0.6143759);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(84,0.7371838);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(97,0.8776001);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(109,0.6214135);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(139,1.066253);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinContent(151,3.468525);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(23,0.5814054);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(26,2.21233);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(27,0.5511003);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(30,0.4220562);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(31,1.610355);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(38,0.9532567);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(41,0.6223215);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(42,0.5616047);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(58,0.7156926);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(60,0.1162559);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(64,0.3908613);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(65,0.6869376);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(73,1.290473);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(74,1.635247);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(80,0.6143759);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(84,0.7371838);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(97,0.8776001);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(109,0.6214135);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(139,1.066253);
   VbbHcc_tags_H_jetpt_JEC__265->SetBinError(151,1.572093);
   VbbHcc_tags_H_jetpt_JEC__265->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetpt_JEC__265->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_JEC__265->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetpt_JEC__265->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetpt_JEC__265->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC__265->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_JEC__265->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC__265->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC__265->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC__265->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC__265->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_JEC__265->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC__265->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_tags_18->Modified();
   H_jetpt_JEC_tags_18->cd();
   H_jetpt_JEC_tags_18->SetSelected(H_jetpt_JEC_tags_18);
}
