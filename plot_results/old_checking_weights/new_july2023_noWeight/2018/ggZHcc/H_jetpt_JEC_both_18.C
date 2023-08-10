void H_jetpt_JEC_both_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Thu Aug  3 12:26:32 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,-0.005230884,340,0.04707796);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_12 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_12","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(0,0.05004269);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(1,0.0005993136);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(2,0.03985435);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinContent(3,0.00839039);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(0,0.003872419);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(1,0.0004237787);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(2,0.003455811);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetBinError(3,0.001585635);
   VbbHcc_both_H_jetpt_JEC_stack_12->SetEntries(330);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetpt_JEC_stack_12->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_12->Draw("HIST");
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
