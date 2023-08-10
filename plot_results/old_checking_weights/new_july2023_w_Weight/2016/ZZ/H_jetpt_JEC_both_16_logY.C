void H_jetpt_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Thu Aug 10 10:43:32 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,-0.8188057,340,1.714803);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLogy();
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_8 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(0,23.49161);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(1,0.5439828);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(2,15.27191);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(3,6.548401);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(0,2.489382);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(1,0.3857816);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(2,2.011525);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(3,1.332259);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetEntries(175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_jetpt_JEC_stack_8->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_8->Draw("HIST");
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
