void H_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Thu Aug 10 12:25:13 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-0.002626548,340,0.02363893);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_11 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_11","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(3,0.002869221);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(4,0.005831959);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(5,0.01148999);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(6,0.02001179);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(7,0.01481317);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(8,0.008679158);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(9,0.008618805);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(10,0.009044693);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(11,0.002873955);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(12,0.003125658);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(13,0.005802713);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(14,0.00585374);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(39,0.003126194);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinContent(42,0.002555119);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(3,0.002869221);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(4,0.00412427);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(5,0.005767926);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(6,0.007606545);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(7,0.006626697);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(8,0.005011135);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(9,0.004982315);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(10,0.00522933);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(11,0.002873955);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(12,0.003125658);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(13,0.004103386);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(14,0.004139294);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(39,0.003126194);
   VbbHcc_both_H_jetmass_noJEC_stack_11->SetBinError(42,0.002555119);
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
