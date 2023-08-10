void dR_HZ_tags_17()
{
//=========Macro generated from canvas: dR_HZ_tags_17/dR_HZ_tags_17
//=========  (Thu Aug  3 12:23:21 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_tags_17 = new TCanvas("dR_HZ_tags_17", "dR_HZ_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_17->SetHighLightColor(2);
   dR_HZ_tags_17->Range(-1.2,-0.06508483,6.8,0.5857634);
   dR_HZ_tags_17->SetFillColor(0);
   dR_HZ_tags_17->SetBorderMode(0);
   dR_HZ_tags_17->SetBorderSize(2);
   dR_HZ_tags_17->SetLeftMargin(0.15);
   dR_HZ_tags_17->SetFrameBorderMode(0);
   dR_HZ_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ_stack_7 = new TH1D("VbbHcc_tags_dR_HZ_stack_7","",60,0,6);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(10,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(11,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(13,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(14,0.4958844);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(18,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(24,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(25,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(27,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(28,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(29,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(30,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(32,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(33,0.4958844);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(34,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(35,0.4958844);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(40,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(50,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(53,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(10,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(11,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(12,0.3506432);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(13,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(14,0.3506432);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(18,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(24,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(25,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(27,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(28,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(29,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(30,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(32,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(33,0.3506432);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(34,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(35,0.3506432);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(40,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(50,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(53,0.2479422);
   VbbHcc_tags_dR_HZ_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_17->Modified();
   dR_HZ_tags_17->cd();
   dR_HZ_tags_17->SetSelected(dR_HZ_tags_17);
}
