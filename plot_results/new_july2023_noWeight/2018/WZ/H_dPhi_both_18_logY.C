void H_dPhi_both_18_logY()
{
//=========Macro generated from canvas: H_dPhi_both_18/H_dPhi_both_18
//=========  (Thu Aug 10 12:32:50 2023) by ROOT version 6.14/09
   TCanvas *H_dPhi_both_18 = new TCanvas("H_dPhi_both_18", "H_dPhi_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dPhi_both_18->SetHighLightColor(2);
   H_dPhi_both_18->Range(-0.8,-0.8617336,4.533333,0.2377775);
   H_dPhi_both_18->SetFillColor(0);
   H_dPhi_both_18->SetBorderMode(0);
   H_dPhi_both_18->SetBorderSize(2);
   H_dPhi_both_18->SetLogy();
   H_dPhi_both_18->SetLeftMargin(0.15);
   H_dPhi_both_18->SetFrameBorderMode(0);
   H_dPhi_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dPhi_stack_7 = new TH1D("VbbHcc_both_H_dPhi_stack_7","",120,0,4);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(0,4.958788);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(1,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(3,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(16,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(20,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(25,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(31,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(36,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(42,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(49,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(53,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(55,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(64,0.7083982);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(69,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinContent(90,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(0,1.325292);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(1,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(3,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(13,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(15,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(16,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(20,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(24,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(25,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(31,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(36,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(42,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(49,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(53,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(55,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(64,0.5009132);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(69,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetBinError(90,0.3541991);
   VbbHcc_both_H_dPhi_stack_7->SetEntries(33);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dPhi_both_18->Modified();
   H_dPhi_both_18->cd();
   H_dPhi_both_18->SetSelected(H_dPhi_both_18);
}
