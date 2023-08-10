void Z_dR_Bj0_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Thu Aug  3 12:26:14 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(-1.2,-0.4648864,6.8,4.183977);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetLeftMargin(0.15);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(1,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(2,2.479394);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(3,3.541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(5,1.062597);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(8,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(12,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(22,0.7083982);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(1,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(2,0.9371228);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(3,1.120076);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(4,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(5,0.6134909);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(8,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(10,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(11,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(12,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(22,0.5009132);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetBinError(24,0.3541991);
   VbbHcc_both_Z_dR_Bj0_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj0_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_18->Modified();
   Z_dR_Bj0_both_18->cd();
   Z_dR_Bj0_both_18->SetSelected(Z_dR_Bj0_both_18);
}
