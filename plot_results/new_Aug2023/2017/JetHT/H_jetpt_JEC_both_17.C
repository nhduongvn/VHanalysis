void H_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Tue Aug 22 09:23:24 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-2908.894,340,26180.04);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__721 = new TH1D("VbbHcc_both_H_jetpt_JEC__721","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__721->SetBinContent(0,34151);
   VbbHcc_both_H_jetpt_JEC__721->SetBinContent(1,116);
   VbbHcc_both_H_jetpt_JEC__721->SetBinContent(2,22163);
   VbbHcc_both_H_jetpt_JEC__721->SetBinContent(3,10606);
   VbbHcc_both_H_jetpt_JEC__721->SetEntries(67036);
   VbbHcc_both_H_jetpt_JEC__721->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC__721->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC__721->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__721->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__721->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__721->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__721->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__721->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__721->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__721->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC__721->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__721->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__721->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__721->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__721->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__721->Draw("HIST");
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
