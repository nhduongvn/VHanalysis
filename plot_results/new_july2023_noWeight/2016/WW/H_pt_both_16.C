void H_pt_both_16()
{
//=========Macro generated from canvas: H_pt_both_16/H_pt_both_16
//=========  (Thu Aug  3 12:25:36 2023) by ROOT version 6.14/09
   TCanvas *H_pt_both_16 = new TCanvas("H_pt_both_16", "H_pt_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_pt_both_16->SetHighLightColor(2);
   H_pt_both_16->Range(-400,-0.01763597,2266.667,0.1587237);
   H_pt_both_16->SetFillColor(0);
   H_pt_both_16->SetBorderMode(0);
   H_pt_both_16->SetBorderSize(2);
   H_pt_both_16->SetLeftMargin(0.15);
   H_pt_both_16->SetFrameBorderMode(0);
   H_pt_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_pt_stack_6 = new TH1D("VbbHcc_both_H_pt_stack_6","",1000,0,2000);
   VbbHcc_both_H_pt_stack_6->SetBinContent(14,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(24,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(49,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(56,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(57,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(61,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(83,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(136,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(140,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(156,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinContent(356,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(14,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(24,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(49,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(56,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(57,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(61,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(83,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(136,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(140,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(156,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetBinError(356,0.1343693);
   VbbHcc_both_H_pt_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_H_pt_stack_6->SetFillColor(ci);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetTitle("H p_{T} [GeV]");
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetRange(1,1000);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_pt_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_pt_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_pt_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_pt_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_pt_both_16->Modified();
   H_pt_both_16->cd();
   H_pt_both_16->SetSelected(H_pt_both_16);
}
