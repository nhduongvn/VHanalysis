void H_jetpt_JEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Thu Aug 10 10:43:33 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,0.4238375,340,3.540485);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLogy();
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_4 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_4","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(0,1364.014);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(1,10.87758);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(2,893.8629);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(3,460.5718);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinContent(151,0.8755731);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(0,26.23405);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(1,4.523853);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(2,23.70976);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(3,10.6507);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetBinError(151,0.6195856);
   VbbHcc_both_H_jetpt_JEC_stack_4->SetEntries(18216);

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
