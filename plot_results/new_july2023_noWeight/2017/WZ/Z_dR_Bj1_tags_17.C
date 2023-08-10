void Z_dR_Bj1_tags_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_tags_17/Z_dR_Bj1_tags_17
//=========  (Thu Aug 10 12:27:51 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_tags_17 = new TCanvas("Z_dR_Bj1_tags_17", "Z_dR_Bj1_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_tags_17->SetHighLightColor(2);
   Z_dR_Bj1_tags_17->Range(-1.2,-0.1627121,6.8,1.464409);
   Z_dR_Bj1_tags_17->SetFillColor(0);
   Z_dR_Bj1_tags_17->SetBorderMode(0);
   Z_dR_Bj1_tags_17->SetBorderSize(2);
   Z_dR_Bj1_tags_17->SetLeftMargin(0.15);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   Z_dR_Bj1_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_tags_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(1,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(2,1.239711);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(3,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(4,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(5,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(7,0.7438266);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(8,0.4958844);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(12,0.4958844);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(14,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinContent(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(1,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(2,0.5544156);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(3,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(4,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(5,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(7,0.4294485);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(8,0.3506432);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(9,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(12,0.3506432);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(14,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetBinError(26,0.2479422);
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dR_Bj1_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dR_Bj1_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_tags_17->Modified();
   Z_dR_Bj1_tags_17->cd();
   Z_dR_Bj1_tags_17->SetSelected(Z_dR_Bj1_tags_17);
}
