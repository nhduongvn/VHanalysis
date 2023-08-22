void H_jetmass_JEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_tags_17/H_jetmass_JEC_tags_17
//=========  (Tue Aug 22 09:20:57 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_tags_17 = new TCanvas("H_jetmass_JEC_tags_17", "H_jetmass_JEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tags_17->SetHighLightColor(2);
   H_jetmass_JEC_tags_17->Range(-60,-0.001547667,340,0.01392901);
   H_jetmass_JEC_tags_17->SetFillColor(0);
   H_jetmass_JEC_tags_17->SetBorderMode(0);
   H_jetmass_JEC_tags_17->SetBorderSize(2);
   H_jetmass_JEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_JEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_JEC_stack_12 = new TH1D("VbbHcc_tags_H_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(3,0.0001816826);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(4,0.003760986);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(5,0.01179175);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(6,0.008006817);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(7,0.00734571);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(8,0.007033112);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(9,0.00426897);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(10,0.002727144);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(11,0.001693748);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(12,0.002055592);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(13,0.001757012);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(14,0.001010359);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(15,0.001601576);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(16,0.0004136561);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(17,0.0009335725);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(20,5.707322e-05);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(24,0.0002192331);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(27,0.0002249039);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinContent(29,0.0002041767);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(3,0.0001816826);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(4,0.0008744232);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(5,0.001559806);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(6,0.001292935);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(7,0.001216547);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(8,0.001239281);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(9,0.0009102537);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(10,0.000738586);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(11,0.0005800153);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(12,0.0006713906);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(13,0.0006342322);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(14,0.0004552449);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(15,0.0006217001);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(16,0.0002929949);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(17,0.0004669623);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(20,5.707322e-05);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(24,0.0002192331);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(27,0.0002249039);
   VbbHcc_tags_H_jetmass_JEC_stack_12->SetBinError(29,0.0002041767);
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
