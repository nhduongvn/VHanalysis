void H_jetmass_JEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_17/H_jetmass_JEC_both_17
//=========  (Thu Aug 10 12:22:02 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_17 = new TCanvas("H_jetmass_JEC_both_17", "H_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_17->SetHighLightColor(2);
   H_jetmass_JEC_both_17->Range(-60,-1.953635,340,-0.9809624);
   H_jetmass_JEC_both_17->SetFillColor(0);
   H_jetmass_JEC_both_17->SetBorderMode(0);
   H_jetmass_JEC_both_17->SetBorderSize(2);
   H_jetmass_JEC_both_17->SetLogy();
   H_jetmass_JEC_both_17->SetLeftMargin(0.15);
   H_jetmass_JEC_both_17->SetFrameBorderMode(0);
   H_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_12 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_12->SetBinContent(2,0.04407796);
   VbbHcc_both_H_jetmass_JEC_stack_12->SetBinContent(3,0.02783958);
   VbbHcc_both_H_jetmass_JEC_stack_12->SetBinError(2,0.003281306);
   VbbHcc_both_H_jetmass_JEC_stack_12->SetBinError(3,0.002587844);
   VbbHcc_both_H_jetmass_JEC_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_17->Modified();
   H_jetmass_JEC_both_17->cd();
   H_jetmass_JEC_both_17->SetSelected(H_jetmass_JEC_both_17);
}
