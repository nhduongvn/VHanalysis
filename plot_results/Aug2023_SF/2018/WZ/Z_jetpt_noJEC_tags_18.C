#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_noJEC_tags_18()
{
//=========Macro generated from canvas: Z_jetpt_noJEC_tags_18/Z_jetpt_noJEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetpt_noJEC_tags_18 = new TCanvas("Z_jetpt_noJEC_tags_18", "Z_jetpt_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_noJEC_tags_18->SetHighLightColor(2);
   Z_jetpt_noJEC_tags_18->Range(-60,-0.2903683,340,2.613315);
   Z_jetpt_noJEC_tags_18->SetFillColor(0);
   Z_jetpt_noJEC_tags_18->SetBorderMode(0);
   Z_jetpt_noJEC_tags_18->SetBorderSize(2);
   Z_jetpt_noJEC_tags_18->SetLeftMargin(0.15);
   Z_jetpt_noJEC_tags_18->SetFrameBorderMode(0);
   Z_jetpt_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetpt_noJEC__310 = new TH1D("VbbHcc_tags_Z_jetpt_noJEC__310","",150,0,300);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(26,1.610355);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(27,2.21233);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(28,1.132506);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(29,1.197803);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(32,0.8776001);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(33,0.4220562);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(34,0.3908613);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(40,0.6214135);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(47,0.5616047);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(48,1.550928);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(52,0.6869376);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(57,0.7156926);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(58,1.066253);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(59,0.7371838);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(64,0.670189);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(77,0.4748496);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(85,0.7924306);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(88,0.9532567);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(91,0.1162559);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(92,0.6143759);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(96,0.402246);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(97,0.8259742);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(102,1.290473);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinContent(151,0.5004492);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(26,1.610355);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(27,2.21233);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(28,0.8010891);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(29,0.8546065);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(32,0.8776001);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(33,0.4220562);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(34,0.3908613);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(40,0.6214135);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(47,0.5616047);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(48,1.550928);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(52,0.6869376);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(57,0.7156926);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(58,1.066253);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(59,0.7371838);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(64,0.670189);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(77,0.4748496);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(85,0.7924306);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(88,0.9532567);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(91,0.1162559);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(92,0.6143759);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(96,0.402246);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(97,0.8259742);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(102,1.290473);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetBinError(151,0.5004492);
   VbbHcc_tags_Z_jetpt_noJEC__310->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetpt_noJEC__310->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetXaxis()->SetTitle("b-jet p_{T} [GeV]");
   VbbHcc_tags_Z_jetpt_noJEC__310->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_noJEC__310->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_noJEC__310->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_noJEC_tags_18->Modified();
   Z_jetpt_noJEC_tags_18->cd();
   Z_jetpt_noJEC_tags_18->SetSelected(Z_jetpt_noJEC_tags_18);
}
