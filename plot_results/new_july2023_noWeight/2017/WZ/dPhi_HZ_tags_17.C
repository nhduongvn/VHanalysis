void dPhi_HZ_tags_17()
{
//=========Macro generated from canvas: dPhi_HZ_tags_17/dPhi_HZ_tags_17
//=========  (Thu Aug 10 12:27:43 2023) by ROOT version 6.14/09
   TCanvas *dPhi_HZ_tags_17 = new TCanvas("dPhi_HZ_tags_17", "dPhi_HZ_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_tags_17->SetHighLightColor(2);
   dPhi_HZ_tags_17->Range(-5.6,-0.1301697,5.066667,1.171527);
   dPhi_HZ_tags_17->SetFillColor(0);
   dPhi_HZ_tags_17->SetBorderMode(0);
   dPhi_HZ_tags_17->SetBorderSize(2);
   dPhi_HZ_tags_17->SetLeftMargin(0.15);
   dPhi_HZ_tags_17->SetFrameBorderMode(0);
   dPhi_HZ_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dPhi_HZ_stack_7 = new TH1D("VbbHcc_tags_dPhi_HZ_stack_7","",480,-4,4);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(117,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(172,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(209,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(213,0.4958844);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(215,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(220,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(227,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(248,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(253,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(267,0.9917687);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(282,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(295,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(301,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(303,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(306,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(307,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(310,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(311,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(321,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinContent(326,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(117,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(172,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(209,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(213,0.3506432);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(215,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(220,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(227,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(248,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(253,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(267,0.4958844);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(282,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(295,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(301,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(303,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(306,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(307,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(310,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(311,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(321,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetBinError(326,0.2479422);
   VbbHcc_tags_dPhi_HZ_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_dPhi_HZ_stack_7->SetFillColor(ci);
   VbbHcc_tags_dPhi_HZ_stack_7->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VbbHcc_tags_dPhi_HZ_stack_7->GetXaxis()->SetRange(1,480);
   VbbHcc_tags_dPhi_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dPhi_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dPhi_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dPhi_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dPhi_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_tags_17->Modified();
   dPhi_HZ_tags_17->cd();
   dPhi_HZ_tags_17->SetSelected(dPhi_HZ_tags_17);
}
