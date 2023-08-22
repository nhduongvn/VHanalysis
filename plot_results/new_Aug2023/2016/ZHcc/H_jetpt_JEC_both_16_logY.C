void H_jetpt_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Tue Aug 22 09:18:55 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,-2.486457,340,-1.094989);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLogy();
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_11 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_11","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(0,0.03782467);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(2,0.0307833);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(3,0.008989176);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(0,0.008970633);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(2,0.008240189);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(3,0.004613478);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetpt_JEC_stack_11->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_11->Draw("HIST");
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
