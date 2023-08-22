void H_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_18/H_jetmass_JEC_both_18
//=========  (Tue Aug 22 09:23:35 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_18 = new TCanvas("H_jetmass_JEC_both_18", "H_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_18->SetHighLightColor(2);
   H_jetmass_JEC_both_18->Range(-60,-36.38227,340,327.4404);
   H_jetmass_JEC_both_18->SetFillColor(0);
   H_jetmass_JEC_both_18->SetBorderMode(0);
   H_jetmass_JEC_both_18->SetBorderSize(2);
   H_jetmass_JEC_both_18->SetLeftMargin(0.15);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_5 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_5","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_5->SetBinContent(1,0.6222767);
   VbbHcc_both_H_jetmass_JEC_stack_5->SetBinContent(2,72.97825);
   VbbHcc_both_H_jetmass_JEC_stack_5->SetBinContent(3,277.1982);
   VbbHcc_both_H_jetmass_JEC_stack_5->SetBinError(1,0.521052);
   VbbHcc_both_H_jetmass_JEC_stack_5->SetBinError(2,10.44776);
   VbbHcc_both_H_jetmass_JEC_stack_5->SetBinError(3,15.23668);
   VbbHcc_both_H_jetmass_JEC_stack_5->SetEntries(2210);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff99cc");
   VbbHcc_both_H_jetmass_JEC_stack_5->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_5->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_5->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_5->Draw("HIST");
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
