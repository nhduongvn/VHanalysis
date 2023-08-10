void H_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Thu Aug 10 12:25:12 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-1.106757,340,9.960811);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_10 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_10","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinContent(0,11.02812);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinContent(1,0.05120128);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinContent(2,8.432433);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinContent(3,2.623718);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinError(0,0.07033071);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinError(1,0.004807409);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinError(2,0.06148147);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetBinError(3,0.03430913);
   VbbHcc_both_H_jetpt_JEC_stack_10->SetEntries(50073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_jetpt_JEC_stack_10->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_17->Modified();
   H_jetpt_JEC_both_17->cd();
   H_jetpt_JEC_both_17->SetSelected(H_jetpt_JEC_both_17);
}
