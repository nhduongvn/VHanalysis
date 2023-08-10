void H_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Thu Aug 10 12:25:12 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-52.11942,340,469.0748);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(0,513.4493);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(1,2.32549);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(2,397.1003);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(3,130.8685);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(151,0.2867408);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(0,10.09182);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(1,0.7974019);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(2,8.966711);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(3,4.750577);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(151,0.2867408);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetEntries(12006);

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
