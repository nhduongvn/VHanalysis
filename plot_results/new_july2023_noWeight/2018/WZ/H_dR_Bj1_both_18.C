void H_dR_Bj1_both_18()
{
//=========Macro generated from canvas: H_dR_Bj1_both_18/H_dR_Bj1_both_18
//=========  (Thu Aug 10 12:29:25 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj1_both_18 = new TCanvas("H_dR_Bj1_both_18", "H_dR_Bj1_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj1_both_18->SetHighLightColor(2);
   H_dR_Bj1_both_18->Range(-1.2,-0.3719091,6.8,3.347182);
   H_dR_Bj1_both_18->SetFillColor(0);
   H_dR_Bj1_both_18->SetBorderMode(0);
   H_dR_Bj1_both_18->SetBorderSize(2);
   H_dR_Bj1_both_18->SetLeftMargin(0.15);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
   H_dR_Bj1_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_H_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(2,2.479394);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(3,2.833593);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(4,2.125195);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(5,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(6,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(7,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(11,0.7083982);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(15,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinContent(18,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(2,0.9371228);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(3,1.001826);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(4,0.8676071);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(5,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(6,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(7,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(11,0.5009132);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(15,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetBinError(18,0.3541991);
   VbbHcc_both_H_dR_Bj1_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_dR_Bj1_stack_7->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitle("#DeltaR(H,j_{2})");
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj1_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj1_both_18->Modified();
   H_dR_Bj1_both_18->cd();
   H_dR_Bj1_both_18->SetSelected(H_dR_Bj1_both_18);
}
