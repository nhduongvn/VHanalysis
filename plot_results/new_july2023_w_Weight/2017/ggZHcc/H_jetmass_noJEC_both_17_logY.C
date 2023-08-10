void H_jetmass_noJEC_both_17_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_17/H_jetmass_noJEC_both_17
//=========  (Thu Aug 10 12:22:00 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_17 = new TCanvas("H_jetmass_noJEC_both_17", "H_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_17->SetHighLightColor(2);
   H_jetmass_noJEC_both_17->Range(-60,-4.88845,340,-1.249959);
   H_jetmass_noJEC_both_17->SetFillColor(0);
   H_jetmass_noJEC_both_17->SetBorderMode(0);
   H_jetmass_noJEC_both_17->SetBorderSize(2);
   H_jetmass_noJEC_both_17->SetLogy();
   H_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(4,0.005730979);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(5,0.01175294);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(6,0.01284229);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(7,0.009772909);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(8,0.008669227);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(9,0.005847914);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(10,0.004245927);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(11,0.001717878);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(12,0.003848106);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(13,0.002205871);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(14,0.0009360464);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(15,0.002310498);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(16,0.0004827025);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(17,0.0003170211);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(18,0.0002518037);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(20,5.976253e-05);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(24,0.0002295635);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(27,0.0002467943);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(28,0.0002355014);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinContent(29,0.0002137976);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(4,0.001173771);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(5,0.00165986);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(6,0.001808435);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(7,0.001510465);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(8,0.001464614);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(9,0.001195955);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(10,0.0009918088);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(11,0.000629435);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(12,0.0009835806);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(13,0.0007411161);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(14,0.0004838476);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(15,0.0007780523);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(16,0.0003427989);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(17,0.0002615168);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(18,0.0002518037);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(20,5.976253e-05);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(24,0.0002295635);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(27,0.0002467943);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(28,0.0002355014);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetBinError(29,0.0002137976);
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_H_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_17->Modified();
   H_jetmass_noJEC_both_17->cd();
   H_jetmass_noJEC_both_17->SetSelected(H_jetmass_noJEC_both_17);
}
