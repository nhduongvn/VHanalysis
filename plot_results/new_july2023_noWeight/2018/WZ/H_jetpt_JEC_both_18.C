void H_jetpt_JEC_both_18()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Thu Aug 10 12:29:38 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,-0.6043523,340,5.43917);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_7 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_7","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinContent(0,5.312987);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinContent(2,4.604589);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinContent(3,1.770996);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinError(0,1.371807);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinError(2,1.277083);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetBinError(3,0.7920133);
   VbbHcc_both_H_jetpt_JEC_stack_7->SetEntries(33);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_jetpt_JEC_stack_7->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_7->Draw("HIST");
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
