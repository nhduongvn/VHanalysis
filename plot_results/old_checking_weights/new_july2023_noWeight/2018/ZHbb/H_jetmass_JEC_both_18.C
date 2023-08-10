void H_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_18/H_jetmass_JEC_both_18
//=========  (Thu Aug  3 12:26:40 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_18 = new TCanvas("H_jetmass_JEC_both_18", "H_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_18->SetHighLightColor(2);
   H_jetmass_JEC_both_18->Range(-60,-4.415225,340,39.73702);
   H_jetmass_JEC_both_18->SetFillColor(0);
   H_jetmass_JEC_both_18->SetBorderMode(0);
   H_jetmass_JEC_both_18->SetBorderSize(2);
   H_jetmass_JEC_both_18->SetLeftMargin(0.15);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_9 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_9","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinContent(1,0.01142889);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinContent(2,33.6398);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinContent(3,29.69684);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinError(1,0.005111156);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinError(2,0.2772961);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetBinError(3,0.2605387);
   VbbHcc_both_H_jetmass_JEC_stack_9->SetEntries(27714);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccc00");
   VbbHcc_both_H_jetmass_JEC_stack_9->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_9->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_9->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_18->Modified();
   H_jetmass_JEC_both_18->cd();
   H_jetmass_JEC_both_18->SetSelected(H_jetmass_JEC_both_18);
}
