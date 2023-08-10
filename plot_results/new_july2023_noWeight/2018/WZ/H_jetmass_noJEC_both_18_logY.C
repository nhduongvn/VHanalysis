void H_jetmass_noJEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_18/H_jetmass_noJEC_both_18
//=========  (Thu Aug 10 12:33:12 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_18 = new TCanvas("H_jetmass_noJEC_both_18", "H_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_18->SetHighLightColor(2);
   H_jetmass_noJEC_both_18->Range(-60,-0.9114761,340,0.68546);
   H_jetmass_noJEC_both_18->SetFillColor(0);
   H_jetmass_noJEC_both_18->SetBorderMode(0);
   H_jetmass_noJEC_both_18->SetBorderSize(2);
   H_jetmass_noJEC_both_18->SetLogy();
   H_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_7 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_7","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(3,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(4,1.062597);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(5,1.416796);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(6,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(8,1.770996);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(9,1.770996);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(10,1.062597);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(12,0.7083982);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(13,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(14,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(19,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(30,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinContent(45,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(3,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(4,0.6134909);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(5,0.7083982);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(6,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(8,0.7920133);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(9,0.7920133);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(10,0.6134909);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(11,0.5009132);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(12,0.5009132);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(13,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(14,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(18,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(19,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(30,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetBinError(45,0.3541991);
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_jetmass_noJEC_stack_7->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_18->Modified();
   H_jetmass_noJEC_both_18->cd();
   H_jetmass_noJEC_both_18->SetSelected(H_jetmass_noJEC_both_18);
}
