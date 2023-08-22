void H_jetmass_JEC_both_16_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_16/H_jetmass_JEC_both_16
//=========  (Tue Aug 22 09:19:01 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_16 = new TCanvas("H_jetmass_JEC_both_16", "H_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_16->SetHighLightColor(2);
   H_jetmass_JEC_both_16->Range(-60,-2.029428,340,-0.881304);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLogy();
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_11 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_11->SetBinContent(2,0.05325186);
   VbbHcc_both_H_jetmass_JEC_stack_11->SetBinContent(3,0.02434528);
   VbbHcc_both_H_jetmass_JEC_stack_11->SetBinError(2,0.01069919);
   VbbHcc_both_H_jetmass_JEC_stack_11->SetBinError(3,0.007428626);
   VbbHcc_both_H_jetmass_JEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_11->Draw("HIST");
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
