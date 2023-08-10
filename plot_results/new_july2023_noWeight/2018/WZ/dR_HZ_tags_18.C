void dR_HZ_tags_18()
{
//=========Macro generated from canvas: dR_HZ_tags_18/dR_HZ_tags_18
//=========  (Thu Aug 10 12:27:45 2023) by ROOT version 6.14/09
   TCanvas *dR_HZ_tags_18 = new TCanvas("dR_HZ_tags_18", "dR_HZ_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   dR_HZ_tags_18->SetHighLightColor(2);
   dR_HZ_tags_18->Range(-1.2,-0.1859546,6.8,1.673591);
   dR_HZ_tags_18->SetFillColor(0);
   dR_HZ_tags_18->SetBorderMode(0);
   dR_HZ_tags_18->SetBorderSize(2);
   dR_HZ_tags_18->SetLeftMargin(0.15);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   dR_HZ_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_dR_HZ_stack_7 = new TH1D("VbbHcc_tags_dR_HZ_stack_7","",60,0,6);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(10,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(22,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(24,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(25,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(26,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(29,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(32,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(33,1.416796);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(34,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(35,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(37,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(38,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(41,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(43,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(45,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(60,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinContent(61,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(6,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(7,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(10,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(12,0.5009132);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(21,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(22,0.5009132);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(24,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(25,0.5009132);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(26,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(29,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(32,0.5009132);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(33,0.7083982);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(34,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(35,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(37,0.5009132);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(38,0.5009132);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(41,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(43,0.5009132);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(45,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(60,0.3541991);
   VbbHcc_tags_dR_HZ_stack_7->SetBinError(61,0.5009132);
   VbbHcc_tags_dR_HZ_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_dR_HZ_stack_7->SetFillColor(ci);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitle("#DeltaR_{ZH}");
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_dR_HZ_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_dR_HZ_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_dR_HZ_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dR_HZ_tags_18->Modified();
   dR_HZ_tags_18->cd();
   dR_HZ_tags_18->SetSelected(dR_HZ_tags_18);
}
