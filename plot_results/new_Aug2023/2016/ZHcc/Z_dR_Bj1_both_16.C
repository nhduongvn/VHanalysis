void Z_dR_Bj1_both_16()
{
//=========Macro generated from canvas: Z_dR_Bj1_both_16/Z_dR_Bj1_both_16
//=========  (Tue Aug 22 09:23:11 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj1_both_16 = new TCanvas("Z_dR_Bj1_both_16", "Z_dR_Bj1_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj1_both_16->SetHighLightColor(2);
   Z_dR_Bj1_both_16->Range(-1.2,-0.003230728,6.8,0.02907655);
   Z_dR_Bj1_both_16->SetFillColor(0);
   Z_dR_Bj1_both_16->SetBorderMode(0);
   Z_dR_Bj1_both_16->SetBorderSize(2);
   Z_dR_Bj1_both_16->SetLeftMargin(0.15);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   Z_dR_Bj1_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj1_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj1_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(1,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(2,0.02461507);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(3,0.01367504);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(4,0.01641004);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(5,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(6,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(7,0.005470015);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(14,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(15,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(18,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinContent(26,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(1,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(2,0.008205022);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(3,0.006115663);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(4,0.006699373);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(5,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(6,0.004737172);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(7,0.003867885);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(14,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(15,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(18,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(24,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(25,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetBinError(26,0.002735007);
   VbbHcc_both_Z_dR_Bj1_stack_11->SetEntries(36);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj1_both_16->Modified();
   Z_dR_Bj1_both_16->cd();
   Z_dR_Bj1_both_16->SetSelected(Z_dR_Bj1_both_16);
}
