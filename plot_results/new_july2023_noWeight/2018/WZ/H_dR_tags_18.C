void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Aug  3 12:23:11 2023) by ROOT version 6.14/09
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.2,-0.1859546,6.8,1.673591);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_dR_stack_7 = new TH1D("VbbHcc_tags_H_dR_stack_7","",30,0,6);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(3,1.062597);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(4,1.416796);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(5,1.416796);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(7,1.062597);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(11,1.062597);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(14,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(16,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(17,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(19,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinContent(30,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(3,0.6134909);
   VbbHcc_tags_H_dR_stack_7->SetBinError(4,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinError(5,0.7083982);
   VbbHcc_tags_H_dR_stack_7->SetBinError(7,0.6134909);
   VbbHcc_tags_H_dR_stack_7->SetBinError(10,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(11,0.6134909);
   VbbHcc_tags_H_dR_stack_7->SetBinError(12,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(13,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(14,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(16,0.5009132);
   VbbHcc_tags_H_dR_stack_7->SetBinError(17,0.5009132);
   VbbHcc_tags_H_dR_stack_7->SetBinError(18,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(19,0.5009132);
   VbbHcc_tags_H_dR_stack_7->SetBinError(20,0.5009132);
   VbbHcc_tags_H_dR_stack_7->SetBinError(24,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetBinError(30,0.3541991);
   VbbHcc_tags_H_dR_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_H_dR_stack_7->SetFillColor(ci);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitle("#DeltaR(c,c)");
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_dR_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_dR_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
