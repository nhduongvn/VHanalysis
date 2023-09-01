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
   H_jetpt_JEC_tags_18->Range(-60,-0.2726925,340,2.454233);
   H_jetpt_JEC_tags_18->SetFillColor(0);
   H_jetpt_JEC_tags_18->SetBorderMode(0);
   H_jetpt_JEC_tags_18->SetBorderSize(2);
   H_jetpt_JEC_tags_18->SetLeftMargin(0.15);
   H_jetpt_JEC_tags_18->SetFrameBorderMode(0);
   H_jetpt_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_JEC__264 = new TH1D("VbbHcc_tags_H_jetpt_JEC__264","",150,0,300);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(32,0.6909771);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(42,2.077657);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(61,0.524235);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinContent(99,0.3810571);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(32,0.6909771);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(42,2.077657);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(61,0.524235);
   VbbHcc_tags_H_jetpt_JEC__264->SetBinError(99,0.3810571);
   VbbHcc_tags_H_jetpt_JEC__264->SetEntries(4);

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
