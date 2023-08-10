void H_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Thu Aug 10 12:25:12 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-8857.043,340,79713.38);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(0,100323.3);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(1,79.50865);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(2,67482.22);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(3,31190.18);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(151,36926.73);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(0,4241.129);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(1,41.49142);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(2,4007.895);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(3,2124.291);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(151,26500.15);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetEntries(10320);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->Draw("HIST");
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
