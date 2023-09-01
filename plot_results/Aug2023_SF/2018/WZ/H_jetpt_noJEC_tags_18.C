#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetpt_noJEC_tags_18()
{
//=========Macro generated from canvas: H_jetpt_noJEC_tags_18/H_jetpt_noJEC_tags_18
//=========  (Fri Sep  1 13:34:45 2023) by ROOT version 6.28/04
   TCanvas *H_jetpt_noJEC_tags_18 = new TCanvas("H_jetpt_noJEC_tags_18", "H_jetpt_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_noJEC_tags_18->SetHighLightColor(2);
   H_jetpt_noJEC_tags_18->Range(-60,-0.3627003,340,3.264302);
   H_jetpt_noJEC_tags_18->SetFillColor(0);
   H_jetpt_noJEC_tags_18->SetBorderMode(0);
   H_jetpt_noJEC_tags_18->SetBorderSize(2);
   H_jetpt_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetpt_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetpt_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_noJEC__250 = new TH1D("VbbHcc_tags_H_jetpt_noJEC__250","",150,0,300);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(23,1.003462);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(28,2.76343);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(32,1.610355);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(37,0.402246);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(39,1.514861);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(44,0.4748496);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(59,0.6869376);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(61,0.7156926);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(63,0.1162559);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(68,0.3908613);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(72,1.550928);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(74,1.808794);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(84,0.6143759);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(87,0.7371838);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(100,0.8776001);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(110,0.6214135);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(138,1.066253);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinContent(151,3.468525);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(23,0.7184453);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(28,2.279938);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(32,1.610355);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(37,0.402246);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(39,1.10639);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(44,0.4748496);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(59,0.6869376);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(61,0.7156926);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(63,0.1162559);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(68,0.3908613);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(72,1.550928);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(74,1.390675);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(84,0.6143759);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(87,0.7371838);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(100,0.8776001);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(110,0.6214135);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(138,1.066253);
   VbbHcc_tags_H_jetpt_noJEC__250->SetBinError(151,1.572093);
   VbbHcc_tags_H_jetpt_noJEC__250->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetpt_noJEC__250->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_noJEC__250->GetXaxis()->SetTitle("c-jet p_{T} [GeV]");
   VbbHcc_tags_H_jetpt_noJEC__250->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetpt_noJEC__250->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC__250->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_noJEC__250->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC__250->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC__250->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC__250->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC__250->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_jetpt_noJEC__250->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC__250->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_noJEC_tags_18->Modified();
   H_jetpt_noJEC_tags_18->cd();
   H_jetpt_noJEC_tags_18->SetSelected(H_jetpt_noJEC_tags_18);
}
