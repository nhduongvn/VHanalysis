void H_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_16/H_jetmass_JEC_both_16
//=========  (Thu Aug 10 12:29:40 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_16 = new TCanvas("H_jetmass_JEC_both_16", "H_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_16->SetHighLightColor(2);
   H_jetmass_JEC_both_16->Range(-60,-0.4437324,340,3.993591);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_7 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_7","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_7->SetBinContent(2,3.380818);
   VbbHcc_both_H_jetmass_JEC_stack_7->SetBinContent(3,2.290231);
   VbbHcc_both_H_jetmass_JEC_stack_7->SetBinError(2,0.6072128);
   VbbHcc_both_H_jetmass_JEC_stack_7->SetBinError(3,0.4997695);
   VbbHcc_both_H_jetmass_JEC_stack_7->SetEntries(52);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_both_H_jetmass_JEC_stack_7->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_7->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_7->Draw("HIST");
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
