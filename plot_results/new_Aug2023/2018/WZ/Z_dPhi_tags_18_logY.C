void Z_dPhi_tags_18_logY()
{
//=========Macro generated from canvas: Z_dPhi_tags_18/Z_dPhi_tags_18
//=========  (Tue Aug 22 09:16:09 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_tags_18 = new TCanvas("Z_dPhi_tags_18", "Z_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_18->SetHighLightColor(2);
   Z_dPhi_tags_18->Range(-0.8,-1.498082,4.533333,0.4569798);
   Z_dPhi_tags_18->SetFillColor(0);
   Z_dPhi_tags_18->SetBorderMode(0);
   Z_dPhi_tags_18->SetBorderSize(2);
   Z_dPhi_tags_18->SetLogy();
   Z_dPhi_tags_18->SetLeftMargin(0.15);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi_stack_7 = new TH1D("VbbHcc_tags_Z_dPhi_stack_7","",120,0,4);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(0,6.228405);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(1,0.3429098);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(2,0.4226771);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(5,0.4536609);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(6,0.3429098);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(13,0.09964461);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(14,0.3759891);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(16,0.4655773);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(20,0.4346562);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(23,0.2447034);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(24,0.8287619);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(27,0.3443088);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(28,0.4675795);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(30,0.4655805);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(49,0.3354616);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(55,0.9636619);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(68,0.4722652);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(0,1.64692);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(1,0.3429098);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(2,0.4226771);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(5,0.4536609);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(6,0.3429098);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(13,0.09964461);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(14,0.3759891);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(16,0.4655773);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(20,0.4346562);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(23,0.2447034);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(24,0.587094);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(27,0.3443088);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(28,0.4675795);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(30,0.4655805);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(49,0.3354616);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(55,0.9636619);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(68,0.4722652);
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
