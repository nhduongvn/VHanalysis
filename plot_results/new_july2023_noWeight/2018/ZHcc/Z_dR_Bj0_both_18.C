void Z_dR_Bj0_both_18()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_18/Z_dR_Bj0_both_18
//=========  (Thu Aug 10 12:29:27 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_18 = new TCanvas("Z_dR_Bj0_both_18", "Z_dR_Bj0_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_18->SetHighLightColor(2);
   Z_dR_Bj0_both_18->Range(-1.2,-0.007766038,6.8,0.06989434);
   Z_dR_Bj0_both_18->SetFillColor(0);
   Z_dR_Bj0_both_18->SetBorderMode(0);
   Z_dR_Bj0_both_18->SetBorderSize(2);
   Z_dR_Bj0_both_18->SetLeftMargin(0.15);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   Z_dR_Bj0_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.0182061);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.05916981);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.04096371);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.02730914);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.006827286);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.004551524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.006436827);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.01160415);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.00965524);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.00788347);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.003941735);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.003218413);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(16,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.002275762);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj0_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitle("#DeltaR(Z,j_{1})");
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj0_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj0_stack_11->Draw("HIST");
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
