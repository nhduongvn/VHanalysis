void Z_jetpt_JEC_tags_17()
{
//=========Macro generated from canvas: Z_jetpt_JEC_tags_17/Z_jetpt_JEC_tags_17
//=========  (Thu Aug  3 12:23:55 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_JEC_tags_17 = new TCanvas("Z_jetpt_JEC_tags_17", "Z_jetpt_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_tags_17->SetHighLightColor(2);
   Z_jetpt_JEC_tags_17->Range(-60,-0.06508483,340,0.5857634);
   Z_jetpt_JEC_tags_17->SetFillColor(0);
   Z_jetpt_JEC_tags_17->SetBorderMode(0);
   Z_jetpt_JEC_tags_17->SetBorderSize(2);
   Z_jetpt_JEC_tags_17->SetLeftMargin(0.15);
   Z_jetpt_JEC_tags_17->SetFrameBorderMode(0);
   Z_jetpt_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetpt_JEC_stack_7 = new TH1D("VbbHcc_tags_Z_jetpt_JEC_stack_7","",150,0,300);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(27,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(29,0.4958844);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(33,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(36,0.4958844);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(37,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(41,0.4958844);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(46,0.4958844);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(48,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(49,0.4958844);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(55,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(56,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(60,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(63,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(72,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(73,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(90,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(93,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(101,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinContent(122,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(27,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(29,0.3506432);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(33,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(36,0.3506432);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(37,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(41,0.3506432);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(46,0.3506432);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(48,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(49,0.3506432);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(55,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(56,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(60,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(63,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(72,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(73,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(90,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(93,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(101,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetBinError(122,0.2479422);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_jetpt_JEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetpt_JEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_tags_17->Modified();
   Z_jetpt_JEC_tags_17->cd();
   Z_jetpt_JEC_tags_17->SetSelected(Z_jetpt_JEC_tags_17);
}
