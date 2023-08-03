void H_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Thu Aug  3 12:26:33 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-0.002512788,340,0.02261509);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(3,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(4,0.005470015);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(5,0.01094003);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(6,0.01914505);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(7,0.01367504);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(8,0.008205022);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(9,0.008205022);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(10,0.008205022);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(11,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(12,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(13,0.005470015);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(14,0.005470015);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(39,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(42,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(3,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(4,0.003867885);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(5,0.005470015);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(6,0.00723615);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(7,0.006115663);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(8,0.004737172);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(9,0.004737172);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(10,0.004737172);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(11,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(12,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(13,0.003867885);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(14,0.003867885);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(39,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(42,0.002735007);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetEntries(36);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_both_16->Modified();
   H_jetmass_noJEC_both_16->cd();
   H_jetmass_noJEC_both_16->SetSelected(H_jetmass_noJEC_both_16);
}
