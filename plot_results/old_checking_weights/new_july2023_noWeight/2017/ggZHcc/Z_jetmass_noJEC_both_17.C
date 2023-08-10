void Z_jetmass_noJEC_both_17()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_both_17/Z_jetmass_noJEC_both_17
//=========  (Thu Aug  3 12:26:51 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_noJEC_both_17 = new TCanvas("Z_jetmass_noJEC_both_17", "Z_jetmass_noJEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_both_17->SetHighLightColor(2);
   Z_jetmass_noJEC_both_17->Range(-60,-0.001771136,340,0.01594022);
   Z_jetmass_noJEC_both_17->SetFillColor(0);
   Z_jetmass_noJEC_both_17->SetBorderMode(0);
   Z_jetmass_noJEC_both_17->SetBorderSize(2);
   Z_jetmass_noJEC_both_17->SetLeftMargin(0.15);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   Z_jetmass_noJEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_noJEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_noJEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(3,0.000622817);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(4,0.003114085);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(5,0.01307916);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(6,0.01349437);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(7,0.009965071);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(8,0.007058592);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(9,0.005190141);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(10,0.002076057);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(11,0.003944507);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(12,0.00145324);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(13,0.001038028);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(14,0.001245634);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(15,0.000622817);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(16,0.0002076057);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(17,0.0004152113);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(20,0.0002076057);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinContent(23,0.0002076057);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(3,0.0003595835);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(4,0.0008040532);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(5,0.001647819);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(6,0.00167377);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(7,0.001438334);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(8,0.001210539);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(9,0.001038028);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(10,0.0006565067);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(11,0.0009049321);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(12,0.0005492729);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(13,0.0004642204);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(14,0.0005085279);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(15,0.0003595835);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(16,0.0002076057);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(17,0.0002935987);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(20,0.0002076057);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetBinError(23,0.0002076057);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetEntries(308);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_noJEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_noJEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_both_17->Modified();
   Z_jetmass_noJEC_both_17->cd();
   Z_jetmass_noJEC_both_17->SetSelected(Z_jetmass_noJEC_both_17);
}
