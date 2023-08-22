void H_jetmass_JEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_18/H_jetmass_JEC_both_18
//=========  (Tue Aug 22 09:19:02 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_18 = new TCanvas("H_jetmass_JEC_both_18", "H_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_18->SetHighLightColor(2);
   H_jetmass_JEC_both_18->Range(-60,-1.107711,340,5.099928);
   H_jetmass_JEC_both_18->SetFillColor(0);
   H_jetmass_JEC_both_18->SetBorderMode(0);
   H_jetmass_JEC_both_18->SetBorderSize(2);
   H_jetmass_JEC_both_18->SetLogy();
   H_jetmass_JEC_both_18->SetLeftMargin(0.15);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_3 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_3","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinContent(1,0.6517534);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinContent(2,15908);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinContent(3,12352.44);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinError(1,0.2267435);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinError(2,37.05719);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetBinError(3,32.45046);
   VbbHcc_both_H_jetmass_JEC_stack_3->SetEntries(416844);

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
