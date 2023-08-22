void H_jetmass_noJEC_tags_18_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_18/H_jetmass_noJEC_tags_18
//=========  (Tue Aug 22 09:16:38 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_18 = new TCanvas("H_jetmass_noJEC_tags_18", "H_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_18->SetHighLightColor(2);
   H_jetmass_noJEC_tags_18->Range(-60,-1.26919,340,1.664995);
   H_jetmass_noJEC_tags_18->SetFillColor(0);
   H_jetmass_noJEC_tags_18->SetBorderMode(0);
   H_jetmass_noJEC_tags_18->SetBorderSize(2);
   H_jetmass_noJEC_tags_18->SetLogy();
   H_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(3,0.5891495);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(4,6.842592);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(5,12.0872);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(6,12.41732);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(7,11.35306);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(8,7.758958);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(9,4.06238);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(10,3.743882);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(11,2.634826);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(12,2.160729);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(13,0.9397956);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(14,0.3672764);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(15,1.080737);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(17,0.2114747);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(19,0.5407221);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(21,0.2243617);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(24,0.357876);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(28,0.2561662);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinContent(29,0.27247);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(3,0.4176577);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(4,1.517419);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(5,2.007933);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(6,1.982502);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(7,1.840461);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(8,1.53423);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(9,1.104503);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(10,1.027202);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(11,0.8925557);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(12,0.7887888);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(13,0.5467321);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(14,0.3672764);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(15,0.5567772);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(17,0.2114747);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(19,0.3823901);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(21,0.2243617);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(24,0.357876);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(28,0.2561662);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetBinError(29,0.27247);
   VbbHcc_tags_H_jetmass_noJEC_stack_8->SetEntries(230);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_18->Modified();
   H_jetmass_noJEC_tags_18->cd();
   H_jetmass_noJEC_tags_18->SetSelected(H_jetmass_noJEC_tags_18);
}
