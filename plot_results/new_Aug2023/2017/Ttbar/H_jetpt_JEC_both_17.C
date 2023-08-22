void H_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Tue Aug 22 09:23:24 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-1008.84,340,9079.559);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_3 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_3","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(0,9963.263);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(1,51.56206);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(2,7686.399);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(3,2003.841);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(151,0.3257199);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(0,25.72743);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(1,1.854757);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(2,22.60308);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(3,11.48664);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(151,0.157938);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetEntries(333238);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_jetpt_JEC_stack_3->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_3->Draw("HIST");
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
