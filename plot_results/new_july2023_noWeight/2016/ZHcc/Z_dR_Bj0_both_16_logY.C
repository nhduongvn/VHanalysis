void Z_dR_Bj0_both_16_logY()
{
//=========Macro generated from canvas: Z_dR_Bj0_both_16/Z_dR_Bj0_both_16
//=========  (Thu Aug 10 12:32:58 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_Bj0_both_16 = new TCanvas("Z_dR_Bj0_both_16", "Z_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_Bj0_both_16->SetHighLightColor(2);
   Z_dR_Bj0_both_16->Range(-1.2,-3.042031,6.8,-1.262435);
   Z_dR_Bj0_both_16->SetFillColor(0);
   Z_dR_Bj0_both_16->SetBorderMode(0);
   Z_dR_Bj0_both_16->SetBorderSize(2);
   Z_dR_Bj0_both_16->SetLogy();
   Z_dR_Bj0_both_16->SetLeftMargin(0.15);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   Z_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_Bj0_stack_11 = new TH1D("VbbHcc_both_Z_dR_Bj0_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(2,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(3,0.01914505);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(4,0.01367504);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(5,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(8,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(14,0.01094003);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinContent(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(1,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(2,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(3,0.00723615);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(4,0.006115663);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(5,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(6,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(8,0.003867885);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(9,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(10,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(14,0.005470015);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetBinError(23,0.002735007);
   VbbHcc_both_Z_dR_Bj0_stack_11->SetEntries(36);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_Bj0_both_16->Modified();
   Z_dR_Bj0_both_16->cd();
   Z_dR_Bj0_both_16->SetSelected(Z_dR_Bj0_both_16);
}
