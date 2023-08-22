void Z_jetmass_JEC_both_16_logY()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Tue Aug 22 09:19:15 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-4.163236,340,-1.547639);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLogy();
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_12 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_12","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(3,0.0002508151);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(4,0.002259115);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(5,0.006081601);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(6,0.008189398);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(7,0.005215918);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(8,0.00487039);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(9,0.004282635);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(10,0.001858328);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(11,0.002094637);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(12,0.001084353);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(14,0.0002993123);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(16,0.0008461444);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(17,0.0002816317);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(18,0.0002864526);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(21,0.0002954059);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinContent(23,0.0003572505);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(3,0.0002508151);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(4,0.0007998517);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(5,0.001331404);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(6,0.001524783);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(7,0.001209611);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(8,0.001164094);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(9,0.001107649);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(10,0.0007070115);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(11,0.0007928072);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(12,0.0005476129);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(14,0.0002993123);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(16,0.000491967);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(17,0.0002816317);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(18,0.0002864526);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(21,0.0002954059);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetBinError(23,0.0003572505);
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetEntries(137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Z_jetmass_JEC_stack_12->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_12->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_16->Modified();
   Z_jetmass_JEC_both_16->cd();
   Z_jetmass_JEC_both_16->SetSelected(Z_jetmass_JEC_both_16);
}
