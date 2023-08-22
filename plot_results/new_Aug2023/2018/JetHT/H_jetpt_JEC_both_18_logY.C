void H_jetpt_JEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Tue Aug 22 09:18:56 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,2.07453,340,5.658924);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLogy();
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC__724 = new TH1D("VbbHcc_both_H_jetpt_JEC__724","",150,0,300);
   VbbHcc_both_H_jetpt_JEC__724->SetBinContent(0,159184);
   VbbHcc_both_H_jetpt_JEC__724->SetBinContent(1,542);
   VbbHcc_both_H_jetpt_JEC__724->SetBinContent(2,105423);
   VbbHcc_both_H_jetpt_JEC__724->SetBinContent(3,54273);
   VbbHcc_both_H_jetpt_JEC__724->SetEntries(319422);
   VbbHcc_both_H_jetpt_JEC__724->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC__724->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC__724->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__724->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__724->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__724->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__724->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__724->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__724->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__724->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC__724->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__724->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC__724->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC__724->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC__724->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC__724->Draw("HIST");
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
