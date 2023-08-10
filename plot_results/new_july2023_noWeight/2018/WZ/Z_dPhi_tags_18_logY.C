void Z_dPhi_tags_18_logY()
{
//=========Macro generated from canvas: Z_dPhi_tags_18/Z_dPhi_tags_18
//=========  (Thu Aug 10 12:31:17 2023) by ROOT version 6.14/09
   TCanvas *Z_dPhi_tags_18 = new TCanvas("Z_dPhi_tags_18", "Z_dPhi_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dPhi_tags_18->SetHighLightColor(2);
   Z_dPhi_tags_18->Range(-0.8,-0.8617336,4.533333,0.2377775);
   Z_dPhi_tags_18->SetFillColor(0);
   Z_dPhi_tags_18->SetBorderMode(0);
   Z_dPhi_tags_18->SetBorderSize(2);
   Z_dPhi_tags_18->SetLogy();
   Z_dPhi_tags_18->SetLeftMargin(0.15);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   Z_dPhi_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_dPhi_stack_7 = new TH1D("VbbHcc_tags_Z_dPhi_stack_7","",120,0,4);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(0,5.312987);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(1,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(2,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(5,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(14,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(20,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(23,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(24,0.7083982);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(27,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(28,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(30,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(49,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(55,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinContent(68,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(0,1.371807);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(1,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(2,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(5,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(6,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(14,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(16,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(20,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(23,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(24,0.5009132);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(27,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(28,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(30,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(49,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(55,0.3541991);
   VbbHcc_tags_Z_dPhi_stack_7->SetBinError(68,0.3541991);
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
