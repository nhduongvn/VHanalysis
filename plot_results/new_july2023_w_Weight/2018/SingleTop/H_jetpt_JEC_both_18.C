void H_jetpt_JEC_both_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Thu Aug 10 12:25:12 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,-67.47614,340,607.2852);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_2 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_2","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(0,710.4534);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(1,4.816355);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(2,514.1039);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(3,213.4211);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinContent(151,0.3668603);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(0,12.53922);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(1,1.129205);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(2,10.75585);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(3,6.651817);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetBinError(151,0.3178743);
   VbbHcc_both_H_jetpt_JEC_stack_2->SetEntries(15109);

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
