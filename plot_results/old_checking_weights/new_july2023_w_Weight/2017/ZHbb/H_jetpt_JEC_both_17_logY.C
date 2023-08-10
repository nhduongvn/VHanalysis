void H_jetpt_JEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Thu Aug 10 10:43:33 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-1.453969,340,1.892025);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLogy();
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_9 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_9","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(0,26.07623);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(1,0.1519358);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(2,19.0492);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(3,6.511899);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinContent(151,0.01270197);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(0,0.2278031);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(1,0.01757288);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(2,0.1953537);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(3,0.1143728);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetBinError(151,0.005458872);
   VbbHcc_both_H_jetpt_JEC_stack_9->SetEntries(28446);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_jetpt_JEC_stack_9->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_9->Draw("HIST");
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
