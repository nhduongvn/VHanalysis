void H_jetpt_JEC_both_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Thu Aug 10 12:25:12 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,-1.971657,340,17.74492);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_9 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_9","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(0,20.78729);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(1,0.105486);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(2,15.02215);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(3,5.136562);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(0,0.179651);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(1,0.01274957);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(2,0.1526394);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(3,0.08938412);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetEntries(28649);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_jetpt_JEC_stack_9->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->Draw("HIST");
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
