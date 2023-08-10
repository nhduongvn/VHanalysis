void H_jetmass_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_16/H_jetmass_JEC_both_16
//=========  (Thu Aug 10 12:33:13 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_16 = new TCanvas("H_jetmass_JEC_both_16", "H_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_16->SetHighLightColor(2);
   H_jetmass_JEC_both_16->Range(-60,-3.837568,340,1.83842);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLogy();
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_10 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_10","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetBinContent(1,0.001074139);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetBinContent(2,9.846271);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetBinContent(3,8.125859);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetBinContent(151,0.0007160924);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetBinError(1,0.0006201542);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetBinError(2,0.05937525);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetBinError(3,0.05393916);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetBinError(151,0.0005063538);
   VbbHcc_both_H_jetmass_JEC_stack_10->SetEntries(50200);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   VbbHcc_both_H_jetmass_JEC_stack_10->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_10->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_10->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_10->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_16->Modified();
   H_jetmass_JEC_both_16->cd();
   H_jetmass_JEC_both_16->SetSelected(H_jetmass_JEC_both_16);
}
