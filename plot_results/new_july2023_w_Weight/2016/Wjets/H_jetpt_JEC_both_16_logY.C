void H_jetpt_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Thu Aug 10 12:21:55 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,1.238713,340,2.174624);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLogy();
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_5 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_5","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(0,102.0128);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(2,63.60399);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(3,42.98674);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(0,9.082463);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(2,8.811068);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(3,3.604957);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetEntries(3431);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_jetpt_JEC_stack_5->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->Draw("HIST");
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
