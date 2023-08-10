void Z_dR_Bj1_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_18/Z_dR_Bj1_both_18
//=========  (Thu Aug 10 12:25:06 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_18 = new TCanvas("Z_dR_Bj1_both_18", "Z_dR_Bj1_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_18->SetHighLightColor(2);
   Z_dR_Bj1_both_18->Range(-1.2,-0.4183977,6.8,3.765579);
   Z_dR_Bj1_both_18->SetFillColor(0);
   Z_dR_Bj1_both_18->SetBorderMode(0);
   Z_dR_Bj1_both_18->SetBorderSize(2);
   Z_dR_Bj1_both_18->SetLeftMargin(0.15);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
   Z_dR_Bj1_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_7 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_7","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(1,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(2,3.187792);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(3,1.770996);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(4,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(5,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(6,1.416796);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(8,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(9,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(20,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinContent(21,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(1,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(2,1.062597);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(3,0.7920133);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(4,0.5009132);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(5,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(6,0.7083982);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(8,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(9,0.5009132);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(20,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetBinError(21,0.3541991);
   VbbHcc_both_Z_dR_Bj1_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_Z_dR_Bj1_stack_7->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_18->Modified();
   Z_dR_Bj1_both_18->cd();
   Z_dR_Bj1_both_18->SetSelected(Z_dR_Bj1_both_18);
}
