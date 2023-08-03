void H_jetmass_JEC_both_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_17/H_jetmass_JEC_both_17
//=========  (Thu Aug  3 12:26:39 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_17 = new TCanvas("H_jetmass_JEC_both_17", "H_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_17->SetHighLightColor(2);
   H_jetmass_JEC_both_17->Range(-60,-1595.366,340,14358.29);
   H_jetmass_JEC_both_17->SetFillColor(0);
   H_jetmass_JEC_both_17->SetBorderMode(0);
   H_jetmass_JEC_both_17->SetBorderSize(2);
   H_jetmass_JEC_both_17->SetLeftMargin(0.15);
   H_jetmass_JEC_both_17->SetFrameBorderMode(0);
   H_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_3 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_3","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinContent(1,0.6355438);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinContent(2,12155.17);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinContent(3,8441.56);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinError(1,0.1971791);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinError(2,27.66362);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinError(3,22.88286);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetEntries(345543);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_both_H_jetmass_JEC_stack_3->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_3->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_3->Draw("HIST");
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
