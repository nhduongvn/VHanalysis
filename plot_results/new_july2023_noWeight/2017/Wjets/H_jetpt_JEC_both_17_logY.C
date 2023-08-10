void H_jetpt_JEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Thu Aug 10 12:33:10 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-0.3678172,340,2.391392);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLogy();
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_5 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_5","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(0,132.3494);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(1,1.618578);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(2,68.8529);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(3,58.18647);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(0,9.559534);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(1,1.192607);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(2,8.673577);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(3,4.374881);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetEntries(2446);

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
