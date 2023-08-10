void H_jetpt_noJEC_tags_17_logY()
{
//=========Macro generated from canvas: H_jetpt_noJEC_tags_17/H_jetpt_noJEC_tags_17
//=========  (Thu Aug 10 12:31:35 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_noJEC_tags_17 = new TCanvas("H_jetpt_noJEC_tags_17", "H_jetpt_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_noJEC_tags_17->SetHighLightColor(2);
   H_jetpt_noJEC_tags_17->Range(-60,-1.038642,340,0.2809831);
   H_jetpt_noJEC_tags_17->SetFillColor(0);
   H_jetpt_noJEC_tags_17->SetBorderMode(0);
   H_jetpt_noJEC_tags_17->SetBorderSize(2);
   H_jetpt_noJEC_tags_17->SetLogy();
   H_jetpt_noJEC_tags_17->SetLeftMargin(0.15);
   H_jetpt_noJEC_tags_17->SetFrameBorderMode(0);
   H_jetpt_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_noJEC_stack_7 = new TH1D("VbbHcc_tags_H_jetpt_noJEC_stack_7","",150,0,300);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(23,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(25,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(27,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(31,0.7438266);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(32,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(33,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(36,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(42,0.4958844);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(44,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(48,0.4958844);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(56,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(57,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(61,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(63,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(65,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(81,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(89,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(105,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(121,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinContent(151,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(23,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(25,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(27,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(31,0.4294485);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(32,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(33,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(36,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(42,0.3506432);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(44,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(48,0.3506432);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(56,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(57,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(61,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(63,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(65,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(81,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(89,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(105,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(121,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetBinError(151,0.2479422);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetpt_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitle("c-jet p_{T} [GeV]");
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_noJEC_tags_17->Modified();
   H_jetpt_noJEC_tags_17->cd();
   H_jetpt_noJEC_tags_17->SetSelected(H_jetpt_noJEC_tags_17);
}
