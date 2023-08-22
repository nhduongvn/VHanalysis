void H_jetmass_JEC_both_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_17/H_jetmass_JEC_both_17
//=========  (Tue Aug 22 09:23:34 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_17 = new TCanvas("H_jetmass_JEC_both_17", "H_jetmass_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_17->SetHighLightColor(2);
   H_jetmass_JEC_both_17->Range(-60,-193.1915,340,1738.723);
   H_jetmass_JEC_both_17->SetFillColor(0);
   H_jetmass_JEC_both_17->SetBorderMode(0);
   H_jetmass_JEC_both_17->SetBorderSize(2);
   H_jetmass_JEC_both_17->SetLeftMargin(0.15);
   H_jetmass_JEC_both_17->SetFrameBorderMode(0);
   H_jetmass_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_4 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_4","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinContent(1,7.19665);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinContent(2,847.6948);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinContent(3,1471.935);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinError(1,4.202677);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinError(2,22.99122);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinError(3,17.04084);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetEntries(18334);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_both_H_jetmass_JEC_stack_4->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_4->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_4->Draw("HIST");
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
