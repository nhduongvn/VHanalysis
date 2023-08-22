void H_jetpt_JEC_both_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Tue Aug 22 09:23:26 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,-0.009870419,340,0.08883376);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_11 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_11","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(0,0.0960985);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(2,0.07520318);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinContent(3,0.018973);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(0,0.01507936);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(2,0.01328337);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetBinError(3,0.006827717);
   VbbHcc_both_H_jetpt_JEC_stack_11->SetEntries(84);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_18->Modified();
   H_jetpt_JEC_both_18->cd();
   H_jetpt_JEC_both_18->SetSelected(H_jetpt_JEC_both_18);
}
