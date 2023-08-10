void Z_dPhi_both_18()
{
//=========Macro generated from canvas: Z_dPhi_both_18/Z_dPhi_both_18
//=========  (Thu Aug 10 12:24:50 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_both_18 = new TCanvas("Z_dPhi_both_18", "Z_dPhi_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_both_18->SetHighLightColor(2);
   Z_dPhi_both_18->Range(-0.8,-0.1290619,4.533333,1.161557);
   Z_dPhi_both_18->SetFillColor(0);
   Z_dPhi_both_18->SetBorderMode(0);
   Z_dPhi_both_18->SetBorderSize(2);
   Z_dPhi_both_18->SetLeftMargin(0.15);
   Z_dPhi_both_18->SetFrameBorderMode(0);
   Z_dPhi_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dPhi_stack_7 = new TH1D("VbbHcc_both_Z_dPhi_stack_7","",120,0,4);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(0,6.644653);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(1,0.7459316);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(5,0.4963468);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(6,0.3789058);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(10,0.5144501);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(13,0.1101045);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(14,0.3856298);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(16,0.5144501);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(18,0.4604326);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(20,0.4786962);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(23,0.2694972);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(24,0.9046467);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(27,0.3767055);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(28,0.5166625);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(30,0.5093878);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(36,0.5166625);
   VbbHcc_both_Z_dPhi_stack_7->SetBinContent(55,0.9833285);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(0,1.757138);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(1,0.5275202);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(5,0.4963468);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(6,0.3789058);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(10,0.5144501);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(13,0.1101045);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(14,0.3856298);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(16,0.5144501);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(18,0.4604326);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(20,0.4786962);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(23,0.2694972);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(24,0.6407682);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(27,0.3767055);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(28,0.5166625);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(30,0.5093878);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(36,0.5166625);
   VbbHcc_both_Z_dPhi_stack_7->SetBinError(55,0.9833285);
   VbbHcc_both_Z_dPhi_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_both_18->Modified();
   Z_dPhi_both_18->cd();
   Z_dPhi_both_18->SetSelected(Z_dPhi_both_18);
}
