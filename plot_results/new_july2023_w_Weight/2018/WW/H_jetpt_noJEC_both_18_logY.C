void H_jetpt_noJEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetpt_noJEC_both_18/H_jetpt_noJEC_both_18
//=========  (Thu Aug 10 12:21:54 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_noJEC_both_18 = new TCanvas("H_jetpt_noJEC_both_18", "H_jetpt_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_noJEC_both_18->SetHighLightColor(2);
   H_jetpt_noJEC_both_18->Range(-60,-1.029476,340,0.222249);
   H_jetpt_noJEC_both_18->SetFillColor(0);
   H_jetpt_noJEC_both_18->SetBorderMode(0);
   H_jetpt_noJEC_both_18->SetBorderSize(2);
   H_jetpt_noJEC_both_18->SetLogy();
   H_jetpt_noJEC_both_18->SetLeftMargin(0.15);
   H_jetpt_noJEC_both_18->SetFrameBorderMode(0);
   H_jetpt_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_noJEC_stack_6 = new TH1D("VbbHcc_both_H_jetpt_noJEC_stack_6","",150,0,300);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinContent(24,0.2493026);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinContent(32,0.3743199);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinContent(42,0.6599753);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinContent(64,0.5029805);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinContent(97,0.4921557);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinError(24,0.2493026);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinError(32,0.3743199);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinError(42,0.6599753);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinError(64,0.5029805);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetBinError(97,0.4921557);
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_jetpt_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetXaxis()->SetTitle("c-jet p_{T} [GeV]");
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_noJEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_noJEC_both_18->Modified();
   H_jetpt_noJEC_both_18->cd();
   H_jetpt_noJEC_both_18->SetSelected(H_jetpt_noJEC_both_18);
}
