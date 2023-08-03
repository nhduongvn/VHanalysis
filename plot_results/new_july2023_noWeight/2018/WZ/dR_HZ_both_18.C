void dR_HZ_both_18()
{
//=========Macro generated from canvas: dR_HZ_both_18/dR_HZ_both_18
//=========  (Thu Aug  3 12:26:03 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_both_18 = new TCanvas("dR_HZ_both_18", "dR_HZ_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_both_18->SetHighLightColor(2);
   dR_HZ_both_18->Range(-1.2,-0.1394659,6.8,1.255193);
   dR_HZ_both_18->SetFillColor(0);
   dR_HZ_both_18->SetBorderMode(0);
   dR_HZ_both_18->SetBorderSize(2);
   dR_HZ_both_18->SetLeftMargin(0.15);
   dR_HZ_both_18->SetFrameBorderMode(0);
   dR_HZ_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dR_HZ_stack_7 = new TH1D("VbbHcc_both_dR_HZ_stack_7","",60,0,6);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(11,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(16,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(17,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(20,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(22,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(25,1.062597);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(27,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(28,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(30,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(31,1.062597);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(32,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(33,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(34,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(38,0.7083982);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(39,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinContent(52,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(11,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(13,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(16,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(17,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(18,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(20,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(21,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(22,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(24,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(25,0.6134909);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(27,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(28,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(30,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(31,0.6134909);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(32,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(33,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(34,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(38,0.5009132);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(39,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetBinError(52,0.3541991);
   VbbHcc_both_dR_HZ_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dR_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_both_18->Modified();
   dR_HZ_both_18->cd();
   dR_HZ_both_18->SetSelected(dR_HZ_both_18);
}
