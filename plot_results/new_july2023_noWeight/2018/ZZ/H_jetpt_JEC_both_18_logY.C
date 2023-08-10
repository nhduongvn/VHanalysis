void H_jetpt_JEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Thu Aug 10 12:33:11 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,-0.8333251,340,1.962413);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLogy();
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_8 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(0,31.85324);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(1,0.5588287);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(2,25.42671);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(3,6.705944);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinContent(151,0.2794144);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(0,2.983329);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(1,0.3951516);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(2,2.665443);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(3,1.368845);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetBinError(151,0.2794144);
   VbbHcc_both_H_jetpt_JEC_stack_8->SetEntries(232);

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
