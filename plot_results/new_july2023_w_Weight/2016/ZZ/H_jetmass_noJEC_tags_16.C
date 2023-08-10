void H_jetmass_noJEC_tags_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_16/H_jetmass_noJEC_tags_16
//=========  (Thu Aug 10 12:23:42 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_16 = new TCanvas("H_jetmass_noJEC_tags_16", "H_jetmass_noJEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_16->SetHighLightColor(2);
   H_jetmass_noJEC_tags_16->Range(-60,-1.213424,340,10.92082);
   H_jetmass_noJEC_tags_16->SetFillColor(0);
   H_jetmass_noJEC_tags_16->SetBorderMode(0);
   H_jetmass_noJEC_tags_16->SetBorderSize(2);
   H_jetmass_noJEC_tags_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(2,0.2916673);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(3,0.5310291);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(4,6.801369);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(5,7.412314);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(6,9.245136);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(7,7.614725);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(8,1.92991);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(9,2.172752);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(10,3.191028);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(11,1.265885);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(12,1.056145);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(13,0.8146269);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(14,0.5654573);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(15,1.041949);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(19,0.2841914);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(20,0.2853281);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(21,0.5773924);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(52,0.2586989);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(2,0.2916673);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(3,0.376621);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(4,1.362507);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(5,1.404642);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(6,1.553146);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(7,1.420978);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(8,0.690758);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(9,0.7521479);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(10,0.9225289);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(11,0.5682463);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(12,0.5290571);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(13,0.4710326);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(14,0.3999082);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(15,0.5210041);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(19,0.2841914);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(20,0.2853281);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(21,0.4082939);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(52,0.2586989);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetEntries(173);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_16->Modified();
   H_jetmass_noJEC_tags_16->cd();
   H_jetmass_noJEC_tags_16->SetSelected(H_jetmass_noJEC_tags_16);
}
