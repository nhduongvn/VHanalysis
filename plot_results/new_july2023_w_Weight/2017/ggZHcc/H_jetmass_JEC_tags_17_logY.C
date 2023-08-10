void H_jetmass_JEC_tags_17_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_17/H_jetmass_JEC_tags_17
//=========  (Thu Aug 10 12:20:24 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_17 = new TCanvas("H_jetmass_JEC_tags_17", "H_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_17->SetHighLightColor(2);
   H_jetmass_JEC_tags_17->Range(-60,-4.89283,340,-1.210544);
   H_jetmass_JEC_tags_17->SetFillColor(0);
   H_jetmass_JEC_tags_17->SetBorderMode(0);
   H_jetmass_JEC_tags_17->SetBorderSize(2);
   H_jetmass_JEC_tags_17->SetLogy();
   H_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(3,0.0002537467);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(4,0.004601089);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(5,0.01392126);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(6,0.009455794);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(7,0.008737606);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(8,0.008313171);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(9,0.005097945);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(10,0.003162648);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(11,0.001885079);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(12,0.002348133);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(13,0.001924924);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(14,0.001133287);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(15,0.001774044);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(16,0.0004617437);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(17,0.001029277);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(20,5.976253e-05);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(24,0.0002295635);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(27,0.0002355014);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(29,0.0002137976);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(3,0.0002537467);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(4,0.00106398);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(5,0.001835389);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(6,0.001522709);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(7,0.001440791);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(8,0.001462893);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(9,0.001086862);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(10,0.0008582176);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(11,0.0006471199);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(12,0.0007638211);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(13,0.0006966903);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(14,0.0005130879);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(15,0.0006816313);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(16,0.0003269425);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(17,0.0005147225);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(20,5.976253e-05);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(24,0.0002295635);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(27,0.0002355014);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(29,0.0002137976);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetEntries(277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_JEC_stack_12->Draw("HIST");
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
