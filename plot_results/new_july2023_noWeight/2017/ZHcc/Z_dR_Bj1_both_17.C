void Z_dR_Bj1_both_17()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_17/Z_dR_Bj1_both_17
//=========  (Thu Aug  3 12:26:16 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_17 = new TCanvas("Z_dR_Bj1_both_17", "Z_dR_Bj1_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_17->SetHighLightColor(2);
   Z_dR_Bj1_both_17->Range(-1.2,-0.004770383,6.8,0.04293345);
   Z_dR_Bj1_both_17->SetFillColor(0);
   Z_dR_Bj1_both_17->SetBorderMode(0);
   Z_dR_Bj1_both_17->SetBorderSize(2);
   Z_dR_Bj1_both_17->SetLeftMargin(0.15);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   Z_dR_Bj1_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.01264201);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.03476553);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.03634578);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.01738276);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.01106176);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.006321005);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(8,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(9,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(10,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(12,0.004740753);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(13,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(20,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.004469625);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.007412035);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.007578618);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.0052411);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.004180952);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.003160502);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(8,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(9,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(10,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(12,0.002737075);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(13,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.002234813);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(19,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(20,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.001580251);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(95);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_Bj1_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitle("#DeltaR(Z,j_{2})");
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_Bj1_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_Bj1_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_17->Modified();
   Z_dR_Bj1_both_17->cd();
   Z_dR_Bj1_both_17->SetSelected(Z_dR_Bj1_both_17);
}
