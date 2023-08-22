void H_jetmass_noJEC_tags_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_tags_17/H_jetmass_noJEC_tags_17
//=========  (Tue Aug 22 09:20:54 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_tags_17 = new TCanvas("H_jetmass_noJEC_tags_17", "H_jetmass_noJEC_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_tags_17->SetHighLightColor(2);
   H_jetmass_noJEC_tags_17->Range(-60,-0.001335853,340,0.01202268);
   H_jetmass_noJEC_tags_17->SetFillColor(0);
   H_jetmass_noJEC_tags_17->SetBorderMode(0);
   H_jetmass_noJEC_tags_17->SetBorderSize(2);
   H_jetmass_noJEC_tags_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_tags_H_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(4,0.004854775);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(5,0.009296001);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(6,0.01017793);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(7,0.007230747);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(8,0.006041253);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(9,0.004364548);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(10,0.003178705);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(11,0.001612397);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(12,0.002245419);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(13,0.001535071);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(14,0.0008359088);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(15,0.002089659);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(16,0.0004136561);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(17,0.0004651453);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(18,0.0002404726);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(20,5.707322e-05);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(24,0.0002192331);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(28,0.0002249039);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinContent(29,0.0002041767);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(4,0.0009829713);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(5,0.00136322);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(6,0.001481484);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(7,0.001208878);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(8,0.001122827);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(9,0.0009712602);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(10,0.000785841);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(11,0.0005554373);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(12,0.0006974491);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(13,0.0005857655);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(14,0.0004336086);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(15,0.0007062797);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(16,0.0002929949);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(17,0.0003290341);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(18,0.0002404726);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(20,5.707322e-05);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(24,0.0002192331);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(28,0.0002249039);
   VbbHcc_tags_H_jetmass_noJEC_stack_12->SetBinError(29,0.0002041767);
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
