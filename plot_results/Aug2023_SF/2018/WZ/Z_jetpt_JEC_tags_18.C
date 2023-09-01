#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetpt_JEC_tags_18()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tags_18/Z_jetpt_JEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetpt_JEC_tags_18 = new TCanvas("Z_jetpt_JEC_tags_18", "Z_jetpt_JEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_tags_18->SetHighLightColor(2);
   Z_jetpt_JEC_tags_18->Range(-60,-0.2903683,340,2.613315);
   Z_jetpt_JEC_tags_18->SetFillColor(0);
   Z_jetpt_JEC_tags_18->SetBorderMode(0);
   Z_jetpt_JEC_tags_18->SetBorderSize(2);
   Z_jetpt_JEC_tags_18->SetLeftMargin(0.15);
   Z_jetpt_JEC_tags_18->SetFrameBorderMode(0);
   Z_jetpt_JEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetpt_JEC__325 = new TH1D("VbbHcc_tags_Z_jetpt_JEC__325","",150,0,300);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(25,0.5814054);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(26,2.21233);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(27,0.5183212);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(29,1.610355);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(31,0.6794818);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(33,0.4220562);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(34,0.5511003);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(37,0.3908613);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(39,1.499014);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(40,0.5616047);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(49,1.550928);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(53,0.6869376);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(55,0.7156926);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(60,1.066253);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(63,0.670189);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(67,0.7371838);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(83,0.9532567);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(84,0.4748496);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(86,0.7924306);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(91,0.1162559);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(92,0.402246);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(93,0.6143759);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(101,0.8259742);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(104,1.290473);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinContent(151,0.5004492);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(25,0.5814054);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(26,2.21233);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(27,0.5183212);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(29,1.610355);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(31,0.6794818);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(33,0.4220562);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(34,0.5511003);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(37,0.3908613);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(39,1.075331);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(40,0.5616047);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(49,1.550928);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(53,0.6869376);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(55,0.7156926);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(60,1.066253);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(63,0.670189);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(67,0.7371838);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(83,0.9532567);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(84,0.4748496);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(86,0.7924306);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(91,0.1162559);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(92,0.402246);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(93,0.6143759);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(101,0.8259742);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(104,1.290473);
   VbbHcc_tags_Z_jetpt_JEC__325->SetBinError(151,0.5004492);
   VbbHcc_tags_Z_jetpt_JEC__325->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetpt_JEC__325->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_JEC__325->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetpt_JEC__325->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetpt_JEC__325->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC__325->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC__325->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC__325->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC__325->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC__325->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC__325->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetpt_JEC__325->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC__325->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_tags_18->Modified();
   Z_jetpt_JEC_tags_18->cd();
   Z_jetpt_JEC_tags_18->SetSelected(Z_jetpt_JEC_tags_18);
}
