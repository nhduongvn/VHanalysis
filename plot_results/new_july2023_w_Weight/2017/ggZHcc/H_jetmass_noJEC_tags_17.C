void H_jetmass_noJEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_17/H_jetmass_noJEC_tags_17
//=========  (Thu Aug 10 12:23:42 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_17 = new TCanvas("H_jetmass_noJEC_tags_17", "H_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_17->SetHighLightColor(2);
   H_jetmass_noJEC_tags_17->Range(-60,-0.001577933,340,0.0142014);
   H_jetmass_noJEC_tags_17->SetFillColor(0);
   H_jetmass_noJEC_tags_17->SetBorderMode(0);
   H_jetmass_noJEC_tags_17->SetBorderSize(2);
   H_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(4,0.0059133);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(5,0.01107298);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(6,0.01202235);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(7,0.008421039);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(8,0.007277774);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(9,0.005133023);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(10,0.00375296);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(11,0.001780974);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(12,0.002523151);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(13,0.001727563);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(14,0.0009360464);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(15,0.002310498);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(16,0.0004617437);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(17,0.0005145493);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(18,0.0002518037);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(20,5.976253e-05);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(24,0.0002295635);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(28,0.0002355014);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(29,0.0002137976);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(4,0.001193654);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(5,0.001616287);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(6,0.001746633);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(7,0.001404119);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(8,0.001345764);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(9,0.001142495);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(10,0.0009284648);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(11,0.0006147131);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(12,0.0007827351);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(13,0.0006588913);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(14,0.0004838476);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(15,0.0007780523);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(16,0.0003269425);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(17,0.0003638755);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(18,0.0002518037);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(20,5.976253e-05);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(24,0.0002295635);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(28,0.0002355014);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(29,0.0002137976);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetEntries(277);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_tags_17->Modified();
   H_jetmass_noJEC_tags_17->cd();
   H_jetmass_noJEC_tags_17->SetSelected(H_jetmass_noJEC_tags_17);
}
