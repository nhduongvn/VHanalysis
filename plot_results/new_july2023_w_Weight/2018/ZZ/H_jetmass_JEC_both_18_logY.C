void H_jetmass_JEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_18/H_jetmass_JEC_both_18
//=========  (Thu Aug 10 12:22:02 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_18 = new TCanvas("H_jetmass_JEC_both_18", "H_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_18->SetHighLightColor(2);
   H_jetmass_JEC_both_18->Range(-60,-1.041487,340,2.173158);
   H_jetmass_JEC_both_18->SetFillColor(0);
   H_jetmass_JEC_both_18->SetBorderMode(0);
   H_jetmass_JEC_both_18->SetBorderSize(2);
   H_jetmass_JEC_both_18->SetLogy();
   H_jetmass_JEC_both_18->SetLeftMargin(0.15);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_8 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_8->SetBinContent(1,0.3810723);
   VbbHcc_both_H_jetmass_JEC_stack_8->SetBinContent(2,37.50976);
   VbbHcc_both_H_jetmass_JEC_stack_8->SetBinContent(3,35.34303);
   VbbHcc_both_H_jetmass_JEC_stack_8->SetBinError(1,0.3156881);
   VbbHcc_both_H_jetmass_JEC_stack_8->SetBinError(2,3.548692);
   VbbHcc_both_H_jetmass_JEC_stack_8->SetBinError(3,3.395104);
   VbbHcc_both_H_jetmass_JEC_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_jetmass_JEC_stack_8->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_8->Draw("HIST");
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
