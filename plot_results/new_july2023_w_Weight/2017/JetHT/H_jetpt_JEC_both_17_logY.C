void H_jetpt_JEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Thu Aug 10 10:43:32 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,1.417808,340,4.984893);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLogy();
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__721 = new TH1D("VbbHcc_both_H_jetpt_JEC__721","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__721->SetBinContent(0,34570);
   VbbHcc_both_H_jetpt_JEC__721->SetBinContent(1,119);
   VbbHcc_both_H_jetpt_JEC__721->SetBinContent(2,22420);
   VbbHcc_both_H_jetpt_JEC__721->SetBinContent(3,10575);
   VbbHcc_both_H_jetpt_JEC__721->SetEntries(67684);
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
