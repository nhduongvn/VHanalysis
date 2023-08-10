void Z_dPhi_tags_18_logY()
{
//=========Macro generated from canvas: Z_dPhi_tags_18/Z_dPhi_tags_18
//=========  (Thu Aug 10 12:20:05 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_tags_18 = new TCanvas("Z_dPhi_tags_18", "Z_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_18->SetHighLightColor(2);
   Z_dPhi_tags_18->Range(-0.8,-1.450409,4.533333,0.4614316);
   Z_dPhi_tags_18->SetFillColor(0);
   Z_dPhi_tags_18->SetBorderMode(0);
   Z_dPhi_tags_18->SetBorderSize(2);
   Z_dPhi_tags_18->SetLogy();
   Z_dPhi_tags_18->SetLeftMargin(0.15);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi_stack_7 = new TH1D("VbbHcc_tags_Z_dPhi_stack_7","",120,0,4);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(0,6.788224);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(1,0.3789058);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(2,0.4604326);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(5,0.4963468);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(6,0.3789058);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(13,0.1101045);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(14,0.3856298);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(16,0.5144501);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(20,0.4786962);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(23,0.2694972);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(24,0.9046467);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(27,0.3767055);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(28,0.5166625);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(30,0.5093878);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(49,0.3670258);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(55,0.9833285);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(68,0.5144501);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(0,1.79312);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(1,0.3789058);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(2,0.4604326);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(5,0.4963468);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(6,0.3789058);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(13,0.1101045);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(14,0.3856298);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(16,0.5144501);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(20,0.4786962);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(23,0.2694972);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(24,0.6407682);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(27,0.3767055);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(28,0.5166625);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(30,0.5093878);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(49,0.3670258);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(55,0.9833285);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(68,0.5144501);
   VbbHcc_tags_Z_dPhi_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_dPhi_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetTitle("#Delta#phi(b,b)");
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetRange(1,120);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_dPhi_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_dPhi_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_dPhi_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dPhi_tags_18->Modified();
   Z_dPhi_tags_18->cd();
   Z_dPhi_tags_18->SetSelected(Z_dPhi_tags_18);
}
