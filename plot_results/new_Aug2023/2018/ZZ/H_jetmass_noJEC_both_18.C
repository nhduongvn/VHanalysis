void H_jetmass_noJEC_both_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_18/H_jetmass_noJEC_both_18
//=========  (Tue Aug 22 09:23:32 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_18 = new TCanvas("H_jetmass_noJEC_both_18", "H_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_18->SetHighLightColor(2);
   H_jetmass_noJEC_both_18->Range(-60,-1.729558,340,15.56602);
   H_jetmass_noJEC_both_18->SetFillColor(0);
   H_jetmass_noJEC_both_18->SetBorderMode(0);
   H_jetmass_noJEC_both_18->SetBorderSize(2);
   H_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_8 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_8","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(3,0.315662);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(4,7.198434);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(5,12.86711);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(6,13.17759);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(7,10.50522);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(8,7.933664);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(9,3.445173);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(10,4.128417);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(11,2.285173);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(12,2.268523);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(13,1.179821);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(14,0.640764);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(15,0.7158694);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(16,0.2762073);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(17,0.4594085);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(18,0.2587137);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(19,0.2804473);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(24,0.357876);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinContent(28,0.2561662);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(3,0.315662);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(4,1.52109);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(5,2.060581);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(6,2.072129);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(7,1.748063);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(8,1.586424);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(9,1.028964);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(10,1.109224);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(11,0.7790444);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(12,0.8095642);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(13,0.5959028);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(14,0.4579164);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(15,0.4205619);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(16,0.2762073);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(17,0.3258722);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(18,0.2587137);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(19,0.2804473);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(24,0.357876);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetBinError(28,0.2561662);
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetEntries(232);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#33ff99");
   VbbHcc_both_H_jetmass_noJEC_stack_8->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_8->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_8->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_18->Modified();
   H_jetmass_noJEC_both_18->cd();
   H_jetmass_noJEC_both_18->SetSelected(H_jetmass_noJEC_both_18);
}
