void H_dPhi_both_17_logY()
{
//=========Macro generated from canvas: H_dPhi_both_17/H_dPhi_both_17
//=========  (Thu Aug 10 12:21:37 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_17 = new TCanvas("H_dPhi_both_17", "H_dPhi_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_17->SetHighLightColor(2);
   H_dPhi_both_17->Range(-0.8,-1.142735,4.533333,0.1921504);
   H_dPhi_both_17->SetFillColor(0);
   H_dPhi_both_17->SetBorderMode(0);
   H_dPhi_both_17->SetBorderSize(2);
   H_dPhi_both_17->SetLogy();
   H_dPhi_both_17->SetLeftMargin(0.15);
   H_dPhi_both_17->SetFrameBorderMode(0);
   H_dPhi_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_7 = new TH1D("VbbHcc_both_H_dPhi_stack_7","",120,0,4);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(0,2.847194);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(3,0.3136654);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(10,0.1957868);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(11,0.2891015);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(12,0.2948417);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(21,0.2653625);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(61,0.2346766);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(64,0.2572919);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(67,0.2891015);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(73,0.6041057);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(84,0.2861422);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(85,0.3317125);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(87,0.3152355);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(92,0.3152361);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(94,0.2900543);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(0,0.8782965);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(3,0.3136654);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(10,0.1957868);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(11,0.2891015);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(12,0.2948417);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(21,0.2653625);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(61,0.2346766);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(64,0.2572919);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(67,0.2891015);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(73,0.4272888);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(84,0.2861422);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(85,0.3317125);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(87,0.3152355);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(92,0.3152361);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(94,0.2900543);
   VbbHcc_both_H_dPhi_stack_7->SetEntries(26);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(c,c)");
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_17->Modified();
   H_dPhi_both_17->cd();
   H_dPhi_both_17->SetSelected(H_dPhi_both_17);
}
