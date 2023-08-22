void H_dR_Bj0_tags_17_logY()
{
//=========Macro generated from canvas: H_dR_Bj0_tags_17/H_dR_Bj0_tags_17
//=========  (Tue Aug 22 09:16:18 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_tags_17 = new TCanvas("H_dR_Bj0_tags_17", "H_dR_Bj0_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_tags_17->SetHighLightColor(2);
   H_dR_Bj0_tags_17->Range(-1.2,-1.037172,6.8,0.559764);
   H_dR_Bj0_tags_17->SetFillColor(0);
   H_dR_Bj0_tags_17->SetBorderMode(0);
   H_dR_Bj0_tags_17->SetBorderSize(2);
   H_dR_Bj0_tags_17->SetLogy();
   H_dR_Bj0_tags_17->SetLeftMargin(0.15);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   H_dR_Bj0_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_Bj0_stack_7 = new TH1D("VbbHcc_tags_H_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(2,0.5303731);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(3,1.060746);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(4,0.7955596);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(5,0.5303731);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(6,0.5303731);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(10,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(11,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(12,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(13,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(15,1.325933);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(16,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinContent(17,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(2,0.3750304);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(3,0.5303731);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(4,0.4593166);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(5,0.3750304);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(6,0.3750304);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(10,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(11,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(12,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(13,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(15,0.5929751);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(16,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetBinError(17,0.2651865);
   VbbHcc_tags_H_dR_Bj0_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_Bj0_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_Bj0_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_tags_17->Modified();
   H_dR_Bj0_tags_17->cd();
   H_dR_Bj0_tags_17->SetSelected(H_dR_Bj0_tags_17);
}
