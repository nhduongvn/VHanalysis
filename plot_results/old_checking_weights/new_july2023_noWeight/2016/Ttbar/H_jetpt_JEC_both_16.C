void H_jetpt_JEC_both_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Thu Aug  3 12:26:29 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,-790.9869,340,7118.882);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_3 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_3","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(0,7471.996);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(1,39.87372);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(2,6026.566);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(3,1296.968);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(0,21.7029);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(1,1.588914);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(2,19.49765);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(3,9.004607);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetEntries(243289);

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
