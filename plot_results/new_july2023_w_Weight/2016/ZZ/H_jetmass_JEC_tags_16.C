void H_jetmass_JEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_16/H_jetmass_JEC_tags_16
//=========  (Thu Aug 10 12:23:43 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_16 = new TCanvas("H_jetmass_JEC_tags_16", "H_jetmass_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_16->SetHighLightColor(2);
   H_jetmass_JEC_tags_16->Range(-60,-1.479975,340,13.31978);
   H_jetmass_JEC_tags_16->SetFillColor(0);
   H_jetmass_JEC_tags_16->SetBorderMode(0);
   H_jetmass_JEC_tags_16->SetBorderSize(2);
   H_jetmass_JEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(3,0.8226964);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(4,6.461321);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(5,7.351086);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(6,11.276);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(7,5.677028);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(8,2.3982);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(9,2.541064);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(10,2.943815);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(11,0.7183387);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(12,1.585037);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(13,0.552001);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(14,1.344634);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(15,0.262772);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(19,0.5695195);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(20,0.2861588);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(22,0.2912336);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinContent(51,0.2586989);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(3,0.4763541);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(4,1.321969);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(5,1.416884);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(6,1.711784);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(7,1.218331);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(8,0.7838258);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(9,0.8121082);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(10,0.8890058);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(11,0.4158074);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(12,0.6481731);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(13,0.3905664);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(14,0.6019325);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(15,0.262772);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(19,0.4027119);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(20,0.2861588);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(22,0.2912336);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetBinError(51,0.2586989);
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_8->Draw("HIST");
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
