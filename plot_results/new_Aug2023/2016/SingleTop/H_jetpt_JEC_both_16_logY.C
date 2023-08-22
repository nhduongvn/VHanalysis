void H_jetpt_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Tue Aug 22 09:18:54 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,-0.5150445,340,2.983274);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLogy();
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(0,284.3821);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(1,1.367154);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(2,226.9307);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(3,61.51765);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(0,6.322965);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(1,0.4091599);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(2,5.808347);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(3,2.872494);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetEntries(9517);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#660066");
   VbbHcc_both_H_jetpt_JEC_stack_2->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_2->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_2->Draw("HIST");
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
