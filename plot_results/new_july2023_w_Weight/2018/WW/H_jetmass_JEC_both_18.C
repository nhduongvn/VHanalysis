void H_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_18/H_jetmass_JEC_both_18
//=========  (Thu Aug 10 12:25:16 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_18 = new TCanvas("H_jetmass_JEC_both_18", "H_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_18->SetHighLightColor(2);
   H_jetmass_JEC_both_18->Range(-60,-0.1839382,340,1.655443);
   H_jetmass_JEC_both_18->SetFillColor(0);
   H_jetmass_JEC_both_18->SetBorderMode(0);
   H_jetmass_JEC_both_18->SetBorderSize(2);
   H_jetmass_JEC_both_18->SetLeftMargin(0.15);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_6 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_6","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_6->SetBinContent(1,0.3743199);
   VbbHcc_both_H_jetmass_JEC_stack_6->SetBinContent(2,0.5029805);
   VbbHcc_both_H_jetmass_JEC_stack_6->SetBinContent(3,1.401434);
   VbbHcc_both_H_jetmass_JEC_stack_6->SetBinError(1,0.3743199);
   VbbHcc_both_H_jetmass_JEC_stack_6->SetBinError(2,0.5029805);
   VbbHcc_both_H_jetmass_JEC_stack_6->SetBinError(3,0.8601956);
   VbbHcc_both_H_jetmass_JEC_stack_6->SetEntries(5);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_jetmass_JEC_stack_6->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_6->Draw("HIST");
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
