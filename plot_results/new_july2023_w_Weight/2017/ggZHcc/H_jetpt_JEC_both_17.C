void H_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Thu Aug 10 12:25:12 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-0.003585331,340,0.03226797);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_12 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_12","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(0,0.03721944);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(2,0.0273168);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(3,0.007381298);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(0,0.0030083);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(2,0.002570239);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(3,0.001344583);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetpt_JEC_stack_12->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_17->Modified();
   H_jetpt_JEC_both_17->cd();
   H_jetpt_JEC_both_17->SetSelected(H_jetpt_JEC_both_17);
}
