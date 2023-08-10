void H_jetmass_JEC_tags_17_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_17/H_jetmass_JEC_tags_17
//=========  (Thu Aug 10 10:41:25 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_17 = new TCanvas("H_jetmass_JEC_tags_17", "H_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_17->SetHighLightColor(2);
   H_jetmass_JEC_tags_17->Range(-60,-1.061448,340,0.7811253);
   H_jetmass_JEC_tags_17->SetFillColor(0);
   H_jetmass_JEC_tags_17->SetBorderMode(0);
   H_jetmass_JEC_tags_17->SetBorderSize(2);
   H_jetmass_JEC_tags_17->SetLogy();
   H_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_7 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(4,0.3136654);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(5,2.086023);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(6,0.8045399);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(7,0.2900543);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(8,0.4815894);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(9,0.7683142);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(10,1.113343);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(12,0.2653625);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(13,0.2891015);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinContent(16,0.2948417);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(4,0.3136654);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(5,0.7924001);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(6,0.4753325);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(7,0.2900543);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(8,0.3465212);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(9,0.4515584);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(10,0.5653192);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(12,0.2653625);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(13,0.2891015);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetBinError(16,0.2948417);
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_17->Modified();
   H_jetmass_JEC_tags_17->cd();
   H_jetmass_JEC_tags_17->SetSelected(H_jetmass_JEC_tags_17);
}
