void H_jetmass_noJEC_both_18_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_18/H_jetmass_noJEC_both_18
//=========  (Tue Aug 22 09:19:00 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_18 = new TCanvas("H_jetmass_noJEC_both_18", "H_jetmass_noJEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_18->SetHighLightColor(2);
   H_jetmass_noJEC_both_18->Range(-60,-3.191224,340,-0.9114807);
   H_jetmass_noJEC_both_18->SetFillColor(0);
   H_jetmass_noJEC_both_18->SetBorderMode(0);
   H_jetmass_noJEC_both_18->SetBorderSize(2);
   H_jetmass_noJEC_both_18->SetLogy();
   H_jetmass_noJEC_both_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(4,0.01627833);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(5,0.02123172);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(6,0.03828213);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(7,0.02462408);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(8,0.02428633);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(9,0.01563636);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(10,0.01682322);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(11,0.005529983);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(12,0.009055929);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(13,0.003731851);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(14,0.00281116);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(16,0.00292757);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(18,0.002176611);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(19,0.002234631);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(22,0.002360595);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(29,0.002284175);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(4,0.006184925);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(5,0.006865232);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(6,0.00972244);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(7,0.007472606);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(8,0.007823735);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(9,0.005961368);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(10,0.006380793);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(11,0.003940214);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(12,0.004192531);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(13,0.002672455);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(14,0.00281116);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(16,0.00292757);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(18,0.002176611);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(19,0.002234631);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(22,0.002360595);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(29,0.002284175);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetEntries(84);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_11->Draw("HIST");
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
