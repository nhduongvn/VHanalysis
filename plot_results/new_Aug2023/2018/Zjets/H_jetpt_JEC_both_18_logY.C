void H_jetpt_JEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Tue Aug 22 09:18:56 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,0.2454554,340,3.691125);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLogy();
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_4 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_4","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(0,1798.903);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(1,7.781305);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(2,1172.22);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(3,617.1891);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(151,0.0706849);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(0,35.55307);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(1,1.801226);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(2,30.13243);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(3,15.17693);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(151,0.0706849);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetEntries(18425);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_jetpt_JEC_stack_4->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_4->Draw("HIST");
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
