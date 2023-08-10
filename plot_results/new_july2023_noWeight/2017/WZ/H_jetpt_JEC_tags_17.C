void H_jetpt_JEC_tags_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_tags_17/H_jetpt_JEC_tags_17
//=========  (Thu Aug 10 12:28:01 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_tags_17 = new TCanvas("H_jetpt_JEC_tags_17", "H_jetpt_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_tags_17->SetHighLightColor(2);
   H_jetpt_JEC_tags_17->Range(-60,-0.06508483,340,0.5857634);
   H_jetpt_JEC_tags_17->SetFillColor(0);
   H_jetpt_JEC_tags_17->SetBorderMode(0);
   H_jetpt_JEC_tags_17->SetBorderSize(2);
   H_jetpt_JEC_tags_17->SetLeftMargin(0.15);
   H_jetpt_JEC_tags_17->SetFrameBorderMode(0);
   H_jetpt_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_JEC_stack_7 = new TH1D("VbbHcc_tags_H_jetpt_JEC_stack_7","",150,0,300);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(23,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(27,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(28,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(29,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(31,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(32,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(36,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(39,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(40,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(41,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(43,0.4958844);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(48,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(51,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(56,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(58,0.4958844);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(59,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(65,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(77,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(89,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(111,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(121,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinContent(151,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(23,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(27,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(28,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(29,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(31,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(32,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(36,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(39,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(40,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(41,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(43,0.3506432);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(48,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(51,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(56,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(58,0.3506432);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(59,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(65,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(77,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(89,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(111,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(121,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetBinError(151,0.2479422);
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetpt_JEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_tags_17->Modified();
   H_jetpt_JEC_tags_17->cd();
   H_jetpt_JEC_tags_17->SetSelected(H_jetpt_JEC_tags_17);
}
