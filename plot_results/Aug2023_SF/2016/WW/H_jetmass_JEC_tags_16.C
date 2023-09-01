#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Fri Sep  1 13:23:34 2023) by ROOT version 6.28/04
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-0.04110555,340,0.3699499);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC__294 = new TH1D("VbbHcc_tags_H_jetmass_JEC__294","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinContent(3,0.1336153);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinContent(5,0.3131851);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinContent(6,0.1147185);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinContent(7,0.2495064);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinContent(9,0.1005479);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinContent(14,0.103617);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinContent(15,0.1407098);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinContent(16,0.1002972);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinError(3,0.1336153);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinError(5,0.1810475);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinError(6,0.1147185);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinError(7,0.1768788);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinError(9,0.1005479);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinError(14,0.103617);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinError(15,0.1407098);
   VbbHcc_tags_H_jetmass_JEC__294->SetBinError(16,0.1002972);
   VbbHcc_tags_H_jetmass_JEC__294->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_jetmass_JEC__294->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC__294->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC__294->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC__294->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__294->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__294->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__294->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__294->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__294->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC__294->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetmass_JEC__294->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC__294->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_16->Modified();
   H_jetmass_JEC_tags_16->cd();
   H_jetmass_JEC_tags_16->SetSelected(H_jetmass_JEC_tags_16);
}
