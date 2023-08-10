void H_jetpt_JEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_18/H_jetpt_JEC_both_18
//=========  (Thu Aug 10 10:43:33 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_18 = new TCanvas("H_jetpt_JEC_both_18", "H_jetpt_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_18->SetHighLightColor(2);
   H_jetpt_JEC_both_18->Range(-60,-1.076754,340,2.676527);
   H_jetpt_JEC_both_18->SetFillColor(0);
   H_jetpt_JEC_both_18->SetBorderMode(0);
   H_jetpt_JEC_both_18->SetBorderSize(2);
   H_jetpt_JEC_both_18->SetLogy();
   H_jetpt_JEC_both_18->SetLeftMargin(0.15);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   H_jetpt_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_5 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_5","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(0,196.1593);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(1,0.3977444);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(2,105.5967);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(3,82.41964);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinContent(151,0.4747997);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(0,15.19809);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(1,0.3016857);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(2,10.31638);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(3,6.869917);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetBinError(151,0.4728345);
   VbbHcc_both_H_jetpt_JEC_stack_5->SetEntries(2591);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_jetpt_JEC_stack_5->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_5->Draw("HIST");
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
