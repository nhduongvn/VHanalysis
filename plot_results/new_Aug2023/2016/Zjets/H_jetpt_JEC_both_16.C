void H_jetpt_JEC_both_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Tue Aug 22 09:23:23 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,-65.34319,340,588.0887);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_4 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_4","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(0,808.6515);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(1,4.335331);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(2,497.8528);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(3,269.988);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(0,17.68041);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(1,1.959908);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(2,14.91934);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(3,7.167067);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetEntries(15013);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_jetpt_JEC_stack_4->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_16->Modified();
   H_jetpt_JEC_both_16->cd();
   H_jetpt_JEC_both_16->SetSelected(H_jetpt_JEC_both_16);
}
