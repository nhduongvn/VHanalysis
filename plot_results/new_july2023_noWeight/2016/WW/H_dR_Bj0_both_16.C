void H_dR_Bj0_both_16()
{
//=========Macro generated from canvas: H_dR_Bj0_both_16/H_dR_Bj0_both_16
//=========  (Thu Aug 10 12:29:23 2023) by ROOT version 6.14/09
   TCanvas *H_dR_Bj0_both_16 = new TCanvas("H_dR_Bj0_both_16", "H_dR_Bj0_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_dR_Bj0_both_16->SetHighLightColor(2);
   H_dR_Bj0_both_16->Range(-1.2,-0.05290792,6.8,0.4761712);
   H_dR_Bj0_both_16->SetFillColor(0);
   H_dR_Bj0_both_16->SetBorderMode(0);
   H_dR_Bj0_both_16->SetBorderSize(2);
   H_dR_Bj0_both_16->SetLeftMargin(0.15);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   H_dR_Bj0_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_dR_Bj0_stack_6 = new TH1D("VbbHcc_both_H_dR_Bj0_stack_6","",30,0,6);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(3,0.4031079);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(14,0.2687386);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinContent(15,0.2687386);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(3,0.2327345);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(4,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(6,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(11,0.1343693);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(14,0.1900269);
   VbbHcc_both_H_dR_Bj0_stack_6->SetBinError(15,0.1900269);
   VbbHcc_both_H_dR_Bj0_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_dR_Bj0_stack_6->SetFillColor(ci);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitle("#DeltaR(H,j_{1})");
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetRange(1,30);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_dR_Bj0_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_dR_Bj0_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_dR_Bj0_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_Bj0_both_16->Modified();
   H_dR_Bj0_both_16->cd();
   H_dR_Bj0_both_16->SetSelected(H_dR_Bj0_both_16);
}
