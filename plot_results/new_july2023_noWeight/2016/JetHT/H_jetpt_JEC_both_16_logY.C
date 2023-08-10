void H_jetpt_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_16/H_jetpt_JEC_both_16
//=========  (Thu Aug 10 12:33:09 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_16 = new TCanvas("H_jetpt_JEC_both_16", "H_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_16->SetHighLightColor(2);
   H_jetpt_JEC_both_16->Range(-60,1.520099,340,5.155726);
   H_jetpt_JEC_both_16->SetFillColor(0);
   H_jetpt_JEC_both_16->SetBorderMode(0);
   H_jetpt_JEC_both_16->SetBorderSize(2);
   H_jetpt_JEC_both_16->SetLogy();
   H_jetpt_JEC_both_16->SetLeftMargin(0.15);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   H_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__718 = new TH1D("VbbHcc_both_H_jetpt_JEC__718","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__718->SetBinContent(0,51288);
   VbbHcc_both_H_jetpt_JEC__718->SetBinContent(1,153);
   VbbHcc_both_H_jetpt_JEC__718->SetBinContent(2,32705);
   VbbHcc_both_H_jetpt_JEC__718->SetBinContent(3,17872);
   VbbHcc_both_H_jetpt_JEC__718->SetEntries(102018);
   VbbHcc_both_H_jetpt_JEC__718->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC__718->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC__718->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__718->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__718->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__718->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__718->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__718->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__718->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__718->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC__718->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__718->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__718->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__718->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__718->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__718->Draw("HIST");
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
