void H_jetmass_noJEC_both_16()
{
//=========Macro generated from canvas: H_jetmass_noJEC_both_16/H_jetmass_noJEC_both_16
//=========  (Thu Aug  3 12:26:33 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_both_16 = new TCanvas("H_jetmass_noJEC_both_16", "H_jetmass_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_both_16->SetHighLightColor(2);
   H_jetmass_noJEC_both_16->Range(-60,-0.07054389,340,0.6348949);
   H_jetmass_noJEC_both_16->SetFillColor(0);
   H_jetmass_noJEC_both_16->SetBorderMode(0);
   H_jetmass_noJEC_both_16->SetBorderSize(2);
   H_jetmass_noJEC_both_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_noJEC_stack_6 = new TH1D("VbbHcc_both_H_jetmass_noJEC_stack_6","",150,0,300);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinContent(4,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinContent(5,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinContent(6,0.5374772);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinContent(7,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinContent(9,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinContent(14,0.2687386);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinContent(17,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinError(4,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinError(5,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinError(6,0.2687386);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinError(7,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinError(9,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinError(14,0.1900269);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetBinError(17,0.1343693);
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_jetmass_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_noJEC_stack_6->Draw("HIST");
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
