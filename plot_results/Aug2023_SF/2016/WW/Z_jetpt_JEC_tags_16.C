#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_tags_16()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tags_16/Z_jetpt_JEC_tags_16
//=========  (Fri Sep  1 13:23:35 2023) by ROOT version 6.28/04
   TCanvas *Z_jetpt_JEC_tags_16 = new TCanvas("Z_jetpt_JEC_tags_16", "Z_jetpt_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_tags_16->SetHighLightColor(2);
   Z_jetpt_JEC_tags_16->Range(-60,-0.03266576,340,0.2939918);
   Z_jetpt_JEC_tags_16->SetFillColor(0);
   Z_jetpt_JEC_tags_16->SetBorderMode(0);
   Z_jetpt_JEC_tags_16->SetBorderSize(2);
   Z_jetpt_JEC_tags_16->SetLeftMargin(0.15);
   Z_jetpt_JEC_tags_16->SetFrameBorderMode(0);
   Z_jetpt_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetpt_JEC__324 = new TH1D("VbbHcc_tags_Z_jetpt_JEC__324","",150,0,300);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(22,0.103617);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(24,0.2488819);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(27,0.1336153);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(28,0.09694687);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(31,0.1147185);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(41,0.1158269);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(47,0.1005479);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(53,0.1336795);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(128,0.1002972);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinContent(150,0.1080661);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(22,0.103617);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(24,0.1774837);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(27,0.1336153);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(28,0.09694687);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(31,0.1147185);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(41,0.1158269);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(47,0.1005479);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(53,0.1336795);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(128,0.1002972);
   VbbHcc_tags_Z_jetpt_JEC__324->SetBinError(150,0.1080661);
   VbbHcc_tags_Z_jetpt_JEC__324->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_Z_jetpt_JEC__324->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_JEC__324->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetpt_JEC__324->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetpt_JEC__324->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC__324->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC__324->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC__324->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC__324->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC__324->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC__324->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC__324->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC__324->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_tags_16->Modified();
   Z_jetpt_JEC_tags_16->cd();
   Z_jetpt_JEC_tags_16->SetSelected(Z_jetpt_JEC_tags_16);
}
