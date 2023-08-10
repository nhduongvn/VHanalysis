void H_jetpt_JEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Thu Aug 10 12:33:10 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,1.20485,340,4.642151);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLogy();
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_3 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_3","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(0,13750.29);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(1,70.73113);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(2,10492.34);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(3,3034.577);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinContent(151,0.2252352);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(0,29.1568);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(1,2.094005);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(2,25.49735);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(3,13.64394);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetBinError(151,0.1010987);
   VbbHcc_both_H_jetpt_JEC_stack_3->SetEntries(458232);

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
