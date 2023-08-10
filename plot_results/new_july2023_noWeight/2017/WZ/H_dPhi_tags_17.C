void H_dPhi_tags_17()
{
//=========Macro generated from canvas: H_dPhi_tags_17/H_dPhi_tags_17
//=========  (Thu Aug 10 12:27:41 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_tags_17 = new TCanvas("H_dPhi_tags_17", "H_dPhi_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_tags_17->SetHighLightColor(2);
   H_dPhi_tags_17->Range(-0.8,-0.03254241,4.533333,0.2928817);
   H_dPhi_tags_17->SetFillColor(0);
   H_dPhi_tags_17->SetBorderMode(0);
   H_dPhi_tags_17->SetBorderSize(2);
   H_dPhi_tags_17->SetLeftMargin(0.15);
   H_dPhi_tags_17->SetFrameBorderMode(0);
   H_dPhi_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dPhi_stack_7 = new TH1D("VbbHcc_tags_H_dPhi_stack_7","",120,0,4);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(0,3.471191);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(1,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(16,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(21,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(28,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(34,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(43,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(46,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(50,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(63,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinContent(80,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(0,0.9277147);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(1,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(16,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(21,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(28,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(34,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(43,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(46,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(50,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(63,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetBinError(80,0.2479422);
   VbbHcc_tags_H_dPhi_stack_7->SetEntries(24);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_tags_17->Modified();
   H_dPhi_tags_17->cd();
   H_dPhi_tags_17->SetSelected(H_dPhi_tags_17);
}
