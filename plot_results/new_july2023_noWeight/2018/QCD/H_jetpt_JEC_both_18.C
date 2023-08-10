void H_jetpt_JEC_both_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Thu Aug 10 12:29:38 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,-9289.769,340,83607.91);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(0,115504.8);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(1,295.3437);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(2,70779.19);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(3,32963.32);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(151,402.5506);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(0,5129.343);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(1,92.40658);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(2,4345.948);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(3,1888.077);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(151,371.9955);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetEntries(10726);

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
