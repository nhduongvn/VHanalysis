void Z_dR_Bj0_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_17/Z_dR_Bj0_both_17
//=========  (Thu Aug 10 12:25:04 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_17 = new TCanvas("Z_dR_Bj0_both_17", "Z_dR_Bj0_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_17->SetHighLightColor(2);
   Z_dR_Bj0_both_17->Range(-1.2,-0.005392607,6.8,0.04853346);
   Z_dR_Bj0_both_17->SetFillColor(0);
   Z_dR_Bj0_both_17->SetBorderMode(0);
   Z_dR_Bj0_both_17->SetBorderSize(2);
   Z_dR_Bj0_both_17->SetLeftMargin(0.15);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   Z_dR_Bj0_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.009481507);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.04108653);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.03160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.02212352);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(7,0.007901256);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.004740753);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(15,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(17,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(18,0.003160502);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.003870809);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.008057731);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.007067098);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.005912758);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(7,0.003533549);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(13,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.002737075);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(15,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(17,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(18,0.002234813);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(21,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(31,0.001580251);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(95);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_17->Modified();
   Z_dR_Bj0_both_17->cd();
   Z_dR_Bj0_both_17->SetSelected(Z_dR_Bj0_both_17);
}
