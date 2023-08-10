void H_jetpt_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Thu Aug 10 12:33:09 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,0.9038524,340,5.499628);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLogy();
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(0,97276.41);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(1,46.18065);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(2,57876.39);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(3,21119.64);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(0,6102.815);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(1,25.12944);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(2,4194.921);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(3,1466.158);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetEntries(10203);

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
