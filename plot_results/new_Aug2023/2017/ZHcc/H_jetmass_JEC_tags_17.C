void H_jetmass_JEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_17/H_jetmass_JEC_tags_17
//=========  (Tue Aug 22 09:20:57 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_17 = new TCanvas("H_jetmass_JEC_tags_17", "H_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_17->SetHighLightColor(2);
   H_jetmass_JEC_tags_17->Range(-60,-0.003098898,340,0.02789008);
   H_jetmass_JEC_tags_17->SetFillColor(0);
   H_jetmass_JEC_tags_17->SetBorderMode(0);
   H_jetmass_JEC_tags_17->SetBorderSize(2);
   H_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_11 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(3,0.001192889);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(4,0.01722758);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(5,0.02361065);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(6,0.01864305);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(7,0.007048635);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(8,0.01772057);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(10,0.009671681);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(11,0.0139883);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(12,0.00355408);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(14,0.004972792);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(15,0.00616792);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(17,0.00506435);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(23,0.001684601);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinContent(26,0.002176473);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(3,0.001192889);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(4,0.005286193);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(5,0.00617633);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(6,0.00520731);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(7,0.00316226);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(8,0.005264568);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(10,0.003704108);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(11,0.005008073);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(12,0.002515616);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(14,0.002877833);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(15,0.002940494);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(17,0.003042448);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(23,0.001684601);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetBinError(26,0.002176473);
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetEntries(87);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_H_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tags_17->Modified();
   H_jetmass_JEC_tags_17->cd();
   H_jetmass_JEC_tags_17->SetSelected(H_jetmass_JEC_tags_17);
}
