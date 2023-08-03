void H_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_16/H_jetmass_JEC_both_16
//=========  (Thu Aug  3 12:26:37 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_16 = new TCanvas("H_jetmass_JEC_both_16", "H_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_16->SetHighLightColor(2);
   H_jetmass_JEC_both_16->Range(-60,-159.7901,340,1438.111);
   H_jetmass_JEC_both_16->SetFillColor(0);
   H_jetmass_JEC_both_16->SetBorderMode(0);
   H_jetmass_JEC_both_16->SetBorderSize(2);
   H_jetmass_JEC_both_16->SetLeftMargin(0.15);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   H_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_4 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_4","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinContent(2,839.7153);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinContent(3,1217.448);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinError(2,30.87691);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetBinError(3,18.36289);
   VbbHcc_both_H_jetmass_JEC_stack_4->SetEntries(15464);

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
